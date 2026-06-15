/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180033F80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180008D40 (Create_SpatialAudioDevicePropertyReader.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1AA4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x18011E844 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011F59C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x18011FA38 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180120798 (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180120B10 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121698 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180121DF0 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180122A60 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  struct SPATIAL_STREAM_PROPERTIES *v5; // rax
  void (__fastcall **v9)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  __int64 v10; // rbx
  __int64 v11; // r9
  char v12; // bl
  HRESULT v13; // eax
  int ActivationFactory; // eax
  void (__fastcall **v15)(struct IAudioStreamInfo *, GUID *, __int64 *); // rax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // r12d
  bool v20; // bl
  char v21; // r14
  HRESULT v22; // eax
  __int64 v24; // rax
  CSpatialAudioResourceManagerTraceLogger *v25; // rcx
  int v26; // eax
  unsigned int v27; // edi
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  const GUID *v32; // r9
  int v33; // eax
  int v34; // eax
  struct Sarm::CEndpointResourcePool *v35; // r14
  int v36; // eax
  const char *v37; // r9
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // ebx
  struct ISaDeviceProxy *v41; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v45; // [rsp+58h] [rbp-A8h]
  int v46; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v47; // [rsp+68h] [rbp-98h] BYREF
  BOOL v48; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v49; // [rsp+70h] [rbp-90h] BYREF
  int v50; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v51; // [rsp+78h] [rbp-88h]
  __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+88h] [rbp-78h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  struct Sarm::CEndpointResourcePool *v57; // [rsp+A8h] [rbp-58h] BYREF
  struct _GUID *v58; // [rsp+B0h] [rbp-50h]
  _DWORD v59[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C0h] [rbp-40h]
  _DWORD v61[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-30h]
  _DWORD v63[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v64; // [rsp+E0h] [rbp-20h]
  _DWORD v65[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-10h]
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING string; // [rsp+110h] [rbp+10h] BYREF
  HSTRING_HEADER v69; // [rsp+118h] [rbp+18h] BYREF
  HSTRING v70; // [rsp+130h] [rbp+30h] BYREF
  __int64 v71; // [rsp+138h] [rbp+38h] BYREF
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]
  CLSID pClsid; // [rsp+170h] [rbp+70h] BYREF
  void *v79; // [rsp+180h] [rbp+80h] BYREF
  int v80; // [rsp+188h] [rbp+88h]
  int v81; // [rsp+18Ch] [rbp+8Ch]
  void *v82; // [rsp+190h] [rbp+90h]
  int v83; // [rsp+198h] [rbp+98h]
  int v84; // [rsp+19Ch] [rbp+9Ch]
  BOOL *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  void *v87; // [rsp+1B0h] [rbp+B0h] BYREF
  int v88; // [rsp+1B8h] [rbp+B8h]
  int v89; // [rsp+1BCh] [rbp+BCh]
  void *v90; // [rsp+1C0h] [rbp+C0h]
  int v91; // [rsp+1C8h] [rbp+C8h]
  int v92; // [rsp+1CCh] [rbp+CCh]
  BOOL *v93; // [rsp+1D0h] [rbp+D0h]
  __int64 v94; // [rsp+1D8h] [rbp+D8h]
  void *v95; // [rsp+1E0h] [rbp+E0h] BYREF
  int v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1ECh] [rbp+ECh]
  void *v98; // [rsp+1F0h] [rbp+F0h]
  int v99; // [rsp+1F8h] [rbp+F8h]
  int v100; // [rsp+1FCh] [rbp+FCh]
  BOOL *v101; // [rsp+200h] [rbp+100h]
  __int64 v102; // [rsp+208h] [rbp+108h]
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
  v58 = a4;
  v51 = a3;
  v45 = a5;
  v46 = 299;
  if ( (unsigned int)dword_1801B5350 > 5 )
  {
    v110 = 64LL;
    v109 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    v111 = &v46;
    v112 = 4LL;
    v59[1] = 5;
    v103 = off_1801B5358;
    v59[0] = 184549376;
    v60 = 0LL;
    v104 = *(unsigned __int16 *)off_1801B5358;
    v106 = &unk_18017972F;
    v108 = 1;
    v105 = 2;
    v107 = 21;
    EtwEventWriteTransfer(qword_1801B5370, v59, 0LL, 0LL, 4, &v103);
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
  v9 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
  v10 = 0LL;
  v56 = 0LL;
  (*v9)(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v56);
  if ( v56 )
  {
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      v24 = *(_QWORD *)(v11 + 8LL * ((unsigned int)v56 % *((_DWORD *)this + 62)));
      if ( v24 )
      {
        while ( *(_DWORD *)(v24 + 112) != (_DWORD)v56 || *(_QWORD *)v24 != v56 )
        {
          v24 = *(_QWORD *)(v24 + 104);
          if ( !v24 )
            goto LABEL_8;
        }
        v10 = v24 + 8;
      }
    }
LABEL_8:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    if ( v10 )
      return 0LL;
  }
  if ( *((_QWORD *)this + 72) )
  {
LABEL_20:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v15 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
    v44 = 0LL;
    v16 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v15[15])(a2, &v44);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14D,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v16);
    }
    else
    {
      if ( v44 )
      {
        v41 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v44 + 200LL))(v44, &v41);
        v17 = v18;
        if ( v18 < 0 )
        {
          v28 = (unsigned int)v18;
          v29 = 337LL;
LABEL_102:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v29,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
            (const char *)v28);
