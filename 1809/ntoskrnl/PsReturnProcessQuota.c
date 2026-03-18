/*
 * XREFs of PsReturnProcessQuota @ 0x140091888
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x1400BE9B0 (PspReturnQuota.c)
 */

__int64 __fastcall PsReturnProcessQuota(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 != PsInitialSystemProcess )
    return PspReturnQuota(a1[1].ActiveProcessors.Bitmap[4], a1, 3LL, a3);
  return result;
}
