/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180031620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McTemplateU0 @ 0x1800035F4 (McTemplateU0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0zqttq @ 0x1800087EC (McTemplateU0zqttq.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180013360 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B840 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180031F10 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18004EDFC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BBB0C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D9BAC (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800DE3B8 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E56EC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  __int64 v10; // rsi
  char *v11; // r15
  DWORD CurrentThreadId; // ebx
  unsigned __int64 v13; // r8
  signed __int64 v14; // rcx
  signed __int64 *v15; // rsi
  unsigned int v16; // ecx
  std::_Ref_count_base **v17; // rbx
  __int64 v18; // r8
  std::_Ref_count_base *v19; // rdx
  std::_Ref_count_base *v20; // rcx
  CEndpointCharacteristics *v21; // rcx
  int v22; // eax
  int MixFormat; // esi
  __int64 v24; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // edx
  void *v26; // rcx
  int v27; // eax
  void *v28; // rcx
  int v29; // edx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  CAudioStream *v34; // rsi
  wil::details *v35; // rcx
  HANDLE Event; // r14
  wil::details *v37; // r15
  _OWORD *v38; // rax
  __int128 *v39; // rcx
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  CAudioStream *v55; // rcx
  char *v56; // rbx
  __int64 v57; // rsi
  unsigned int v58; // eax
  __int64 v59; // rbx
  unsigned __int8 v60; // bl
  CAudioStream *v61; // rcx
  int v62; // r8d
  _QWORD *v63; // rcx
  _QWORD *v64; // rax
  int v65; // ecx
  HANDLE ProcessHeap; // rax
  _DWORD *v68; // rax
  signed __int64 v69; // rax
  int v70; // eax
  int v71; // eax
  unsigned __int64 v72; // r9
  __int64 v73; // rdx
  int v74; // r8d
  int v75; // edx
  int v76; // ecx
  int v77; // eax
  struct _GUID *v78; // r8
  __int64 v79; // rdx
  struct tWAVEFORMATEX *v80; // rdx
  void *v81; // rcx
  unsigned __int64 v82; // r9
  void *v83; // rcx
  void *v84; // rcx
  void *v85; // rcx
  DWORD LastError; // ebx
  void *v87; // rdx
  int LastErrorFailHr; // eax
  __int64 v89; // r8
  int v90; // eax
  struct _GUID *v91; // [rsp+28h] [rbp-140h]
  char v92; // [rsp+E8h] [rbp-80h] BYREF
  CAudioStream *v93; // [rsp+F0h] [rbp-78h]
  CEndpointCharacteristics *v94; // [rsp+F8h] [rbp-70h] BYREF
  LPVOID v95; // [rsp+100h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+108h] [rbp-60h] BYREF
  __int64 v97; // [rsp+110h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+118h] [rbp-50h] BYREF
  __int64 v99; // [rsp+128h] [rbp-40h]
  __int64 (__fastcall **v100)(); // [rsp+138h] [rbp-30h] BYREF
  __int128 v101; // [rsp+140h] [rbp-28h]
  _QWORD v102[2]; // [rsp+150h] [rbp-18h] BYREF
  __int64 v103; // [rsp+160h] [rbp-8h]
  DWORD v104; // [rsp+168h] [rbp+0h]
  __int64 v105; // [rsp+170h] [rbp+8h]
  LPVOID *p_pv; // [rsp+178h] [rbp+10h]
  struct tWAVEFORMATEX *v107; // [rsp+180h] [rbp+18h] BYREF
  char v108; // [rsp+188h] [rbp+20h]
  LPVOID *v109; // [rsp+190h] [rbp+28h]
  struct tWAVEFORMATEX *v110; // [rsp+198h] [rbp+30h] BYREF
  char v111; // [rsp+1A0h] [rbp+38h]
  __int64 v112[2]; // [rsp+1A8h] [rbp+40h] BYREF
  GUID v113; // [rsp+1B8h] [rbp+50h] BYREF
  struct _GUID v114; // [rsp+1C8h] [rbp+60h] BYREF
  GUID v115; // [rsp+1D8h] [rbp+70h] BYREF
  GUID v116; // [rsp+1E8h] [rbp+80h] BYREF
  struct _GUID v117; // [rsp+1F8h] [rbp+90h] BYREF
  _BYTE v118[32]; // [rsp+208h] [rbp+A0h] BYREF
  __int64 v119; // [rsp+228h] [rbp+C0h]
  wil::details::in1diag3 *retaddr; // [rsp+730h] [rbp+5C8h]

  v99 = a4;
  v112[1] = a6;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      a1,
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 328),
      *(_DWORD *)(a1 + 336),
      *(_DWORD *)(a1 + 348),
      *(_DWORD *)(a1 + 332));
  v10 = wil::details::g_pThreadFailureCallbacks;
  v11 = 0LL;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)&v92;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)&v94;
  v100 = off_18014F3F8;
  v102[1] = &v100;
  v94 = 0LL;
  v92 = 0;
  v102[0] = 0LL;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v101 = *(_OWORD *)lpCriticalSection;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_82;
  CurrentThreadId = GetCurrentThreadId();
  v13 = CurrentThreadId % 0xAuLL;
  v14 = *(_QWORD *)(v10 + 8 * v13);
  v15 = (signed __int64 *)(v10 + 8 * v13);
  if ( !v14 )
  {
LABEL_74:
    ProcessHeap = GetProcessHeap();
    v68 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v14 = (signed __int64)v68;
    if ( v68 )
    {
      *(_QWORD *)v68 = 0LL;
      v68[2] = CurrentThreadId;
      *((_QWORD *)v68 + 2) = 0LL;
      _m_prefetchw(v15);
      do
      {
        v69 = *v15;
        *(_QWORD *)(v14 + 16) = *v15;
      }
      while ( v69 != _InterlockedCompareExchange64(v15, v14, v69) );
      goto LABEL_6;
    }
LABEL_82:
    v14 = 0LL;
    goto LABEL_6;
  }
  while ( *(_DWORD *)(v14 + 8) != CurrentThreadId )
  {
    v14 = *(_QWORD *)(v14 + 16);
    if ( !v14 )
      goto LABEL_74;
  }
