/*
 * XREFs of ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x18003153C
 * Callers:
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180013F4C (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000B398 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180018228 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180018290 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x1800317DC (-UpdateState@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_00.c)
 *     ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x18003194C (-GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180031FD4 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180032110 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180032BF8 (-find@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800369D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints(
        ApplicationSpecificEndpointInfo *this)
{
  SIZE_T v2; // rdi
  _WORD *v3; // rax
  _WORD *v4; // rbx
  _WORD *i; // rcx
  unsigned int v6; // r14d
  DWORD v7; // r15d
  unsigned int v8; // eax
  int Key; // eax
  void *v10; // rdi
  __int64 v12; // rdx
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+6Ch] [rbp-25h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-21h] BYREF
  DWORD cchValueName; // [rsp+78h] [rbp-19h] BYREF
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v17; // [rsp+7Ch] [rbp-15h] BYREF
  unsigned int v18; // [rsp+80h] [rbp-11h] BYREF
  LPVOID pv[3]; // [rsp+88h] [rbp-9h] BYREF
  char v20[32]; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  pv[1] = (LPVOID)-2LL;
  hKey = 0LL;
  if ( (int)ApplicationSpecificEndpointInfo::GetAppKey(this, 0x20019u, 0, &hKey) < 0 )
    goto LABEL_22;
  cValues = 0;
  cbMaxValueNameLen = 0;
  if ( RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL) )
    goto LABEL_22;
  v2 = ++cbMaxValueNameLen;
  v3 = CoTaskMemAlloc(v2 * 2);
  v4 = v3;
  pv[2] = v3;
  if ( v3 )
  {
    for ( i = &v3[v2]; v3 != i; ++v3 )
    {
      if ( v3 )
        *v3 = 0;
    }
  }
  if ( !v4 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A1,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_32;
  }
  v7 = 0;
  if ( !cValues )
  {
LABEL_21:
    CoTaskMemFree(v4);
LABEL_22:
    v6 = 0;
    goto LABEL_23;
  }
  while ( 1 )
  {
    cchValueName = cbMaxValueNameLen;
    v8 = RegEnumValueW(hKey, v7, v4, &cchValueName, 0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1B2,
             (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             (const char *)v8);
      goto LABEL_32;
    }
    if ( cchValueName )
      break;
LABEL_20:
    if ( ++v7 >= cValues )
      goto LABEL_21;
  }
  std::wstring::wstring(v20, v4);
  if ( std::wstring::find(v20) != -1 )
  {
LABEL_19:
    std::wstring::~wstring((__int64)v20);
    goto LABEL_20;
  }
  pv[0] = 0LL;
  Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, v4, (unsigned __int16 **)pv);
  v6 = Key;
  v10 = pv[0];
  if ( Key >= 0 )
  {
    if ( (int)ApplicationSpecificEndpointInfo::ReadEndpointDataFromKey(
                v4,
                &v17,
                (enum __MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001 *)&v18) >= 0 )
    {
      Key = ApplicationSpecificEndpointInfo::UpdateState(this, v18, (unsigned int)v17, v10);
      v6 = Key;
      if ( Key < 0 )
      {
        v12 = 461LL;
        goto LABEL_28;
      }
    }
    if ( v10 )
      CoTaskMemFree(v10);
    goto LABEL_19;
  }
  v12 = 451LL;
LABEL_28:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    (const char *)(unsigned int)Key);
  if ( v10 )
    CoTaskMemFree(v10);
  std::wstring::~wstring((__int64)v20);
LABEL_32:
  CoTaskMemFree(v4);
LABEL_23:
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
