/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180023430
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EA564 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED988 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_dg @ 0x1800BA0C4 (WPP_SF_dg.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800D2770 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  SaDeviceParams *v10; // rbx
  unsigned int v11; // edx
  int DeviceDefaults; // ebp
  void *v13; // rax
  void *v14; // rsi
  void *v15; // rdi
  __int64 cbSize; // rdi
  void *v17; // rax
  void *v18; // rbp
  __int64 v19; // r14
  void *v20; // rax
  void *v21; // r15
  LPVOID pv; // [rsp+40h] [rbp-78h] BYREF
  __int64 v24; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+50h] [rbp-68h] BYREF
  void *v26; // [rsp+58h] [rbp-60h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  struct _GUID v28; // [rsp+70h] [rbp-48h] BYREF

  v27 = -2LL;
  v10 = 0LL;
  v26 = 0LL;
  v24 = 0LL;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v28 = *a4;
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v28, 0LL, 0LL, &a8, &v24);
  }
  else
  {
    v25 = 0LL;
    *(_QWORD *)&v28.Data1 = 0LL;
    pv = 0LL;
    DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a1 + 2) + 40LL))(
                       *((_QWORD *)a1 + 2),
                       &pv);
    if ( DeviceDefaults >= 0 )
      DeviceDefaults = (*(__int64 (__fastcall **)(struct IPolicyConfig *, LPVOID, _QWORD, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL))(
                         g_PolicyConfig,
                         pv,
                         0LL,
                         &v25,
                         &v24);
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    if ( DeviceDefaults < 0 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          57LL,
          &WPP_8e50d3333ef73ff52f011be4f2d35929_Traceguids,
          (unsigned int)DeviceDefaults);
      }
      AudSrvTraceLoggingErrorHelper("GetDeviceDefaults", 7774, DeviceDefaults);
    }
  }
  if ( DeviceDefaults >= 0 )
  {
    v13 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      memset_0(v13, 0, 0x60uLL);
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *((_QWORD *)v14 + 3) = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    v10 = (SaDeviceParams *)v14;
    v26 = v14;
    DeviceDefaults = 0;
    if ( !v14 )
      DeviceDefaults = -2147024882;
    v15 = 0LL;
    if ( DeviceDefaults >= 0 )
    {
      cbSize = Src->cbSize;
      v17 = CoTaskMemAlloc(cbSize + 18);
      v18 = v17;
      if ( v17 )
      {
        memcpy_0(v17, Src, cbSize + 18);
        v15 = v18;
        v19 = a6->cbSize;
        v20 = CoTaskMemAlloc(v19 + 18);
        v21 = v20;
        if ( v20 )
        {
          memcpy_0(v20, a6, v19 + 18);
          *((_DWORD *)v14 + 2) = a3;
          *(_QWORD *)&v28.Data1 = 0LL;
          CoTaskMemFree(*((LPVOID *)v14 + 2));
          *((_QWORD *)v14 + 2) = v21;
          v15 = 0LL;
          v25 = 0LL;
          CoTaskMemFree(*((LPVOID *)v14 + 3));
          *((_QWORD *)v14 + 3) = v18;
          *((_QWORD *)v14 + 4) = a8;
          *((_QWORD *)v14 + 5) = v24;
          *((struct _GUID *)v14 + 4) = *a5;
          *((struct _GUID *)v14 + 3) = *a4;
          DeviceDefaults = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 40LL))(
                             *((_QWORD *)a1 + 2),
                             v14);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_dg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              11LL,
              &WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
              (unsigned int)a3,
              a8);
          }
          CoCreateGuid((GUID *)v14 + 5);
        }
        else
        {
          DeviceDefaults = -2147024882;
        }
      }
      else
      {
        v15 = 0LL;
        DeviceDefaults = -2147024882;
      }
    }
    CoTaskMemFree(v15);
    CoTaskMemFree(0LL);
    if ( DeviceDefaults >= 0 )
    {
      v10 = 0LL;
      *a9 = (struct SaDeviceParams *)v14;
    }
  }
  if ( v10 )
    SaDeviceParams::`scalar deleting destructor'(v10, v11);
  return (unsigned int)DeviceDefaults;
}
