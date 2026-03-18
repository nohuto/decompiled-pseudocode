/*
 * XREFs of RtlQueryPackageClaims @ 0x140084370
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140084240 (AppModelPolicy_GetPolicy_Internal.c)
 *     RtlQueryPackageIdentity @ 0x140084310 (RtlQueryPackageIdentity.c)
 *     SepDesktopAppxSubProcessToken @ 0x140084754 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031D044 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x1400844EC (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x140084634 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlGUIDFromString @ 0x1405C15F0 (RtlGUIDFromString.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        int a7,
        __int64 a8)
{
  int v12; // edx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  size_t *v15; // rdi
  __int64 v16; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-C0h] BYREF
  size_t *v18; // [rsp+48h] [rbp-B8h]
  size_t pcbRemaining; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[102]; // [rsp+58h] [rbp-A8h] BYREF

  v18 = a5;
  memset(v20, 0, sizeof(v20));
  result = RtlpQueryPackageIdentityAttributes(a1, v12, (unsigned int)v20, a7, a8);
  v14 = result;
  if ( result < 0 )
    return result;
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v20[1] + 32LL));
      v14 = result;
      if ( result < 0 )
        return result;
      *a3 = (char *)ppszDestEnd - (char *)a2 + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( a3 )
    return -1073741811;
LABEL_7:
  if ( a4 )
  {
    v15 = v18;
    result = RtlStringCbPrintfExW(a4, *v18, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v20[1] + 32LL) + 16LL);
    v14 = result;
    if ( result < 0 )
      return result;
    *v15 = (char *)ppszDestEnd - (char *)a4 + 2;
  }
  if ( Guid )
  {
    v16 = v20[1];
    *(_QWORD *)&Guid->Data1 = 0LL;
    *(_QWORD *)Guid->Data4 = 0LL;
    if ( *(_DWORD *)(v16 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v16 + 32) + 48LL), Guid);
  }
  return v14;
}
