/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140011514
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140003868 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400012B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1400018D8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14000CF94 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400165AC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400360CC (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     McTemplateU0 @ 0x140039D2C (McTemplateU0.c)
 *     McTemplateU0zq @ 0x140039D74 (McTemplateU0zq.c)
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
  _DWORD *v9; // rbx
  char *v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  BOOL v16; // esi
  int v17; // r12d
  int v18; // r13d
  struct IAudioEndpointRT *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  void *v23; // rax
  CEndpointInstance *v24; // r14
  CEndpointInstance *v25; // rbx
  __int64 v26; // rdi
  int v27; // eax
  unsigned int v28; // edx
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  int *ppv; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioEndpointRT *v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  int v45[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v47; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v48; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  char *v52; // [rsp+80h] [rbp-80h]
  CEndpointInstance *v53; // [rsp+88h] [rbp-78h]
  _WORD v54[12]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v55; // [rsp+A8h] [rbp-58h]
  int v56; // [rsp+BCh] [rbp-44h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  int v59; // [rsp+D0h] [rbp-30h]
  int v60; // [rsp+D4h] [rbp-2Ch]
  int v61; // [rsp+D8h] [rbp-28h]
  int v62; // [rsp+DCh] [rbp-24h]
  int v63; // [rsp+E0h] [rbp-20h]
  int v64; // [rsp+E4h] [rbp-1Ch]
  int v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  int v67; // [rsp+F0h] [rbp-10h]
  int v68; // [rsp+F4h] [rbp-Ch]
  BOOL v69; // [rsp+F8h] [rbp-8h]
  int v70; // [rsp+FCh] [rbp-4h]
  int v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  int v75; // [rsp+180h] [rbp+80h] BYREF
  __int64 v76; // [rsp+188h] [rbp+88h] BYREF

  v72 = -2LL;
  v2 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v44 = 0LL;
  v43 = 0LL;
  v76 = 0LL;
  if ( *((_DWORD *)a1 + 25) == 1 )
  {
    v30 = *((_QWORD *)a1 + 8);
    if ( !v30 )
    {
      v5 = -2147024809;
      v31 = 2147942487LL;
      v32 = 74LL;
LABEL_90:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)v31,
        (int)ppv);
      goto LABEL_45;
    }
    v44 = *((_QWORD *)a1 + 8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    v33 = v76;
    v76 = 0LL;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v44)(
            v44,
            &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
            &v76);
    v5 = v22;
    if ( v22 >= 0 )
    {
      v43 = 0LL;
      v22 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v44)(
              v44,
              &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
              &v43);
      v5 = v22;
      if ( v22 >= 0 )
        goto LABEL_29;
      v32 = 83LL;
    }
    else
    {
      v32 = 80LL;
    }
LABEL_89:
    v31 = (unsigned int)v22;
    goto LABEL_90;
  }
  v47 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v47);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v4,
      (int)ppv);
LABEL_85:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v47);
    goto LABEL_45;
  }
  hObject = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, HANDLE *))(*(_QWORD *)v47 + 40LL))(v47, *((_QWORD *)a1 + 7), &hObject);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v6,
      (int)ppv);
LABEL_84:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
    goto LABEL_85;
  }
  v46 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(HANDLE, GUID *, __int64 *))hObject)(
         hObject,
         &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
         &v46);
  v5 = v7;
  if ( v7 < 0 )
  {
    v34 = (unsigned int)v7;
    v35 = 96LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v35,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v34,
      (int)ppv);
LABEL_83:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v46);
    goto LABEL_84;
  }
  if ( !v46 )
  {
    v5 = -2147024809;
    v34 = 2147942487LL;
    v35 = 97LL;
    goto LABEL_60;
  }
  v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v51 = 0LL;
  v52 = 0LL;
  v50 = 65LL;
  v9 = 0LL;
  v48 = 0LL;
  v10 = 0LL;
  v53 = 0LL;
  v11 = (*(__int64 (**)(void))(*(_QWORD *)v46 + 48LL))();
  v12 = v8[8];
  if ( !v11 )
  {
    v10 = (char *)CoTaskMemAlloc(v12 + 64);
    v53 = (CEndpointInstance *)v10;
    if ( v10 )
    {
      *(_DWORD *)v10 = v8[8] + 64;
      *((_DWORD *)v10 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
      *((_DWORD *)v10 + 2) = *((_DWORD *)a1 + 25);
      *(_OWORD *)(v10 + 12) = *(_OWORD *)((char *)a1 + 104);
      *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)a1 + 152);
      memcpy_0(v10 + 44, v8, v8[8] + 18LL);
      v13 = v8[8] + 64;
      v52 = v10;
      goto LABEL_11;
    }
    v5 = -2147024882;
    v36 = 2147942414LL;
    v37 = 112LL;
