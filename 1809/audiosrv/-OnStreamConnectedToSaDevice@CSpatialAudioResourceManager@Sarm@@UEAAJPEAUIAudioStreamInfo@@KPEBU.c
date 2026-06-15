/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800405B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180053D14 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B3794 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180112854 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011349C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x180113978 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180114708 (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180114A80 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180115368 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180115AC8 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180116564 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  struct SPATIAL_STREAM_PROPERTIES *v5; // rax
  __int64 v9; // rbx
  void (__fastcall *v10)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // bl
  HRESULT v14; // eax
  int ActivationFactory; // eax
  void (__fastcall **v16)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  int v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // r12d
  bool v21; // bl
  char v22; // r15
  HRESULT v23; // eax
  CSpatialAudioResourceManagerTraceLogger *v25; // rcx
  int v26; // eax
  unsigned int v27; // esi
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  struct Sarm::CEndpointResourcePool *v34; // r15
  int v35; // eax
  const char *v36; // r9
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ebx
  int v40; // [rsp+20h] [rbp-E0h]
  struct ISaDeviceProxy *v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v47; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v48; // [rsp+64h] [rbp-9Ch] BYREF
  BOOL v49; // [rsp+68h] [rbp-98h] BYREF
  int v50; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v51; // [rsp+70h] [rbp-90h]
  __int64 v52; // [rsp+78h] [rbp-88h] BYREF
  __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  __int64 v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  struct Sarm::CEndpointResourcePool *v57; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID *v58; // [rsp+A8h] [rbp-58h]
  _DWORD v59[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-48h]
  _DWORD v61[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-38h]
  _DWORD v63[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-28h]
  _DWORD v65[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-18h]
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-10h] BYREF
  HSTRING string; // [rsp+108h] [rbp+8h] BYREF
  HSTRING_HEADER v69; // [rsp+110h] [rbp+10h] BYREF
  HSTRING v70; // [rsp+128h] [rbp+28h] BYREF
  __int64 v71; // [rsp+130h] [rbp+30h] BYREF
  __int64 v72; // [rsp+138h] [rbp+38h]
  __int64 v73; // [rsp+140h] [rbp+40h]
  __int64 v74; // [rsp+148h] [rbp+48h]
  __int64 v75; // [rsp+150h] [rbp+50h]
  __int64 v76; // [rsp+158h] [rbp+58h]
  __int64 v77; // [rsp+160h] [rbp+60h]
  CLSID pClsid; // [rsp+168h] [rbp+68h] BYREF
  void *v79; // [rsp+178h] [rbp+78h] BYREF
  int v80; // [rsp+180h] [rbp+80h]
  int v81; // [rsp+184h] [rbp+84h]
  void *v82; // [rsp+188h] [rbp+88h]
  int v83; // [rsp+190h] [rbp+90h]
  int v84; // [rsp+194h] [rbp+94h]
  BOOL *v85; // [rsp+198h] [rbp+98h]
  __int64 v86; // [rsp+1A0h] [rbp+A0h]
  void *v87; // [rsp+1A8h] [rbp+A8h] BYREF
  int v88; // [rsp+1B0h] [rbp+B0h]
  int v89; // [rsp+1B4h] [rbp+B4h]
  void *v90; // [rsp+1B8h] [rbp+B8h]
  int v91; // [rsp+1C0h] [rbp+C0h]
  int v92; // [rsp+1C4h] [rbp+C4h]
  BOOL *v93; // [rsp+1C8h] [rbp+C8h]
  __int64 v94; // [rsp+1D0h] [rbp+D0h]
  void *v95; // [rsp+1D8h] [rbp+D8h] BYREF
  int v96; // [rsp+1E0h] [rbp+E0h]
  int v97; // [rsp+1E4h] [rbp+E4h]
  void *v98; // [rsp+1E8h] [rbp+E8h]
  int v99; // [rsp+1F0h] [rbp+F0h]
  int v100; // [rsp+1F4h] [rbp+F4h]
  BOOL *v101; // [rsp+1F8h] [rbp+F8h]
  __int64 v102; // [rsp+200h] [rbp+100h]
  void *v103; // [rsp+210h] [rbp+110h] BYREF
  int v104; // [rsp+218h] [rbp+118h]
  int v105; // [rsp+21Ch] [rbp+11Ch]
  void *v106; // [rsp+220h] [rbp+120h]
  int v107; // [rsp+228h] [rbp+128h]
  int v108; // [rsp+22Ch] [rbp+12Ch]
  const char *v109; // [rsp+230h] [rbp+130h]
  __int64 v110; // [rsp+238h] [rbp+138h]
  int *v111; // [rsp+240h] [rbp+140h]
  __int64 v112; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = a5;
  v51 = a3;
  v58 = a4;
  v45 = a5;
  v46 = 299;
  if ( (unsigned int)dword_1801B1350 > 5 )
  {
    v110 = 64LL;
    v109 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    v111 = &v46;
    v112 = 4LL;
    v59[1] = 5;
    v103 = off_1801B1358;
    v59[0] = ((unsigned int)&unk_18017552A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v60 = 0LL;
    v104 = *(unsigned __int16 *)off_1801B1358;
    v106 = &unk_180175535;
    v108 = 1;
    v105 = 2;
    v107 = 21;
    EtwEventWriteTransfer(qword_1801B1370, v59, 0LL, 0LL, 4, &v103);
    v5 = v45;
    a4 = v58;
  }
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x12F,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  if ( !a4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      0LL);
    __debugbreak();
  }
  if ( !v5 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x131,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)a4);
    __debugbreak();
  }
  v9 = 0LL;
  v10 = **(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
  v56 = 0LL;
  v10(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v56);
  if ( v56 )
  {
    if ( *((_DWORD *)this + 62) == 17 )
      v11 = (unsigned int)v56 % 0x11;
    else
      v11 = (unsigned int)v56 % *((_DWORD *)this + 62);
    v12 = *((_QWORD *)this + 29);
    if ( v12 )
    {
      v11 = *(_QWORD *)(v12 + 8 * v11);
      if ( v11 )
      {
        while ( *(_DWORD *)(v11 + 112) != (_DWORD)v56 || *(_QWORD *)v11 != v56 )
        {
          v11 = *(_QWORD *)(v11 + 104);
          if ( !v11 )
            goto LABEL_10;
        }
        v9 = v11 + 8;
      }
    }
LABEL_10:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v56 + 16LL))(v56, v11);
    if ( v9 )
      return 0LL;
  }
  if ( *((_QWORD *)this + 72) )
  {
LABEL_22:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v16 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
    v44 = 0LL;
    v17 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v16[15])(a2, &v44);
    v18 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v17,
        v40);
    }
    else
    {
      if ( v44 )
      {
        v41 = 0LL;
        v19 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v44 + 200LL))(v44, &v41);
        v18 = v19;
        if ( v19 < 0 )
        {
          v28 = (unsigned int)v19;
          v29 = 337LL;
LABEL_106:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)v28,
            v40);
