/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180020B40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     McTemplateU0zqttq @ 0x180005078 (McTemplateU0zqttq.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180021520 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180035460 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180035EE0 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180048200 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800AD64C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800CB68C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x1800D1950 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DA4BC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7)
{
  __int64 v7; // rsi
  __int64 v10; // rbx
  DWORD CurrentThreadId; // esi
  unsigned __int64 v12; // r8
  signed __int64 v13; // rcx
  signed __int64 *v14; // rbx
  unsigned int v15; // ecx
  std::_Ref_count_base **v16; // rbx
  __int64 v17; // r8
  std::_Ref_count_base *v18; // rdx
  std::_Ref_count_base *v19; // rcx
  CEndpointCharacteristics *v20; // rcx
  int v21; // eax
  int MixFormat; // esi
  __int64 v23; // rbx
  __int64 v24; // r15
  void (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // rcx
  int v26; // r14d
  int (*v27)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v28; // esi
  int v29; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // edx
  struct _GUID v31; // xmm0
  _QWORD *v32; // r14
  struct tWAVEFORMATEX *v33; // r15
  struct tWAVEFORMATEX *v34; // rcx
  int v35; // eax
  unsigned int v36; // r14d
  char *v37; // rsi
  __int64 v38; // r15
  int v39; // eax
  CAudioStream *v40; // rsi
  wil::details *v41; // rcx
  HANDLE Event; // r14
  wil::details *v43; // r15
  CAudioStream *v44; // rcx
  char *v45; // rbx
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int64 v51; // rsi
  unsigned int v52; // eax
  __int64 v53; // rbx
  unsigned __int8 v54; // bl
  CAudioStream *v55; // rcx
  int v56; // r8d
  _QWORD *v57; // rcx
  _QWORD *v58; // rax
  CEndpointCharacteristics *v59; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v62; // rax
  signed __int64 v63; // rax
  int v64; // eax
  int v65; // eax
  unsigned __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  struct _GUID *v72; // r8
  __int64 v73; // rdx
  struct tWAVEFORMATEX *v74; // rdx
  _QWORD *v75; // r14
  struct tWAVEFORMATEX *v76; // r15
  struct tWAVEFORMATEX *v77; // rcx
  unsigned __int64 v78; // r9
  __int64 v79; // rdx
  DWORD LastError; // ebx
  void *v81; // rdx
  int LastErrorFailHr; // eax
  __int64 v83; // r8
  int v84; // eax
  int v85; // [rsp+28h] [rbp-130h]
  struct tWAVEFORMATEX **v86; // [rsp+28h] [rbp-130h]
  int v87; // [rsp+28h] [rbp-130h]
  int v88; // [rsp+28h] [rbp-130h]
  char v89; // [rsp+D8h] [rbp-80h] BYREF
  CAudioStream *v90; // [rsp+E0h] [rbp-78h]
  CEndpointCharacteristics *v91; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v92; // [rsp+F0h] [rbp-68h]
  LPVOID v93; // [rsp+F8h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+100h] [rbp-58h] BYREF
  int v95; // [rsp+108h] [rbp-50h] BYREF
  __int64 v96; // [rsp+110h] [rbp-48h] BYREF
  __int64 v97; // [rsp+118h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+120h] [rbp-38h] BYREF
  __int64 v99; // [rsp+130h] [rbp-28h]
  __int64 (__fastcall **v100)(); // [rsp+138h] [rbp-20h] BYREF
  __int128 v101; // [rsp+140h] [rbp-18h]
  _QWORD v102[2]; // [rsp+150h] [rbp-8h] BYREF
  __int64 v103; // [rsp+160h] [rbp+8h]
  DWORD v104; // [rsp+168h] [rbp+10h]
  __int64 v105; // [rsp+170h] [rbp+18h]
  LPVOID *p_pv; // [rsp+178h] [rbp+20h]
  struct tWAVEFORMATEX *v107; // [rsp+180h] [rbp+28h] BYREF
  char v108; // [rsp+188h] [rbp+30h]
  LPVOID *v109; // [rsp+190h] [rbp+38h]
  struct tWAVEFORMATEX *v110; // [rsp+198h] [rbp+40h] BYREF
  char v111; // [rsp+1A0h] [rbp+48h]
  __int64 v112[2]; // [rsp+1A8h] [rbp+50h] BYREF
  PROPVARIANT pvar[4]; // [rsp+1B8h] [rbp+60h] BYREF
  GUID v114; // [rsp+1D8h] [rbp+80h]
  struct _GUID v115; // [rsp+1E8h] [rbp+90h] BYREF
  GUID v116; // [rsp+1F8h] [rbp+A0h]
  GUID v117; // [rsp+208h] [rbp+B0h]
  struct _GUID v118; // [rsp+218h] [rbp+C0h] BYREF
  _OWORD v119[3]; // [rsp+228h] [rbp+D0h] BYREF
  __int128 v120; // [rsp+258h] [rbp+100h]
  __int128 v121; // [rsp+268h] [rbp+110h]
  __int128 v122; // [rsp+278h] [rbp+120h]
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+178h]

  v7 = a2;
  v99 = a4;
  v92 = a2;
  v112[1] = a6;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq(
      a1,
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 296),
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 316),
      *(_DWORD *)(a1 + 300));
  v10 = wil::details::g_pThreadFailureCallbacks;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)&v89;
  v91 = 0LL;
  lpCriticalSection[1] = (LPCRITICAL_SECTION)&v91;
  v100 = off_18014B1B0;
  v102[1] = &v100;
  v89 = 0;
  v102[0] = 0LL;
  v103 = 0LL;
  v104 = 0;
  v105 = 0LL;
  v101 = *(_OWORD *)lpCriticalSection;
  if ( wil::details::g_pThreadFailureCallbacks )
  {
    CurrentThreadId = GetCurrentThreadId();
    v12 = CurrentThreadId % 0xAuLL;
    v13 = *(_QWORD *)(v10 + 8 * v12);
    v14 = (signed __int64 *)(v10 + 8 * v12);
    if ( v13 )
    {
      while ( *(_DWORD *)(v13 + 8) != CurrentThreadId )
      {
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v13 )
          goto LABEL_84;
      }
      goto LABEL_6;
    }
