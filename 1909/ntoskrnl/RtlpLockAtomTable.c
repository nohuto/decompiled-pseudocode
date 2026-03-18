/*
 * XREFs of RtlpLockAtomTable @ 0x1405EC474
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14001C7F0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14011FCD0 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1405EC260 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406C5E60 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406C5F90 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406DD9E0 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1408D10F0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1408D11F8 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
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
