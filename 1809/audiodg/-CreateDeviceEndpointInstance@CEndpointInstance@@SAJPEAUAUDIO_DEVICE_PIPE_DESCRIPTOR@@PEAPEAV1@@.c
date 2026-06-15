/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003420
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400109A0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140002390 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C35C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14003B42C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     McTemplateU0 @ 0x14003DAF8 (McTemplateU0.c)
 *     McTemplateU0zq @ 0x14003DB40 (McTemplateU0zq.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  HRESULT v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // r15
  _DWORD *v9; // rdi
  _DWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  _DWORD *v13; // rax
  _DWORD *v14; // rsi
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  BOOL v18; // esi
  int v19; // r12d
  int v20; // r13d
  struct IUnknown *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  CEndpointInstance *v28; // rax
  CEndpointInstance *v29; // rdi
  struct IUnknown *v30; // rdx
  __int64 v31; // rbx
  CEndpointInstance *v32; // rbx
  int v33; // eax
  unsigned int v34; // edx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  _DWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  __int64 v45; // rdx
  HANDLE *ppv; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v48; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v52; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v53; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  __int64 v56; // [rsp+78h] [rbp-88h]
  _DWORD *v57; // [rsp+80h] [rbp-80h]
  CEndpointInstance *v58; // [rsp+88h] [rbp-78h]
  _WORD v59[12]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A8h] [rbp-58h]
  int v61; // [rsp+BCh] [rbp-44h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+C8h] [rbp-38h]
  int v64; // [rsp+D0h] [rbp-30h]
  int v65; // [rsp+D4h] [rbp-2Ch]
  int v66; // [rsp+D8h] [rbp-28h]
  int v67; // [rsp+DCh] [rbp-24h]
  int v68; // [rsp+E0h] [rbp-20h]
  int v69; // [rsp+E4h] [rbp-1Ch]
  int v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+ECh] [rbp-14h]
  int v72; // [rsp+F0h] [rbp-10h]
  int v73; // [rsp+F4h] [rbp-Ch]
  BOOL v74; // [rsp+F8h] [rbp-8h]
  int v75; // [rsp+FCh] [rbp-4h]
  int v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+180h] [rbp+80h] BYREF
  __int64 v81; // [rsp+188h] [rbp+88h] BYREF

  v77 = -2LL;
  v2 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v49 = 0LL;
  v48 = 0LL;
  v81 = 0LL;
  if ( *((_DWORD *)a1 + 25) != 1 )
  {
    v52 = 0LL;
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &v52);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v4,
        (int)ppv);
LABEL_95:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v52);
      goto LABEL_47;
    }
    v50 = 0LL;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v52 + 40LL))(v52, *((_QWORD *)a1 + 7), &v50);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v6,
        (int)ppv);
LABEL_94:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v50);
      goto LABEL_95;
    }
    v51 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v50)(
           v50,
           &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c,
           &v51);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v7,
        (int)ppv);
    }
    else
    {
      if ( v51 )
      {
        v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        v55 = 65LL;
        v56 = 0LL;
        v57 = 0LL;
        v9 = 0LL;
        v53 = 0LL;
        v10 = 0LL;
        v58 = 0LL;
        v11 = (*(__int64 (**)(void))(*(_QWORD *)v51 + 48LL))();
        v12 = v8[8];
        if ( v11 )
        {
          v41 = CoTaskMemAlloc(v12 + 32);
          v14 = v41;
          if ( v41 )
          {
            v9 = v41;
            v53 = v41;
            *v41 = v8[8] + 32;
            v41[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v9[2] = *((_DWORD *)a1 + 25);
            memcpy_0(v9 + 3, v8, v8[8] + 18LL);
            v15 = v8[8] + 32;
LABEL_11:
            v57 = v14;
            LODWORD(v56) = v15;
            if ( *((_DWORD *)a1 + 18) )
            {
              hObject = 0LL;
              ppv = &hObject;
              v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v50 + 24LL))(
                      v50,
                      &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                      1LL,
                      &v55);
              v5 = v16;
              if ( v16 >= 0 )
              {
                v43 = v81;
                v81 = 0LL;
                if ( v43 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
                v16 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v81);
                v5 = v16;
                if ( v16 >= 0 )
                {
LABEL_16:
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
                  v18 = *((_DWORD *)a1 + 20) != 0;
                  v19 = *((_DWORD *)a1 + 24);
                  v20 = *((_DWORD *)a1 + 19);
                  if ( g_u32AEWMILogLevel >= 4 )
                  {
                    memset_0(v59, 0, 0x40uLL);
                    v59[0] = 120;
                    v61 = 0x20000;
                    v60 = AEWMIGUID_ENDPOINT_ACTIVATION;
                    v59[2] = 1025;
                    v62 = 0LL;
                    v63 = 0;
                    v64 = *((_DWORD *)a1 + 34);
                    v65 = *((_DWORD *)a1 + 25);
                    v66 = *((_DWORD *)a1 + 18);
                    v67 = *((_DWORD *)a1 + 36);
                    v68 = *v8;
                    v69 = *((_DWORD *)v8 + 1);
                    v70 = v8[7];
                    v71 = v8[1];
                    v72 = *((_DWORD *)a1 + 8);
                    v73 = v20;
                    v74 = v18;
                    v75 = v19;
                    v76 = 0;
                    EtwLogTraceEvent(g_hAEWMITraceHandle, v59);
                  }
                  v21 = v48;
                  v48 = 0LL;
                  if ( v21 )
                    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
                  v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v81)(
                          v81,
                          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                          &v48);
                  v5 = v22;
                  if ( v22 < 0 )
                  {
                    v44 = (unsigned int)v22;
                    v40 = 181LL;
                  }
                  else
                  {
                    v23 = v49;
                    v49 = 0LL;
                    if ( v23 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
                    v24 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v48->lpVtbl->QueryInterface)(
                            v48,
                            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                            &v49);
                    v5 = v24;
                    if ( v24 >= 0 )
                    {
                      if ( v10 )
                        CoTaskMemFree(v10);
                      if ( v9 )
                        CoTaskMemFree(v9);
                      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v51);
                      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v50);
                      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v52);
                      v2 = a2;
                      goto LABEL_29;
                    }
                    v44 = (unsigned int)v24;
                    v40 = 184LL;
                  }
                  goto LABEL_88;
                }
                v42 = 161LL;
              }
              else
              {
                v42 = 159LL;
              }
            }
            else
            {
              hObject = 0LL;
              ppv = &hObject;
              v16 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *))(*(_QWORD *)v50 + 24LL))(
                      v50,
                      &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                      1LL,
                      &v55);
              v5 = v16;
              if ( v16 < 0 )
              {
                v42 = 146LL;
              }
              else
              {
                v17 = v81;
                v81 = 0LL;
                if ( v17 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                v16 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
                        hObject,
                        &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                        &v81);
                v5 = v16;
                if ( v16 >= 0 )
                  goto LABEL_16;
                v42 = 148LL;
              }
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v42,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)(unsigned int)v16,
              (int)&hObject);
            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
