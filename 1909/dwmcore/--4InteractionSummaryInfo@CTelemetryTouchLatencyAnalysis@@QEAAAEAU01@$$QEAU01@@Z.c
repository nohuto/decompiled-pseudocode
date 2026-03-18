/*
 * XREFs of ??4InteractionSummaryInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800DF564
 * Callers:
 *     ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DF368 (--0CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLatencyInfo@1@I@Z @ 0x18018CFC0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@GGAEBVCLat.c)
 *     ?SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z @ 0x18018FC54 (-SetUpNewInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAHPEAUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x1800DF8E8 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::InteractionSummaryInfo::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v6; // eax
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  __int64 v9; // r11
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // rcx
  __int64 v13; // rdx
  _WORD *v14; // rcx
  __int64 v15; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // r10
  _BYTE *v28; // rcx
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // r9
  __int64 v43; // r10
  _WORD *v44; // rcx
  __int64 v45; // rdx
  _WORD *v46; // rcx
  __int64 v47; // rdx
  _WORD *v48; // rcx
  __int64 v49; // rdx
  _WORD *v50; // rcx
  __int64 v51; // rdx
  _DWORD *v52; // rcx

  v2 = 5LL;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_BYTE *)(a1 + 80) = *(_BYTE *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  v6 = *(_DWORD *)(a2 + 88);
  v7 = 5LL;
  *(_DWORD *)(a1 + 88) = v6;
  v8 = (_DWORD *)(a1 + 92);
  v9 = a2 - a1;
  do
  {
    *v8 = *(_DWORD *)((char *)v8 + v9);
    ++v8;
    --v7;
  }
  while ( v7 );
  v10 = (_DWORD *)(a1 + 112);
  v11 = 5LL;
  do
  {
    *v10 = *(_DWORD *)((char *)v10 + v9);
    ++v10;
    --v11;
  }
  while ( v11 );
  v12 = (_BYTE *)(a1 + 132);
  v13 = 5LL;
  do
  {
    *v12 = v12[v9];
    ++v12;
    --v13;
  }
  while ( v13 );
  v14 = (_WORD *)(a1 + 138);
  v15 = 5LL;
  do
  {
    *v14 = *(_WORD *)((char *)v14 + v9);
    ++v14;
    --v15;
  }
  while ( v15 );
  v16 = (_WORD *)(a1 + 148);
  v17 = 5LL;
  do
  {
    *v16 = *(_WORD *)((char *)v16 + v9);
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = (_QWORD *)(a1 + 160);
  v19 = 5LL;
  do
  {
    *v18 = *(_QWORD *)((char *)v18 + v9);
    ++v18;
    --v19;
  }
  while ( v19 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(a1 + 200, a2 + 200);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v20 + 236, v21 + 236);
  v24 = v23 + 272;
  v25 = 5LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v24, v22 + v24);
    v24 += 36LL;
    --v25;
  }
  while ( v25 );
  v28 = (_BYTE *)(v26 + 453);
  *(_BYTE *)(v26 + 452) = *(_BYTE *)(v27 + 452);
  v29 = 5LL;
  do
  {
    *v28 = v28[v22];
    ++v28;
    --v29;
  }
  while ( v29 );
  v30 = (_BYTE *)(v26 + 459);
  *(_BYTE *)(v26 + 458) = *(_BYTE *)(v27 + 458);
  v31 = 5LL;
  do
  {
    *v30 = v30[v22];
    ++v30;
    --v31;
  }
  while ( v31 );
  v32 = (_BYTE *)(v26 + 472);
  *(_BYTE *)(v26 + 464) = *(_BYTE *)(v27 + 464);
  v33 = 5LL;
  *(_DWORD *)(v26 + 468) = *(_DWORD *)(v27 + 468);
  do
  {
    *v32 = v32[v22];
    ++v32;
    --v33;
  }
  while ( v33 );
  v34 = (_BYTE *)(v26 + 478);
  *(_BYTE *)(v26 + 477) = *(_BYTE *)(v27 + 477);
  v35 = 5LL;
  do
  {
    *v34 = v34[v22];
    ++v34;
    --v35;
  }
  while ( v35 );
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v26 + 484, v27 + 484);
  CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v36 + 520, v37 + 520);
  v40 = v39 + 556;
  v41 = 5LL;
  do
  {
    CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v40, v38 + v40);
    v40 += 36LL;
    --v41;
  }
  while ( v41 );
  v44 = (_WORD *)(v42 + 744);
  *(_WORD *)(v42 + 736) = *(_WORD *)(v43 + 736);
  v45 = 5LL;
  *(_DWORD *)(v42 + 740) = *(_DWORD *)(v43 + 740);
  do
  {
    *v44 = *(_WORD *)((char *)v44 + v38);
    ++v44;
    --v45;
  }
  while ( v45 );
  v46 = (_WORD *)(v42 + 760);
  *(_WORD *)(v42 + 754) = *(_WORD *)(v43 + 754);
  v47 = 5LL;
  *(_DWORD *)(v42 + 756) = *(_DWORD *)(v43 + 756);
  do
  {
    *v46 = *(_WORD *)((char *)v46 + v38);
    ++v46;
    --v47;
  }
  while ( v47 );
  v48 = (_WORD *)(v42 + 776);
  *(_WORD *)(v42 + 770) = *(_WORD *)(v43 + 770);
  v49 = 5LL;
  *(_DWORD *)(v42 + 772) = *(_DWORD *)(v43 + 772);
  do
  {
    *v48 = *(_WORD *)((char *)v48 + v38);
    ++v48;
    --v49;
  }
  while ( v49 );
  v50 = (_WORD *)(v42 + 792);
  *(_WORD *)(v42 + 786) = *(_WORD *)(v43 + 786);
  v51 = 5LL;
  *(_DWORD *)(v42 + 788) = *(_DWORD *)(v43 + 788);
  do
  {
    *v50 = *(_WORD *)((char *)v50 + v38);
    ++v50;
    --v51;
  }
  while ( v51 );
  v52 = (_DWORD *)(v42 + 812);
  *(_DWORD *)(v42 + 804) = *(_DWORD *)(v43 + 804);
  *(_DWORD *)(v42 + 808) = *(_DWORD *)(v43 + 808);
  do
  {
    *v52 = *(_DWORD *)((char *)v52 + v38);
    ++v52;
    --v2;
  }
  while ( v2 );
  return v42;
}
