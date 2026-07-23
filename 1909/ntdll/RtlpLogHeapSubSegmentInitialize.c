/*
 * XREFs of RtlpLogHeapSubSegmentInitialize @ 0x180103B04
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x18004A2C0 (RtlpSubSegmentInitialize.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801079A0 (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

NTSTATUS __fastcall RtlpLogHeapSubSegmentInitialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rcx
  _QWORD Fields[10]; // [rsp+20h] [rbp-88h] BYREF

  memset(Fields, 0, 0x44uLL);
  Fields[4] = a1;
  HIWORD(Fields[0]) = 4149;
  LODWORD(Fields[8]) = a5;
  Fields[5] = a2;
  Fields[6] = a3;
  Fields[7] = a4;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v9 = 2147353472LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x20402u, 0x24u, Fields);
}
