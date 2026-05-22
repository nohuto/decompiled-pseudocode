/*
 * XREFs of ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJAEBU_GUID@@PEAUHSTRING__@@W4HandleWrapperDesiredAccess@234@_NPEAXPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180153AE8
 * Callers:
 *     ?CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x180153EB0 (-CreateDynamicNodeReferenceWithState@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windo.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x18015C010 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@USpatialGraphSettings@234@PEAW4SpatialGraphDriverProblem_SubStatusCode@@@Z @ 0x18015CF30 (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F494 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18009406C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x1800D79B8 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___ @ 0x18014B670 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@234@AEA_NAEAPEAX@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x1801508F0 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAPEAUHSTRING__@@.c)
 *     ??0?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180150B24 (--0-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ??0?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180150BC8 (--0-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x180151CBC (--1OpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ??1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ @ 0x18015222C (--1TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAA@XZ.c)
 *     ?AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x180153368 (-AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@A.c)
 *     ?StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18015DD54 (-StartActivity@OpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@.c)
 *     ?StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDriverType@@AEBU_GUID@@@Z @ 0x18015DFA8 (-StartActivity@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@QEAAXPEB_WW4TraceDri.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015E734 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18015E880 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(
        __int128 *a1,
        HSTRING a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 result; // rax
  PCWSTR StringRawBuffer; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  wil *v11; // rcx
  __int64 *v12; // rax
  wil *v13; // rcx
  const char *v14; // r9
  char v15[8]; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-1C0h] BYREF
  __int128 *v17; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1B0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-1A8h] BYREF
  std::_Ref_count_base *v20; // [rsp+58h] [rbp-1A0h]
  __int64 v21; // [rsp+60h] [rbp-198h]
  __int128 v22[2]; // [rsp+68h] [rbp-190h] BYREF
  _QWORD v23[40]; // [rsp+90h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  v21 = -2LL;
  v17 = (__int128 *)a2;
  v16 = a3;
  v15[0] = a4;
  v18 = a5;
  if ( a2 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    try
    {
      v9 = (__int64)StringRawBuffer;
      if ( Windows::Internal::Holographic::HolographicDeviceOpenCloseTelemetryEnabled )
      {
        wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v23,
          (__int64)"TelemetryOpenHolographicDevice");
        v23[0] = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
        HolographicDriverClientTrace::TelemetryOpenHolographicDevice::StartActivity(v23, v9, 1LL, a1);
        try
        {
          v10 = std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,HSTRING__ * &,_GUID const &,enum Windows::Internal::Holographic::HandleWrapperDesiredAccess &,bool &,void * &>(
                  &v19,
                  &v17,
                  (__int64)a1,
                  &v16,
                  v15,
                  &v18);
          std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(a6, v10);
          if ( v20 )
            std::_Ref_count_base::_Decref(v20);
          wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
          HolographicDriverClientTrace::TelemetryOpenHolographicDevice::~TelemetryOpenHolographicDevice((HolographicDriverClientTrace::TelemetryOpenHolographicDevice *)v23);
        }
        catch ( ... )
        {
          v16 = wil::ResultFromCaughtException(v11);
          HolographicDriverClientTrace::TelemetryOpenHolographicDevice::~TelemetryOpenHolographicDevice((HolographicDriverClientTrace::TelemetryOpenHolographicDevice *)v23);
          result = v16;
          goto LABEL_22;
        }
      }
      else
      {
        wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
          (__int64)v23,
          (__int64)"OpenHolographicDevice");
        v23[0] = &HolographicDriverClientTrace::OpenHolographicDevice::`vftable';
        HolographicDriverClientTrace::OpenHolographicDevice::StartActivity(v23, v9, 1LL, a1);
        try
        {
          v12 = std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,HSTRING__ * &,_GUID const &,enum Windows::Internal::Holographic::HandleWrapperDesiredAccess &,bool &,void * &>(
                  &v19,
                  &v17,
                  (__int64)a1,
                  &v16,
                  v15,
                  &v18);
          std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(a6, v12);
          if ( v20 )
            std::_Ref_count_base::_Decref(v20);
          wil::ActivityBase<HolographicDriverClientTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
          HolographicDriverClientTrace::OpenHolographicDevice::~OpenHolographicDevice((HolographicDriverClientTrace::OpenHolographicDevice *)v23);
        }
        catch ( ... )
        {
          v16 = wil::ResultFromCaughtException(v13);
          HolographicDriverClientTrace::OpenHolographicDevice::~OpenHolographicDevice((HolographicDriverClientTrace::OpenHolographicDevice *)v23);
          result = v16;
          goto LABEL_22;
        }
      }
      std::wstring::wstring(v22, v9);
      Windows::Internal::Holographic::HolographicDeviceSnapshot::AddTelemetryGuidMapping(a1, v22);
      v17 = v22;
      Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_2be7d4712709608587fff75dfc19c285___(
        (__int64)a1,
        (__int64)&v17);
      std::wstring::_Tidy_deallocate((__int64)v22);
      result = 0LL;
    }
    catch ( ... )
    {
      result = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x6CB,
                               (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                               v14);
    }
LABEL_22:
    ;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6AE,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
