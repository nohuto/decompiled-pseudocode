/*
 * XREFs of IopAcquireFastLock_1 @ 0x1400DDB90
 * Callers:
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 */

char __fastcall IopAcquireFastLock_1(volatile __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( _InterlockedExchange(a1 + 29, 1) )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    ObfReferenceObjectWithTag((PVOID)a1, 0x746C6644u);
    return 1;
  }
}
