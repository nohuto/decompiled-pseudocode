/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DEA30
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800DE88C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800DEC2C (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DF018 (--0InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  bool v2; // sf
  LONGLONG v3; // rdx
  double v4; // xmm0_8
  CTelemetryTouchLatencyAnalysis *result; // rax
  _BYTE v6[138]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v7; // [rsp+AAh] [rbp-56h]
  __int16 v8; // [rsp+B2h] [rbp-4Eh]
  __int64 v9; // [rsp+B4h] [rbp-4Ch]
  __int16 v10; // [rsp+BCh] [rbp-44h]
  _BYTE v11[40]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v12[36]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v13[36]; // [rsp+10Ch] [rbp+Ch] BYREF
  char v14[180]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v15; // [rsp+1E4h] [rbp+E4h]
  __int64 v16; // [rsp+1ECh] [rbp+ECh]
  __int64 v17; // [rsp+1F4h] [rbp+F4h]
  int v18; // [rsp+1FCh] [rbp+FCh]
  __int16 v19; // [rsp+200h] [rbp+100h]
  char v20; // [rsp+202h] [rbp+102h]
  _BYTE v21[36]; // [rsp+204h] [rbp+104h] BYREF
  _BYTE v22[36]; // [rsp+228h] [rbp+128h] BYREF
  char v23[180]; // [rsp+24Ch] [rbp+14Ch] BYREF
  _BYTE v24[68]; // [rsp+300h] [rbp+200h] BYREF
  __int64 v25; // [rsp+344h] [rbp+244h]
  __int64 v26; // [rsp+34Ch] [rbp+24Ch]
  __int64 v27; // [rsp+354h] [rbp+254h]
  int v28; // [rsp+35Ch] [rbp+25Ch]

  `vector constructor iterator'(
    (char *)this + 8,
    312LL,
    10LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::TouchScenarioInfo);
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::InteractionSummaryInfo((CTelemetryTouchLatencyAnalysis *)((char *)this + 3128));
  *((_QWORD *)this + 497) = 0LL;
  memset_0((char *)this + 8, 0, 0xC30uLL);
  memset_0(v6, 0, 0x89uLL);
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  memset_0(v11, 0, sizeof(v11));
  memset_0(v12, 0, sizeof(v12));
  memset_0(v13, 0, sizeof(v13));
  `vector constructor iterator'(
    v14,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  memset_0(v21, 0, sizeof(v21));
  memset_0(v22, 0, sizeof(v22));
  `vector constructor iterator'(
    v23,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0(v24, 0, 0x42uLL);
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((char *)this + 3128, v6);
  v2 = g_qpcFrequency.QuadPart / 1000 < 0;
  v3 = g_qpcFrequency.QuadPart / 1000;
  *((_QWORD *)this + 495) = g_qpcFrequency.QuadPart / 1000;
  v4 = (double)(int)v3;
  if ( v2 )
    v4 = v4 + 1.844674407370955e19;
  result = this;
  *((double *)this + 496) = v4 / 1000.0;
  return result;
}
