/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C00220A0
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C0070918 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C0051100 (StorpUninitializePerfTelemetry.c)
 */

__int64 StorpInitializePerfTelemetry()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+20h] BYREF

  v0 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  memset(&TelemetryPerfContext, 0, 0x80uLL);
  TelemetryPerfContext = 786434LL;
  dword_1C0062448 = 24;
  *(_OWORD *)&P = 0LL;
  v1 = 2LL;
  *(_OWORD *)&xmmword_1C0062438 = 0LL;
  memset(&qword_1C0062450, 0, 0x30uLL);
  dword_1C006247C = 24;
  qword_1C0062450 = 327682LL;
  dword_1C0062478 = 10;
  dword_1C006244C = 0;
  qword_1C0062480 = 0x34000000022LL;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = HIDWORD(qword_1C0062480) * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0062490 = PerformanceCounter.QuadPart;
  if ( (_WORD)TelemetryPerfContext )
  {
    P = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * (unsigned __int16)TelemetryPerfContext, 0x65546152u);
    if ( !P )
      goto LABEL_40;
  }
  else
  {
    P = 0LL;
  }
  if ( WORD1(TelemetryPerfContext) )
  {
    *(&P + 1) = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(TelemetryPerfContext), 0x65546152u);
    if ( !*(&P + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&P + 1) = 0LL;
  }
  if ( WORD2(TelemetryPerfContext) )
  {
    xmmword_1C0062438 = ExAllocatePoolWithTag(
                          NonPagedPoolNxCacheAligned,
                          8LL * WORD2(TelemetryPerfContext),
                          0x65546152u);
    if ( !xmmword_1C0062438 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C0062438 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    *(&xmmword_1C0062438 + 1) = ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  8LL * HIWORD(TelemetryPerfContext),
                                  0x65546152u);
    if ( !*(&xmmword_1C0062438 + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&xmmword_1C0062438 + 1) = 0LL;
  }
  if ( (_WORD)qword_1C0062450 )
  {
    qword_1C0062458 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C0062450,
                        0x65546152u);
    if ( !qword_1C0062458 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0062458 = 0LL;
  }
  if ( WORD1(qword_1C0062450) )
  {
    qword_1C0062460 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C0062450), 0x65546152u);
    if ( !qword_1C0062460 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0062460 = 0LL;
  }
  if ( WORD2(qword_1C0062450) )
  {
    qword_1C0062468 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C0062450), 0x65546152u);
    if ( !qword_1C0062468 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0062468 = 0LL;
  }
  if ( !HIWORD(qword_1C0062450) )
  {
    qword_1C0062470 = 0LL;
    goto LABEL_19;
  }
  qword_1C0062470 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C0062450), 0x65546152u);
  if ( !qword_1C0062470 )
  {
LABEL_40:
    StorpUninitializePerfTelemetry();
    g_StorpTraceLoggingPerformanceEnabled = 0;
    return (unsigned int)-1073741801;
  }
LABEL_19:
  v3 = 0LL;
  v4 = 0LL;
  v5 = 2LL;
  do
  {
    *(_QWORD *)((char *)P + v3) = v4++;
    v3 += 8LL;
    --v5;
  }
  while ( v5 );
  v6 = 0LL;
  v7 = 0LL;
  do
  {
    *(_QWORD *)((char *)qword_1C0062458 + v6) = v7++;
    v6 += 8LL;
    --v1;
  }
  while ( v1 );
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)*(&P + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&P + 1) + 1) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 2) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 3) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 4) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&P + 1) + 5) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&P + 1) + 6) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&P + 1) + 7) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 8) = 6000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 9) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 10) = 20000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&P + 1) + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C0062460 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0062460 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C0062460 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)qword_1C0062460 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)*(&P + 1) = 2560LL;
    *((_QWORD *)*(&P + 1) + 1) = 10000LL;
    *((_QWORD *)*(&P + 1) + 2) = 40000LL;
    *((_QWORD *)*(&P + 1) + 3) = 160000LL;
    *((_QWORD *)*(&P + 1) + 4) = 640000LL;
    *((_QWORD *)*(&P + 1) + 5) = 1280000LL;
    *((_QWORD *)*(&P + 1) + 6) = 2560000LL;
    *((_QWORD *)*(&P + 1) + 7) = 20000000LL;
    *((_QWORD *)*(&P + 1) + 8) = 60000000LL;
    *((_QWORD *)*(&P + 1) + 9) = 100000000LL;
    *((_QWORD *)*(&P + 1) + 10) = 200000000LL;
    *((_QWORD *)*(&P + 1) + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C0062460 = 640000LL;
    *((_QWORD *)qword_1C0062460 + 1) = 2560000LL;
    *((_QWORD *)qword_1C0062460 + 2) = 10240000LL;
    *((_QWORD *)qword_1C0062460 + 3) = 51200000LL;
  }
  *((_QWORD *)qword_1C0062460 + 4) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C0062498 = 64;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C006249C) = dword_1C0062498 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v0;
}
