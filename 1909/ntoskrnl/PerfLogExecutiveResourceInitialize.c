/*
 * XREFs of PerfLogExecutiveResourceInitialize @ 0x140331248
 * Callers:
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140100860 (ExReinitializeResourceLite.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
