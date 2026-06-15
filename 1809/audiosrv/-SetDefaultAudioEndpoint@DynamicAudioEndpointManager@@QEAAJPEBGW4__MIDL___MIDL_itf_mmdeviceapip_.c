/*
 * XREFs of ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18011F490
 * Callers:
 *     ?SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x1800D3FB0 (-SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011EC14 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 *     ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18012013C (-SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DynamicAudioEndpointManager::SetDefaultAudioEndpoint(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  DynamicAudioEndpointManager *v5; // rsi
  int v6; // ebx
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+28h] [rbp-40h]
  char *v11; // [rsp+30h] [rbp-38h]
  bool v12[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = -2LL;
  v3 = (int)a3;
  v5 = g_DynamicAudioEndpointManager;
  *(_QWORD *)v12 = 0LL;
  v13 = 0LL;
  v9 = 0;
  if ( a3 <= 7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_DynamicAudioEndpointManager + 16));
    v11 = (char *)v5 + 16;
    v6 = CDefaultDeviceManager::SetDefaultEndpoint(v7, a2, (unsigned int)v3, &v9);
    if ( v6 >= 0 )
    {
      v12[8 * v9 + v3] = 1;
      if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(v5, (bool (*const)[8])v12) )
        v6 = -2147418113;
    }
    if ( v5 != (DynamicAudioEndpointManager *)-16LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
    if ( v6 >= 0 )
      return (unsigned int)DynamicAudioEndpointManager::RefreshPublishedDefaults(v5, (bool (*const)[8])v12, 0);
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      263LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80070057LL);
  }
  return (unsigned int)v6;
}
