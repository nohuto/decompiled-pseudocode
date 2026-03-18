/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1405D71FC
 * Callers:
 *     ObAdjustSecurityQuota @ 0x1405C7A2C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405D70FC (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     RtlpAllocateAtom @ 0x140695D74 (RtlpAllocateAtom.c)
 *     PspAllocateRateControl @ 0x1406BD2E8 (PspAllocateRateControl.c)
 * Callees:
 *     PspChargeQuota @ 0x14003A840 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140064D10 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].ActiveProcessors.Bitmap[3];
  if ( !a2 || (int)PspChargeQuota(a1[1].ActiveProcessors.Bitmap[3], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}
