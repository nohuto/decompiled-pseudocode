/*
 * XREFs of ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@2PEBUSpatialAudioSettings@@@Z @ 0x1800D48B0
 * Callers:
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x180062AB8 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4714 (-SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800D4B14 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x1800EC284 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AVSyncLoc.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180109250 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18010A008 (-GetAudioFormatForSpatialFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAud.c)
 *     ?GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x18010B620 (-GetSpatialFormatForAudioFormat@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUtWAVEFORMA.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@@Z @ 0x18010CFC8 (-SetSpatialAudioSettings@CEndpointCharacteristics@@QEAAJPEAUIPolicyConfig@@PEBUSpatialAudioSetti.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatInternal(
        struct CEndpointCharacteristics *a1,
        int a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct WAVEFORMATEXTENSIBLE *a4,
        struct WAVEFORMATEXTENSIBLE *a5,
        const struct SpatialAudioSettings *a6)
{
  struct WAVEFORMATEXTENSIBLE *v9; // rdi
  const struct SpatialAudioSettings *v10; // r14
  char v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct IPolicyConfig *v15; // rdx
  int AudioFormatForSpatialFormat; // eax
  int SpatialFormatForAudioFormat; // eax
  const struct SpatialAudioSettings *v18; // rcx
  int v19; // eax
  __int64 v20; // rdx
  struct IPolicyConfig *v21; // rdx
  bool v22; // zf
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24[2]; // [rsp+48h] [rbp-99h] BYREF
  __int64 v25; // [rsp+50h] [rbp-91h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+58h] [rbp-89h] BYREF
  struct WAVEFORMATEXTENSIBLE v27; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v28[80]; // [rsp+98h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+4Fh]

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v24[1] = a3;
  v9 = a5;
  v10 = a6;
  v11 = 0;
  v25 = 0LL;
  v12 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
          g_DeviceGraphStore,
          *((_QWORD *)a1 + 3),
          &v25);
  v14 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      2994LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_33;
  }
  CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection(v13, lpCriticalSection, v25);
  CEndpointCharacteristics::ClearMixFormatCache(a1, 0LL);
  memset_0(&v27, 0, sizeof(v27));
  memset_0(v28, 0, 0x48uLL);
  LOBYTE(v24[0]) = 0;
  if ( a6 )
  {
    v27.Format.wFormatTag = 0;
    AudioFormatForSpatialFormat = CEndpointCharacteristics::GetAudioFormatForSpatialFormat(
                                    a1,
                                    v15,
                                    a6,
                                    &a4->Format,
                                    &a5->Format,
                                    &v27,
                                    (bool *)v24);
    v14 = AudioFormatForSpatialFormat;
    if ( AudioFormatForSpatialFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        3019LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)AudioFormatForSpatialFormat);
      goto LABEL_31;
    }
    v11 = v24[0];
    if ( LOBYTE(v24[0]) )
      v9 = &v27;
  }
  else if ( a5 )
  {
    SpatialFormatForAudioFormat = CEndpointCharacteristics::GetSpatialFormatForAudioFormat(
                                    a1,
                                    v15,
                                    &a5->Format,
                                    (struct SpatialAudioSettings *)v28);
    v18 = (const struct SpatialAudioSettings *)v28;
    if ( SpatialFormatForAudioFormat < 0 )
      v18 = 0LL;
    v10 = v18;
  }
  if ( a2 )
  {
    if ( !v9 )
      goto LABEL_19;
    v19 = CPolicyConfig::SetDeviceFormatHwAudioEngine(a1, &v9->Format);
    v14 = v19;
    if ( v19 < 0 )
    {
      v20 = 3039LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        v20,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_31;
    }
  }
  if ( v9 && IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent() )
    AudioPolicyManagerExtension_OnDeviceFormatChanged(*((_QWORD *)a1 + 3), v9);
LABEL_19:
  v19 = CPolicyConfig::SetDeviceFormatSwAudioEngine(a1, v24[1], &v9->Format);
  v14 = v19;
  if ( v19 < 0 )
  {
    v20 = 3047LL;
    goto LABEL_29;
  }
  if ( v10 )
  {
    v22 = v9 == 0LL;
    if ( !v9 )
    {
      if ( v11 )
        goto LABEL_30;
      v22 = 1;
    }
    if ( !v22 )
      a4 = v9;
    v19 = CEndpointCharacteristics::SetSpatialAudioSettings(a1, v21, v10, &a4->Format);
    v14 = v19;
    if ( v19 < 0 )
    {
      v20 = 3062LL;
      goto LABEL_29;
    }
  }
LABEL_30:
  v14 = 0;
LABEL_31:
  if ( lpCriticalSection[0] )
  {
    LeaveCriticalSection(lpCriticalSection[0]);
    lpCriticalSection[0] = 0LL;
  }
LABEL_33:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  return v14;
}
