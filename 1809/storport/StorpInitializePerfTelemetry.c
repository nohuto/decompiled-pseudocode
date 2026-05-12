/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C0020840
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C006EBBC (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C0051BB4 (StorpUninitializePerfTelemetry.c)
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

  memset(&TelemetryPerfContext, 0, 0x80uLL);
  v0 = 0;
  memset(&TelemetryPerfContext, 0, 0x30uLL);
  dword_1C0061528 = 24;
  TelemetryPerfContext = 786434LL;
  v1 = 2LL;
  memset(&qword_1C0061530, 0, 0x30uLL);
  dword_1C006155C = 24;
  qword_1C0061530 = 327682LL;
  dword_1C0061558 = 10;
  dword_1C006152C = 0;
  qword_1C0061560 = 0x34000000022LL;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = HIDWORD(qword_1C0061560) * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0061570 = PerformanceCounter.QuadPart;
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
    qword_1C0061510 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C0061510 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061510 = 0LL;
  }
  if ( WORD2(TelemetryPerfContext) )
  {
    qword_1C0061518 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C0061518 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061518 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    qword_1C0061520 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(TelemetryPerfContext), 0x65546152u);
    if ( !qword_1C0061520 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061520 = 0LL;
  }
  if ( (_WORD)qword_1C0061530 )
  {
    qword_1C0061538 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C0061530,
                        0x65546152u);
    if ( !qword_1C0061538 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061538 = 0LL;
  }
  if ( WORD1(qword_1C0061530) )
  {
    qword_1C0061540 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C0061530), 0x65546152u);
    if ( !qword_1C0061540 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061540 = 0LL;
  }
  if ( WORD2(qword_1C0061530) )
  {
    qword_1C0061548 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C0061530), 0x65546152u);
    if ( !qword_1C0061548 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061548 = 0LL;
  }
  if ( !HIWORD(qword_1C0061530) )
  {
    qword_1C0061550 = 0LL;
    goto LABEL_19;
  }
  qword_1C0061550 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C0061530), 0x65546152u);
  if ( !qword_1C0061550 )
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
    *(_QWORD *)((char *)qword_1C0061538 + v6) = v7++;
    v6 += 8LL;
    --v1;
  }
  while ( v1 );
  if ( UseQPCTime && g_StorpTraceLoggingPerformanceHighResolutionTimer )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)qword_1C0061510 = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)qword_1C0061510 + 1) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 2) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 3) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 4) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0061510 + 5) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)qword_1C0061510 + 6) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C0061510 + 7) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 8) = 6000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 9) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 10) = 20000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)qword_1C0061510 + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C0061540 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0061540 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C0061540 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)qword_1C0061540 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)qword_1C0061510 = 2560LL;
    *((_QWORD *)qword_1C0061510 + 1) = 10000LL;
    *((_QWORD *)qword_1C0061510 + 2) = 40000LL;
    *((_QWORD *)qword_1C0061510 + 3) = 160000LL;
    *((_QWORD *)qword_1C0061510 + 4) = 640000LL;
    *((_QWORD *)qword_1C0061510 + 5) = 1280000LL;
    *((_QWORD *)qword_1C0061510 + 6) = 2560000LL;
    *((_QWORD *)qword_1C0061510 + 7) = 20000000LL;
    *((_QWORD *)qword_1C0061510 + 8) = 60000000LL;
    *((_QWORD *)qword_1C0061510 + 9) = 100000000LL;
    *((_QWORD *)qword_1C0061510 + 10) = 200000000LL;
    *((_QWORD *)qword_1C0061510 + 11) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)qword_1C0061540 = 640000LL;
    *((_QWORD *)qword_1C0061540 + 1) = 2560000LL;
    *((_QWORD *)qword_1C0061540 + 2) = 10240000LL;
    *((_QWORD *)qword_1C0061540 + 3) = 51200000LL;
  }
  *((_QWORD *)qword_1C0061540 + 4) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C0061578 = 64;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C006157C) = dword_1C0061578 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v0;
}
