/*
 * XREFs of EtwpTraceProcessorTrace @ 0x140336A78
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140146E9C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x1401471C0 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

struct _KPRCB *__fastcall EtwpTraceProcessorTrace(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r8
  struct _KPRCB *result; // rax
  _QWORD *v10; // rcx
  _QWORD v11[7]; // [rsp+20h] [rbp-68h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  result = KeGetCurrentPrcb();
  if ( result->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    v10 = *(_QWORD **)(a1 + 1016);
    v11[0] = a1;
    LODWORD(v11[6]) = a4;
    if ( !a3 )
      a3 = CurrentThread;
    LODWORD(v11[2]) = a3[1].CycleTime;
    HIDWORD(v11[2]) = a3[1].CurrentRunTime;
    v11[1] = *a2;
    v11[3] = v10[1];
    return (struct _KPRCB *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v10[2] + 16LL))(*v10, v11);
  }
  return result;
}
