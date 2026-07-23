/*
 * XREFs of CmpGetVirtualizationID @ 0x1407F4744
 * Callers:
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualStoreRoot @ 0x1407F4688 (CmpGetVirtualStoreRoot.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     SeQueryUserSidToken @ 0x1406112AC (SeQueryUserSidToken.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     CmpEffectiveTokenForSubject @ 0x1406B3374 (CmpEffectiveTokenForSubject.c)
 */

__int64 __fastcall CmpGetVirtualizationID(PUNICODE_STRING Destination, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // r9
  NTSTATUS v5; // ebx
  SIZE_T v6; // rdx
  wchar_t *PoolWithTag; // rax
  int v9; // [rsp+20h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+28h] [rbp-80h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v3 = CmpEffectiveTokenForSubject(a2, &v9);
  if ( v9 == 2 && *(int *)(v4 + 8) < 2 )
    v3 = *(_QWORD *)(v4 + 16);
  SeQueryUserSidToken(v3, Sid, 0x44u, 0LL);
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
