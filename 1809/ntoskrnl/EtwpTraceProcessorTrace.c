/*
 * XREFs of EtwpTraceProcessorTrace @ 0x14031822C
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     EtwpLogContextSwapEvent @ 0x14017CB50 (EtwpLogContextSwapEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

struct _KPRCB *__fastcall EtwpTraceProcessorTrace(__int64 a1, _QWORD *a2, struct _KTHREAD *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r10
  struct _KPRCB *result; // rax
  _QWORD *v6; // rcx
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  int CycleTime; // [rsp+30h] [rbp-38h]
  unsigned int CurrentRunTime; // [rsp+34h] [rbp-34h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  int v11; // [rsp+50h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  result = KeGetCurrentPrcb();
  if ( result->IdleThread != CurrentThread && (a4 & 0x1800) != 0 )
  {
    v7[0] = a1;
    v6 = *(_QWORD **)(a1 + 1016);
    v11 = a4;
    if ( !a3 )
      a3 = CurrentThread;
    CycleTime = a3[1].CycleTime;
    CurrentRunTime = a3[1].CurrentRunTime;
    v7[1] = *a2;
    v10 = v6[1];
    return (struct _KPRCB *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(v6[2] + 16LL))(*v6, v7);
  }
  return result;
}