LABEL_84:
    ProcessHeap = GetProcessHeap();
    v62 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v13 = (signed __int64)v62;
    if ( v62 )
    {
      *(_QWORD *)v62 = 0LL;
      v62[2] = CurrentThreadId;
      *((_QWORD *)v62 + 2) = 0LL;
      _m_prefetchw(v14);
      do
      {
        v63 = *v14;
        *(_QWORD *)(v13 + 16) = *v14;
      }
      while ( v63 != _InterlockedCompareExchange64(v14, v13, v63) );
LABEL_6:
      v7 = v92;
      goto LABEL_7;
    }
    v7 = v92;
  }
  v13 = 0LL;
LABEL_7:
  v102[0] = v13;
  if ( v13 )
  {
    v103 = *(_QWORD *)v13;
    *(_QWORD *)v13 = v102;
    v104 = GetCurrentThreadId();
  }
  memset_0(a7, 0, 0x60uLL);
  LOBYTE(lpCriticalSection[1]) = 0;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)(a1 + 224);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  if ( !*(_DWORD *)(a1 + 184) )
  {
    MixFormat = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x672,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v85);
    goto LABEL_70;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    MixFormat = -2004287486;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x673,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890002LL,
      v85);
    goto LABEL_70;
  }
  v15 = *(_DWORD *)(a1 + 296);
  if ( !a3 )
    goto LABEL_12;
  if ( a3 == 1 )
  {
    if ( v15 > 0x12 )
      goto LABEL_102;
    v64 = 264969;
    if ( !_bittest(&v64, v15) )
      goto LABEL_102;
  }
  else if ( a3 != 2 || v15 )
  {
LABEL_102:
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x676,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL,
      v85);
    goto LABEL_70;
  }
