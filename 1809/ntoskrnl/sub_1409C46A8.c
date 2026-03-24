/*
 * XREFs of sub_1409C46A8 @ 0x1409C46A8
 * Callers:
 *     ExInitLicenseData @ 0x1409C43A0 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x1400DD378 (KiInitializeMutant.c)
 */

unsigned __int64 sub_1409C46A8()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&stru_140406460, 0LL, 0LL);
  stru_140406440.Header.Size = 6;
  LOWORD(stru_140406440.Header.Lock) = 0;
  stru_140406440.Header.SignalState = 0;
  stru_140406440.Header.WaitListHead.Blink = &stru_140406440.Header.WaitListHead;
  stru_140406440.Header.WaitListHead.Flink = &stru_140406440.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_14096D118 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
