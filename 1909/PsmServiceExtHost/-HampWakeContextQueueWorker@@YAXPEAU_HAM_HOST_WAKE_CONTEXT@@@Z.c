/*
 * XREFs of ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013694
 * Callers:
 *     ?HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180012600 (-HampWakeContextTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800135F4 (-HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUT.c)
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180039FB0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 *     ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B7EC (-HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B838 (-HampWakeManagerPreRundown@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampWakeContextQueueWorker(struct _HAM_HOST_WAKE_CONTEXT *a1)
{
  if ( (*((_BYTE *)a1 + 184) & 3) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 3) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*((_QWORD *)a1 + 12));
    *((_BYTE *)a1 + 184) |= 1u;
  }
}
