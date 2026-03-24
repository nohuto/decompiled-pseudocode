/*
 * XREFs of EtwpInvokeEventCallback @ 0x140313D54
 * Callers:
 *     EtwpLogKernelEvent @ 0x1400C71D0 (EtwpLogKernelEvent.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     EtwpTraceMessageVa @ 0x140113240 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14017C6F8 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14030E7DC (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14030EC10 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x1406473D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     EtwpGetNextEventOffsetType @ 0x1403154A4 (EtwpGetNextEventOffsetType.c)
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