LABEL_6:
  v102[0] = v14;
  if ( v14 )
  {
    v103 = *(_QWORD *)v14;
    *(_QWORD *)v14 = v102;
    v104 = GetCurrentThreadId();
  }
  memset_0(a7, 0, 0x4E0uLL);
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)(a1 + 224);
  ATL::CCritSecLock::Lock(lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    MixFormat = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x677,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_60;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    MixFormat = -2004287486;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x678,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890002LL);
    goto LABEL_60;
  }
  v16 = *(_DWORD *)(a1 + 328);
  if ( !a3 )
    goto LABEL_11;
  if ( a3 == 1 )
  {
    if ( v16 > 0x12 )
      goto LABEL_91;
    v70 = 264969;
    if ( !_bittest(&v70, v16) )
      goto LABEL_91;
  }
  else if ( a3 != 2 || v16 )
  {
LABEL_91:
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67B,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_60;
  }
LABEL_11:
  v17 = (std::_Ref_count_base **)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v17 )
  {
    LODWORD(v91) = a1 + 280;
    LOBYTE(v18) = *(_DWORD *)(a1 + 264) == 1;
    CAudioStream::CAudioStream(v17, a2, v18, *(unsigned int *)(a1 + 268));
    *v17 = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
    v17[1] = (std::_Ref_count_base *)&CAudioStream::`vftable'{for `IAudioStreamInfo'};
    v17[2] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
    v17[3] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
    v17[53] = 0LL;
    v17[54] = 0LL;
    *((_BYTE *)v17 + 440) = 0;
    v17[56] = 0LL;
    v17[57] = 0LL;
    if ( !a3 )
    {
      v19 = qword_1801B7850;
      if ( qword_1801B7850 )
      {
        _InterlockedIncrement((volatile signed __int32 *)qword_1801B7850 + 2);
        v19 = qword_1801B7850;
      }
      v17[56] = (std::_Ref_count_base *)g_RenderStreamTaperTranslator;
      v20 = v17[57];
      v17[57] = v19;
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
  }
  else
  {
    v17 = 0LL;
  }
  v93 = (CAudioStream *)v17;
  if ( v17 )
  {
    v21 = v94;
    v94 = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v21 + 16LL))(v21);
    v91 = (struct _GUID *)&v94;
    v22 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            *(_QWORD *)(a1 + 216),
            0LL,
            0LL);
    MixFormat = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x68A,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_59;
    }
    if ( *(_DWORD *)(a1 + 264) == 1 )
    {
      v71 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v93 + 136LL))(v93, *(_QWORD *)(a1 + 176));
      MixFormat = v71;
      if ( v71 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x690,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v71);
        goto LABEL_59;
      }
