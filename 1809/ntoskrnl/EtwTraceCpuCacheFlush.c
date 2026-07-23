/*
 * XREFs of EtwTraceCpuCacheFlush @ 0x14030FD88
 * Callers:
 *     KeFlushIoBuffers @ 0x14011CBB0 (KeFlushIoBuffers.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 */

void __fastcall EtwTraceCpuCacheFlush(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _QWORD v4[2]; // [rsp+30h] [rbp-28h] BYREF
  char v5; // [rsp+40h] [rbp-18h]
  __int16 v6; // [rsp+41h] [rbp-17h]
  char v7; // [rsp+43h] [rbp-15h]
  int v8; // [rsp+44h] [rbp-14h]

  v4[0] = a2;
  v4[1] = a3;
  v5 = a4;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EtwTraceTimedEvent(0xF63u, 0x84000000, (__int64)v4, 24, 0x1501A02u, a1);
}
