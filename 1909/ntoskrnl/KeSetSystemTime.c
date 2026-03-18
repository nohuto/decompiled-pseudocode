/*
 * XREFs of KeSetSystemTime @ 0x140182550
 * Callers:
 *     ExpSetSystemTime @ 0x1405968F8 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x140763F98 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14090A2D0 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400FCC10 (KeGenericCallDpc.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

char __fastcall KeSetSystemTime(__int64 a1, __int64 a2, int a3)
{
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v7, 0, 0x28uLL);
  v7[1] = a1;
  v7[2] = a2;
  LOBYTE(v7[0]) = 0;
  LOBYTE(v7[4]) = 0;
  HIDWORD(v7[0]) = a3;
  return KeGenericCallDpc((__int64)KiSetSystemTimeDpc, (__int64)v7);
}
