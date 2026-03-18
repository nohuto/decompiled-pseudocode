/*
 * XREFs of MmReleaseResourceCharge @ 0x1400D7B04
 * Callers:
 *     SmAcquireReleaseCharges @ 0x1400D7A30 (SmAcquireReleaseCharges.c)
 *     MmChargeResources @ 0x1400D7A78 (MmChargeResources.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
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
