/*
 * XREFs of RtlpLockAtomTable @ 0x1405EBCA4
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14001C400 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14011EF20 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1405EBA90 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406C7580 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406C76B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406DCD60 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1408D17F0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1408D18F8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(a1 + 2), 0LL);
  return 1;
}
