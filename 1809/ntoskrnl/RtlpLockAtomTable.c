/*
 * XREFs of RtlpLockAtomTable @ 0x1405F547C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895B0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14012664C (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1405F5280 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F5840 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AD250 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406AD340 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406B7C70 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140893620 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140893728 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
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
