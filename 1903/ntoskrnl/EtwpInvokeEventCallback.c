/*
 * XREFs of EtwpInvokeEventCallback @ 0x140332024
 * Callers:
 *     EtwpTraceMessageVa @ 0x14008BFF0 (EtwpTraceMessageVa.c)
 *     EtwpEventWriteFull @ 0x1400C01A0 (EtwpEventWriteFull.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140146E9C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceEvent @ 0x14032C3F0 (EtwTraceEvent.c)
 *     EtwTraceRaw @ 0x14032C888 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140643270 (EtwpWriteUserEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     KeIsTraceCallbackAllowed @ 0x1402B3130 (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x140333CF8 (EtwpGetNextEventOffsetType.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  char v6; // r9
  __int64 v7; // r10
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a2;
  result = EtwpGetNextEventOffsetType(*a2, *((unsigned int *)a2 + 4), &v8);
  if ( (_DWORD)result )
  {
    result = KeIsTraceCallbackAllowed(v6);
    if ( (_DWORD)result )
      return ((__int64 (__fastcall *)(__int64, _QWORD, __int64))qword_140572A38)(v3 + v7, v8, a3);
  }
  return result;
}
