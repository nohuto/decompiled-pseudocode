/*
 * XREFs of HvlSkCrashdumpCallbackRoutine @ 0x14028BE20
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

char HvlSkCrashdumpCallbackRoutine()
{
  void *v0; // rbx
  ULONG_PTR v1; // r9
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // rdx
  ULONG v4; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-18h]

  v0 = qword_140463148;
  if ( qword_140463148 && (*((_DWORD *)qword_140463148 + 1) & 1) != 0 )
  {
    HvlEnlightenments &= 0x2000u;
    off_1404244E0[0]();
    ((void (__fastcall *)(__int64))off_1404243D8[0])(1LL);
    KiHypervisorInitiatedCrashDump = 1;
    v1 = *((_QWORD *)v0 + 4);
    v2 = *((_QWORD *)v0 + 3);
    v3 = *((_QWORD *)v0 + 2);
    v4 = *((_DWORD *)v0 + 2);
    BugCheckParameter4 = *((_QWORD *)v0 + 5);
    PoAllProcIntrDisabled = 1;
    KeBugCheckEx(v4, v3, v2, v1, BugCheckParameter4);
  }
  return 0;
}