LABEL_42:
          if ( v41 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v41 + 16LL))(v41);
          goto LABEL_44;
        }
        if ( !v41 )
        {
          v18 = -2005139197;
          v29 = 338LL;
LABEL_105:
          v28 = (unsigned int)v18;
          goto LABEL_106;
        }
        v20 = a3 & 0x800000;
        if ( (a3 & 0x800000) != 0 )
          goto LABEL_95;
        v21 = 0;
        v22 = 0;
        if ( !*((_BYTE *)this + 145) )
        {
LABEL_34:
          if ( (unsigned int)dword_1801B1350 > 4 )
          {
            v94 = 4LL;
            v48 = v22 != 0;
            v93 = &v48;
            v63[1] = 4;
            v87 = off_1801B1358;
            v63[0] = ((unsigned int)&unk_180175272 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v64 = 0LL;
            v88 = *(unsigned __int16 *)off_1801B1358;
            v90 = &unk_18017527D;
            v92 = 1;
            v89 = 2;
            v91 = 38;
            EtwEventWriteTransfer(qword_1801B1370, v63, 0LL, 0LL, 3, &v87);
          }
          if ( v22 )
            v21 = CoGetPSClsid(&GUID_122595e5_20a2_47d3_8604_4a613ff6cca7, &pClsid) >= 0;
          if ( (unsigned int)dword_1801B1350 > 4 )
          {
            v102 = 4LL;
            v49 = v21;
            v101 = &v49;
            v65[1] = 4;
            v95 = off_1801B1358;
            v65[0] = ((unsigned int)&unk_1801752A4 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            v66 = 0LL;
            v96 = *(unsigned __int16 *)off_1801B1358;
            v98 = &unk_1801752AF;
            v97 = 2;
            v99 = 29;
            v100 = 1;
            EtwEventWriteTransfer(qword_1801B1370, v65, 0LL, 0LL, 3, &v95);
          }
          if ( !v21 )
          {
            v18 = 0;
            goto LABEL_42;
          }
          v42 = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v42);
          v30 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v42);
          v18 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x159,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v30,
              v40);
