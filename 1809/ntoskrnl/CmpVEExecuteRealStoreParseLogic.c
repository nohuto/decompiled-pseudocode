/*
 * XREFs of CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8
 * Callers:
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeleted @ 0x1406992E0 (CmpIsKeyDeleted.c)
 *     CmpBlockHiveWrites @ 0x1407F18A0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x1407F1AE8 (CmpUnblockHiveWrites.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmpFindPathByName @ 0x1407F40A4 (CmpFindPathByName.c)
 *     CmpVirtualBranchIsReplicated @ 0x1407F4FBC (CmpVirtualBranchIsReplicated.c)
 */

__int64 __fastcall CmpVEExecuteRealStoreParseLogic(__int64 a1, __m128i *a2, _DWORD *a3, UNICODE_STRING *a4, __int64 a5)
{
  __int64 v7; // r14
  volatile signed __int64 *v9; // rsi
  __int64 v10; // rdi
  int v11; // ebx
  char PathByName; // al
  char v13; // r12
  __int64 v14; // rax
  wchar_t *Buffer; // rcx
  _BYTE v17[4]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-2Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF

  v19 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v20 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( CmpIsKeyDeleted(a1, 0LL) )
  {
    v13 = 0;
  }
  else
  {
    v11 = CmpBlockHiveWrites(*(__int64 **)(a1 + 24), 0, 0LL);
    if ( v11 < 0 )
      goto LABEL_19;
    v9 = *(volatile signed __int64 **)(a1 + 24);
    PathByName = CmpFindPathByName(a1, a2, 0LL, &v18, &v20);
    v7 = v20;
    v13 = PathByName;
    if ( PathByName )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v20 + 8))(v20, v18, &v19);
      v10 = v14;
      if ( !v14 )
      {
        v11 = -1073741670;
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(v14 + 52) & 0x200000) != 0 )
      {
LABEL_18:
        v11 = -1073741199;
        goto LABEL_19;
      }
      (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v19);
    }
    CmpUnblockHiveWrites(*(volatile signed __int64 **)(a1 + 24), 0, 0LL);
  }
  v9 = 0LL;
  v10 = 0LL;
  v11 = CmRealKCBToVirtualPath(a1, a2, a5, &DestinationString);
  if ( v11 < 0 )
    goto LABEL_19;
  *a3 |= 8u;
  if ( !(unsigned __int8)CmpVirtualBranchIsReplicated(0LL, &DestinationString, v17)
    && ((*a3 & 1) == 0 || v13 || !v17[0]) )
  {
    goto LABEL_18;
  }
  Buffer = a4->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  *a4 = DestinationString;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = 260;
LABEL_19:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v10 )
    (*(void (__fastcall **)(__int64, __int64 *))(v7 + 16))(v7, &v19);
  if ( v9 )
    CmpUnblockHiveWrites(v9, 0, 0LL);
  return (unsigned int)v11;
}
