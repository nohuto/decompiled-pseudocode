/*
 * XREFs of RtlpLockAtomTable @ 0x1405F647C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14012671C (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x1405F6280 (RtlLookupAtomInAtomTable.c)
 *     RtlQueryAtomInAtomTable @ 0x1405F6840 (RtlQueryAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1406AE4F0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1406AE5E0 (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1406B8F10 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140894880 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140894988 (RtlQueryAtomsInAtomTable.c)
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
