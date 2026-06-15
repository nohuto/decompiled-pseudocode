/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041630
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180053DBC (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     Create_SpatialAudioPositionCalc @ 0x180041A50 (Create_SpatialAudioPositionCalc.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180041C10 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18005EC00 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  const GUID *v8; // r8
  const GUID *v9; // r9
  char *v10; // rbx
  char *v11; // r15
  __int64 v12; // rcx
  LPUNKNOWN v13; // rcx
  HRESULT SpatialAudioPositionCalc; // edi
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  const GUID *v20; // r8
  const GUID *v21; // r9
  const GUID *v23; // r8
  const GUID *v24; // r9
  const GUID *v25; // r8
  const GUID *v26; // r9
  LPVOID v27; // rbx
  const GUID *v28; // r8
  const GUID *v29; // r9
  LPVOID v30; // rbx
  const GUID *v31; // r8
  const GUID *v32; // r9
  __int64 v33; // rdi
  __int64 v34; // rcx
  const GUID *v35; // r8
  const GUID *v36; // r9
  __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  int v39; // [rsp+40h] [rbp-C0h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+48h] [rbp-B8h] BYREF
  char *v41; // [rsp+50h] [rbp-B0h]
  HRESULT v42; // [rsp+58h] [rbp-A8h] BYREF
  int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  HRESULT v44; // [rsp+60h] [rbp-A0h] BYREF
  int v45; // [rsp+64h] [rbp-9Ch] BYREF
  HRESULT v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+6Ch] [rbp-94h] BYREF
  HRESULT v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+74h] [rbp-8Ch] BYREF
  HRESULT v50; // [rsp+78h] [rbp-88h] BYREF
  int v51; // [rsp+7Ch] [rbp-84h] BYREF
  HRESULT v52; // [rsp+80h] [rbp-80h] BYREF
  int v53; // [rsp+84h] [rbp-7Ch] BYREF
  HRESULT v54; // [rsp+88h] [rbp-78h] BYREF
  int v55; // [rsp+8Ch] [rbp-74h] BYREF
  int v56; // [rsp+90h] [rbp-70h] BYREF
  HRESULT v57; // [rsp+94h] [rbp-6Ch] BYREF
  int v58; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v59[2]; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  const char *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  int *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v67; // [rsp+100h] [rbp+0h] BYREF
  const char *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  int *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  HRESULT *v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v74; // [rsp+150h] [rbp+50h] BYREF
  const char *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  int *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  HRESULT *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  EVENT_DATA_DESCRIPTOR v81; // [rsp+1A0h] [rbp+A0h] BYREF
  const char *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  int *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  HRESULT *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  EVENT_DATA_DESCRIPTOR v88; // [rsp+1F0h] [rbp+F0h] BYREF
  const char *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  int *v91; // [rsp+220h] [rbp+120h]
  __int64 v92; // [rsp+228h] [rbp+128h]
  HRESULT *v93; // [rsp+230h] [rbp+130h]
  __int64 v94; // [rsp+238h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v95; // [rsp+240h] [rbp+140h] BYREF
  const char *v96; // [rsp+260h] [rbp+160h]
  __int64 v97; // [rsp+268h] [rbp+168h]
  int *v98; // [rsp+270h] [rbp+170h]
  __int64 v99; // [rsp+278h] [rbp+178h]
  HRESULT *v100; // [rsp+280h] [rbp+180h]
  __int64 v101; // [rsp+288h] [rbp+188h]
  EVENT_DATA_DESCRIPTOR v102; // [rsp+290h] [rbp+190h] BYREF
  const char *v103; // [rsp+2B0h] [rbp+1B0h]
  __int64 v104; // [rsp+2B8h] [rbp+1B8h]
  int *v105; // [rsp+2C0h] [rbp+1C0h]
  __int64 v106; // [rsp+2C8h] [rbp+1C8h]
  HRESULT *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  EVENT_DATA_DESCRIPTOR v109; // [rsp+2E0h] [rbp+1E0h] BYREF
  const char *v110; // [rsp+300h] [rbp+200h]
  __int64 v111; // [rsp+308h] [rbp+208h]
  int *v112; // [rsp+310h] [rbp+210h]
  __int64 v113; // [rsp+318h] [rbp+218h]
  HRESULT *v114; // [rsp+320h] [rbp+220h]
  __int64 v115; // [rsp+328h] [rbp+228h]
  EVENT_DATA_DESCRIPTOR v116; // [rsp+330h] [rbp+230h] BYREF
  const char *v117; // [rsp+350h] [rbp+250h]
  __int64 v118; // [rsp+358h] [rbp+258h]
  int *v119; // [rsp+360h] [rbp+260h]
  __int64 v120; // [rsp+368h] [rbp+268h]
  HRESULT *v121; // [rsp+370h] [rbp+270h]
  __int64 v122; // [rsp+378h] [rbp+278h]
  OLECHAR sz[40]; // [rsp+380h] [rbp+280h] BYREF

  v59[1] = -2LL;
  v6 = *((_QWORD *)this + 52);
  if ( v6 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 52) = 0LL;
  v41 = 0LL;
  v7 = (char *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v7;
  if ( v7 )
  {
    memset_0(v7 + 8, 0, 0x208uLL);
    *((_QWORD *)v10 + 66) = 0LL;
    *((_QWORD *)v10 + 67) = 0LL;
    *(_QWORD *)v10 = &SpatialAudioStateIO::`vftable';
    *((_QWORD *)v10 + 68) = 0LL;
    *((_QWORD *)v10 + 69) = 0LL;
    *((_QWORD *)v10 + 70) = 0LL;
    v11 = v10 + 568;
    *((_QWORD *)v10 + 72) = &Microsoft::WRL::FtmBase::`vftable';
    *((_QWORD *)v10 + 75) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v12 = *((_QWORD *)v10 + 75);
      if ( v12 )
      {
        *((_QWORD *)v10 + 75) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v10 + 600);
    }
    v13 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v13->lpVtbl->Release)(v13);
    }
    *((_DWORD *)v10 + 153) = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v10 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &SpatialAudioDeviceStateReader::`vftable';
    *(_QWORD *)v11 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v10 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v59[0] = v10;
    SpatialAudioPositionCalc = SpatialAudioIO::Initialize((SpatialAudioIO *)v10, a2, a3);
    if ( SpatialAudioPositionCalc < 0
      || (SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10),
          SpatialAudioPositionCalc < 0) )
    {
      Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(v59);
    }
    else
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v10 + 568);
      v41 = v10;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 16LL))(v10 + 568);
      SpatialAudioPositionCalc = 0;
    }
    v39 = SpatialAudioPositionCalc;
    if ( SpatialAudioPositionCalc >= 0 )
    {
      SpatialAudioPositionCalc = (**((__int64 (__fastcall ***)(__int64, GUID *, char *))v41 + 71))(
                                   (__int64)(v41 + 568),
                                   &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
                                   (char *)this + 416);
      goto LABEL_17;
    }
  }
  else
  {
    SpatialAudioPositionCalc = -2147024882;
    v39 = -2147024882;
  }
  if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v61 = "Create_SpatialAudioDeviceStateReader";
    v62 = 37LL;
    v55 = 53;
    v63 = &v55;
    v64 = 4LL;
    v65 = &v39;
    v66 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v8, v9, 5u, &pData);
  }
LABEL_17:
  v15 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v15 + 71) + 16LL))(v15 + 568);
  }
  v57 = SpatialAudioPositionCalc;
  if ( SpatialAudioPositionCalc >= 0 )
  {
    if ( a3 )
    {
      if ( *((struct IPropertyStore **)this + 51) != a3 )
      {
        ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
        v16 = *((_QWORD *)this + 51);
        *((_QWORD *)this + 51) = a3;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_24;
    }
    ppv = 0LL;
    v37 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    SpatialAudioPositionCalc = CoCreateInstance(
                                 &CLSID_MMDeviceEnumerator,
                                 0LL,
                                 0x17u,
                                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                 &ppv);
    v42 = SpatialAudioPositionCalc;
    if ( SpatialAudioPositionCalc >= 0 )
    {
      memset_0(sz, 0, 0x4EuLL);
      SpatialAudioPositionCalc = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
      v44 = SpatialAudioPositionCalc;
      if ( SpatialAudioPositionCalc >= 0 )
      {
        if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
        {
          v27 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
          SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v27 + 40LL))(
                                       v27,
                                       a2,
                                       &v37);
          v46 = SpatialAudioPositionCalc;
          if ( SpatialAudioPositionCalc < 0 )
          {
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v89 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v90 = 57LL;
              v45 = 227;
              v91 = &v45;
              v92 = 4LL;
              v93 = &v46;
              v94 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v28, v29, 5u, &v88);
            }
            goto LABEL_38;
          }
        }
        else
        {
          v30 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
          SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v30 + 32LL))(
                                       v30,
                                       0LL,
                                       1LL,
                                       &v37);
          v48 = SpatialAudioPositionCalc;
          if ( SpatialAudioPositionCalc < 0 )
          {
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v96 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v97 = 57LL;
              v47 = 222;
              v98 = &v47;
              v99 = 4LL;
              v100 = &v48;
              v101 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v31, v32, 5u, &v95);
            }
            goto LABEL_38;
          }
        }
        v33 = v37;
        v34 = *((_QWORD *)this + 51);
        if ( v34 )
        {
          *((_QWORD *)this + 51) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v33 + 32LL))(
                                     v33,
                                     0LL,
                                     (char *)this + 408);
        v50 = SpatialAudioPositionCalc;
        if ( SpatialAudioPositionCalc >= 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
LABEL_24:
          v17 = *((_QWORD *)this + 50);
          if ( v17 )
          {
            *((_QWORD *)this + 50) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc((char *)this + 400);
          v52 = SpatialAudioPositionCalc;
          if ( SpatialAudioPositionCalc < 0 )
          {
            if ( (unsigned int)dword_1801B1488 > 2 )
            {
              v110 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v111 = 57LL;
              v51 = 236;
              v112 = &v51;
              v113 = 4LL;
              v114 = &v52;
              v115 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v18, v19, 5u, &v109);
            }
          }
          else
          {
            SpatialAudioPositionCalc = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
            v54 = SpatialAudioPositionCalc;
            if ( SpatialAudioPositionCalc < 0 && (unsigned int)dword_1801B1488 > 2 )
            {
              v117 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              v118 = 57LL;
              v53 = 240;
              v119 = &v53;
              v120 = 4LL;
              v121 = &v54;
              v122 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v20, v21, 5u, &v116);
            }
          }
          return (unsigned int)SpatialAudioPositionCalc;
        }
        if ( (unsigned int)dword_1801B1488 > 2 )
        {
          v103 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
          v104 = 57LL;
          v49 = 231;
          v105 = &v49;
          v106 = 4LL;
          v107 = &v50;
          v108 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v35, v36, 5u, &v102);
        }
      }
      else if ( (unsigned int)dword_1801B1488 > 2 )
      {
        v82 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        v83 = 57LL;
        v43 = 217;
        v84 = &v43;
        v85 = 4LL;
        v86 = &v44;
        v87 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v25, v26, 5u, &v81);
      }
    }
    else if ( (unsigned int)dword_1801B1488 > 2 )
    {
      v75 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      v76 = 57LL;
      v58 = 213;
      v77 = &v58;
      v78 = 4LL;
      v79 = &v42;
      v80 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v23, v24, 5u, &v74);
    }
LABEL_38:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return (unsigned int)SpatialAudioPositionCalc;
  }
  if ( (unsigned int)dword_1801B1488 > 2 )
  {
    v68 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    v69 = 57LL;
    v56 = 201;
    v70 = &v56;
    v71 = 4LL;
    v72 = &v57;
    v73 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1488, &unk_180177A22, v8, v9, 5u, &v67);
  }
  return (unsigned int)SpatialAudioPositionCalc;
}