LABEL_12:
  v16 = (std::_Ref_count_base **)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
  {
    v85 = a1 + 280;
    LOBYTE(v17) = *(_DWORD *)(a1 + 264) == 1;
    CAudioStream::CAudioStream(v16, v7, v17, *(unsigned int *)(a1 + 268));
    *v16 = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
    v16[1] = (std::_Ref_count_base *)&CAudioStream::`vftable'{for `IAudioStreamInfo'};
    v16[2] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
    v16[3] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
    v16[53] = 0LL;
    v16[54] = 0LL;
    *((_BYTE *)v16 + 440) = 0;
    v16[56] = 0LL;
    v16[57] = 0LL;
    if ( !a3 )
    {
      v18 = qword_1801B37E0;
      if ( qword_1801B37E0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)qword_1801B37E0 + 2);
        v18 = qword_1801B37E0;
      }
      v16[56] = (std::_Ref_count_base *)g_RenderStreamTaperTranslator;
      v19 = v16[57];
      v16[57] = v18;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
  }
  else
  {
    v16 = 0LL;
  }
  v90 = (CAudioStream *)v16;
  if ( v16 )
  {
    v20 = v91;
    v91 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v20 + 16LL))(v20);
    v21 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            *(_QWORD *)(a1 + 216),
            0LL,
            0LL);
    MixFormat = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x685,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v21,
        (int)&v91);
      goto LABEL_69;
    }
    if ( *(_DWORD *)(a1 + 264) == 1 )
    {
      v65 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v90 + 136LL))(v90, *(_QWORD *)(a1 + 176));
      MixFormat = v65;
      if ( v65 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x68B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v65,
          (int)&v91);
        goto LABEL_69;
      }
