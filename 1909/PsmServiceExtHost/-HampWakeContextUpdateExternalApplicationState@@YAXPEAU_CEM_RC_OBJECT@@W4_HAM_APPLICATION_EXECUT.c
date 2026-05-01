/*
 * XREFs of ?HampWakeContextUpdateExternalApplicationState@@YAXPEAU_CEM_RC_OBJECT@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800135F4
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x1800131F0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 * Callees:
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013694 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800136DC (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeContextUpdateExternalApplicationState(__int64 a1, char a2)
{
  HampWakeContextAcquireLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  *(_BYTE *)(a1 + 184) &= 0x8Fu;
  *(_BYTE *)(a1 + 185) |= 0x10u;
  *(_BYTE *)(a1 + 184) |= 16 * (a2 & 7);
  HampWakeContextQueueWorker((struct _HAM_HOST_WAKE_CONTEXT *)a1);
  HampWakeContextReleaseLockExclusive((struct _HAM_HOST_WAKE_CONTEXT *)a1);
}
