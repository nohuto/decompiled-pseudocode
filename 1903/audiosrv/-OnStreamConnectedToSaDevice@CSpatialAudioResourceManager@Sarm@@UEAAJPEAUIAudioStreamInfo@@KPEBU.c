/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x1800310F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x180035098 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C1F54 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x18011ECE4 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x18011FA28 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?Find@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@@Z @ 0x18011FEB8 (-Find@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResou.c)
 *     ?LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x180120C18 (-LogExclusiveListenerRequired@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180120F90 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180121B08 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180122260 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     ?reset@?$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180122ED0 (-reset@-$com_ptr_t@VCExclusiveModeListener@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
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
  int v32; // eax
  int v33; // eax
  struct Sarm::CEndpointResourcePool *v34; // r14
  int v35; // eax
  const char *v36; // r9
  __int64 v37; // rax
  int v38; // eax
  unsigned int v39; // ebx
  struct ISaDeviceProxy *v40; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  struct SPATIAL_STREAM_PROPERTIES *v44; // [rsp+58h] [rbp-A8h]
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  BOOL v46; // [rsp+68h] [rbp-98h] BYREF
  BOOL v47; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v50; // [rsp+78h] [rbp-88h]
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  struct Sarm::CEndpointResourcePool *v56; // [rsp+A8h] [rbp-58h] BYREF
  struct _GUID *v57; // [rsp+B0h] [rbp-50h]
  _DWORD v58[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h]
  _DWORD v60[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-30h]
  _DWORD v62[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-20h]
  _DWORD v64[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-10h]
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING string; // [rsp+110h] [rbp+10h] BYREF
  HSTRING_HEADER v68; // [rsp+118h] [rbp+18h] BYREF
  HSTRING v69; // [rsp+130h] [rbp+30h] BYREF
  __int64 v70; // [rsp+138h] [rbp+38h] BYREF
  __int64 v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int64 v73; // [rsp+150h] [rbp+50h]
  __int64 v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  __int64 v76; // [rsp+168h] [rbp+68h]
  CLSID pClsid; // [rsp+170h] [rbp+70h] BYREF
  void *v78; // [rsp+180h] [rbp+80h] BYREF
  int v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+18Ch] [rbp+8Ch]
  void *v81; // [rsp+190h] [rbp+90h]
  int v82; // [rsp+198h] [rbp+98h]
  int v83; // [rsp+19Ch] [rbp+9Ch]
  BOOL *v84; // [rsp+1A0h] [rbp+A0h]
  __int64 v85; // [rsp+1A8h] [rbp+A8h]
  void *v86; // [rsp+1B0h] [rbp+B0h] BYREF
  int v87; // [rsp+1B8h] [rbp+B8h]
  int v88; // [rsp+1BCh] [rbp+BCh]
  void *v89; // [rsp+1C0h] [rbp+C0h]
  int v90; // [rsp+1C8h] [rbp+C8h]
  int v91; // [rsp+1CCh] [rbp+CCh]
  BOOL *v92; // [rsp+1D0h] [rbp+D0h]
  __int64 v93; // [rsp+1D8h] [rbp+D8h]
  void *v94; // [rsp+1E0h] [rbp+E0h] BYREF
  int v95; // [rsp+1E8h] [rbp+E8h]
  int v96; // [rsp+1ECh] [rbp+ECh]
  void *v97; // [rsp+1F0h] [rbp+F0h]
  int v98; // [rsp+1F8h] [rbp+F8h]
  int v99; // [rsp+1FCh] [rbp+FCh]
  BOOL *v100; // [rsp+200h] [rbp+100h]
  __int64 v101; // [rsp+208h] [rbp+108h]
  void *v102; // [rsp+210h] [rbp+110h] BYREF
  int v103; // [rsp+218h] [rbp+118h]
  int v104; // [rsp+21Ch] [rbp+11Ch]
  void *v105; // [rsp+220h] [rbp+120h]
  int v106; // [rsp+228h] [rbp+128h]
  int v107; // [rsp+22Ch] [rbp+12Ch]
  const char *v108; // [rsp+230h] [rbp+130h]
  __int64 v109; // [rsp+238h] [rbp+138h]
  int *v110; // [rsp+240h] [rbp+140h]
  __int64 v111; // [rsp+248h] [rbp+148h]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v5 = a5;
  v57 = a4;
  v50 = a3;
  v44 = a5;
  v45 = 299;
  if ( (unsigned int)dword_1801B6350 > 5 )
  {
    v109 = 64LL;
    v108 = "Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice";
    v110 = &v45;
    v111 = 4LL;
    v58[1] = 5;
    v102 = off_1801B6358;
    v58[0] = 184549376;
    v59 = 0LL;
    v103 = *(unsigned __int16 *)off_1801B6358;
    v105 = &unk_18017A74F;
    v107 = 1;
    v104 = 2;
    v106 = 21;
    EtwEventWriteTransfer(qword_1801B6370, v58, 0LL, 0LL, 4, &v102);
    v5 = v44;
    a4 = v57;
  }
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
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
  v55 = 0LL;
  (*v9)(a2, &GUID_dafb0152_6a78_488a_b685_6dd5845a8db9, &v55);
  if ( v55 )
  {
    v11 = *((_QWORD *)this + 29);
    if ( v11 )
    {
      v24 = *(_QWORD *)(v11 + 8LL * ((unsigned int)v55 % *((_DWORD *)this + 62)));
      if ( v24 )
      {
        while ( *(_DWORD *)(v24 + 112) != (_DWORD)v55 || *(_QWORD *)v24 != v55 )
        {
          v24 = *(_QWORD *)(v24 + 104);
          if ( !v24 )
            goto LABEL_8;
        }
        v10 = v24 + 8;
      }
    }
LABEL_8:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    if ( v10 )
      return 0LL;
  }
  if ( *((_QWORD *)this + 72) )
  {
LABEL_20:
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    v15 = *(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, __int64 *))a2;
    v43 = 0LL;
    v16 = ((__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v15[15])(a2, &v43);
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
      if ( v43 )
      {
        v40 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v43 + 200LL))(v43, &v40);
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
          if ( v40 )
            (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v40 + 16LL))(v40);
          goto LABEL_42;
        }
        if ( !v40 )
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
          if ( (unsigned int)dword_1801B6350 > 4 )
          {
            v93 = 4LL;
            v47 = v21 != 0;
            v92 = &v47;
            v62[1] = 4;
            v86 = off_1801B6358;
            v63 = 0LL;
            v62[0] = 184549376;
            v87 = *(unsigned __int16 *)off_1801B6358;
            v89 = &unk_18017A4C0;
            v91 = 1;
            v88 = 2;
            v90 = 38;
            EtwEventWriteTransfer(qword_1801B6370, v62, 0LL, 0LL, 3, &v86);
          }
          if ( v21 )
            v20 = CoGetPSClsid(&GUID_122595e5_20a2_47d3_8604_4a613ff6cca7, &pClsid) >= 0;
          if ( (unsigned int)dword_1801B6350 > 4 )
          {
            v101 = 4LL;
            v48 = v20;
            v100 = &v48;
            v64[1] = 4;
            v94 = off_1801B6358;
            v64[0] = 184549376;
            v65 = 0LL;
            v95 = *(unsigned __int16 *)off_1801B6358;
            v97 = &unk_18017A497;
            v99 = 1;
            v96 = 2;
            v98 = 29;
            EtwEventWriteTransfer(qword_1801B6370, v64, 0LL, 0LL, 3, &v94);
          }
          if ( !v20 )
          {
            v17 = 0;
            goto LABEL_40;
          }
          v41 = 0LL;
          wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v41);
          v30 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v41);
          v17 = v30;
          if ( v30 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x159,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v30);
