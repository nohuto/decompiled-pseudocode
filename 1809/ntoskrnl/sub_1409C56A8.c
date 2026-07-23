/*
 * XREFs of sub_1409C56A8 @ 0x1409C56A8
 * Callers:
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400077E0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 */

unsigned __int64 sub_1409C56A8()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&stru_140407480, 0LL, 0LL);
  stru_140407460.Header.Size = 6;
  LOWORD(stru_140407460.Header.Lock) = 0;
  stru_140407460.Header.SignalState = 0;
  stru_140407460.Header.WaitListHead.Blink = &stru_140407460.Header.WaitListHead;
  stru_140407460.Header.WaitListHead.Flink = &stru_140407460.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_14096E118 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
