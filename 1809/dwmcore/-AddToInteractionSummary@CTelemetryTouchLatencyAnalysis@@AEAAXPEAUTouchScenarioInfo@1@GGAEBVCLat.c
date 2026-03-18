/*
 * XREFs of ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18014D694
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180019810 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x180063570 (--4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800638CC (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ @ 0x18014E1D4 (-SendInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAJXZ.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x18014F9AC (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18014FA08 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 *     McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq @ 0x180150B20 (McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *a5,
        __int16 a6)
{
  wchar_t *v10; // r10
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // edx
  __int64 v16; // r10
  _DWORD *v17; // r8
  __int64 v18; // r10
  _DWORD *v19; // r8
  __int64 v20; // r10
  unsigned __int8 v21; // al
  __int64 v22; // r9
  __int64 v23; // r10
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // ax
  unsigned int v28; // eax
  CTelemetryTouchLatencyAnalysis *v29; // rcx
  __int64 v30; // [rsp+110h] [rbp-80h] BYREF
  __int64 v31; // [rsp+118h] [rbp-78h]
  __int64 v32; // [rsp+120h] [rbp-70h]
  LARGE_INTEGER PerformanceCount; // [rsp+128h] [rbp-68h] BYREF
  _BYTE v34[122]; // [rsp+130h] [rbp-60h] BYREF
  __int64 v35; // [rsp+1AAh] [rbp+1Ah]
  __int16 v36; // [rsp+1B2h] [rbp+22h]
  __int64 v37; // [rsp+1B4h] [rbp+24h]
  __int16 v38; // [rsp+1BCh] [rbp+2Ch]
  _BYTE v39[40]; // [rsp+1C0h] [rbp+30h] BYREF
  __int64 v40; // [rsp+1E8h] [rbp+58h]
  __int64 v41; // [rsp+1F0h] [rbp+60h]
  __int64 v42; // [rsp+1F8h] [rbp+68h]
  __int64 v43; // [rsp+200h] [rbp+70h]
  __int64 v44; // [rsp+208h] [rbp+78h]
  __int64 v45; // [rsp+210h] [rbp+80h]
  char v46[120]; // [rsp+218h] [rbp+88h] BYREF
  __int64 v47; // [rsp+290h] [rbp+100h]
  __int64 v48; // [rsp+298h] [rbp+108h]
  __int64 v49; // [rsp+2A0h] [rbp+110h]
  int v50; // [rsp+2A8h] [rbp+118h]
  __int16 v51; // [rsp+2ACh] [rbp+11Ch]
  char v52; // [rsp+2AEh] [rbp+11Eh]
  __int64 v53; // [rsp+2B0h] [rbp+120h]
  __int64 v54; // [rsp+2B8h] [rbp+128h]
  __int64 v55; // [rsp+2C0h] [rbp+130h]
  __int64 v56; // [rsp+2C8h] [rbp+138h]
  __int64 v57; // [rsp+2D0h] [rbp+140h]
  __int64 v58; // [rsp+2D8h] [rbp+148h]
  char v59[120]; // [rsp+2E0h] [rbp+150h] BYREF
  _BYTE v60[68]; // [rsp+358h] [rbp+1C8h] BYREF
  __int64 v61; // [rsp+39Ch] [rbp+20Ch]
  __int64 v62; // [rsp+3A4h] [rbp+214h]
  __int64 v63; // [rsp+3ACh] [rbp+21Ch]
  int v64; // [rsp+3B4h] [rbp+224h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
  {
    v10 = word_180276388;
    if ( *((_QWORD *)a2 + 1) )
      v10 = (wchar_t *)*((_QWORD *)a2 + 1);
    McTemplateU0zxqqqqhhhqqntqqqqqqqqqqqqqqqqqq(
      *((unsigned __int8 *)a2 + 60),
      (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ADDTOINTERACTIONSUMMARY_EVENT,
      (_DWORD)v10,
      *(_QWORD *)a2,
      *((_DWORD *)a2 + 7),
      *((_DWORD *)a2 + 8),
      *((_DWORD *)a2 + 9),
      *((_DWORD *)a2 + 10),
      *((_BYTE *)a2 + 96),
      *((_WORD *)a2 + 22),
      *((_WORD *)a2 + 23),
      *((_WORD *)a2 + 56),
      *((_DWORD *)a2 + 12));
  }
  v11 = *((_QWORD *)this + 311);
  if ( !v11 )
  {
LABEL_19:
    if ( !(unsigned int)CTelemetryTouchLatencyAnalysis::SetUpNewInteractionSummary(this, a2) )
      return;
    goto LABEL_20;
  }
  if ( *((_DWORD *)a2 + 12) != *((_DWORD *)this + 627)
    || *((_DWORD *)a2 + 13) != *((_DWORD *)this + 628)
    || *((_DWORD *)a2 + 14) != *((_DWORD *)this + 629)
    || *((_BYTE *)a2 + 60) != *((_BYTE *)this + 2520) )
  {
    goto LABEL_18;
  }
  v12 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
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
    || *((_DWORD *)a2 + 7) != *((_DWORD *)this + 631)
    || *((_DWORD *)a2 + 9) != *((_DWORD *)this + 633)
    || *((_DWORD *)a2 + 8) != *((_DWORD *)this + 632)
    || *((_DWORD *)a2 + 10) != *((_DWORD *)this + 634) )
  {
LABEL_18:
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(this);
    goto LABEL_19;
  }
LABEL_20:
  if ( *((_BYTE *)a2 + 96) || ((*((_DWORD *)this + 631) - 4) & 0xFFFFFFFD) == 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 631) - 2) <= 4 )
      ++*((_BYTE *)this + 2552);
    v16 = (unsigned int)*((unsigned __int8 *)this + 2552) - 1;
    *((_DWORD *)this + v16 + 641) = a3;
    *((_DWORD *)this + v16 + 646) = a4;
    *((_BYTE *)this + v16 + 2604) = *((_BYTE *)a2 + 96);
    *((_WORD *)this + v16 + 1305) = a6;
    *((_WORD *)this + v16 + 1310) = *((_WORD *)a2 + 56);
    *((_DWORD *)this + 639) += *((unsigned __int16 *)a2 + 56);
    *((_QWORD *)this + v16 + 329) = *((_QWORD *)a2 + 9);
    *((_DWORD *)this + 640) += *((unsigned __int16 *)a2 + 57);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 2672),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 120));
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    LODWORD(v30) = *((_DWORD *)this + 674) + *v17;
    HIDWORD(v30) = *((_DWORD *)this + 675) + v17[1];
    LODWORD(v31) = *((_DWORD *)this + 676) + v17[2];
    HIDWORD(v31) = *((_DWORD *)this + 677) + v17[3];
    LODWORD(v32) = *((_DWORD *)this + 678) + v17[4];
    HIDWORD(v32) = *((_DWORD *)this + 679) + v17[5];
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 674, &v30);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 6 * v18 + 680, v19);
    *((_BYTE *)this + 2840) += *((_BYTE *)a2 + 144) != 0;
    *((_BYTE *)this + v20 + 2841) = *((_BYTE *)a2 + 144);
    *((_BYTE *)this + 2846) += *((_BYTE *)a2 + 145) != 0;
    *((_BYTE *)this + v20 + 2847) = *((_BYTE *)a2 + 145);
    v21 = *((_BYTE *)this + 2852);
    if ( v21 <= *((_BYTE *)a2 + 146) )
      v21 = *((_BYTE *)a2 + 146);
    *((_BYTE *)this + 2852) = v21;
    *((_DWORD *)this + 714) += *((unsigned __int8 *)a2 + 146);
    *((_BYTE *)this + v20 + 2860) = *((_BYTE *)a2 + 146);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
      (CTelemetryTouchLatencyAnalysis *)((char *)this + 2872),
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)a2 + 148));
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    LODWORD(v30) = *((_DWORD *)this + 724) + *((_DWORD *)a2 + 43);
    HIDWORD(v30) = *((_DWORD *)this + 725) + *((_DWORD *)a2 + 44);
    LODWORD(v31) = *((_DWORD *)this + 726) + *((_DWORD *)a2 + 45);
    HIDWORD(v31) = *((_DWORD *)this + 727) + *((_DWORD *)a2 + 46);
    LODWORD(v32) = *((_DWORD *)this + 728) + *((_DWORD *)a2 + 47);
    HIDWORD(v32) = *((_DWORD *)this + 729) + *((_DWORD *)a2 + 48);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 724, &v30);
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((_DWORD *)this + 2 * v22 + 730, a5);
    v24 = *((_WORD *)this + 1520);
    if ( v24 <= *((_WORD *)a2 + 98) )
      v24 = *((_WORD *)a2 + 98);
    *((_WORD *)this + 1520) = v24;
    *((_DWORD *)this + 761) += *((unsigned __int16 *)a2 + 98);
    *((_WORD *)this + v23 + 1524) = *((_WORD *)a2 + 98);
    v25 = *((_WORD *)this + 1529);
    if ( v25 <= *((_WORD *)a2 + 99) )
      v25 = *((_WORD *)a2 + 99);
    *((_WORD *)this + 1529) = v25;
    *((_DWORD *)this + 765) += *((unsigned __int16 *)a2 + 99);
    *((_WORD *)this + v23 + 1532) = *((_WORD *)a2 + 99);
    v26 = *((_WORD *)this + 1537);
    if ( v26 <= *((_WORD *)a2 + 101) )
      v26 = *((_WORD *)a2 + 101);
    *((_WORD *)this + 1537) = v26;
    *((_DWORD *)this + 769) += *((unsigned __int16 *)a2 + 101);
    *((_WORD *)this + v23 + 1540) = *((_WORD *)a2 + 101);
    v27 = *((_WORD *)this + 1545);
    if ( v27 <= *((_WORD *)a2 + 100) )
      v27 = *((_WORD *)a2 + 100);
    *((_WORD *)this + 1545) = v27;
    *((_DWORD *)this + 773) += *((unsigned __int16 *)a2 + 100);
    *((_WORD *)this + v23 + 1548) = *((_WORD *)a2 + 100);
    *((_BYTE *)this + v23 + 2866) = *((_BYTE *)a2 + 116);
    *((_BYTE *)this + 2865) += *((_BYTE *)a2 + 116) != 0;
    v28 = *((_DWORD *)this + 777);
    if ( v28 <= *((_DWORD *)a2 + 54) )
      v28 = *((_DWORD *)a2 + 54);
    *((_DWORD *)this + 777) = v28;
    *((_DWORD *)this + 778) += *((_DWORD *)a2 + 54);
    *((_DWORD *)this + v23 + 779) = *((_DWORD *)a2 + 54);
  }
  QueryPerformanceCounter(&PerformanceCount);
  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
                       this,
                       *((_QWORD *)this + 318),
                       PerformanceCount.QuadPart) >= 0xEA60
    || *((_BYTE *)this + 2552) == 5 )
  {
    CTelemetryTouchLatencyAnalysis::SendInteractionSummary(v29);
    WPF::ProcessHeapImpl::Free(*((void **)this + 311));
    WPF::ProcessHeapImpl::Free(*((void **)this + 312));
    memset_0(v34, 0, 0x79uLL);
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v38 = 0;
    memset_0(v39, 0, sizeof(v39));
    v40 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0LL;
    `vector constructor iterator'(
      v46,
      24LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    `vector constructor iterator'(
      v59,
      24LL,
      5LL,
      (void (__fastcall *)(char *))CTelemetryTouchLatencyAnalysis::CLatencyInfo::CLatencyInfo);
    memset_0(v60, 0, 0x42uLL);
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0LL;
    v64 = 0;
    CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=((__int64)this + 2488, (__int64)v34);
  }
}