LABEL_89:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
            goto LABEL_40;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 368LL))(v41) )
          {
            v17 = 0;
            goto LABEL_89;
          }
          v42 = 0LL;
          v31 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v40 + 24LL))(v40);
          v32 = Create_SpatialAudioDevicePropertyReader(v31, 0LL, &v42);
          v17 = v32;
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x160,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v32);
LABEL_88:
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
            goto LABEL_89;
          }
          v33 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 112LL))(v42, &v49);
          v17 = v33;
          if ( v33 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x163,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)(unsigned int)v33);
            goto LABEL_88;
          }
          if ( !v49 )
          {
            v17 = 0;
            goto LABEL_88;
          }
          v71 = 0x100000001LL;
          v44 = (struct SPATIAL_STREAM_PROPERTIES *)&v70;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
LABEL_91:
          v56 = (struct Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Find(
                                                        (char *)this + 152,
                                                        v40);
          v34 = v56;
          if ( !v56 )
          {
            v35 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v40, &v56);
            v17 = v35;
            if ( v35 < 0 )
            {
              v28 = (unsigned int)v35;
              v29 = 374LL;
              goto LABEL_102;
            }
            v34 = v56;
            if ( !v56 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x177,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                v36);
              __debugbreak();
            }
          }
          v17 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v50, v57, v44, v34);
          if ( v17 < 0 )
          {
            if ( !*((_DWORD *)v34 + 3) && *(_QWORD *)v34 )
              ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos((char *)this + 152);
            v29 = 385LL;
            goto LABEL_101;
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v40);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
          if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
          if ( !v19 )
          {
            v37 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
            v38 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
                    this,
                    v37,
                    *((_DWORD *)v44 + 2),
                    *((_DWORD *)v44 + 3));
            v39 = v38;
            if ( v38 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x18B,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                (const char *)(unsigned int)v38);
              return v39;
            }
          }
          return 0LL;
        }
        v54 = 0LL;
        v69 = 0LL;
        v22 = WindowsCreateStringReference(L"Windows.Graphics.Holographic.HolographicDisplay", 0x2Fu, &v68, &v69);
        if ( v22 < 0 )
        {
          RaiseException(v22, 1u, 0, 0LL);
          JUMPOUT(0x1800990E9LL);
        }
        if ( (int)RoGetActivationFactory(v69, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v54) >= 0 )
        {
          v69 = 0LL;
          v53 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v54 + 64LL))(v54, &v53) >= 0 )
          {
            if ( !v53 )
              goto LABEL_30;
            v21 = 1;
          }
          if ( v53 )
            (*(void (**)(void))(*(_QWORD *)v53 + 16LL))();
          goto LABEL_30;
        }
        v69 = 0LL;
