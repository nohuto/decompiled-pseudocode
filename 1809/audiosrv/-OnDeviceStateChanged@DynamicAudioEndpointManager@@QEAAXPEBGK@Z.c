/*
 * XREFs of ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18011E7DC
 * Callers:
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800D5330 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     s_mmeNotifyDeviceStateChanged @ 0x1800F87E0 (s_mmeNotifyDeviceStateChanged.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z @ 0x18011EC14 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY07_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z @ 0x18011EF1C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z @ 0x18011FC44 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY07_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall DynamicAudioEndpointManager::OnDeviceStateChanged(
        DynamicAudioEndpointManager *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  DynamicAudioEndpointManager *v3; // rsi
  char *v4; // r15
  __int64 v5; // r13
  bool *v6; // rdi
  __int64 v7; // r12
  _QWORD **v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // rbx
  struct IAudioProcess *v13; // [rsp+38h] [rbp-39h] BYREF
  __int64 v14; // [rsp+40h] [rbp-31h]
  unsigned int v15; // [rsp+48h] [rbp-29h]
  int v16; // [rsp+4Ch] [rbp-25h] BYREF
  struct IUnknown *v17; // [rsp+50h] [rbp-21h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp-19h] BYREF
  _QWORD **v19; // [rsp+60h] [rbp-11h]
  __int64 v20[3]; // [rsp+68h] [rbp-9h] BYREF
  bool v21[8]; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+88h] [rbp+17h]

  v20[1] = -2LL;
  v15 = a3;
  v14 = (__int64)a2;
  v3 = g_DynamicAudioEndpointManager;
  *(_QWORD *)v21 = 0LL;
  v22 = 0LL;
  v4 = (char *)g_DynamicAudioEndpointManager + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_DynamicAudioEndpointManager + 16));
  v20[2] = (__int64)v4;
  v5 = 0LL;
  v6 = v21;
  v7 = 8LL;
  v8 = (_QWORD **)((char *)v3 + 56);
  v9 = v14;
  do
  {
    v19 = v8;
    v10 = 8LL;
    v14 = 8LL;
    do
    {
      v18 = *v8;
      if ( v18 )
      {
        v11 = v15;
        do
        {
          v12 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v10, &v18);
          v20[0] = v12;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, int *))(*(_QWORD *)v12 + 48LL))(v12, v9, v11, &v16) >= 0 )
          {
            switch ( v16 )
            {
              case 2:
                v13 = 0LL;
                while ( 1 )
                {
                  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v13);
                  if ( (*(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v12 + 40LL))(v12, &v13) < 0 )
                    break;
                  v17 = 0LL;
                  if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v12)(
                         v12,
                         &GUID_00000000_0000_0000_c000_000000000046,
                         &v17) >= 0 )
                  {
                    DynamicAudioEndpointManager::RemoveRule(v3, v13, v17, 0);
                    *v6 = 1;
                  }
                  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v13);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
                break;
              case 3:
                *v6 = 1;
                break;
              case 4:
                v6[v5] = 1;
                v6[v7] = 1;
                break;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v20);
        }
        while ( v18 );
        v8 = v19;
        v10 = v14;
      }
      v8 += 6;
      v19 = v8;
      ++v6;
      v14 = --v10;
    }
    while ( v10 );
    v5 -= 8LL;
    v7 -= 8LL;
  }
  while ( v7 > -8 );
  DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(v3, (bool (*const)[8])v21);
  if ( v3 != (DynamicAudioEndpointManager *)-16LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 16));
  DynamicAudioEndpointManager::RefreshPublishedDefaults(v3, (bool (*const)[8])v21, 0);
}
