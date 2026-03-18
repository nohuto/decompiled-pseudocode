/*
 * XREFs of CmpDoWritethroughReparse @ 0x1406BB0C0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCopy @ 0x140092AB0 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x14012B888 (RtlUnicodeStringCat.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackDeleted @ 0x1406334C0 (CmpIsKeyStackDeleted.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x140655B50 (CmpKeyFullNameLength.c)
 *     CmpRecordParseFailure @ 0x1406BD8F0 (CmpRecordParseFailure.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING SourceString,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 KcbAtLayerHeight; // rax
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  int started; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rbx
  unsigned __int16 v22; // ax
  __int64 v23; // rdi
  unsigned __int16 v24; // r14
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rcx
  const UNICODE_STRING *v28; // rdx
  UNICODE_STRING *v29; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  PPRIVILEGE_SET v31[4]; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(v31, 0, sizeof(v31));
  v11 = *(_DWORD *)(a1 + 40) == -1;
  WORD1(v31[0]) = -1;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_19;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 66) - 1);
  started = CmpStartKcbStackForTopLayerKcb((__int64)v31, KcbAtLayerHeight, v15, v16);
  v12 = started;
  if ( started >= 0 )
  {
    if ( CmpIsKeyStackDeleted((__int64)v31, 0LL) )
    {
      v12 = -1073741199;
      goto LABEL_3;
    }
LABEL_19:
    v21 = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 66) - 1);
    v22 = CmpKeyFullNameLength(v21);
    v23 = a6;
    v24 = v22;
    if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(a6 + 168);
      *(_DWORD *)(v23 + 160) |= 1u;
    }
    if ( a4 )
    {
      v25 = CmpConstructNameWithStatus(*(_QWORD *)(v21 + 72), &Privileges);
      v12 = v25;
      if ( v25 < 0 )
      {
        v19 = (unsigned int)v25;
        v20 = 66048LL;
LABEL_31:
        v18 = v23;
        goto LABEL_32;
      }
    }
    else
    {
      v26 = CmpConstructNameWithStatus(v21, &Privileges);
      v12 = v26;
      if ( v26 < 0 )
      {
        v19 = (unsigned int)v26;
        v20 = 66304LL;
        goto LABEL_31;
      }
    }
    DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v24, 0x36364D43u);
    if ( !DestinationString.Buffer )
    {
      v12 = -1073741670;
      CmpRecordParseFailure(v23, 66560LL, 3221225626LL);
      goto LABEL_5;
    }
    DestinationString.Length = 0;
    DestinationString.MaximumLength = v24;
    RtlUnicodeStringCopy(&DestinationString, (PCUNICODE_STRING)Privileges);
    if ( a4 )
    {
      v27 = (unsigned __int64)DestinationString.Length >> 1;
      DestinationString.Length += 2;
      v28 = SourceString;
      DestinationString.Buffer[v27] = 92;
      RtlUnicodeStringCat(&DestinationString, v28);
    }
    v29 = a7;
    ExFreePoolWithTag(a7->Buffer, 0);
    *v29 = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
    *(_DWORD *)(v23 + 24) |= 0x10u;
    v12 = 872;
    v19 = 872LL;
    v20 = 66816LL;
    goto LABEL_31;
  }
  v18 = a6;
  v19 = (unsigned int)started;
  v20 = 65792LL;
LABEL_32:
  CmpRecordParseFailure(v18, v20, v19);
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_5:
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v31[3] )
    CmSiFreeMemory(v31[3]);
  return v12;
}
