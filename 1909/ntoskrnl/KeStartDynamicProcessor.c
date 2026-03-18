/*
 * XREFs of KeStartDynamicProcessor @ 0x14087ED60
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     PnpInitializeProcessor @ 0x14029D574 (PnpInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     PsUpdateActiveProcessAffinity @ 0x1408C6120 (PsUpdateActiveProcessAffinity.c)
 */

__int64 __fastcall KeStartDynamicProcessor(__int64 a1, unsigned int a2, unsigned __int16 a3, _DWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // r9d
  int started; // ebx

  if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess || !KeDynamicPartitioningSupported )
    return 3221225473LL;
  ExAcquireFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( (unsigned int)KeNumberProcessors_0 >= KeMaximumProcessors )
  {
    started = -1073741223;
  }
  else
  {
    v8 = KeNumberProcessors_0;
    *a4 = KeNumberProcessors_0;
    started = KiStartDynamicProcessor(v7, a2, a3, v8);
  }
  ExReleaseFastMutexUnsafe(&KiDynamicProcessorLock);
  if ( started >= 0 )
  {
    PnpInitializeProcessor();
    PsUpdateActiveProcessAffinity();
  }
  return (unsigned int)started;
}
