/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000C3D0
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140014980 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14003C760 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140001730 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DC4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066B4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D1C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009ECC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000DE44 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140010398 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400105F4 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x1400130B4 (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400143AC (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x14002ED0C (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x14003E030 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x14003F550 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x14003F9F4 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v5; // r13
  struct _RTL_CRITICAL_SECTION *v7; // r15
  struct _RTL_CRITICAL_SECTION *v8; // r14
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  int v12; // eax
  CPipeInstance *v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char *v18; // rcx
  void (__fastcall ***v19)(_QWORD, GUID *, struct ISubmixInternal **); // r9
  struct ISubmixInternal *v20; // rax
  const struct CPipeInstance *v21; // rbx
  CStreamInstance *v22; // rdi
  __int64 v23; // r9
  int v24; // eax
  char *v25; // rbx
  char *v26; // rdi
  int v27; // eax
  _OWORD *v28; // rcx
  _OWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 result; // rax
  ATL::CAtlException *v35; // rbx
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r9
  struct _RTL_CRITICAL_SECTION *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // edx
  int HistoryBufferManager; // eax
  __int64 v44; // rdx
  unsigned int v45; // edx
  struct SYSTEM_AUDIO_STREAM *v46; // rbx
  __int64 v47; // rdx
  unsigned int v48; // edx
  struct SYSTEM_AUDIO_STREAM *v49; // [rsp+20h] [rbp-258h]
  int v50; // [rsp+20h] [rbp-258h]
  int v51; // [rsp+20h] [rbp-258h]
  CStreamInstance *v52; // [rsp+30h] [rbp-248h] BYREF
  struct ISubmixInternal *v53; // [rsp+38h] [rbp-240h] BYREF
  struct ICrossProcessMemory *v54; // [rsp+40h] [rbp-238h] BYREF
  struct ICrossProcessEvent *v55; // [rsp+48h] [rbp-230h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-228h] BYREF
  char *v57; // [rsp+58h] [rbp-220h] BYREF
  CPipeInstance *v58; // [rsp+60h] [rbp-218h] BYREF
  struct SYSTEM_AUDIO_STREAM *v59; // [rsp+68h] [rbp-210h]
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+70h] [rbp-208h]
  char *v61; // [rsp+78h] [rbp-200h]
  char *v62; // [rsp+80h] [rbp-1F8h]
  char *v63; // [rsp+88h] [rbp-1F0h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v64; // [rsp+90h] [rbp-1E8h]
  struct SYSTEM_AUDIO_STREAM *v65; // [rsp+98h] [rbp-1E0h]
  __int128 v66; // [rsp+A0h] [rbp-1D8h]
  __int64 v67; // [rsp+B0h] [rbp-1C8h]
  struct _RTL_CRITICAL_SECTION *v68; // [rsp+B8h] [rbp-1C0h]
  ATL::CAtlException *v69; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v70; // [rsp+C8h] [rbp-1B0h]
  char v71; // [rsp+D8h] [rbp-1A0h]
  _BYTE v72[296]; // [rsp+E0h] [rbp-198h] BYREF
  __int128 v73; // [rsp+208h] [rbp-70h]
  __int128 v74; // [rsp+218h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  v67 = -2LL;
  v59 = a4;
  lpCriticalSection = a3;
  v5 = a2;
  v57 = (char *)this;
  v64 = a2;
  v65 = a4;
  v58 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v61 = (char *)this + 176;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v60 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v68 = v7;
  *((_DWORD *)a4 + 238) = 0;
  if ( *((_BYTE *)this + 313) )
  {
    v10 = -2147418113;
    v36 = 2147549183LL;
    v37 = 497LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v36,
      (int)v49);
    goto LABEL_40;
  }
  v9 = ValidateStreamDescriptor(v5);
  v10 = v9;
  if ( v9 < 0 )
  {
    v36 = (unsigned int)v9;
    v37 = 500LL;
    goto LABEL_35;
  }
  v73 = *((_OWORD *)v5 + 3);
  v74 = v73;
  EtwEventActivityIdControl(4LL, &v74);
  if ( *((_QWORD *)this + 29) != *((_QWORD *)v5 + 4) )
  {
    v38 = 506LL;
LABEL_37:
    v10 = -2147024809;
    v39 = 2147942487LL;
LABEL_38:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v39,
      (int)v49);
LABEL_39:
    EtwEventActivityIdControl(4LL, &v74);
LABEL_40:
    if ( v7 )
    {
      v40 = v7;
LABEL_42:
      LeaveCriticalSection(v40);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  v11 = *(_QWORD *)((char *)v5 + 164) - *((_QWORD *)this + 30);
  if ( !v11 )
    v11 = *(_QWORD *)((char *)v5 + 172) - *((_QWORD *)this + 31);
  if ( v11 )
  {
    v41 = *(_QWORD *)((char *)v5 + 164) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v41 )
      v41 = *(_QWORD *)((char *)v5 + 172) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v41 )
    {
      v38 = 512LL;
      goto LABEL_37;
    }
  }
  v12 = CPipeInstance::CreateStreamPipeInstance(
          *((struct IUnknown **)this + 33),
          v5,
          *((struct CPipeInstance **)this + 3),
          *((struct tWAVEFORMATEX **)this + 28),
          v49,
          &v58);
  v10 = v12;
  if ( v12 < 0 )
  {
    v39 = (unsigned int)v12;
    v38 = 519LL;
    goto LABEL_38;
  }
  v13 = v58;
  v14 = CPipeInstance::Initialize(v58);
  v10 = v14;
  if ( v14 < 0 )
  {
    v39 = (unsigned int)v14;
    v38 = 520LL;
    goto LABEL_38;
  }
  v15 = CPipeInstance::ConnectAPOs(v13, (struct IAudioGraphCallback *)lpCriticalSection);
  v10 = v15;
  if ( v15 < 0 )
  {
    v39 = (unsigned int)v15;
    v38 = 521LL;
    goto LABEL_38;
  }
  v55 = 0LL;
  v54 = 0LL;
  v16 = CPipeInstance::CreateStreamInstance(v13, v5, &v54, &v55, v59);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      v50);
