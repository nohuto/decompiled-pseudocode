/*
 * XREFs of DereferenceW32Process @ 0x1C00FDCA0
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C008F9D4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     W32pProcessCallout @ 0x1C00FDA10 (W32pProcessCallout.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32Process(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 8), 0xFFFFFFFF) == 1 )
    UserDeleteW32Process();
  return ObfDereferenceObject(v1);
}
