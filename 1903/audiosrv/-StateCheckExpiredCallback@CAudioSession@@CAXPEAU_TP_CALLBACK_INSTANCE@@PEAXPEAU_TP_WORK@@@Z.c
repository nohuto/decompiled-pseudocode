/*
 * XREFs of ?StateCheckExpiredCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ @ 0x18001F360 (-PruneTerminatedOwningProcesses@CAudioSession@@QEAAXXZ.c)
 *     ?StateCheckExpired@CAudioSession@@AEAAXXZ @ 0x18001FBC0 (-StateCheckExpired@CAudioSession@@AEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 */

void __fastcall CAudioSession::StateCheckExpiredCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_WORK *a3)
{
  CAudioSession::PruneTerminatedOwningProcesses((CAudioSession *)a2);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 82LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, a2);
  }
  CAudioSession::StateCheckExpired((CAudioSession *)a2);
  if ( a2 != (char *)-616LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a2 + 616));
  (*(void (__fastcall **)(char *))(*(_QWORD *)a2 + 16LL))(a2);
}