LABEL_52:
    if ( v55 )
      (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v55 + 16LL))(v55);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v54);
    goto LABEL_39;
  }
  v52 = 0LL;
  v17 = CStreamInstance::CreateStreamInstance(
          &v52,
          *((_DWORD *)v5 + 3),
          *(_DWORD *)v5,
          (__int64)v13,
          (__int64)v13,
          *((_QWORD *)v5 + 31));
  v10 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v17,
      v51);
LABEL_58:
    if ( v52 )
      CStreamInstance::`scalar deleting destructor'(v52, v42);
    v52 = 0LL;
    goto LABEL_52;
  }
  v58 = 0LL;
  v18 = v57;
  v19 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)v57 + 38);
  if ( v19 )
  {
    (**v19)(*((_QWORD *)v57 + 38), &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v53);
    v20 = v53;
    v18 = v57;
  }
  else
  {
    v20 = 0LL;
    v53 = 0LL;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)v20;
  if ( v20 )
  {
    v21 = (const struct CPipeInstance *)*((_QWORD *)v18 + 34);
    v22 = v52;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 64LL))(v18);
    v24 = CStreamInstance::ConnectToRightSubmix(v22, (struct ISubmixInternal *)lpCriticalSection, v21, v23);
    v10 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21F,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v24,
        v51);
LABEL_57:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_58;
    }
  }
  *(_QWORD *)&v66 = &v53;
  *((_QWORD *)&v66 + 1) = &v52;
  v70 = v66;
  v71 = 1;
  if ( *((_QWORD *)v5 + 31) )
  {
    lpCriticalSection = 0LL;
    HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection);
    v10 = HistoryBufferManager;
    if ( HistoryBufferManager >= 0 )
    {
      HistoryBufferManager = CAudioHistoryBufferManager::Add(lpCriticalSection, *((_QWORD *)v5 + 31), v54);
      v10 = HistoryBufferManager;
      if ( HistoryBufferManager >= 0 )
        goto LABEL_17;
      v44 = 559LL;
    }
    else
    {
      v44 = 557LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v44,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)HistoryBufferManager,
      v51);
    if ( v53 )
      CStreamInstance::DisconnectFromRightSubmix(v52, v53);
    goto LABEL_57;
  }
LABEL_17:
  v25 = v57;
  v26 = v57 + 32;
  v62 = v57 + 32;
  v63 = v57 + 32;
  lpCriticalSection = (LPCRITICAL_SECTION)(v57 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(v57 + 32));
  try
  {
    *(_QWORD *)&v66 = v26;
    v57 = (char *)v52;
    ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(v25 + 72, &v57);
    v46 = v59;
  }
  catch ( ATL::CAtlException *v69 )
  {
    v35 = v69;
    if ( *(_DWORD *)v69 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v57) = *(_DWORD *)v35;
    v10 = (unsigned int)v57;
    if ( (int)v57 >= 0 )
    {
      v26 = v63;
      v8 = v60;
      v7 = v60;
      v5 = v64;
      v46 = v65;
      goto LABEL_18;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x237,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v57,
      v51);
    if ( v62 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v53 )
      CStreamInstance::DisconnectFromRightSubmix(v52, v53);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v53);
    if ( v52 )
      CStreamInstance::`scalar deleting destructor'(v52, v45);
    v52 = 0LL;
    if ( v55 )
      (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v55 + 16LL))(v55);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v54);
    EtwEventActivityIdControl(4LL, &v74);
    if ( v61 )
    {
      v40 = v60;
      goto LABEL_42;
    }
