/*
 * XREFs of ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18006DAC4
 * Callers:
 *     ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x18006DCD0 (-HampPdcEnterExitPlmPhase@@YAJPEAXK@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013EA4 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180038C2C (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180038C5C (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 */

void __fastcall HampWakeManagerNotifyConnectedStandbyExit(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  __int64 v2; // rdx
  __int64 v3; // rdx
  struct _HAM_HOST_WAKE_CONTEXT *v4; // rbx

  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v4) )
  {
    v4 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i, v2);
    *((_BYTE *)v4 + 185) |= 8u;
    HampWakeContextQueueWorker(v4);
    HampWakeContextReleaseLockExclusive(v4, v3);
  }
}
