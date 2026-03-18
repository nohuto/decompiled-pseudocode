/*
 * XREFs of sub_140A0D93C @ 0x140A0D93C
 * Callers:
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14007D0E0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x140108C48 (KiInitializeMutant.c)
 */

unsigned __int64 sub_140A0D93C()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant(&stru_14042C9C0, 0, 0);
  stru_14042C9A0.Header.Size = 6;
  LOWORD(stru_14042C9A0.Header.Lock) = 0;
  stru_14042C9A0.Header.SignalState = 0;
  stru_14042C9A0.Header.WaitListHead.Blink = &stru_14042C9A0.Header.WaitListHead;
  stru_14042C9A0.Header.WaitListHead.Flink = &stru_14042C9A0.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_1409AD180 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
