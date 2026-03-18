/*
 * XREFs of ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18018FC54
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018CFC0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800DF564 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x180191060 (McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  const WCHAR *v4; // r10
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rsi
  LPVOID v9; // rax
  void *v10; // r14
  __int64 result; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  LPVOID v14; // rax
  _BYTE v15[138]; // [rsp+110h] [rbp-80h] BYREF
  __int64 v16; // [rsp+19Ah] [rbp+Ah]
  __int16 v17; // [rsp+1A2h] [rbp+12h]
  __int64 v18; // [rsp+1A4h] [rbp+14h]
  __int16 v19; // [rsp+1ACh] [rbp+1Ch]
  _BYTE v20[40]; // [rsp+1B0h] [rbp+20h] BYREF
  _BYTE v21[36]; // [rsp+1D8h] [rbp+48h] BYREF
  _BYTE v22[36]; // [rsp+1FCh] [rbp+6Ch] BYREF
  char v23[180]; // [rsp+220h] [rbp+90h] BYREF
  __int64 v24; // [rsp+2D4h] [rbp+144h]
  __int64 v25; // [rsp+2DCh] [rbp+14Ch]
  __int64 v26; // [rsp+2E4h] [rbp+154h]
  int v27; // [rsp+2ECh] [rbp+15Ch]
  __int16 v28; // [rsp+2F0h] [rbp+160h]
  char v29; // [rsp+2F2h] [rbp+162h]
  _BYTE v30[36]; // [rsp+2F4h] [rbp+164h] BYREF
  _BYTE v31[36]; // [rsp+318h] [rbp+188h] BYREF
  char v32[180]; // [rsp+33Ch] [rbp+1ACh] BYREF
  _BYTE v33[68]; // [rsp+3F0h] [rbp+260h] BYREF
  __int64 v34; // [rsp+434h] [rbp+2A4h]
  __int64 v35; // [rsp+43Ch] [rbp+2ACh]
  __int64 v36; // [rsp+444h] [rbp+2B4h]
  int v37; // [rsp+44Ch] [rbp+2BCh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
  {
    v4 = &pwsz;
    if ( *((_QWORD *)a2 + 2) )
      v4 = (const WCHAR *)*((_QWORD *)a2 + 2);
    McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
      *((unsigned __int8 *)a2 + 84),
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SETUPINTERACTIONSUMMARY_EVENT,
      (_DWORD)v4,
      *((_QWORD *)a2 + 1),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 10),
      *((_DWORD *)a2 + 11),
      *((_DWORD *)a2 + 12),
      *((_BYTE *)a2 + 120),
      *((_WORD *)a2 + 34),
      *((_WORD *)a2 + 35),
      *((_WORD *)a2 + 68),
      *((_DWORD *)a2 + 18));
  }
  v5 = (void *)*((_QWORD *)this + 391);
  if ( v5 )
    operator delete(v5);
  v6 = (void *)*((_QWORD *)this + 392);
  if ( v6 )
    operator delete(v6);
  memset_0(v15, 0, 0x89uLL);
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  memset_0(v20, 0, sizeof(v20));
  memset_0(v21, 0, sizeof(v21));
  memset_0(v22, 0, sizeof(v22));
  `vector constructor iterator'(
    v23,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  memset_0(v30, 0, sizeof(v30));
  memset_0(v31, 0, sizeof(v31));
  `vector constructor iterator'(
    v32,
    36LL,
    5LL,
    (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
  memset_0(v33, 0, 0x42uLL);
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0;
  CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)this + 3128, (__int64)v15);
  QueryPerformanceCounter((LARGE_INTEGER *)this + 400);
  *((_DWORD *)this + 787) = *((_DWORD *)a2 + 18);
  v7 = -1LL;
  *((_QWORD *)this + 394) = *(_QWORD *)((char *)a2 + 76);
  *((_BYTE *)this + 3160) = *((_BYTE *)a2 + 84);
  do
    ++v7;
  while ( *(_WORD *)(*((_QWORD *)a2 + 2) + 2 * v7) );
  v8 = v7 + 1;
  v9 = operator new(saturated_mul(v8, 2uLL));
  v10 = v9;
  if ( !v9 )
    return 0LL;
  if ( (unsigned int)_o_wcscpy_s(v9, v8, *((_QWORD *)a2 + 2)) )
    goto LABEL_13;
  *((_QWORD *)this + 391) = v10;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)(*((_QWORD *)a2 + 3) + 2 * v12) );
  v13 = v12 + 1;
  v14 = operator new(saturated_mul(v13, 2uLL));
  v10 = v14;
  if ( !v14 )
    return 0LL;
  if ( (unsigned int)_o_wcscpy_s(v14, v13, *((_QWORD *)a2 + 3)) )
  {
LABEL_13:
    operator delete(v10);
    return 0LL;
  }
  *((_QWORD *)this + 392) = v10;
  result = 1LL;
  *((_DWORD *)this + 791) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 793) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 792) = *((_DWORD *)a2 + 10);
  *(_OWORD *)((char *)this + 3180) = *(_OWORD *)((char *)a2 + 52);
  *((_DWORD *)this + 786) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 794) = *((_DWORD *)a2 + 12);
  return result;
}
