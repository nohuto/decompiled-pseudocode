/*
 * XREFs of CmpGetVirtualizationID @ 0x1406F5290
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1406F507C (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x14082CF90 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     SeQueryUserSidToken @ 0x1406431CC (SeQueryUserSidToken.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x1406ADAB8 (CmpEffectiveTokenForSubject.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 a2)
{
  __int64 v4; // rax
  NTSTATUS v5; // edi
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(Sid, 0, 0x44uLL);
  v4 = CmpEffectiveTokenForSubject((__int64 *)a2, &v9);
  if ( v9 == 2 && *(int *)(a2 + 8) < 2 )
    v4 = *(_QWORD *)(a2 + 16);
  SeQueryUserSidToken(v4, Sid, 0x44u, 0LL);
  v5 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)(UnicodeString.Length + 20);
    Destination->MaximumLength = v6;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v6, 0x65564D43u);
    Destination->Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      RtlCopyUnicodeString(Destination, &UnicodeString);
      RtlAppendUnicodeToString(Destination, L"_Classes");
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v5;
}
