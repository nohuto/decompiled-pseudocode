/*
 * XREFs of CmpDoWritethroughReparse @ 0x14063D100
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140017780 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpUnicodeStringAppendCharacter @ 0x140582078 (CmpUnicodeStringAppendCharacter.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x1405D8860 (CmpKeyFullNameLength.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x140645670 (CmpIsKeyStackDeleted.c)
 *     CmpRecordParseFailure @ 0x140699420 (CmpRecordParseFailure.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING a5,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  int started; // ebx
  __int64 KcbAtLayerHeight; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned int v17; // eax
  SIZE_T v18; // r14
  __int64 v19; // rdi
  UNICODE_STRING *v20; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v23[3]; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+48h] [rbp-8h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+20h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 32) == -1;
  v23[0] = 4294901760LL;
  v23[1] = 0LL;
  v23[2] = 0LL;
  Privileges = 0LL;
  SourceString = 0LL;
  if ( !v11 )
  {
    started = -1073741199;
    goto LABEL_27;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4152LL) & 0x2000) == 0 )
  {
    started = -1073741199;
    goto LABEL_27;
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + 57LL) )
    {
      started = -1073741199;
      goto LABEL_27;
    }
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 58) - 1);
    started = CmpStartKcbStackForTopLayerKcb((__int64)v23, KcbAtLayerHeight);
    if ( started < 0 )
    {
      v14 = a6;
      v15 = 65792LL;
      goto LABEL_26;
    }
    if ( (unsigned __int8)CmpIsKeyStackDeleted(v23, 0LL) )
    {
      started = -1073741199;
      goto LABEL_27;
    }
  }
  v16 = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 58) - 1);
  v17 = CmpKeyFullNameLength(v16);
  v18 = v17;
  if ( v17 <= 0xFFFF )
  {
    v19 = a6;
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(v19 + 160) |= 1u;
    }
    if ( a4 )
    {
      started = CmpConstructNameWithStatus(*(_QWORD *)(v16 + 64), &SourceString);
      if ( started < 0 )
      {
        v15 = 66048LL;
        v14 = v19;
        goto LABEL_26;
      }
    }
    else
    {
      started = CmpConstructNameWithStatus(v16, &SourceString);
      if ( started < 0 )
      {
        v15 = 66304LL;
        v14 = v19;
        goto LABEL_26;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x36364D43u);
    if ( !DestinationString.Buffer )
    {
      started = -1073741670;
      CmpRecordParseFailure(v19, 66560LL);
      goto LABEL_29;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v18;
    RtlUnicodeStringCopy(&DestinationString, SourceString);
    if ( a4 )
    {
      CmpUnicodeStringAppendCharacter(&DestinationString.Length);
      RtlUnicodeStringCat(&DestinationString, a5);
    }
    v20 = a7;
    ExFreePoolWithTag(a7->Buffer, 0);
    *v20 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    *(_DWORD *)(v19 + 24) |= 0x10u;
    v15 = 66816LL;
    v14 = v19;
    started = 872;
    goto LABEL_26;
  }
  v14 = a6;
  started = -1073741811;
  v15 = 65872LL;
LABEL_26:
  CmpRecordParseFailure(v14, v15);
LABEL_27:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_29:
  if ( SourceString )
    CmSiFreeMemory((PPRIVILEGE_SET)SourceString);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)started;
}
