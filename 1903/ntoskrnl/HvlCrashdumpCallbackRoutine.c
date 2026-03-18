/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x14028BCC0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char HvlCrashdumpCallbackRoutine()
{
  ULONG_PTR *v0; // rbx

  v0 = (ULONG_PTR *)qword_140463148;
  if ( qword_140463148 && (*((_DWORD *)qword_140463148 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_1404243D8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v0[16], v0[17], v0[18], v0[19]);
  }
  return 0;
}
