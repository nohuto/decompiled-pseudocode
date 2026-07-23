/*
 * XREFs of RtlQueryPackageClaims @ 0x140084770
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140084640 (AppModelPolicy_GetPolicy_Internal.c)
 *     RtlQueryPackageIdentity @ 0x140084710 (RtlQueryPackageIdentity.c)
 *     SepDesktopAppxSubProcessToken @ 0x140084B54 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14031CA94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 * Callees:
 *     RtlpQueryPackageIdentityAttributes @ 0x1400848EC (RtlpQueryPackageIdentityAttributes.c)
 *     RtlStringCbPrintfExW @ 0x140084A34 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  int v10; // esi
  int v12; // edx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  size_t *v15; // rdi
  __int64 v16; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-C0h] BYREF
  size_t *v18; // [rsp+48h] [rbp-B8h]
  size_t pcbRemaining; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v20[102]; // [rsp+58h] [rbp-A8h] BYREF

  v10 = (int)TokenHandle;
  v18 = AppIdSize;
  memset(v20, 0, sizeof(v20));
  result = RtlpQueryPackageIdentityAttributes(v10, v12, (unsigned int)v20, (_DWORD)PkgClaim, (__int64)AttributesPresent);
  v14 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 PackageFullName,
                 *PackageSize,
                 &ppszDestEnd,
                 &pcbRemaining,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v20[1] + 32LL));
      v14 = result;
      if ( result < 0 )
        return result;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_7:
  if ( AppId )
  {
    v15 = v18;
    result = RtlStringCbPrintfExW(AppId, *v18, &ppszDestEnd, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v20[1] + 32LL) + 16LL);
    v14 = result;
    if ( result < 0 )
      return result;
    *v15 = (char *)ppszDestEnd - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    v16 = v20[1];
    *(_QWORD *)&DynamicId->Data1 = 0LL;
    *(_QWORD *)DynamicId->Data4 = 0LL;
    if ( *(_DWORD *)(v16 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v16 + 32) + 48LL), DynamicId);
  }
  return v14;
}
