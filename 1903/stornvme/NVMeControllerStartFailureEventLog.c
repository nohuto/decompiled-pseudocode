/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C000806C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0008100 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C00086E0 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000B600 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000B7AC (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C0005400 (memset.c)
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v3, 0, 0x48uLL);
  HIDWORD(v3[1]) = 0;
  v3[6] = a1 + 24;
  v3[0] = 0x4800000100LL;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  return StorPortExtendedFunction(16LL, a1, v3);
}