LABEL_32:
    ATL::CAutoPtr<CPipeInstance>::Free(&v58);
    result = v10;
  }
LABEL_18:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  *((_QWORD *)v46 + 4) = *((_QWORD *)v52 + 1);
  v52 = 0LL;
  v71 = 0;
  v27 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, __int64))(*(_QWORD *)v54 + 40LL))(
          v54,
          (__int64)v46 + 952);
  v10 = v27;
  if ( v27 < 0 )
  {
    v47 = 581LL;
  }
  else
  {
    if ( !v55 )
    {
      memset_0(v72, 0, sizeof(v72));
      v28 = (_OWORD *)((char *)v46 + 648);
      v29 = v72;
      v30 = 2LL;
      do
      {
        *v28 = *v29;
        v28[1] = v29[1];
        v28[2] = v29[2];
        v28[3] = v29[3];
        v28[4] = v29[4];
        v28[5] = v29[5];
        v28[6] = v29[6];
        v28 += 8;
        *(v28 - 1) = v29[7];
        v29 += 8;
        --v30;
      }
      while ( v30 );
      *v28 = *v29;
      v28[1] = v29[1];
      *((_QWORD *)v28 + 4) = *((_QWORD *)v29 + 4);
      goto LABEL_25;
    }
    v27 = (*(__int64 (__fastcall **)(struct ICrossProcessEvent *, __int64))(*(_QWORD *)v55 + 32LL))(
            v55,
            (__int64)v46 + 648);
    v10 = v27;
    if ( v27 >= 0 )
    {
LABEL_25:
      TrackSystemEffectBehavior(
        *((_QWORD *)v5 + 19),
        1u,
        1,
        1,
        (__int64)&GUID_00000000_0000_0000_0000_000000000000,
        SLODWORD(FLOAT_1_0));
      TrackSystemEffectBehavior(
        *((_QWORD *)v5 + 19),
        2u,
        1,
        1,
        (__int64)&GUID_00000000_0000_0000_0000_000000000000,
        SLODWORD(FLOAT_1_0));
      TrackSystemEffectBehavior(
        *((_QWORD *)v5 + 19),
        3u,
        1,
        1,
        (__int64)&GUID_00000000_0000_0000_0000_000000000000,
        SLODWORD(FLOAT_1_0));
      PublishDeviceGraphWnfState(v32, v31);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v53);
      if ( v52 )
        CStreamInstance::`scalar deleting destructor'(v52, v33);
      v52 = 0LL;
      if ( v55 )
        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v55 + 16LL))(v55);
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v54);
      EtwEventActivityIdControl(4LL, &v74);
      if ( v7 )
        LeaveCriticalSection(v8);
      v10 = 0;
      goto LABEL_32;
    }
    v47 = 588LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v27,
    v51);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v53);
  if ( v52 )
    CStreamInstance::`scalar deleting destructor'(v52, v48);
  v52 = 0LL;
  if ( v55 )
    (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v55 + 16LL))(v55);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v54);
  EtwEventActivityIdControl(4LL, &v74);
  if ( v7 )
  {
    v40 = v8;
    goto LABEL_42;
  }
  goto LABEL_32;
}