LABEL_33:
      v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
      v30 = *(unsigned int *)(a1 + 328);
      if ( (unsigned int)(a3 - 1) <= 1 )
        v31 = dword_180171070[v30];
      else
        v31 = dword_180171010[v30];
      v32 = 0;
      if ( v29 )
        v32 = 16;
      LODWORD(v95) = 2 * (v31 + v32) + 1;
      memset_0(v118, 0, 0x4E0uLL);
      if ( v93 )
        v11 = (char *)v93 + 8;
      LODWORD(v91) = *(_DWORD *)(a1 + 336);
      MixFormat = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, char *, _QWORD))(*(_QWORD *)g_AudioResourceManager + 24LL))(
                    g_AudioResourceManager,
                    a2,
                    v11,
                    *(unsigned int *)(a1 + 328));
      if ( MixFormat >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v119);
        }
        v33 = (*(__int64 (__fastcall **)(_QWORD, CAudioStream *))(**(_QWORD **)(a1 + 168) + 288LL))(
                *(_QWORD *)(a1 + 168),
                v93);
        MixFormat = v33;
        if ( v33 >= 0 )
        {
          v34 = v93;
          Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
          if ( Event )
          {
            GetLastError();
            v37 = (wil::details *)*((_QWORD *)v34 + 38);
            if ( v37 )
            {
              LastError = GetLastError();
              wil::details::CloseHandle(v37, v87);
              SetLastError(LastError);
            }
            *((_QWORD *)v34 + 38) = Event;
            goto LABEL_47;
          }
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v35);
          MixFormat = LastErrorFailHr;
          if ( LastErrorFailHr >= 0 )
          {
LABEL_47:
            v38 = a7;
            v39 = (__int128 *)v118;
            v40 = 9LL;
            do
            {
              v38 += 8;
              v41 = *v39;
              v42 = v39[1];
              v39 += 8;
              *(v38 - 8) = v41;
              v43 = *(v39 - 6);
              *(v38 - 7) = v42;
              v44 = *(v39 - 5);
              *(v38 - 6) = v43;
              v45 = *(v39 - 4);
              *(v38 - 5) = v44;
              v46 = *(v39 - 3);
              *(v38 - 4) = v45;
              v47 = *(v39 - 2);
              *(v38 - 3) = v46;
              v48 = *(v39 - 1);
              *(v38 - 2) = v47;
              *(v38 - 1) = v48;
              --v40;
            }
            while ( v40 );
            v49 = *v39;
            v50 = v39[1];
            v97 = 0LL;
            *v38 = v49;
            v51 = v39[2];
            v38[1] = v50;
            v52 = v39[3];
            v38[2] = v51;
            v53 = v39[4];
            v38[3] = v52;
            v54 = v39[5];
            v55 = v93;
            v38[4] = v53;
            v56 = (char *)v55 + 8;
            v38[5] = v54;
            *((_QWORD *)a7 + 5) = *((_QWORD *)v55 + 40);
            *(_QWORD *)(a1 + 536) = *((_QWORD *)v55 + 40);
            if ( (*(int (__fastcall **)(char *, __int64 *))(*(_QWORD *)v56 + 24LL))(v56, &v97) < 0 )
              goto LABEL_53;
            v57 = v97;
            v58 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v56 + 48LL))(v56);
            v59 = v58;
            if ( v58 >= 0x15 )
              goto LABEL_53;
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v57 + 96LL))(v57) )
            {
              if ( dword_180180CE0[v59] )
              {
                v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 136LL))(v57);
                if ( !v90 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v57 + 376LL))(v57) )
                  LODWORD(v59) = 0;
              }
            }
            if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
                   g_PolicyManager,
                   (unsigned int)v59) )
            {
              v60 = 1;
            }
            else
            {
LABEL_53:
              v60 = 0;
            }
            if ( v97 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
            v61 = v93;
            *(_BYTE *)(a1 + 488) = v60;
            *((_DWORD *)a7 + 237) = v60;
            *(_QWORD *)(a1 + 528) = v99;
            *(_QWORD *)(a1 + 192) = v61;
            (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v61 + 56LL))(v61);
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
            }
            MixFormat = 0;
            goto LABEL_59;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x537,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)LastErrorFailHr);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6FF,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat);
          LOBYTE(v89) = 1;
          (*(void (__fastcall **)(_QWORD, CAudioStream *, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(
            *(_QWORD *)(a1 + 168),
            v93,
            v89);
LABEL_59:
          (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v93 + 64LL))(v93);
          goto LABEL_60;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6FA,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v33);
      }
      if ( v119 )
        CAudioStream::CloseAudioHandle(v93);
      goto LABEL_59;
    }
    v112[0] = *((_QWORD *)v94 + 2);
    v24 = v112[0];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v25 = *(_DWORD *)(a1 + 544);
    v114 = *(struct _GUID *)(a1 + 440);
    pv = 0LL;
    p_pv = &pv;
    v107 = 0LL;
    v108 = 1;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v94, v25, &v114, &v107);
    if ( v108 )
    {
      v26 = *p_pv;
      *p_pv = v107;
      if ( v26 )
        CoTaskMemFree(v26);
    }
    if ( MixFormat < 0 )
    {
      v72 = (unsigned int)MixFormat;
      v73 = 1689LL;
LABEL_116:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v73,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v72);
LABEL_117:
      v85 = pv;
      pv = 0LL;
      if ( v85 )
        CoTaskMemFree(v85);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v112);
      goto LABEL_59;
    }
    if ( *(_DWORD *)(a1 + 348) )
    {
      v27 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v93 + 136LL))(v93, *(_QWORD *)(a1 + 176));
      MixFormat = v27;
      if ( v27 >= 0 )
        goto LABEL_29;
      v73 = 1696LL;
