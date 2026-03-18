/*
 * XREFs of PsChargeProcessQuota @ 0x1400E3D4C
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AB00 (PspChargeQuota.c)
 */

__int64 __fastcall PsChargeProcessQuota(struct _KPROCESS *a1, __int64 a2, unsigned __int64 a3)
{
  if ( a1 == PsInitialSystemProcess )
    return 0LL;
  else
    return PspChargeQuota(a1[1].ActiveProcessors.Bitmap[3], (__int64)a1, 3, a3);
}