LABEL_89:
            if ( v10 )
              CoTaskMemFree(v10);
            if ( v9 )
              CoTaskMemFree(v9);
            goto LABEL_93;
          }
          v40 = 125LL;
        }
        else
        {
          v13 = CoTaskMemAlloc(v12 + 64);
          v14 = v13;
          if ( v13 )
          {
            v10 = v13;
            v58 = (CEndpointInstance *)v13;
            *v13 = v8[8] + 64;
            v13[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
            v10[2] = *((_DWORD *)a1 + 25);
            *(_OWORD *)(v10 + 3) = *(_OWORD *)((char *)a1 + 104);
            *(_OWORD *)(v10 + 7) = *(_OWORD *)((char *)a1 + 152);
            memcpy_0(v10 + 11, v8, v8[8] + 18LL);
            v15 = v8[8] + 64;
            goto LABEL_11;
          }
          v40 = 110LL;
        }
        v5 = -2147024882;
        v44 = 2147942414LL;
LABEL_88:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v40,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v44,
          (int)ppv);
        goto LABEL_89;
      }
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)0x80070057LL,
        (int)ppv);
    }
LABEL_93:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v51);
    goto LABEL_94;
  }
  v36 = *((_QWORD *)a1 + 8);
  if ( !v36 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070057LL,
      (int)ppv);
    goto LABEL_47;
  }
  v49 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
  v37 = v81;
  v81 = 0LL;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v38 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v49)(
          v49,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v81);
  v5 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v38,
      (int)ppv);
    goto LABEL_47;
  }
  v48 = 0LL;
  v39 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v49)(
          v49,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v48);
  v5 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x51,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v39,
      (int)ppv);
    goto LABEL_47;
  }
LABEL_29:
  v80 = 0;
  v25 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v81 + 40LL))(v81, &v80);
  v5 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v25,
      (int)ppv);
    goto LABEL_47;
  }
  if ( v80 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 48LL))(v49, 0x40000LL);
    v5 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v26,
        (int)ppv);
      goto LABEL_47;
    }
  }
  v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v81 + 24LL))(
          v81,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v27,
      (int)ppv);
    goto LABEL_47;
  }
  v28 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v29 = v28;
  v53 = v28;
  if ( v28 )
  {
    v30 = v48;
    v31 = *((_QWORD *)a1 + 4);
    *(_QWORD *)v28 = 0LL;
    *((_QWORD *)v28 + 3) = 0LL;
    if ( *(struct IUnknown **)v28 != v30 )
      ATL::AtlComPtrAssign((struct IUnknown **)v28, v30);
    *((_QWORD *)v29 + 2) = 0LL;
    *((_QWORD *)v29 + 1) = v31;
  }
  else
  {
    v29 = 0LL;
  }
  v32 = v29;
  v58 = v29;
  if ( v29 )
  {
    v54 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v49)(
           v49,
           &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
           &v54) >= 0 )
    {
      hObject = 0LL;
      v33 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v54 + 64LL))(v54, &hObject);
      v5 = v33;
      if ( v33 < 0 )
      {
        v45 = 221LL;
      }
      else
      {
        v53 = hObject;
        v33 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                (_QWORD *)v29 + 3,
                &v53);
        v5 = v33;
        if ( v33 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_43;
        }
        v45 = 224LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v45,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v33,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_44;
    }
LABEL_43:
    v32 = 0LL;
    *v2 = v29;
    v5 = 0;
LABEL_44:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v54);
    goto LABEL_45;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_45:
  if ( v32 )
    CEndpointInstance::`scalar deleting destructor'(v32, v34);
LABEL_47:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v81);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v48);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v49);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0();
  return v5;
}