LABEL_78:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v36,
      (int)ppv);
    goto LABEL_79;
  }
  v9 = CoTaskMemAlloc(v12 + 32);
  v48 = v9;
  if ( !v9 )
  {
    v5 = -2147024882;
    v36 = 2147942414LL;
    v37 = 127LL;
    goto LABEL_78;
  }
  *v9 = v8[8] + 32;
  v9[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
  v9[2] = *((_DWORD *)a1 + 25);
  memcpy_0(v9 + 3, v8, v8[8] + 18LL);
  v13 = v8[8] + 32;
  v52 = (char *)v9;
LABEL_11:
  LODWORD(v51) = v13;
  if ( !*((_DWORD *)a1 + 18) )
  {
    *(_QWORD *)v45 = 0LL;
    ppv = v45;
    v14 = (*(__int64 (__fastcall **)(HANDLE, GUID *, __int64, __int64 *))(*(_QWORD *)hObject + 24LL))(
            hObject,
            &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
            1LL,
            &v50);
    v5 = v14;
    if ( v14 < 0 )
    {
      v38 = 148LL;
    }
    else
    {
      v15 = v76;
      v76 = 0LL;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v45)(
              *(_QWORD *)v45,
              &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
              &v76);
      v5 = v14;
      if ( v14 >= 0 )
        goto LABEL_16;
      v38 = 150LL;
    }
LABEL_67:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v14,
      (int)v45);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v45);
LABEL_79:
    if ( v10 )
      CoTaskMemFree(v10);
    if ( v9 )
      CoTaskMemFree(v9);
    goto LABEL_83;
  }
  *(_QWORD *)v45 = 0LL;
  ppv = v45;
  v14 = (*(__int64 (__fastcall **)(HANDLE, GUID *, __int64, __int64 *))(*(_QWORD *)hObject + 24LL))(
          hObject,
          &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
          1LL,
          &v50);
  v5 = v14;
  if ( v14 < 0 )
  {
    v38 = 161LL;
    goto LABEL_67;
  }
  v39 = v76;
  v76 = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v45)(
          *(_QWORD *)v45,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v76);
  v5 = v14;
  if ( v14 < 0 )
  {
    v38 = 163LL;
    goto LABEL_67;
  }
LABEL_16:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v45);
  v16 = *((_DWORD *)a1 + 20) != 0;
  v17 = *((_DWORD *)a1 + 24);
  v18 = *((_DWORD *)a1 + 19);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v54, 0, 0x40uLL);
    v54[0] = 120;
    v56 = 0x20000;
    v55 = AEWMIGUID_ENDPOINT_ACTIVATION;
    v54[2] = 1025;
    v57 = 0LL;
    v58 = 0;
    v59 = *((_DWORD *)a1 + 34);
    v60 = *((_DWORD *)a1 + 25);
    v61 = *((_DWORD *)a1 + 18);
    v62 = *((_DWORD *)a1 + 36);
    v63 = *v8;
    v64 = *((_DWORD *)v8 + 1);
    v65 = v8[7];
    v66 = v8[1];
    v67 = *((_DWORD *)a1 + 8);
    v68 = v18;
    v69 = v16;
    v70 = v17;
    v71 = 0;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v54);
  }
  v19 = v43;
  v43 = 0LL;
  if ( v19 )
    ((void (__fastcall *)(struct IAudioEndpointRT *))v19->lpVtbl->Release)(v19);
  v20 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IAudioEndpointRT **))v76)(
          v76,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v43);
  v5 = v20;
  if ( v20 < 0 )
  {
    v37 = 183LL;
LABEL_77:
    v36 = (unsigned int)v20;
    goto LABEL_78;
  }
  v21 = v44;
  v44 = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v20 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, __int64 *))v43->lpVtbl->QueryInterface)(
          v43,
          &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
          &v44);
  v5 = v20;
  if ( v20 < 0 )
  {
    v37 = 186LL;
    goto LABEL_77;
  }
  if ( v10 )
    CoTaskMemFree(v10);
  if ( v9 )
    CoTaskMemFree(v9);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v46);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v47);
  v2 = a2;
LABEL_29:
  v75 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v76 + 40LL))(v76, &v75);
  v5 = v22;
  if ( v22 < 0 )
  {
    v32 = 191LL;
    goto LABEL_89;
  }
  if ( v75 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 48LL))(v44, 0x40000LL);
    v5 = v22;
    if ( v22 < 0 )
    {
      v32 = 197LL;
      goto LABEL_89;
    }
  }
  v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v76 + 24LL))(
          v76,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v22;
  if ( v22 < 0 )
  {
    v32 = 204LL;
    goto LABEL_89;
  }
  v23 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v48 = v23;
  if ( v23 )
    v24 = CEndpointInstance::CEndpointInstance(
            (CEndpointInstance *)v23,
            (struct IUnknown *)v43,
            0LL,
            *((_QWORD *)a1 + 4));
  else
    v24 = 0LL;
  v25 = v24;
  v53 = v24;
  if ( v24 )
  {
    v49 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v44)(
           v44,
           &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
           &v49) >= 0 )
    {
      hObject = 0LL;
      v26 = v49;
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        &hObject,
        0LL);
      v27 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v26 + 64LL))(v26, &hObject);
      v5 = v27;
      if ( v27 < 0 )
      {
        v40 = 223LL;
      }
      else
      {
        v48 = hObject;
        v27 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                (_QWORD *)v24 + 3,
                &v48);
        v5 = v27;
        if ( v27 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_41;
        }
        v40 = 226LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v27,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_42;
    }
LABEL_41:
    v25 = 0LL;
    *v2 = v24;
    v5 = 0;
LABEL_42:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v49);
    goto LABEL_43;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_43:
  if ( v25 )
    CEndpointInstance::`scalar deleting destructor'(v25, v28);
LABEL_45:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v76);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v43);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v44);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0();
  return v5;
}
