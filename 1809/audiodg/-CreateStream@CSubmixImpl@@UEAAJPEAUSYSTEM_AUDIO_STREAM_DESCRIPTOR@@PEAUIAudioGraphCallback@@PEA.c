/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140009040
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001AAA0 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400402B0 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x14000A500 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x14000D45C (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000DAD0 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140012698 (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x140013028 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x1400177D4 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140018580 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14002FDD4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140031C94 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140034BB0 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z @ 0x1400424D0 (-Add@CAudioHistoryBufferManager@@QEAAJ_K0@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140042974 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct _RTL_CRITICAL_SECTION *a4)
{
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v6; // r14
  struct _RTL_CRITICAL_SECTION *v8; // r13
  unsigned int v9; // eax
  const struct tWAVEFORMATEX *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int LastError; // ebx
  CPipeInstance *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  LPCRITICAL_SECTION v19; // r12
  int StreamInstance; // eax
  HANDLE CurrentProcess; // rdi
  HANDLE v22; // rax
  const char *v23; // r9
  HANDLE v24; // rdi
  HANDLE v25; // rax
  void *v26; // r8
  unsigned __int64 *v27; // rdi
  const char *v28; // r9
  int v29; // eax
  unsigned int v30; // ebx
  void (__fastcall ***v31)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v32; // r12
  const struct CPipeInstance *v33; // rbx
  CStreamInstance *v34; // rdi
  __int64 v35; // r9
  int v36; // eax
  struct _RTL_CRITICAL_SECTION *v37; // rbx
  CStreamInstance *v38; // r12
  struct ATL::CAtlPlex *v39; // rax
  int v40; // edx
  _QWORD *v41; // rax
  int i; // edx
  LPCRITICAL_SECTION *v43; // rcx
  LPCRITICAL_SECTION v44; // rax
  __int64 v45; // rax
  HANDLE v46; // rax
  HANDLE v47; // rax
  unsigned int v48; // edx
  __int64 *v50; // rbp
  _DWORD *v51; // rbx
  struct _RTL_CRITICAL_SECTION *v52; // rcx
  __int64 v53; // rax
  unsigned int v54; // edx
  unsigned int v55; // edx
  int HistoryBufferManager; // eax
  unsigned int v57; // edx
  int v58; // eax
  unsigned int v59; // edx
  struct ISubmixInternal *v60; // rdx
  unsigned int v61; // edx
  CStreamInstance *v62; // rcx
  HANDLE v63; // rcx
  HANDLE v64; // rcx
  __int64 *v65; // rdx
  __int64 v66; // [rsp+0h] [rbp-148h] BYREF
  DWORD dwDesiredAccess[2]; // [rsp+20h] [rbp-128h]
  BOOL bInheritHandle[2]; // [rsp+28h] [rbp-120h]
  CStreamInstance *v69; // [rsp+40h] [rbp-108h] BYREF
  CPipeInstance *v70; // [rsp+48h] [rbp-100h] BYREF
  struct ISubmixInternal *v71; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-F0h] BYREF
  LPCRITICAL_SECTION v73; // [rsp+60h] [rbp-E8h] BYREF
  HANDLE hObject; // [rsp+68h] [rbp-E0h] BYREF
  struct _RTL_CRITICAL_SECTION *v75; // [rsp+70h] [rbp-D8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-D0h]
  char *v77; // [rsp+80h] [rbp-C8h]
  char *v78; // [rsp+88h] [rbp-C0h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v79; // [rsp+90h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION *v80; // [rsp+98h] [rbp-B0h]
  __int128 v81; // [rsp+A0h] [rbp-A8h]
  __int64 v82; // [rsp+B0h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v83; // [rsp+B8h] [rbp-90h]
  ATL::CAtlException *v84; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v85; // [rsp+C8h] [rbp-80h]
  char v86; // [rsp+D8h] [rbp-70h]
  __int128 v87; // [rsp+E0h] [rbp-68h]
  __int128 v88; // [rsp+F0h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+0h]

  v82 = -2LL;
  v73 = a4;
  v6 = a2;
  v79 = a2;
  v80 = a4;
  v70 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  v78 = (char *)this + 176;
  v75 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v83 = v8;
  a4->SpinCount = 0LL;
  a4->LockSemaphore = 0LL;
  if ( !*((_BYTE *)this + 313) )
  {
    if ( !v6 )
    {
      v11 = -2147467261;
      goto LABEL_54;
    }
    if ( *(_DWORD *)v6 > 2u )
    {
      v11 = -2147024809;
      goto LABEL_54;
    }
    v9 = *((_DWORD *)v6 + 18);
    if ( v9 < 0x12 )
    {
      v11 = -2147024809;
      goto LABEL_54;
    }
    v10 = (const struct tWAVEFORMATEX *)*((_QWORD *)v6 + 10);
    if ( !v10 )
    {
      v11 = -2147467261;
      goto LABEL_54;
    }
    if ( v10->wFormatTag == 0xFFFE && v9 < 0x28 )
    {
      v11 = -2147024809;
      goto LABEL_54;
    }
    v11 = ValidateWaveFormatEx(v10);
    if ( (v11 & 0x80000000) != 0 )
    {
LABEL_54:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EF,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v11,
        dwDesiredAccess[0]);
      if ( !v8 )
      {
LABEL_57:
        ATL::CAutoPtr<CPipeInstance>::Free(&v70);
        return v11;
      }
      v52 = v8;
LABEL_56:
      LeaveCriticalSection(v52);
      goto LABEL_57;
    }
    v87 = *((_OWORD *)v6 + 3);
    v88 = v87;
    EtwEventActivityIdControl(4LL, &v88);
    if ( *((_QWORD *)this + 29) != *((_QWORD *)v6 + 4) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F5,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x80070057LL,
        dwDesiredAccess[0]);
      EtwEventActivityIdControl(4LL, &v88);
      if ( v8 )
        LeaveCriticalSection(v8);
      goto LABEL_60;
    }
    v12 = *(_QWORD *)((char *)v6 + 116) - *((_QWORD *)this + 30);
    if ( !v12 )
      v12 = *(_QWORD *)((char *)v6 + 124) - *((_QWORD *)this + 31);
    if ( v12 )
    {
      v53 = *(_QWORD *)((char *)v6 + 116) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v53 )
        v53 = *(_QWORD *)((char *)v6 + 124) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v53 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1FB,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)0x80070057LL,
          dwDesiredAccess[0]);
        EtwEventActivityIdControl(4LL, &v88);
        if ( v8 )
          LeaveCriticalSection(v8);
