/*
 * XREFs of ?HampWakeContextAllocateState@@YAJPEAU_HAM_HOST_WAKE_CONTEXT@@PEAX@Z @ 0x180038A48
 * Callers:
 *     ?HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@Z @ 0x180038824 (-HampWakeContextFindOrCreate@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@_KPEAXPEAPEAU_CEM_RC_OBJECT@@@.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall HampWakeContextAllocateState(void **a1, void *a2)
{
  NTSTATUS result; // eax

  result = NtDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a1 + 14, 0, 0, 2u);
  if ( result >= 0 )
  {
    result = TpAllocWork(a1 + 12, HampWakeContextWorker, a1, 0LL);
    if ( result >= 0 )
    {
      result = TpAllocTimer(a1 + 13, HampWakeContextTimerCallback, a1, 0LL);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