LABEL_49:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 120LL))(v92);
      v36 = *(_DWORD *)(a1 + 296);
      v37 = 0LL;
      memset_0(v119, 0, 0x60uLL);
      if ( v90 )
        v37 = (char *)v90 + 8;
      v38 = v99;
      v87 = *(_DWORD *)(a1 + 304);
      v39 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, char *, _QWORD))(*(_QWORD *)g_AudioResourceManager
                                                                                               + 24LL))(
              g_AudioResourceManager,
              v92,
              v37,
              v36);
      MixFormat = v39;
      if ( v39 < 0 )
      {
        v79 = 1774LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, v120);
        }
        v39 = (*(__int64 (__fastcall **)(_QWORD, CAudioStream *))(**(_QWORD **)(a1 + 168) + 288LL))(
                *(_QWORD *)(a1 + 168),
                v90);
        MixFormat = v39;
        if ( v39 >= 0 )
        {
          v40 = v90;
          Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
          if ( Event )
          {
            GetLastError();
            v43 = (wil::details *)*((_QWORD *)v40 + 38);
            if ( v43 )
            {
              LastError = GetLastError();
              wil::details::CloseHandle(v43, v81);
              SetLastError(LastError);
            }
            v38 = v99;
            *((_QWORD *)v40 + 38) = Event;
            goto LABEL_59;
          }
          LastErrorFailHr = wil::details::GetLastErrorFailHr(v41);
          MixFormat = LastErrorFailHr;
          if ( LastErrorFailHr >= 0 )
          {
LABEL_59:
            v44 = v90;
            v45 = (char *)v90 + 8;
            v46 = v119[1];
            *a7 = v119[0];
            v97 = 0LL;
            v47 = v119[2];
            a7[1] = v46;
            v48 = v120;
            a7[2] = v47;
            v49 = v121;
            a7[3] = v48;
            v50 = v122;
            a7[4] = v49;
            a7[5] = v50;
            *((_QWORD *)a7 + 7) = *((_QWORD *)v44 + 40);
            *(_QWORD *)(a1 + 504) = *((_QWORD *)v44 + 40);
            if ( (*(int (__fastcall **)(char *, __int64 *))(*(_QWORD *)v45 + 24LL))(v45, &v97) < 0 )
              goto LABEL_63;
            v51 = v97;
            v52 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v45 + 48LL))(v45);
            v53 = v52;
            if ( v52 >= 0x15 )
              goto LABEL_63;
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 96LL))(v51) )
            {
              if ( dword_18017CD60[v53] )
              {
                v84 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 136LL))(v51);
                if ( !v84 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v51 + 376LL))(v51) )
                  LODWORD(v53) = 0;
              }
            }
            if ( (*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 80LL))(
                   g_PolicyManager,
                   (unsigned int)v53) )
            {
              v54 = 1;
            }
            else
            {
LABEL_63:
              v54 = 0;
            }
            if ( v97 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v97 + 16LL))(v97);
            v55 = v90;
            *(_BYTE *)(a1 + 456) = v54;
            *((_DWORD *)a7 + 23) = v54;
            *(_QWORD *)(a1 + 496) = v38;
            *(_QWORD *)(a1 + 192) = v55;
            (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v55 + 56LL))(v55);
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
            }
            MixFormat = 0;
            goto LABEL_69;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x536,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
            (const char *)(unsigned int)LastErrorFailHr,
            v87);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6F8,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)MixFormat,
            v88);
          LOBYTE(v83) = 1;
          (*(void (__fastcall **)(_QWORD, CAudioStream *, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(
            *(_QWORD *)(a1 + 168),
            v90,
            v83);
LABEL_69:
          (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v90 + 64LL))(v90);
          goto LABEL_70;
        }
        v79 = 1779LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v79,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v39,
        v87);
      if ( (_QWORD)v120 )
        CAudioStream::CloseAudioHandle(v90);
      goto LABEL_69;
    }
    v112[0] = *((_QWORD *)v91 + 2);
    v23 = v112[0];
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v24 = *(_QWORD *)(a1 + 440);
    v95 = 0;
    v96 = 0LL;
    v25 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v91 + 2);
    if ( v25 )
    {
      (**v25)(v25, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c, &v96);
      if ( v96 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v96 + 88LL))(v96, &v95);
        if ( v96 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
      }
    }
    memset(pvar, 0, 24);
    v26 = 1;
    if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v91 + 5) + 40LL))(
           *((_QWORD *)v91 + 5),
           &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
           pvar) < 0
      || LOWORD(pvar[0]) != 19 )
    {
      v26 = 0;
    }
    PropVariantClear(pvar);
    v28 = *(_DWORD *)(a1 + 268);
    if ( (v28 & 0x400000) != 0 )
    {
      v30 = eKeywordDetectorConnector;
    }
    else
    {
      v29 = v28 & 0x20000;
      if ( v24 && v29 )
      {
        v30 = eHostProcessConnector;
      }
      else if ( v26 && v29 )
      {
        v30 = eLoopbackConnector;
      }
      else
      {
        if ( *(_DWORD *)(a1 + 264) == 1 )
          CoTaskMemFree(0LL);
        v30 = (v28 & 2) == 0;
      }
    }
    v31 = *(struct _GUID *)(a1 + 408);
    p_pv = &pv;
    pv = 0LL;
    v107 = 0LL;
    v108 = 1;
    v115 = v31;
    MixFormat = CEndpointCharacteristics::GetMixFormat(v91, v30, &v115, v27, &v107);
    if ( v108 )
    {
      v32 = p_pv;
      v33 = v107;
      v34 = (struct tWAVEFORMATEX *)*p_pv;
      if ( v107 != *p_pv )
      {
        if ( v34 )
          CoTaskMemFree(v34);
        *v32 = v33;
      }
    }
    if ( MixFormat < 0 )
    {
      v66 = (unsigned int)MixFormat;
      v67 = 1686LL;
LABEL_134:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v67,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)v66,
        (int)v86);