LABEL_40:
          if ( v41 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v41 + 16LL))(v41);
          goto LABEL_42;
        }
        if ( !v41 )
        {
          v17 = -2005139197;
          v29 = 338LL;
LABEL_101:
          v28 = (unsigned int)v17;
          goto LABEL_102;
        }
        v19 = a3 & 0x800000;
        if ( (a3 & 0x800000) != 0 )
          goto LABEL_91;
        v20 = 0;
        v21 = 0;
        if ( !*((_BYTE *)this + 145) )
        {
LABEL_32:
          if ( (unsigned int)dword_1801B5350 > 4 )
          {
            v94 = 4LL;
            v48 = v21 != 0;
            v93 = &v48;
            v63[1] = 4;
            v87 = off_1801B5358;
            v64 = 0LL;
            v63[0] = 184549376;
            v88 = *(unsigned __int16 *)off_1801B5358;
            v90 = &unk_1801794A0;
            v92 = 1;
            v89 = 2;
            v91 = 38;
            EtwEventWriteTransfer(qword_1801B5370, v63, 0LL, 0LL, 3, &v87);
          }
          if ( v21 )
            v20 = CoGetPSClsid(&GUID_122595e5_20a2_47d3_8604_4a613ff6cca7, &pClsid) >= 0;
          if ( (unsigned int)dword_1801B5350 > 4 )
          {
            v102 = 4LL;
            v49 = v20;
            v101 = &v49;
            v65[1] = 4;
            v95 = off_1801B5358;
            v65[0] = 184549376;
            v66 = 0LL;
            v96 = *(unsigned __int16 *)off_1801B5358;
            v98 = &unk_180179477;
            v100 = 1;
            v97 = 2;
            v99 = 29;
            EtwEventWriteTransfer(qword_1801B5370, v65, 0LL, 0LL, 3, &v95);
          }
          if ( !v20 )
          {
            v17 = 0;
            goto LABEL_40;
          }
          v42 = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v42);
          v30 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v42);
          v17 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x159,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v30);
LABEL_89:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
            goto LABEL_40;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v42 + 368LL))(v42) )
          {
            v17 = 0;
            goto LABEL_89;
          }
          v43 = 0LL;
          v31 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v41 + 24LL))(v41);
          v33 = Create_SpatialAudioDevicePropertyReader(v31, 0LL, &v43, v32);
          v17 = v33;
          if ( v33 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x160,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v33);
LABEL_88:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
            goto LABEL_89;
          }
          v34 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 112LL))(v43, &v50);
          v17 = v34;
          if ( v34 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v34);
            goto LABEL_88;
          }
          if ( !v50 )
          {
            v17 = 0;
            goto LABEL_88;
          }
          v72 = 0x100000001LL;
          v45 = (struct SPATIAL_STREAM_PROPERTIES *)&v71;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
LABEL_91:
          v57 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                        (char *)this + 152,
                                                        v41);
          v35 = v57;
          if ( !v57 )
          {
            v36 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v41, &v57);
            v17 = v36;
            if ( v36 < 0 )
            {
              v28 = (unsigned int)v36;
              v29 = 374LL;
              goto LABEL_102;
            }
            v35 = v57;
            if ( !v57 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x177,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                v37);
              __debugbreak();
            }
          }
          v17 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v51, v58, v45, v35);
          if ( v17 < 0 )
          {
            if ( !*((_DWORD *)v35 + 3) && *(_QWORD *)v35 )
              ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
            v29 = 385LL;
            goto LABEL_101;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
          if ( !v19 )
          {
            v38 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v39 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
                    this,
                    v38,
                    *((_DWORD *)v45 + 2),
                    *((_DWORD *)v45 + 3));
            v40 = v39;
            if ( v39 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18B,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v39);
              return v40;
            }
          }
          return 0LL;
        }
        v55 = 0LL;
        v70 = 0LL;
        v22 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v69, &v70);
        if ( v22 < 0 )
        {
          RaiseException(v22, 1u, 0, 0LL);
          JUMPOUT(0x18008DBFDLL);
        }
        if ( (int)RoGetActivationFactory(v70, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v55) >= 0 )
        {
          v70 = 0LL;
          v54 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v55 + 64LL))(v55, &v54) >= 0 )
          {
            if ( !v54 )
              goto LABEL_30;
            v21 = 1;
          }
          if ( v54 )
            (*(void (**)(void))(*(_QWORD *)v54 + 16LL))();
          goto LABEL_30;
        }
        v70 = 0LL;
LABEL_30:
        if ( v55 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        goto LABEL_32;
      }
      v17 = -2005139190;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010ALL);
    }
LABEL_42:
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v17;
  }
  v12 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v53 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v13 < 0 )
    {
      RaiseException(v13, 1u, 0, 0LL);
      JUMPOUT(0x18008DAD8LL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v53);
    string = 0LL;
    if ( ActivationFactory < 0 )
      goto LABEL_15;
    v52 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 64LL))(v53, &v52) >= 0 )
    {
      if ( !v52 )
      {
LABEL_15:
        if ( v53 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
        goto LABEL_17;
      }
      v12 = 1;
    }
    if ( v52 )
      (*(void (**)(void))(*(_QWORD *)v52 + 16LL))();
    goto LABEL_15;
  }
LABEL_17:
  if ( (unsigned int)dword_1801B5350 > 4 )
  {
    v86 = 4LL;
    v47 = v12 != 0;
    v85 = &v47;
    v61[1] = 4;
    v79 = off_1801B5358;
    v61[0] = 184549376;
    v62 = 0LL;
    v80 = *(unsigned __int16 *)off_1801B5358;
    v84 = 1;
    v82 = &unk_1801794A0;
    v81 = 2;
    v83 = 38;
    EtwEventWriteTransfer(qword_1801B5370, v61, 0LL, 0LL, 3, &v79);
  }
  if ( !v12 )
    goto LABEL_20;
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
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x143,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v26);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-104LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  return v27;
}
