/*
 * XREFs of ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x18012B3F0
 * Callers:
 *     ?OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z @ 0x18012B32C (-OnDeviceStateChanged@DynamicAudioEndpointManager@@QEAAXPEBGK@Z.c)
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18012C060 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF55C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18012BAEC (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x18012C848 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall DynamicAudioEndpointManager::OnRuleOperation(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        bool *a4,
        unsigned int a5)
{
  bool *v5; // rdi
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD **v10; // rsi
  bool *v11; // r14
  __int64 v12; // rcx
  unsigned int v13; // esi
  __int64 v14; // rbx
  struct IAudioProcess *v15; // [rsp+30h] [rbp-48h] BYREF
  struct IUnknown *v16; // [rsp+38h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+40h] [rbp-38h] BYREF
  _QWORD **v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-28h]
  __int64 v20[4]; // [rsp+58h] [rbp-20h] BYREF
  int v21; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+50h]
  unsigned int v23; // [rsp+D0h] [rbp+58h]
  bool (*v24)[9]; // [rsp+D8h] [rbp+60h]

  v24 = (bool (*)[9])a4;
  v23 = a3;
  v22 = a2;
  v20[1] = -2LL;
  v5 = a4;
  v7 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v20[2] = v7;
  v8 = 0LL;
  v9 = 9LL;
  v10 = (_QWORD **)(a1 + 56);
  v11 = (bool *)v24;
  do
  {
    v18 = v10;
    v12 = 9LL;
    v19 = 9LL;
    do
    {
      v17 = *v10;
      if ( v17 )
      {
        v13 = v23;
        do
        {
          v14 = *ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v12, &v17);
          v20[0] = v14;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          v21 = 0;
          if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v14 + 48LL))(
                 v14,
                 v22,
                 v13,
                 a5,
                 &v21) >= 0 )
          {
            switch ( v21 )
            {
              case 2:
                v15 = 0LL;
                while ( 1 )
                {
                  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v15);
                  if ( (*(int (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)v14 + 40LL))(v14, &v15) < 0 )
                    break;
                  v16 = 0LL;
                  if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v14)(
                         v14,
                         &GUID_00000000_0000_0000_c000_000000000046,
                         &v16) >= 0 )
                    DynamicAudioEndpointManager::RemoveRule(
                      (DynamicAudioEndpointManager *)a1,
                      v15,
                      v16,
                      0,
                      (bool (*const)[9])v11);
                  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v15);
                  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v16);
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
                break;
              case 3:
                *v5 = 1;
                break;
              case 4:
                v5[v8] = 1;
                v5[v9] = 1;
                break;
            }
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v20);
        }
        while ( v17 );
        v10 = v18;
        v12 = v19;
      }
      v10 += 6;
      v18 = v10;
      ++v5;
      v19 = --v12;
    }
    while ( v12 );
    v9 -= 9LL;
    v8 -= 9LL;
  }
  while ( v9 > -9 );
  DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies((DynamicAudioEndpointManager *)a1, v24);
  if ( a1 != -16 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
}