LABEL_135:
      if ( pv )
        CoTaskMemFree(pv);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v112);
      goto LABEL_69;
    }
    if ( *(_DWORD *)(a1 + 316) )
    {
      v35 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v90 + 136LL))(v90, *(_QWORD *)(a1 + 176));
      MixFormat = v35;
      if ( v35 >= 0 )
        goto LABEL_45;
      v67 = 1693LL;
LABEL_133:
      v66 = (unsigned int)v35;
      goto LABEL_134;
    }
    if ( (*(_BYTE *)(a1 + 268) & 1) == 0 )
    {
      v35 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v90 + 136LL))(v90, pv);
      MixFormat = v35;
      if ( v35 >= 0 )
      {
LABEL_45:
        if ( pv )
          CoTaskMemFree(pv);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        goto LABEL_49;
      }
      v67 = 1723LL;
      goto LABEL_133;
    }
    v68 = *(unsigned int *)(a1 + 376);
    v69 = *(unsigned int *)(a1 + 304);
    v70 = *(unsigned int *)(a1 + 296);
    LODWORD(v86) = 0;
    v117 = GUID_00000000_0000_0000_0000_000000000000;
    v93 = 0LL;
    v114 = GUID_00000000_0000_0000_0000_000000000000;
    v116 = GUID_00000000_0000_0000_0000_000000000000;
    v71 = DeriveAudioProcessingModeConfiguration(v70, v69, v68);
    MixFormat = v71;
    if ( v71 >= 0 )
    {
      v74 = *(struct tWAVEFORMATEX **)(a1 + 176);
      v109 = &v93;
      v118 = v114;
      v110 = 0LL;
      v111 = 1;
      MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(v91, v74, v72, &v118, (struct _GUID *)v86, &v110);
      if ( v111 )
      {
        v75 = v109;
        v76 = v110;
        v77 = (struct tWAVEFORMATEX *)*v109;
        if ( v110 != *v109 )
        {
          if ( v77 )
            CoTaskMemFree(v77);
          *v75 = v76;
        }
      }
      if ( MixFormat < 0 )
      {
        v78 = (unsigned int)MixFormat;
        v73 = 1716LL;
        goto LABEL_128;
      }
      v71 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v90 + 136LL))(v90, v93);
      MixFormat = v71;
      if ( v71 >= 0 )
      {
        if ( v93 )
          CoTaskMemFree(v93);
        goto LABEL_45;
      }
      v73 = 1718LL;
    }
    else
    {
      v73 = 1714LL;
    }
    v78 = (unsigned int)v71;
LABEL_128:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v73,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v78,
      (int)v86);
    if ( v93 )
      CoTaskMemFree(v93);
    goto LABEL_135;
  }
  MixFormat = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x67E,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)0x8007000ELL,
    v85);
LABEL_70:
  if ( LOBYTE(lpCriticalSection[1]) )
    LeaveCriticalSection(lpCriticalSection[0]);
  if ( v104 )
  {
    if ( v104 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        v87);
    v57 = (_QWORD *)v102[0];
    v104 = 0;
    v58 = *(_QWORD **)v102[0];
    if ( *(_QWORD *)v102[0] )
    {
      while ( v58 != v102 )
      {
        v57 = v58 + 2;
        v102[0] = v58 + 2;
        v58 = (_QWORD *)v58[2];
        if ( !v58 )
          goto LABEL_78;
      }
      *v57 = v103;
    }
LABEL_78:
    v102[0] = 0LL;
  }
  v59 = v91;
  if ( v91 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v91 + 16LL))(v91);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0((__int64)v59, (int)&VadServer_CreateStream_Task_Stop, v56);
  return (unsigned int)MixFormat;
}
