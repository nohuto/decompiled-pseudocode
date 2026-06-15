/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180028560
 * Callers:
 *     <none>
 * Callees:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x1800283F0 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x1800285E0 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  CAudioSession::PruneTerminatedOwningProcesses((CAudioSession *)a2);
  v5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a2 + 616);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, a2);
  }
  CAudioSession::StateCheckExpired((CAudioSession *)a2);
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 16LL))(a2);
}