LABEL_60:
        ATL::CAutoPtr<CPipeInstance>::Free(&v70);
        return 2147942487LL;
      }
    }
    v13 = CPipeInstance::CreateStreamPipeInstance(
            *((struct IDeviceGraphObjectCache **)this + 33),
            v6,
            *((struct CPipeInstance **)this + 3),
            *((struct tWAVEFORMATEX **)this + 28),
            *(struct SYSTEM_AUDIO_STREAM **)dwDesiredAccess,
            &v70);
    LastError = v13;
    if ( v13 >= 0 )
    {
      v15 = v70;
      v16 = CPipeInstance::Initialize(v70);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x203,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v16,
          dwDesiredAccess[0]);
        EtwEventActivityIdControl(4LL, &v88);
        if ( v8 )
          LeaveCriticalSection(v8);
      }
      else
      {
        v18 = CPipeInstance::ConnectAPOs(v15, a3);
        v17 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x204,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)v18,
            dwDesiredAccess[0]);
          EtwEventActivityIdControl(4LL, &v88);
          if ( v8 )
            LeaveCriticalSection(v8);
        }
        else
        {
          v19 = v73;
          StreamInstance = CPipeInstance::CreateStreamInstance(v15, v6, (struct SYSTEM_AUDIO_STREAM *)v73);
          v17 = StreamInstance;
          if ( StreamInstance >= 0 )
          {
            TargetHandle = 0LL;
            CurrentProcess = GetCurrentProcess();
            v22 = GetCurrentProcess();
            if ( DuplicateHandle(v22, v19->LockSemaphore, CurrentProcess, &TargetHandle, 0, 0, 2u) )
            {
              hObject = 0LL;
              v24 = GetCurrentProcess();
              v25 = GetCurrentProcess();
              v26 = v24;
              v27 = (unsigned __int64 *)v19;
              if ( DuplicateHandle(v25, (HANDLE)v19->SpinCount, v26, &hObject, 0, 0, 2u) )
              {
                v69 = 0LL;
                *(_QWORD *)bInheritHandle = *((_QWORD *)v6 + 25);
                *(_QWORD *)dwDesiredAccess = v15;
                v29 = CStreamInstance::CreateStreamInstance(&v69, *((unsigned int *)v6 + 3), *(unsigned int *)v6, v15);
                v30 = v29;
                if ( v29 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x21A,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                    (const char *)(unsigned int)v29,
                    dwDesiredAccess[0]);
                  if ( v69 )
                    CStreamInstance::`scalar deleting destructor'(v69, v54);
                  v69 = 0LL;
                  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(hObject);
                  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(TargetHandle);
                  EtwEventActivityIdControl(4LL, &v88);
                  if ( v8 )
                    LeaveCriticalSection(v8);
                  goto LABEL_133;
                }
                v70 = 0LL;
                v31 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
                if ( v31 )
                {
                  (**v31)(v31, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v71);
                  v32 = v71;
                }
                else
                {
                  v32 = 0LL;
                  v71 = 0LL;
                }
                if ( v32 )
                {
                  v33 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
                  v34 = v69;
                  (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
                  v36 = CStreamInstance::ConnectToRightSubmix(v34, v32, v33, v35);
                  v30 = v36;
                  if ( v36 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x222,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                      (const char *)(unsigned int)v36,
                      dwDesiredAccess[0]);
                    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v71);
                    if ( v69 )
                      CStreamInstance::`scalar deleting destructor'(v69, v55);
                    v69 = 0LL;
                    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                      CloseHandle(hObject);
                    if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                      CloseHandle(TargetHandle);
                    EtwEventActivityIdControl(4LL, &v88);
                    if ( v8 )
                      LeaveCriticalSection(v8);
                    goto LABEL_133;
                  }
                  v27 = (unsigned __int64 *)v73;
                }
                *(_QWORD *)&v81 = &v71;
                *((_QWORD *)&v81 + 1) = &v69;
                v85 = v81;
                v86 = 1;
                if ( !*((_QWORD *)v6 + 25) )
                  goto LABEL_25;
                v73 = 0LL;
                HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&v73);
                v30 = HistoryBufferManager;
                if ( HistoryBufferManager >= 0 )
                {
                  v58 = CAudioHistoryBufferManager::Add(v73, *((_QWORD *)v6 + 25), v27[3]);
                  v30 = v58;
                  if ( v58 >= 0 )
                  {
LABEL_25:
                    v37 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
                    v77 = (char *)this + 32;
                    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
                    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
                    *(_QWORD *)&v81 = (char *)this + 32;
                    v38 = v69;
                    v73 = (LPCRITICAL_SECTION)*((_QWORD *)this + 9);
                    if ( !*((_QWORD *)this + 13) )
                    {
                      v39 = ATL::CAtlPlex::Create(
                              (struct ATL::CAtlPlex **)this + 12,
                              *((unsigned int *)this + 28),
                              0x18uLL);
                      if ( !v39 )
                      {
                        try
                        {
                          ATL::AtlThrowImpl(-2147024882);
                        }
                        catch ( ATL::CAtlException *v84 )
                        {
                          v65 = &v66;
                          v50 = v65;
                          v51 = (_DWORD *)v65[24];
                          if ( *v51 == -1073741571 )
                            _o__resetstkoflw();
                          *((_DWORD *)v50 + 24) = *v51;
                          v11 = (unsigned int)v73;
                          if ( (int)v73 < 0 )
                          {
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x23A,
                              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                              (const char *)v11,
                              dwDesiredAccess[0]);
                            if ( v77 )
                              LeaveCriticalSection(lpCriticalSection);
                            v60 = v71;
                            if ( v71 )
                              CStreamInstance::DisconnectFromRightSubmix(v69, v60);
                            wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v71);
                            v62 = v69;
                            if ( v69 )
                              CStreamInstance::`scalar deleting destructor'(v62, v61);
                            v69 = 0LL;
                            v63 = hObject;
                            if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                              CloseHandle(v63);
                            v64 = TargetHandle;
                            if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                              CloseHandle(v64);
                            EtwEventActivityIdControl(4LL, &v88);
                            if ( !v78 )
                              goto LABEL_57;
                            v52 = v75;
                            goto LABEL_56;
                          }
                          v8 = v75;
                          v37 = lpCriticalSection;
                          v6 = v79;
                          v27 = (unsigned __int64 *)v80;
                          goto LABEL_32;
                        }
                      }
                      v40 = *((_DWORD *)this + 28);
                      v41 = (_QWORD *)((char *)v39 + 16 * (v40 - 1) + 8 * (unsigned int)(v40 - 1) + 8);
                      for ( i = v40 - 1; i >= 0; --i )
                      {
                        *v41 = *((_QWORD *)this + 13);
                        *((_QWORD *)this + 13) = v41;
                        v41 -= 3;
                      }
                    }
                    v43 = (LPCRITICAL_SECTION *)*((_QWORD *)this + 13);
                    v44 = *v43;
                    v43[2] = (LPCRITICAL_SECTION)v38;
                    *((_QWORD *)this + 13) = v44;
                    v43[1] = 0LL;
                    *v43 = v73;
                    ++*((_QWORD *)this + 11);
                    v45 = *((_QWORD *)this + 9);
                    if ( v45 )
                      *(_QWORD *)(v45 + 8) = v43;
                    else
                      *((_QWORD *)this + 10) = v43;
                    *((_QWORD *)this + 9) = v43;
LABEL_32:
                    if ( v37 )
                      LeaveCriticalSection(v37);
                    v27[6] = *((_QWORD *)v69 + 1);
                    v69 = 0LL;
                    v86 = 0;
                    v46 = TargetHandle;
                    TargetHandle = 0LL;
                    v27[3] = (unsigned __int64)v46;
                    v47 = hObject;
                    hObject = 0LL;
                    v27[4] = (unsigned __int64)v47;
                    TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 1LL, 1LL);
                    TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 2LL, 1LL);
                    TrackSystemEffectBehavior(*((_QWORD *)v6 + 13), 3LL, 1LL);
                    PublishDeviceGraphWnfState();
                    if ( v71 )
                      (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v71 + 16LL))(v71);
                    if ( v69 )
                      CStreamInstance::`scalar deleting destructor'(v69, v48);
                    v69 = 0LL;
                    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                      CloseHandle(hObject);
                    if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                      CloseHandle(TargetHandle);
                    EtwEventActivityIdControl(4LL, &v88);
                    if ( v8 )
                      LeaveCriticalSection(v8);
                    return 0LL;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x232,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                    (const char *)(unsigned int)v58,
                    dwDesiredAccess[0]);
                  if ( v71 )
                    CStreamInstance::DisconnectFromRightSubmix(v69, v71);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v71);
                  if ( v69 )
                    CStreamInstance::`scalar deleting destructor'(v69, v59);
                  v69 = 0LL;
                  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(hObject);
                  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(TargetHandle);
                  EtwEventActivityIdControl(4LL, &v88);
                  if ( v8 )
                    LeaveCriticalSection(v8);
                }
                else
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x230,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                    (const char *)(unsigned int)HistoryBufferManager,
                    dwDesiredAccess[0]);
                  if ( v71 )
                    CStreamInstance::DisconnectFromRightSubmix(v69, v71);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v71);
                  if ( v69 )
                    CStreamInstance::`scalar deleting destructor'(v69, v57);
                  v69 = 0LL;
                  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(hObject);
                  if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                    CloseHandle(TargetHandle);
                  EtwEventActivityIdControl(4LL, &v88);
                  if ( v8 )
                    LeaveCriticalSection(v8);
                }
LABEL_133:
                ATL::CAutoPtr<CPipeInstance>::Free(&v70);
                return v30;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x210,
                            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                            v28);
              if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                CloseHandle(hObject);
              if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                CloseHandle(TargetHandle);
              EtwEventActivityIdControl(4LL, &v88);
              if ( v8 )
                LeaveCriticalSection(v8);
            }
            else
            {
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)0x20C,
                            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                            v23);
              if ( (char *)TargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
                CloseHandle(TargetHandle);
              EtwEventActivityIdControl(4LL, &v88);
              if ( v8 )
                LeaveCriticalSection(v8);
            }
LABEL_90:
            ATL::CAutoPtr<CPipeInstance>::Free(&v70);
            return LastError;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)StreamInstance,
            dwDesiredAccess[0]);
          EtwEventActivityIdControl(4LL, &v88);
          if ( v8 )
            LeaveCriticalSection(v8);
        }
      }
      ATL::CAutoPtr<CPipeInstance>::Free(&v70);
      return v17;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x202,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v13,
      dwDesiredAccess[0]);
    EtwEventActivityIdControl(4LL, &v88);
    if ( v8 )
      LeaveCriticalSection(v8);
    goto LABEL_90;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EC,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x8000FFFFLL,
    dwDesiredAccess[0]);
  if ( v8 )
    LeaveCriticalSection(v8);
  ATL::CAutoPtr<CPipeInstance>::Free(&v70);
  return 2147549183LL;
}