LABEL_93:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
            goto LABEL_42;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v42 + 368LL))(v42) )
          {
            v18 = 0;
            goto LABEL_93;
          }
          v43 = 0LL;
          v31 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v41 + 24LL))(v41);
          v32 = Create_SpatialAudioDevicePropertyReader(v31, 0LL, &v43);
          v18 = v32;
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x160,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v32,
              v40);
LABEL_92:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
            goto LABEL_93;
          }
          v33 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 112LL))(v43, &v50);
          v18 = v33;
          if ( v33 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v33,
              v40);
            goto LABEL_92;
          }
          if ( !v50 )
          {
            v18 = 0;
            goto LABEL_92;
          }
          v72 = 0x100000001LL;
          v45 = (struct SPATIAL_STREAM_PROPERTIES *)&v71;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
LABEL_95:
          v57 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                        (char *)this + 152,
                                                        v41);
          v34 = v57;
          if ( !v57 )
          {
            v35 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v41, &v57);
            v18 = v35;
            if ( v35 < 0 )
            {
              v28 = (unsigned int)v35;
              v29 = 374LL;
              goto LABEL_106;
            }
            v34 = v57;
            if ( !v57 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x177,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                v36);
              __debugbreak();
            }
          }
          v18 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v51, v58, v45, v34);
          if ( v18 < 0 )
          {
            if ( !*((_DWORD *)v34 + 3) && *(_QWORD *)v34 )
              ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
            v29 = 385LL;
            goto LABEL_105;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
          if ( !v20 )
          {
            v37 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v38 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
                    this,
                    v37,
                    *((_DWORD *)v45 + 2),
                    *((_DWORD *)v45 + 3));
            v39 = v38;
            if ( v38 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18B,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v38,
                v40);
              return v39;
            }
          }
          return 0LL;
        }
        v55 = 0LL;
        v70 = 0LL;
        v23 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v69, &v70);
        if ( v23 < 0 )
        {
          RaiseException(v23, 1u, 0, 0LL);
          JUMPOUT(0x1800A1E44LL);
        }
        if ( (int)RoGetActivationFactory(v70, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v55) >= 0 )
        {
          v70 = 0LL;
          v54 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 64LL))(v55, &v54) >= 0 )
          {
            if ( !v54 )
              goto LABEL_32;
            v22 = 1;
          }
          if ( v54 )
            (*(void (**)(void))(*(_QWORD *)v54 + 16LL))();
          goto LABEL_32;
        }
        v70 = 0LL;
LABEL_32:
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        goto LABEL_34;
      }
      v18 = -2005139190;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010ALL,
        v40);
    }
LABEL_44:
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v18;
  }
  v13 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v53 = 0LL;
    string = 0LL;
    v14 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v14 < 0 )
    {
      RaiseException(v14, 1u, 0, 0LL);
      JUMPOUT(0x1800A1D1FLL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v53);
    string = 0LL;
    if ( ActivationFactory < 0 )
      goto LABEL_17;
    v52 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 64LL))(v53, &v52) >= 0 )
    {
      if ( !v52 )
      {
LABEL_17:
        if ( v53 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
        goto LABEL_19;
      }
      v13 = 1;
    }
    if ( v52 )
      (*(void (**)(void))(*(_QWORD *)v52 + 16LL))();
    goto LABEL_17;
  }
LABEL_19:
  if ( (unsigned int)dword_1801B1350 > 4 )
  {
    v86 = 4LL;
    v47 = v13 != 0;
    v85 = &v47;
    v61[1] = 4;
    v61[0] = ((unsigned int)&unk_180175272 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v79 = off_1801B1358;
    v62 = 0LL;
    v80 = *(unsigned __int16 *)off_1801B1358;
    v82 = &unk_18017527D;
    v84 = 1;
    v81 = 2;
    v83 = 38;
    EtwEventWriteTransfer(qword_1801B1370, v61, 0LL, 0LL, 3, &v79);
  }
  if ( !v13 )
    goto LABEL_22;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  CSpatialAudioResourceManagerTraceLogger::LogExclusiveListenerRequired(v25, *((unsigned __int8 *)this + 145));
  if ( !*((_BYTE *)this + 145)
    || *((_QWORD *)this + 72)
    || (wil::com_ptr_t<CExclusiveModeListener,wil::err_returncode_policy>::reset((char *)this + 576),
        v26 = Microsoft::WRL::Details::MakeAndInitialize<CExclusiveModeListener,CExclusiveModeListener,>((char *)this + 576),
        v27 = v26,
        v26 >= 0) )
  {
    if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v26,
    v40);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  return v27;
}
