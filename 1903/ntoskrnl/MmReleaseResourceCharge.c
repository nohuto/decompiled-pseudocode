/*
 * XREFs of MmReleaseResourceCharge @ 0x140107C28
 * Callers:
 *     SmAcquireReleaseCharges @ 0x140107B54 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x140107B9C (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 */

void __fastcall MmReleaseResourceCharge(unsigned __int64 a1, char a2, int a3)
{
  char v3; // r11
  unsigned __int64 v4; // r10

  v3 = a2;
  v4 = a1;
  if ( (a2 & 2) != 0 && (!a3 || a3 == 1) )
    MiReturnResidentAvailable(a1);
  if ( (v3 & 1) != 0 )
    MiReturnCommit((__int64)&MiSystemPartition, v4);
}
