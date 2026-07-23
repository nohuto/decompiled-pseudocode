/*
 * XREFs of sub_1800D0EBC @ 0x1800D0EBC
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180069C40 (RtlQueryPackageIdentity.c)
 *     sub_180069FD8 @ 0x180069FD8 (sub_180069FD8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_1800D0EBC(_WORD *a1)
{
  NTSTATUS result; // eax
  ULONG_PTR AppIdSize; // [rsp+40h] [rbp-1B8h] BYREF
  ULONG_PTR PackageSize; // [rsp+48h] [rbp-1B0h] BYREF
  WCHAR AppId[72]; // [rsp+50h] [rbp-1A8h] BYREF
  WCHAR PackageFullName[128]; // [rsp+E0h] [rbp-118h] BYREF

  AppIdSize = 132LL;
  PackageSize = 256LL;
  memset(PackageFullName, 0, sizeof(PackageFullName));
  memset(AppId, 0, 0x84uLL);
  result = RtlQueryPackageIdentity((HANDLE)0xFFFFFFFFFFFFFFFCLL, PackageFullName, &PackageSize, AppId, &AppIdSize, 0LL);
  if ( result >= 0 )
    return sub_180069FD8(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", PackageFullName, AppId, AppIdSize, PackageSize);
  return result;
}
