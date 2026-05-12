/*
 * XREFs of StorpInitializePerfTelemetry @ 0x1C001D680
 * Callers:
 *     StorpRegisterTraceLogging @ 0x1C006E104 (StorpRegisterTraceLogging.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 *     StorpUninitializePerfTelemetry @ 0x1C004FF80 (StorpUninitializePerfTelemetry.c)
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
  dword_1C0061448 = 24;
  *(_OWORD *)&P = 0LL;
  v1 = 2LL;
  *(_OWORD *)&xmmword_1C0061438 = 0LL;
  memset(&qword_1C0061450, 0, 0x30uLL);
  dword_1C006147C = 24;
  qword_1C0061450 = 327682LL;
  dword_1C0061478 = 10;
  dword_1C006144C = 0;
  qword_1C0061480 = 0x34000000022LL;
  g_RaidNumberProcessors = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = HIDWORD(qword_1C0061480) * g_RaidNumberProcessors;
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0061490 = PerformanceCounter.QuadPart;
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
    xmmword_1C0061438 = ExAllocatePoolWithTag(
                          NonPagedPoolNxCacheAligned,
                          8LL * WORD2(TelemetryPerfContext),
                          0x65546152u);
    if ( !xmmword_1C0061438 )
      goto LABEL_40;
  }
  else
  {
    xmmword_1C0061438 = 0LL;
  }
  if ( HIWORD(TelemetryPerfContext) )
  {
    *(&xmmword_1C0061438 + 1) = ExAllocatePoolWithTag(
                                  NonPagedPoolNxCacheAligned,
                                  8LL * HIWORD(TelemetryPerfContext),
                                  0x65546152u);
    if ( !*(&xmmword_1C0061438 + 1) )
      goto LABEL_40;
  }
  else
  {
    *(&xmmword_1C0061438 + 1) = 0LL;
  }
  if ( (_WORD)qword_1C0061450 )
  {
    qword_1C0061458 = ExAllocatePoolWithTag(
                        NonPagedPoolNxCacheAligned,
                        8LL * (unsigned __int16)qword_1C0061450,
                        0x65546152u);
    if ( !qword_1C0061458 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061458 = 0LL;
  }
  if ( WORD1(qword_1C0061450) )
  {
    qword_1C0061460 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD1(qword_1C0061450), 0x65546152u);
    if ( !qword_1C0061460 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061460 = 0LL;
  }
  if ( WORD2(qword_1C0061450) )
  {
    qword_1C0061468 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * WORD2(qword_1C0061450), 0x65546152u);
    if ( !qword_1C0061468 )
      goto LABEL_40;
  }
  else
  {
    qword_1C0061468 = 0LL;
  }
  if ( !HIWORD(qword_1C0061450) )
  {
    qword_1C0061470 = 0LL;
    goto LABEL_19;
  }
  qword_1C0061470 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 8LL * HIWORD(qword_1C0061450), 0x65546152u);
  if ( !qword_1C0061470 )
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
    *(_QWORD *)((char *)qword_1C0061458 + v6) = v7++;
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
    *(_QWORD *)qword_1C0061460 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)qword_1C0061460 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)qword_1C0061460 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)qword_1C0061460 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
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
    *(_QWORD *)qword_1C0061460 = 640000LL;
    *((_QWORD *)qword_1C0061460 + 1) = 2560000LL;
    *((_QWORD *)qword_1C0061460 + 2) = 10240000LL;
    *((_QWORD *)qword_1C0061460 + 3) = 51200000LL;
  }
  *((_QWORD *)qword_1C0061460 + 4) = 0x7FFFFFFFFFFFFFFFLL;
  dword_1C0061498 = 64;
  g_RaidNumaHighestNodeNumber = KeQueryHighestNodeNumber();
  LODWORD(dword_1C006149C) = dword_1C0061498 * ((unsigned __int16)g_RaidNumaHighestNodeNumber + 1);
  return v0;
}
