/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b8e6edafc84f4ea4982f0b5c293be3ab___ @ 0x1800650C0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180025824 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800AF7B0 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??0?$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z @ 0x1800E9F1C (--0-$CComPtr@UISaDeviceProxy@@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_b8e6edafc84f4ea4982f0b5c293be3ab___(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *i; // rdi
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                 + 32LL))(
           g_DeviceGraphManager,
           *i,
           *a4,
           0LL,
           0LL);
    if ( v8 < 0
      && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
        (unsigned int)v8);
    }
  }
  ATL::CComPtr<ISaDeviceProxy>::CComPtr<ISaDeviceProxy>(a1, a4);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a4);
  return a1;
}
