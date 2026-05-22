/*
 * XREFs of ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180165140
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x1800DC3DC (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x1800DD3D4 (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x1800DD468 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800DF040 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x1801636B0 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180165700 (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 *     ?FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x18016591C (-FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z.c)
 *     ?GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJXZ @ 0x180165E7C (-GetPosesOffsets@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJX.c)
 *     ?InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAW4Handedness@SpatialInteractionDevices@@@Z @ 0x18016622C (-InitDeviceHandeness@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?OnPrepareParsing@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXAEBUHID_HANDLE@2@@Z @ 0x180166A20 (-OnPrepareParsing@SpatialInteractionHeartbeat@SpatialInteractionDevices@@QEAAXAEBUHID_HANDLE@2@@.c)
 *     ?SetDeviceErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXII@Z @ 0x180168178 (-SetDeviceErrorStatus@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@A.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EndInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  SpatialInteractionDevices *v3; // r15
  int v4; // eax
  bool *v5; // r8
  int HapticsCutoffTimeInSeconds; // ebx
  __int64 v7; // rdx
  GUID *v8; // rcx
  unsigned __int16 *v9; // r9
  char v10; // r13
  char v11; // r12
  char v12; // si
  unsigned __int8 *v13; // r8
  unsigned int v14; // esi
  const wchar_t *StringRawBuffer; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v18; // rcx
  __int128 v20; // [rsp+28h] [rbp-38h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  unsigned int *v22; // [rsp+50h] [rbp-10h]
  char v23; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned __int8 v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+48h] BYREF
  int v27; // [rsp+B0h] [rbp+50h] BYREF

  v27 = 0;
  v26 = 0;
  *(_QWORD *)&v20 = this;
  *((_QWORD *)&v20 + 1) = &v27;
  v21 = v20;
  v22 = &v26;
  v23 = 1;
  v3 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120);
  v4 = SpatialInteractionDevices::Internal::InitializeValueCaps(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
         a2);
  HapticsCutoffTimeInSeconds = v4;
  v27 = v4;
  if ( v4 < 0 )
  {
    v7 = 351LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_38;
  }
  *((_DWORD *)this + 241) = *((_DWORD *)this + 90);
  v4 = SpatialInteractionDevices::SupportsAnalogTrigger(
         v3,
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 440),
         v5);
  HapticsCutoffTimeInSeconds = v4;
  v27 = v4;
  if ( v4 < 0 )
  {
    v7 = 357LL;
    goto LABEL_5;
  }
  if ( *((_BYTE *)this + 440) )
    *((_DWORD *)this + 241) |= 8u;
  v8 = (GUID *)*((_QWORD *)this + 62);
  if ( v8 )
    SpatialInteractionDevices::SpatialInteractionHeartbeat::OnPrepareParsing(v8, v3);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters((Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)v8);
  HapticsCutoffTimeInSeconds = 0;
  v10 = 1;
  v11 = 1;
  v12 = 1;
  while ( ++v26 <= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationAttemptsCount
       && (v10 || v11 || v12) )
  {
    if ( *((_BYTE *)this + 104) )
      break;
    if ( v26 > 1 )
      Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationWaitBeforeRetryMilliseconds);
    if ( v10 )
    {
      HapticsCutoffTimeInSeconds = SpatialInteractionDevices::SupportsContinousBuzz(
                                     v3,
                                     (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 748),
                                     (bool *)this + 744,
                                     v9);
      if ( HapticsCutoffTimeInSeconds >= 0 )
      {
        *((_BYTE *)this + 1021) = *((_BYTE *)this + 748);
        v25 = 0;
        HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetHapticsCutoffTimeInSeconds(
                                       v3,
                                       (struct SpatialInteractionDevices::HID_HANDLE *)&v25,
                                       v13);
        if ( HapticsCutoffTimeInSeconds >= 0 )
        {
          *((_WORD *)this + 373) = 1000 * v25;
          v10 = 0;
          goto LABEL_21;
        }
      }
    }
    else
    {
LABEL_21:
      if ( !v11 )
        goto LABEL_24;
      HapticsCutoffTimeInSeconds = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::InitDeviceHandeness(
                                     this,
                                     (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 504));
      if ( HapticsCutoffTimeInSeconds >= 0 )
      {
        v11 = 0;
        *((_BYTE *)this + 1022) = *((_BYTE *)this + 504);
LABEL_24:
        if ( v12 )
        {
          HapticsCutoffTimeInSeconds = Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::GetPosesOffsets(this);
          if ( HapticsCutoffTimeInSeconds >= 0 )
            v12 = 0;
        }
      }
    }
  }
  if ( v26 > 1 )
  {
    v14 = v26 - 1;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v16) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v17,
        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::FeaturesRead_(
        v18,
        StringRawBuffer,
        HapticsCutoffTimeInSeconds,
        v14);
    }
  }
  if ( HapticsCutoffTimeInSeconds < 0 )
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetDeviceErrorStatus(
      this,
      0x8300000A,
      1u);
    goto LABEL_33;
  }
  if ( (*((_BYTE *)this + 964) & 8) != 0 )
  {
    HapticsCutoffTimeInSeconds = v27;
  }
  else
  {
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetDeviceErrorStatus(
      this,
      0x8300000A,
      2u);
    HapticsCutoffTimeInSeconds = -2147023728;
LABEL_33:
    v27 = HapticsCutoffTimeInSeconds;
  }
LABEL_38:
  v23 = 0;
  lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()((__int64 *)&v21);
  return (unsigned int)HapticsCutoffTimeInSeconds;
}
