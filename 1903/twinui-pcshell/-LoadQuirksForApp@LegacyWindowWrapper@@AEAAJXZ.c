/*
 * XREFs of ?LoadQuirksForApp@LegacyWindowWrapper@@AEAAJXZ @ 0x1802A2F00
 * Callers:
 *     ??0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1802A2684 (--0LegacyWindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@A.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1800185F0 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1802A32E4 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

__int64 __fastcall LegacyWindowWrapper::LoadQuirksForApp(HSTRING *this)
{
  char *StringRawBuffer; // rax
  __int64 v3; // r8
  int v4; // eax
  unsigned int PackagesByPackageFamily; // eax
  void *v6; // rdx
  unsigned int v7; // r8d
  PCWSTR v8; // rax
  const char *v9; // r9
  __int64 result; // rax
  UINT32 *bufferLength; // [rsp+20h] [rbp-1E8h]
  int v12; // [rsp+40h] [rbp-1C8h] BYREF
  UINT32 count; // [rsp+44h] [rbp-1C4h] BYREF
  UINT32 v14; // [rsp+48h] [rbp-1C0h] BYREF
  PWSTR packageFullNames[2]; // [rsp+50h] [rbp-1B8h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+60h] [rbp-1A8h] BYREF
  WCHAR buffer[128]; // [rsp+F0h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  packageFullNames[1] = (PWSTR)-2LL;
  packageFullNames[0] = 0LL;
  v14 = 128;
  count = 1;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(this[40], 0LL);
  try
  {
    v4 = ParseAppUserModelId(StringRawBuffer, packageFamilyName, v3, 0LL, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        228LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
        (const char *)(unsigned int)v4);
    PackagesByPackageFamily = FindPackagesByPackageFamily(
                                packageFamilyName,
                                0x10u,
                                &count,
                                packageFullNames,
                                &v14,
                                buffer,
                                0LL);
    if ( PackagesByPackageFamily )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        v6,
        v7,
        (const char *)PackagesByPackageFamily,
        (unsigned int)bufferLength);
    if ( count != 1 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        238LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
        (const char *)0x80040153LL);
    v8 = WindowsGetStringRawBuffer(this[40], 0LL);
    if ( (int)QuirkIsEnabledForPackage(packageFullNames[0], v8, 851969LL, &v12, bufferLength) >= 0 && v12 )
      *((_BYTE *)this + 616) = 1;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xFD,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\legacywindowwrapper.cpp",
                           v9);
  }
  return result;
}