LABEL_30:
        if ( v54 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
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
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v17;
  }
  v12 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v52 = 0LL;
    string = 0LL;
    v13 = WindowsCreateStringReference(
            L"Windows.Graphics.Holographic.HolographicDisplay",
            0x2Fu,
            &hstringHeader,
            &string);
    if ( v13 < 0 )
    {
      RaiseException(v13, 1u, 0, 0LL);
      JUMPOUT(0x180098FC4LL);
    }
    ActivationFactory = RoGetActivationFactory(string, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v52);
    string = 0LL;
    if ( ActivationFactory < 0 )
      goto LABEL_15;
    v51 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v52 + 64LL))(v52, &v51) >= 0 )
    {
      if ( !v51 )
      {
LABEL_15:
        if ( v52 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
        goto LABEL_17;
      }
      v12 = 1;
    }
    if ( v51 )
      (*(void (**)(void))(*(_QWORD *)v51 + 16LL))();
    goto LABEL_15;
  }
LABEL_17:
  if ( (unsigned int)dword_1801B6350 > 4 )
  {
    v85 = 4LL;
    v46 = v12 != 0;
    v84 = &v46;
    v60[1] = 4;
    v78 = off_1801B6358;
    v60[0] = 184549376;
    v61 = 0LL;
    v79 = *(unsigned __int16 *)off_1801B6358;
    v83 = 1;
    v81 = &unk_18017A4C0;
    v80 = 2;
    v82 = 38;
    EtwEventWriteTransfer(qword_1801B6370, v60, 0LL, 0LL, 3, &v78);
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
