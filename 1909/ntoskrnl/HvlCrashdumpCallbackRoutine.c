/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x14028BA20
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char HvlCrashdumpCallbackRoutine()
{
  ULONG_PTR *v0; // rbx

  v0 = (ULONG_PTR *)qword_140462E28;
  if ( qword_140462E28 && (*((_DWORD *)qword_140462E28 + 1) & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_1404243D8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, v0[16], v0[17], v0[18], v0[19]);
  }
  return 0;
}
