/*
 * XREFs of EtwpInvokeEventCallback @ 0x140313F44
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x1401132B0 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C82C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14030E9CC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EE00 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406483F0 (EtwpWriteUserEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpGetNextEventOffsetType @ 0x140315694 (EtwpGetNextEventOffsetType.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  result = EtwpGetNextEventOffsetType(*a2, *((unsigned int *)a2 + 4), &v6);
  if ( (_DWORD)result )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v4)(v2 + v5, v6, *(_QWORD *)(v4 + 8));
  return result;
}
