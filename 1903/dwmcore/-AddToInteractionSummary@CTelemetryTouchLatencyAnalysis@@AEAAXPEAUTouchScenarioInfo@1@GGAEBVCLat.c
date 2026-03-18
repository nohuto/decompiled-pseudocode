/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018E700
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001DA78 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001DCE0 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800DEC2C (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DEFB0 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18018E5D8 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18018F55C (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x1801912F4 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x180191394 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x1801927A0 (McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a5,
        __int16 a6)
{
  const WCHAR *v10; // r10
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // rax
  unsigned __int8 v19; // al
  _DWORD *v20; // rax
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // ax
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  CTelemetryTouchLatencyAnalysis *v26; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp-80h] BYREF
  _BYTE v28[40]; // [rsp+118h] [rbp-78h] BYREF
  _BYTE v29[138]; // [rsp+140h] [rbp-50h] BYREF
  __int64 v30; // [rsp+1CAh] [rbp+3Ah]
  __int16 v31; // [rsp+1D2h] [rbp+42h]
  __int64 v32; // [rsp+1D4h] [rbp+44h]
  __int16 v33; // [rsp+1DCh] [rbp+4Ch]
  _BYTE v34[40]; // [rsp+1E0h] [rbp+50h] BYREF
  _BYTE v35[36]; // [rsp+208h] [rbp+78h] BYREF
  _BYTE v36[36]; // [rsp+22Ch] [rbp+9Ch] BYREF
  char v37[180]; // [rsp+250h] [rbp+C0h] BYREF
  __int64 v38; // [rsp+304h] [rbp+174h]
  __int64 v39; // [rsp+30Ch] [rbp+17Ch]
  __int64 v40; // [rsp+314h] [rbp+184h]
  int v41; // [rsp+31Ch] [rbp+18Ch]
  __int16 v42; // [rsp+320h] [rbp+190h]
  char v43; // [rsp+322h] [rbp+192h]
  _BYTE v44[36]; // [rsp+324h] [rbp+194h] BYREF
  _BYTE v45[36]; // [rsp+348h] [rbp+1B8h] BYREF
  char v46[180]; // [rsp+36Ch] [rbp+1DCh] BYREF
  _BYTE v47[68]; // [rsp+420h] [rbp+290h] BYREF
  __int64 v48; // [rsp+464h] [rbp+2D4h]
  __int64 v49; // [rsp+46Ch] [rbp+2DCh]
  __int64 v50; // [rsp+474h] [rbp+2E4h]
  int v51; // [rsp+47Ch] [rbp+2ECh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
  {
    v10 = &pwsz;
    if ( *((_QWORD *)a2 + 2) )
      v10 = (const WCHAR *)*((_QWORD *)a2 + 2);
    McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
      *((unsigned __int8 *)a2 + 84),
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ADDTOINTERACTIONSUMMARY_EVENT,
      (_DWORD)v10,
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
  v11 = *((_QWORD *)this + 391);
  if ( !v11 )
  {
LABEL_22:
    if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
      return;
    goto LABEL_23;
  }
  if ( *((_DWORD *)a2 + 18) != *((_DWORD *)this + 787)
    || *((_DWORD *)a2 + 19) != *((_DWORD *)this + 788)
    || *((_DWORD *)a2 + 20) != *((_DWORD *)this + 789)
    || *((_BYTE *)a2 + 84) != *((_BYTE *)this + 3160) )
  {
    goto LABEL_21;
  }
  v12 = (unsigned __int16 *)*((_QWORD *)a2 + 2);
  v13 = v11 - (_QWORD)v12;
  do
  {
    v14 = *(unsigned __int16 *)((char *)v12 + v13);
    v15 = *v12 - v14;
    if ( v15 )
      break;
    ++v12;
  }
  while ( v14 );
  if ( v15
    || *((_DWORD *)a2 + 9) != *((_DWORD *)this + 791)
    || *((_DWORD *)a2 + 11) != *((_DWORD *)this + 793)
    || *((_DWORD *)a2 + 10) != *((_DWORD *)this + 792)
    || *((_DWORD *)a2 + 12) != *((_DWORD *)this + 794) )
  {
    goto LABEL_21;
  }
  v16 = *(_QWORD *)((char *)a2 + 52) - *(_QWORD *)((char *)this + 3180);
  if ( !v16 )
    v16 = *(_QWORD *)((char *)a2 + 60) - *(_QWORD *)((char *)this + 3188);
  if ( v16 )
  {
LABEL_21:
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
    goto LABEL_22;
  }
LABEL_23:
  if ( *((_BYTE *)a2 + 120) || ((*((_DWORD *)this + 791) - 4) & 0xFFFFFFFD) == 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 791) - 2) <= 4 )
      ++*((_BYTE *)this + 3208);
    v17 = (unsigned int)*((unsigned __int8 *)this + 3208) - 1;
    *((_DWORD *)this + v17 + 805) = a3;
    *((_DWORD *)this + v17 + 810) = a4;
    *((_BYTE *)this + v17 + 3260) = *((_BYTE *)a2 + 120);
    *((_WORD *)this + v17 + 1633) = a6;
    *((_WORD *)this + v17 + 1638) = *((_WORD *)a2 + 68);
    *((_DWORD *)this + 803) += *((unsigned __int16 *)a2 + 68);
    *((_QWORD *)this + v17 + 411) = *((_QWORD *)a2 + 12);
    *((_DWORD *)this + 804) += *((unsigned __int16 *)a2 + 69);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 3328),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 144));
    v18 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+((_DWORD *)this + 841, (__int64)v28, (char *)a2 + 144);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 841, v18);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 9 * v17 + 850, (_DWORD *)a2 + 36);
    *((_BYTE *)this + 3580) += *((_BYTE *)a2 + 180) != 0;
    *((_BYTE *)this + v17 + 3581) = *((_BYTE *)a2 + 180);
    *((_BYTE *)this + 3586) += *((_BYTE *)a2 + 181) != 0;
    *((_BYTE *)this + v17 + 3587) = *((_BYTE *)a2 + 181);
    v19 = *((_BYTE *)this + 3592);
    if ( v19 <= *((_BYTE *)a2 + 182) )
      v19 = *((_BYTE *)a2 + 182);
    *((_BYTE *)this + 3592) = v19;
    *((_DWORD *)this + 899) += *((unsigned __int8 *)a2 + 182);
    *((_BYTE *)this + v17 + 3600) = *((_BYTE *)a2 + 182);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 3612),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 184));
    v20 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+((_DWORD *)this + 912, (__int64)v28, (char *)a2 + 220);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 912, v20);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 9 * v17 + 921, a5);
    v21 = *((_WORD *)this + 1932);
    if ( v21 <= *((_WORD *)a2 + 128) )
      v21 = *((_WORD *)a2 + 128);
    *((_WORD *)this + 1932) = v21;
    *((_DWORD *)this + 967) += *((unsigned __int16 *)a2 + 128);
    *((_WORD *)this + v17 + 1936) = *((_WORD *)a2 + 128);
    v22 = *((_WORD *)this + 1941);
    if ( v22 <= *((_WORD *)a2 + 129) )
      v22 = *((_WORD *)a2 + 129);
    *((_WORD *)this + 1941) = v22;
    *((_DWORD *)this + 971) += *((unsigned __int16 *)a2 + 129);
    *((_WORD *)this + v17 + 1944) = *((_WORD *)a2 + 129);
    v23 = *((_WORD *)this + 1949);
    if ( v23 <= *((_WORD *)a2 + 131) )
      v23 = *((_WORD *)a2 + 131);
    *((_WORD *)this + 1949) = v23;
    *((_DWORD *)this + 975) += *((unsigned __int16 *)a2 + 131);
    *((_WORD *)this + v17 + 1952) = *((_WORD *)a2 + 131);
    v24 = *((_WORD *)this + 1957);
    if ( v24 <= *((_WORD *)a2 + 130) )
      v24 = *((_WORD *)a2 + 130);
    *((_WORD *)this + 1957) = v24;
    *((_DWORD *)this + 979) += *((unsigned __int16 *)a2 + 130);
    *((_WORD *)this + v17 + 1960) = *((_WORD *)a2 + 130);
    *((_BYTE *)this + v17 + 3606) = *((_BYTE *)a2 + 140);
    *((_BYTE *)this + 3605) += *((_BYTE *)a2 + 140) != 0;
    v25 = *((_DWORD *)this + 983);
    if ( v25 <= *((_DWORD *)a2 + 69) )
      v25 = *((_DWORD *)a2 + 69);
    *((_DWORD *)this + 983) = v25;
    *((_DWORD *)this + 984) += *((_DWORD *)a2 + 69);
    *((_DWORD *)this + v17 + 985) = *((_DWORD *)a2 + 69);
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                       this,
                       *((_QWORD *)this + 400),
                       PerformanceCount.QuadPart) >= 0xEA60
    || *((_BYTE *)this + 3208) == 5 )
  {
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v26);
    operator delete(*((void **)this + 391));
    operator delete(*((void **)this + 392));
    memset_0(v29, 0, 0x89uLL);
    v30 = 0LL;
    v31 = 0;
    v32 = 0LL;
    v33 = 0;
    memset_0(v34, 0, sizeof(v34));
    memset_0(v35, 0, sizeof(v35));
    memset_0(v36, 0, sizeof(v36));
    `vector constructor iterator'(
      v37,
      36LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    memset_0(v44, 0, sizeof(v44));
    memset_0(v45, 0, sizeof(v45));
    `vector constructor iterator'(
      v46,
      36LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    memset_0(v47, 0, 0x42uLL);
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0;
    CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)this + 3128, (__int64)v29);
  }
}
