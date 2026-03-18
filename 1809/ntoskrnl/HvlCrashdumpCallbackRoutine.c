/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1402778F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

char HvlCrashdumpCallbackRoutine()
{
  ULONG_PTR *v0; // rbx

  v0 = (ULONG_PTR *)qword_140437508;
  if ( qword_140437508 && (*((_DWORD *)qword_140437508 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_1403FE3D8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v0[16], v0[17], v0[18], v0[19]);
  }
  return 0;
}
