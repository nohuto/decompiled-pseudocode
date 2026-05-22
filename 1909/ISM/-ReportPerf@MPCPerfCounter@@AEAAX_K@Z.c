/*
 * XREFs of ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180140EF8
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x18013E310 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z @ 0x180140DC4 (--$MPCPerfCounter_ReportPerf@AEAKAEAIAEAM@ISMTracing@@SAXAEAKAEAIAEAM@Z.c)
 */

void __fastcall MPCPerfCounter::ReportPerf(MPCPerfCounter *this, __int64 a2)
{
  __int64 v2; // rax
  float v5; // xmm1_4
  bool v6; // zf
  float v7; // xmm1_4

  v2 = *((_QWORD *)this + 5);
  v5 = (float)(int)v2;
  if ( v2 < 0 )
    v5 = v5 + 1.8446744e19;
  v6 = *((_BYTE *)this + 4) == 0;
  v7 = v5 / *(float *)this;
  *((float *)this + 2) = v7;
  if ( !v6 )
    DbgPrint(
      "MPCPerfCounter::ReportPerf   deviceId=%d, providerType=%d, avgReportsPerSec=%d.%03d\n",
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 4),
      (int)v7,
      (int)(float)((float)(v7 * 1000.0) - (float)(1000 * (int)v7)));
  ISMTracing::MPCPerfCounter_ReportPerf<unsigned long &,unsigned int &,float &>(
    (unsigned int *)this + 3,
    (unsigned int *)this + 4,
    (float *)this + 2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = a2;
}
