/*
 * XREFs of ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x1802B1B98
 * Callers:
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1802B1CFC (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x18003F1C0 (-ParseAppUserModelId@@YAJPEBGPEAG_K12@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall LegacyViewWrapper::LoadQuirksForApp(LegacyViewWrapper *this)
{
  HSTRING v2; // rcx
  char *StringRawBuffer; // rax
  __int64 v4; // r8
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int PackagesByPackageFamily; // eax
  PCWSTR v9; // rax
  UINT32 *bufferLength; // [rsp+20h] [rbp-E0h]
  UINT32 count; // [rsp+40h] [rbp-C0h] BYREF
  UINT32 v12; // [rsp+44h] [rbp-BCh] BYREF
  int v13; // [rsp+48h] [rbp-B8h] BYREF
  PWSTR packageFullNames; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR buffer[128]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+108h]

  packageFullNames = 0LL;
  v2 = (HSTRING)*((_QWORD *)this + 20);
  v12 = 128;
  count = 1;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v2, 0LL);
  v5 = ParseAppUserModelId(StringRawBuffer, packageFamilyName, v4, 0LL, 0LL);
  if ( v5 < 0 )
  {
    v6 = 49LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  PackagesByPackageFamily = FindPackagesByPackageFamily(
                              packageFamilyName,
                              0x10u,
                              &count,
                              &packageFullNames,
                              &v12,
                              buffer,
                              0LL);
  if ( PackagesByPackageFamily )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             58LL,
             (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\ntuserviewwrapper.cpp",
             (const char *)PackagesByPackageFamily);
  if ( count != 1 )
  {
    v5 = -2147221165;
    v6 = 59LL;
    goto LABEL_3;
  }
  v9 = WindowsGetStringRawBuffer(*((HSTRING *)this + 20), 0LL);
  if ( (int)QuirkIsEnabledForPackage(packageFullNames, v9, 851969LL, &v13, bufferLength) >= 0 )
  {
    if ( v13 )
      *((_BYTE *)this + 580) = 1;
  }
  return 0LL;
}
