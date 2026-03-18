/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180063374
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z @ 0x18006318C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x180063570 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180063900 (--0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  bool v2; // sf
  LONGLONG v3; // rdx
  double v4; // xmm0_8
  CTelemetryTouchLatencyAnalysis *result; // rax
  _BYTE v6[122]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+A2h] [rbp-66h]
  __int16 v8; // [rsp+AAh] [rbp-5Eh]
  __int64 v9; // [rsp+ACh] [rbp-5Ch]
  __int16 v10; // [rsp+B4h] [rbp-54h]
  _BYTE v11[40]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-28h]
  __int64 v13; // [rsp+E8h] [rbp-20h]
  __int64 v14; // [rsp+F0h] [rbp-18h]
  __int64 v15; // [rsp+F8h] [rbp-10h]
  __int64 v16; // [rsp+100h] [rbp-8h]
  __int64 v17; // [rsp+108h] [rbp+0h]
  char v18[120]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v19; // [rsp+188h] [rbp+80h]
  __int64 v20; // [rsp+190h] [rbp+88h]
  __int64 v21; // [rsp+198h] [rbp+90h]
  int v22; // [rsp+1A0h] [rbp+98h]
  __int16 v23; // [rsp+1A4h] [rbp+9Ch]
  char v24; // [rsp+1A6h] [rbp+9Eh]
  __int64 v25; // [rsp+1A8h] [rbp+A0h]
  __int64 v26; // [rsp+1B0h] [rbp+A8h]
  __int64 v27; // [rsp+1B8h] [rbp+B0h]
  __int64 v28; // [rsp+1C0h] [rbp+B8h]
  __int64 v29; // [rsp+1C8h] [rbp+C0h]
  __int64 v30; // [rsp+1D0h] [rbp+C8h]
  char v31[120]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v32[68]; // [rsp+250h] [rbp+148h] BYREF
  __int64 v33; // [rsp+294h] [rbp+18Ch]
  __int64 v34; // [rsp+29Ch] [rbp+194h]
  __int64 v35; // [rsp+2A4h] [rbp+19Ch]
  int v36; // [rsp+2ACh] [rbp+1A4h]

  `vector constructor iterator'(
    (char *)this + 8,
    248LL,
    10LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::TouchScenarioInfo);
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::InteractionSummaryInfo((CTelemetryTouchLatencyAnalysis *)((char *)this + 2488));
  *((_QWORD *)this + 394) = 0LL;
  memset_0((char *)this + 8, 0, 0x9B0uLL);
  memset_0(v6, 0, 0x79uLL);
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  memset_0(v11, 0, sizeof(v11));
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  `vector constructor iterator'(
    v18,
    24LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  `vector constructor iterator'(
    v31,
    24LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0(v32, 0, 0x42uLL);
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0;
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((char *)this + 2488, v6);
  v2 = g_qpcFrequency.QuadPart / 1000 < 0;
  v3 = g_qpcFrequency.QuadPart / 1000;
  *((_QWORD *)this + 392) = g_qpcFrequency.QuadPart / 1000;
  v4 = (double)(int)v3;
  if ( v2 )
    v4 = v4 + 1.844674407370955e19;
  result = this;
  *((double *)this + 393) = v4 / 1000.0;
  return result;
}
