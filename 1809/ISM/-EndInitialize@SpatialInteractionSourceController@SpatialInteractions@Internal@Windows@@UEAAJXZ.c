/*
 * XREFs of ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1801253B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPoseData@1@PEA_N@Z @ 0x1800A2D4C (-GetPoseData@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@W4Handedness@1@W4PoseType@1@PEAUPose.c)
 *     ?GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z @ 0x1800A5590 (-GetHapticsCutoffTimeInSeconds@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAE@Z.c)
 *     ?GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z @ 0x1800A5670 (-GetHandedness@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAW4Handedness@1@@Z.c)
 *     ?SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z @ 0x1800A58F4 (-SupportsContinousBuzz@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_NPEAG@Z.c)
 *     ?SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z @ 0x1800A5C20 (-SupportsAnalogTrigger@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEA_N@Z.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800A8918 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z @ 0x180122D6C (-IgnoredError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKPEB_W@Z.c)
 *     ?FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x180122F20 (-FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z.c)
 *     ?Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z @ 0x180123170 (-Report@SpatialInteractionHeartbeat@SpatialInteractionDevices@@AEAAX_N@Z.c)
 *     _lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator() @ 0x180125780 (_lambda_b6eb6e6574f6e884ecb744657c22bdda_--operator().c)
 *     ?EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x18012593C (-EnsureInitializationRetryParameters@SpatialInteractionSourceController@SpatialInteractions@Inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EndInitialize(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  SpatialInteractionDevices *v3; // r12
  int v4; // eax
  bool *v5; // r8
  int HapticsCutoffTimeInSeconds; // edi
  __int64 v7; // rdx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v8; // rcx
  __int64 v9; // rdi
  HRESULT Guid; // eax
  unsigned __int8 *v11; // r8
  unsigned __int16 *v12; // r9
  char v13; // r15
  char v14; // r13
  char v15; // r14
  _DWORD *v16; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v17; // rcx
  char v18; // al
  int v19; // r14d
  const wchar_t *StringRawBuffer; // r15
  _DWORD *v21; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v22; // rcx
  unsigned int v24; // [rsp+30h] [rbp-39h] BYREF
  int v25; // [rsp+34h] [rbp-35h] BYREF
  int v26; // [rsp+38h] [rbp-31h] BYREF
  __int64 v27; // [rsp+40h] [rbp-29h]
  __int128 v28; // [rsp+48h] [rbp-21h]
  unsigned int *v29; // [rsp+58h] [rbp-11h]
  __int128 v30; // [rsp+60h] [rbp-9h] BYREF
  unsigned int *v31; // [rsp+70h] [rbp+7h]
  char v32; // [rsp+78h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v34; // [rsp+D0h] [rbp+67h] BYREF
  struct HKEY__ v35; // [rsp+D8h] [rbp+6Fh] BYREF
  struct HKEY__ v36; // [rsp+E0h] [rbp+77h] BYREF
  char v37; // [rsp+E8h] [rbp+7Fh]

  v27 = -2LL;
  v25 = 0;
  v24 = 0;
  *(_QWORD *)&v28 = this;
  *((_QWORD *)&v28 + 1) = &v25;
  v29 = &v24;
  v30 = v28;
  v31 = &v24;
  v32 = 1;
  v3 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120);
  v4 = SpatialInteractionDevices::Internal::InitializeValueCaps(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 120),
         a2);
  HapticsCutoffTimeInSeconds = v4;
  v25 = v4;
  if ( v4 < 0 )
  {
    v7 = 349LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_52;
  }
  *((_DWORD *)this + 241) = *((_DWORD *)this + 90);
  v4 = SpatialInteractionDevices::SupportsAnalogTrigger(
         v3,
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 440),
         v5);
  HapticsCutoffTimeInSeconds = v4;
  v25 = v4;
  if ( v4 < 0 )
  {
    v7 = 355LL;
    goto LABEL_5;
  }
  if ( *((_BYTE *)this + 440) )
    *((_DWORD *)this + 241) |= 8u;
  v9 = *((_QWORD *)this + 62);
  if ( v9 )
  {
    SpatialInteractionDevices::SpatialInteractionHeartbeat::Report(
      *((SpatialInteractionDevices::SpatialInteractionHeartbeat **)this + 62),
      1);
    Guid = CoCreateGuid((GUID *)v9);
    if ( Guid < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x30B,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\spatialinteractiontrace.h",
        (const char *)(unsigned int)Guid);
      JUMPOUT(0x180125776LL);
    }
    *(_QWORD *)(v9 + 24) = GetTickCount64();
    *(_WORD *)(v9 + 16) = *((_WORD *)this + 83);
    *(_WORD *)(v9 + 18) = *((_WORD *)this + 82);
    *(_WORD *)(v9 + 20) = *((_WORD *)this + 84);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::EnsureInitializationRetryParameters(v8);
  HapticsCutoffTimeInSeconds = 0;
  v13 = 1;
  v37 = 1;
  v14 = 1;
  v15 = 1;
  while ( ++v24 <= Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationAttemptsCount
       && (v13 || v14 || v15) )
  {
    if ( *((_BYTE *)this + 104) )
      break;
    if ( v24 > 1 )
      Sleep(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::s_InitializationWaitBeforeRetryMilliseconds);
    if ( v13 )
    {
      HapticsCutoffTimeInSeconds = SpatialInteractionDevices::SupportsContinousBuzz(
                                     v3,
                                     (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)((char *)this + 748),
                                     (bool *)this + 744,
                                     v12);
      if ( HapticsCutoffTimeInSeconds < 0 )
        goto LABEL_40;
      *((_BYTE *)this + 1021) = *((_BYTE *)this + 748);
      v34 = 0;
      HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetHapticsCutoffTimeInSeconds(
                                     v3,
                                     (struct SpatialInteractionDevices::HID_HANDLE *)&v34,
                                     v11);
      if ( HapticsCutoffTimeInSeconds < 0 )
        goto LABEL_40;
      *((_WORD *)this + 373) = 1000 * v34;
      v37 = 0;
    }
    if ( !v14 )
      goto LABEL_30;
    *((_DWORD *)this + 126) = 0;
    HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetHandedness(
                                   v3,
                                   (struct SpatialInteractionDevices::HID_HANDLE *)&v26,
                                   (enum SpatialInteractionDevices::Handedness *)v11);
    if ( HapticsCutoffTimeInSeconds < 0 )
    {
      v16 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
      if ( v16 && *v16 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::IgnoredError_(
          v17,
          HapticsCutoffTimeInSeconds,
          *((_DWORD *)this + 2),
          L"Handedness");
      }
    }
    else
    {
      *((_DWORD *)this + 126) = v26;
    }
    if ( HapticsCutoffTimeInSeconds >= 0 )
    {
      v14 = 0;
      *((_BYTE *)this + 1022) = *((_BYTE *)this + 504);
LABEL_30:
      if ( v15 )
      {
        LOBYTE(v35.unused) = 0;
        HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetPoseData(
                                       (unsigned __int16 *)v3,
                                       *((_DWORD *)this + 126),
                                       0,
                                       (__int64)this + 508,
                                       &v35);
        if ( HapticsCutoffTimeInSeconds >= 0 )
        {
          LOBYTE(v36.unused) = 0;
          HapticsCutoffTimeInSeconds = SpatialInteractionDevices::GetPoseData(
                                         (unsigned __int16 *)v3,
                                         *((_DWORD *)this + 126),
                                         1u,
                                         (__int64)this + 540,
                                         &v36);
          if ( HapticsCutoffTimeInSeconds >= 0 )
          {
            if ( *((_BYTE *)this + 456) || LOBYTE(v35.unused) || (v18 = 0, LOBYTE(v36.unused)) )
              v18 = 1;
            *((_BYTE *)this + 1013) = v18;
            HapticsCutoffTimeInSeconds = 0;
          }
        }
        if ( HapticsCutoffTimeInSeconds >= 0 )
          v15 = 0;
      }
    }
LABEL_40:
    v13 = v37;
  }
  if ( v24 > 1 )
  {
    v19 = v24 - 1;
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 5), 0LL);
    v21 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( v21 )
    {
      if ( *v21 )
      {
        SpatialInteractionDevices::SpatialInteractionTrace::Instance();
        SpatialInteractionDevices::SpatialInteractionTrace::FeaturesRead_(
          v22,
          StringRawBuffer,
          HapticsCutoffTimeInSeconds,
          v19);
      }
    }
  }
  if ( HapticsCutoffTimeInSeconds < 0 )
  {
    *((_DWORD *)this + 231) = -2097151990;
    *((_DWORD *)this + 232) = 1;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 932));
    goto LABEL_48;
  }
  if ( (*((_DWORD *)this + 241) & 8) != 0 )
  {
    HapticsCutoffTimeInSeconds = v25;
  }
  else
  {
    *((_DWORD *)this + 231) = -2097151990;
    *((_DWORD *)this + 232) = 2;
    GetSystemTimeAsFileTime((LPFILETIME)((char *)this + 932));
    HapticsCutoffTimeInSeconds = -2147023728;
LABEL_48:
    *((_BYTE *)this + 105) = 1;
    v25 = HapticsCutoffTimeInSeconds;
  }
LABEL_52:
  v32 = 0;
  lambda_b6eb6e6574f6e884ecb744657c22bdda_::operator()(&v30);
  return (unsigned int)HapticsCutoffTimeInSeconds;
}