LABEL_115:
      v72 = (unsigned int)v27;
      goto LABEL_116;
    }
    if ( (*(_BYTE *)(a1 + 268) & 1) == 0 )
    {
      v27 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v93 + 136LL))(v93, pv);
      MixFormat = v27;
      if ( v27 >= 0 )
      {
LABEL_29:
        v28 = pv;
        pv = 0LL;
        if ( v28 )
          CoTaskMemFree(v28);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        goto LABEL_33;
      }
      v73 = 1726LL;
      goto LABEL_115;
    }
    v74 = *(_DWORD *)(a1 + 408);
    v75 = *(_DWORD *)(a1 + 336);
    v76 = *(_DWORD *)(a1 + 328);
    v116 = GUID_00000000_0000_0000_0000_000000000000;
    v95 = 0LL;
    v113 = GUID_00000000_0000_0000_0000_000000000000;
    v115 = GUID_00000000_0000_0000_0000_000000000000;
    v77 = DeriveAudioProcessingModeConfiguration(
            v76,
            v75,
            v74,
            v94,
            0,
            0,
            eOffloadConnector,
            0,
            1,
            &v116,
            &v113,
            &v115,
            0LL);
    MixFormat = v77;
    if ( v77 >= 0 )
    {
      v80 = *(struct tWAVEFORMATEX **)(a1 + 176);
      v109 = &v95;
      v117 = v113;
      v110 = 0LL;
      v111 = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(v94, v80, v78, &v117, v91, &v110);
      if ( v111 )
      {
        v81 = *v109;
        *v109 = v110;
        if ( v81 )
          CoTaskMemFree(v81);
      }
      if ( MixFormat < 0 )
      {
        v82 = (unsigned int)MixFormat;
        v79 = 1719LL;
        goto LABEL_110;
      }
      v77 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v93 + 136LL))(v93, v95);
      MixFormat = v77;
      if ( v77 >= 0 )
      {
        v84 = v95;
        v95 = 0LL;
        if ( v84 )
          CoTaskMemFree(v84);
        goto LABEL_29;
      }
      v79 = 1721LL;
    }
    else
    {
      v79 = 1717LL;
    }
    v82 = (unsigned int)v77;
LABEL_110:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v79,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v82);
    v83 = v95;
    v95 = 0LL;
    if ( v83 )
      CoTaskMemFree(v83);
    goto LABEL_117;
  }
  MixFormat = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x683,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x8007000ELL);
LABEL_60:
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( v104 )
  {
    if ( v104 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        (int)v91);
    v63 = (_QWORD *)v102[0];
    v104 = 0;
    v64 = *(_QWORD **)v102[0];
    if ( *(_QWORD *)v102[0] )
    {
      while ( v64 != v102 )
      {
        v63 = v64 + 2;
        v102[0] = v64 + 2;
        v64 = (_QWORD *)v64[2];
        if ( !v64 )
          goto LABEL_68;
      }
      *v63 = v103;
    }
LABEL_68:
    v102[0] = 0LL;
  }
  v65 = (int)v94;
  if ( v94 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v94 + 16LL))(v94);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0(v65, (int)&VadServer_CreateStream_Task_Stop, v62);
  return (unsigned int)MixFormat;
}
