/*
 * XREFs of KeSetSystemTime @ 0x140181E60
 * Callers:
 *     ExpSetSystemTime @ 0x140596560 (ExpSetSystemTime.c)
 *     ExpRefreshSystemTime @ 0x14075F674 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14090A870 (NtSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
