/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012888
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180012850 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800C3420 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x1800C0414 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800CC854 (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800CCC3C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // r15d
  bool v12; // r13
  struct CAudioStream *v13; // rdi
  CAudioSession *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int updated; // eax
  int v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  LPCRITICAL_SECTION v24[2]; // [rsp+48h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-28h] BYREF
  char v26; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  float v28; // [rsp+C0h] [rbp+40h] BYREF
  char v29; // [rsp+D0h] [rbp+50h]

  v29 = a3;
  v24[1] = (LPCRITICAL_SECTION)-2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 90LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    v24);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 48);
  v26 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v9 = 0LL;
    v10 = a1 + 96;
    v11 = a5;
    v12 = a5 == 0;
    while ( 1 )
    {
      v13 = *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                       v10,
                                       v9);
      CAudioSession::GetPolicyVolumeForStream(v14, v13, &v28, &v23);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 91LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, a1, v13);
      }
      if ( a2 == 3 )
        v15 = *((_BYTE *)v13 + 216) != 0 ? 0x3D0900 : 0;
      else
        v15 = a2 == 4 ? (*((_BYTE *)v13 + 216) != 0 ? 0x2710 : 0) : v23;
      v16 = CAudioStream::SetPolicyVolume(v13, v28, v15, v12);
      v18 = retaddr;
      if ( v16 < 0 )
        break;
      if ( v11 )
      {
        LOBYTE(v17) = v29;
        v16 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD))(*(_QWORD *)v13 + 104LL))(
                v13,
                v17,
                0LL);
        v18 = retaddr;
        if ( v16 < 0 )
        {
          v19 = 4276LL;
          goto LABEL_28;
        }
        LOBYTE(v22) = 1;
        v16 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, __int64, __int64, int))(*(_QWORD *)v13 + 96LL))(
                v13,
                v20,
                v11,
                a6,
                v15,
                v22);
        v18 = retaddr;
        if ( v16 < 0 )
        {
          v19 = 4279LL;
          goto LABEL_28;
        }
      }
LABEL_29:
      updated = CAudioStream::UpdateStreamPriority(v13);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10BD,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated);
      v9 = ++v8;
      v10 = a1 + 96;
      if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    v19 = 4271LL;
LABEL_28:
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_29;
  }
LABEL_4:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v24[0] )
    LeaveCriticalSection(v24[0]);
}
