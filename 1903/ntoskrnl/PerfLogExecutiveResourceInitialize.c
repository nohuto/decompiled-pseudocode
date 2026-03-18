/*
 * XREFs of PerfLogExecutiveResourceInitialize @ 0x1403317E8
 * Callers:
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     ExReinitializeResourceLite @ 0x1400B7920 (ExReinitializeResourceLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall PerfLogExecutiveResourceInitialize(unsigned int a1, __int64 a2, int a3, unsigned int a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  _QWORD v9[6]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp-20h] BYREF

  memset(v9, 0, sizeof(v9));
  CurrentPrcb = KeGetCurrentPrcb();
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  memset(v9, 0, 24);
  v9[5] = __PAIR64__(a4, a1);
  v9[4] = a2;
  LODWORD(v9[3]) = a3;
  v10[1] = 48LL;
  HIDWORD(v9[3]) = KeGetCurrentThread()[1].CurrentRunTime;
  v10[0] = v9;
  EtwTraceKernelEvent((__int64)v10, 1u, 0x20020000u, 0x52Bu, 0x1501802u);
}
