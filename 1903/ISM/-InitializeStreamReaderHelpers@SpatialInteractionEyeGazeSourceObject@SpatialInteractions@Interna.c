/*
 * XREFs of ?InitializeStreamReaderHelpers@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800F0D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002CECC (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?EyeGazeStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N@Z @ 0x1800F0A24 (-EyeGazeStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUI.c)
 *     ?Init@?$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0B58 (-Init@-$PayloadFieldHelper@E@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@23.c)
 *     ?Init@?$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0BBC (-Init@-$PayloadFieldHelper@UPERCEPTION_STATE_STREAM_TIMESTAMPS@@@Holographic@Internal@Windows@@Q.c)
 *     ?Init@?$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0C24 (-Init@-$PayloadFieldHelper@UXMFLOAT3@DirectX@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPa.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0C88 (-Init@-$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS@@@Holographic@Internal@Wind.c)
 *     ?Init@?$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@Internal@Windows@@QEAAJPEAUISpatialPayloadDescriptor@234@AEBU_GUID@@@Z @ 0x1800F0CF0 (-Init@-$PayloadFieldHelper@W4SPATIAL_GAZE_CALIBRATION_STATE@@@Holographic@Internal@Windows@@QEAA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject::InitializeStreamReaderHelpers(
        Windows::Internal::SpatialInteractions::SpatialInteractionEyeGazeSourceObject *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  const char *v5; // r9
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  char v15; // di
  __int64 v16; // rax
  void *v17; // rax
  const struct std::nothrow_t *v18; // rdx
  void *v19; // rcx
  const struct _GUID *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v23; // rcx
  _BYTE v24[16]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *((_QWORD *)this + 16);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2);
    v3 = Windows::Internal::Holographic::PayloadFieldHelper<PERCEPTION_STATE_STREAM_TIMESTAMPS>::Init(
           (__int64 *)this + 138,
           0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v7 = Windows::Internal::Holographic::PayloadFieldHelper<unsigned char>::Init(
             (__int64 *)this + 139,
             0LL,
             (__int64)&SPATIALFIELD_IsCombinedGazeValid);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v9 = Windows::Internal::Holographic::PayloadFieldHelper<DirectX::XMFLOAT3>::Init(
               (__int64 *)this + 140,
               0LL,
               (__int64)&SPATIALFIELD_CombinedProjectionCenter);
        v10 = v9;
        if ( v9 >= 0 )
        {
          v11 = Windows::Internal::Holographic::PayloadFieldHelper<DirectX::XMFLOAT3>::Init(
                  (__int64 *)this + 141,
                  0LL,
                  (__int64)&SPATIALFIELD_CombinedGazeDirection);
          v12 = v11;
          if ( v11 >= 0 )
          {
            v13 = Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_GAZE_CALIBRATION_STATE>::Init(
                    (__int64 *)this + 142,
                    0LL);
            v14 = v13;
            if ( v13 >= 0 )
            {
              v15 = (int)Windows::Internal::Holographic::PayloadFieldHelper<enum SPATIAL_GAZE_CALIBRATION_REQUEST_EVENTS>::Init(
                           (__int64 *)this + 143,
                           0LL) >= 0;
              v16 = (*(__int64 (__fastcall **)(_QWORD))(MEMORY[0] + 32LL))(0LL);
              *((_QWORD *)this + 144) = v16;
              v17 = operator new[](2 * v16);
              v19 = (void *)*((_QWORD *)this + 145);
              *((_QWORD *)this + 145) = v17;
              if ( v19 )
                operator delete(v19, v18);
              v20 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 15) + 48LL))(
                                            *((_QWORD *)this + 15),
                                            v24);
              if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v21) )
              {
                wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                  v22,
                  (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
                SpatialInteractionDevices::SpatialInteractionTrace::EyeGazeStateReaderInitialized_(v23, v20, v15);
              }
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x126,
                (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                (const char *)(unsigned int)v13);
              result = v14;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x125,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
              (const char *)(unsigned int)v11);
            result = v12;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x124,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
            (const char *)(unsigned int)v9);
          result = v10;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x123,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
          (const char *)(unsigned int)v7);
        result = v8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
        (const char *)(unsigned int)v3);
      result = v4;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x130,
                           (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\head\\spatialinteractionhead.cpp",
                           v5);
  }
  return result;
}
