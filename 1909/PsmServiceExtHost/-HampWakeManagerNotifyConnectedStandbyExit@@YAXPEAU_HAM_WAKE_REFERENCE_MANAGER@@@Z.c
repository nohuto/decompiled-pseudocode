/*
 * XREFs of ?HampWakeManagerNotifyConnectedStandbyExit@@YAXPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18007B7EC
 * Callers:
 *     ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x18007B9F0 (-HampPdcEnterExitPlmPhase@@YAJPEAXK@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x1800128DC (CemRcTableGetNext.c)
 *     ?HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013644 (-HampWakeContextReleaseLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180013694 (-HampWakeContextQueueWorker@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     ?HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x1800136DC (-HampWakeContextAcquireLockExclusive@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     CemRcTableGetFirst @ 0x18001374C (CemRcTableGetFirst.c)
 */

void __fastcall HampWakeManagerNotifyConnectedStandbyExit(struct _HAM_WAKE_REFERENCE_MANAGER *a1)
{
  struct _HAM_HOST_WAKE_CONTEXT *i; // rax
  struct _HAM_HOST_WAKE_CONTEXT *v2; // rbx

  for ( i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetFirst((__int64)a1 + 32);
        ;
        i = (struct _HAM_HOST_WAKE_CONTEXT *)CemRcTableGetNext(v2) )
  {
    v2 = i;
    if ( !i )
      break;
    HampWakeContextAcquireLockExclusive(i);
    *((_BYTE *)v2 + 185) |= 8u;
    HampWakeContextQueueWorker(v2);
    HampWakeContextReleaseLockExclusive(v2);
  }
}
