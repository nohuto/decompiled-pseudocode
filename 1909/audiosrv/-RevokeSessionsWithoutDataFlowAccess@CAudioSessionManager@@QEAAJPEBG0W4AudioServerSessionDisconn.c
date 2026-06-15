/*
 * XREFs of ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManager@@QEAAJPEBG0W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800D7AE8
 * Callers:
 *     ?RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z @ 0x1800D8EFC (-RevokeSessionsWithoutDataFlowAccess@CAudioSessionManagerProvider@@QEAAJPEBG0@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetOwningProcesses@CAudioSession@@QEAAJAEAV?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18003E2E8 (-GetOwningProcesses@CAudioSession@@QEAAJAEAV-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncod.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x180044D64 (-_Tidy@-$vector@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180046AF0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z @ 0x1800CF564 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG1@Z.c)
 *     ?CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z @ 0x1800D5FAC (-CapabilityAccessCheck@CAudioSessionManager@@CAJPEBGKPEA_N@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800D6F7C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        bool a5)
{
  __int64 v7; // r15
  CAudioSession **NextValue; // rax
  __int64 v9; // rdx
  CAudioSession *v10; // r14
  int OwningProcesses; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  _QWORD *i; // rsi
  __int64 v15; // rdi
  unsigned int v16; // ebx
  const WCHAR *v17; // rax
  int v18; // eax
  __int64 v19; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-28h] BYREF
  char v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 StartPosition; // [rsp+80h] [rbp+30h] BYREF

  v7 = a1 + 56;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 16);
  v22 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v7);
  while ( StartPosition )
  {
    NextValue = (CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                    v7,
                                    &StartPosition);
    v10 = *NextValue;
    if ( *NextValue && (unsigned int)CAudioSession::MatchesParameters(*NextValue, v9, a2, a3) )
    {
      v23 = 0LL;
      v24 = 0LL;
      OwningProcesses = CAudioSession::GetOwningProcesses((__int64)v10, (__int64)&v23);
      v12 = retaddr;
      if ( OwningProcesses >= 0 )
      {
        for ( i = (_QWORD *)v23; i != *((_QWORD **)&v23 + 1); ++i )
        {
          a5 = 0;
          v15 = *i;
          v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 40LL))(*i);
          v17 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
          v18 = CAudioSessionManager::CapabilityAccessCheck(v17, v16, &a5);
          if ( v18 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x6B4,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v18);
LABEL_13:
            LOBYTE(v19) = 1;
            OwningProcesses = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*((_QWORD *)v10 + 2) + 32LL))(
                                (__int64)v10 + 16,
                                0LL,
                                v19);
            v12 = retaddr;
            if ( OwningProcesses >= 0 )
              break;
            v13 = 1720LL;
            goto LABEL_15;
          }
          if ( !a5 )
            goto LABEL_13;
        }
      }
      else
      {
        v13 = 1707LL;
LABEL_15:
        wil::details::in1diag3::_Log_Hr(
          v12,
          (void *)v13,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)OwningProcesses);
      }
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Tidy((__int64)&v23);
    }
  }
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
