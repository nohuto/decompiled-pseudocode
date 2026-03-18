/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008164C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800195C4 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z @ 0x180019648 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180081B80 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracking@@PEAVCFrameInfo@@@Z @ 0x1800836EC (-TelemetryFillFrameInfo@CPartitionVerticalBlankScheduler@@AEAAXPEAUTelFrameInfo@CAnimationTracki.c)
 *     ?WasPreviousFrameGlitched@CTelemetryFrames@@SAX_N@Z @ 0x18008377C (-WasPreviousFrameGlitched@CTelemetryFrames@@SAX_N@Z.c)
 *     ?CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z @ 0x1800837D0 (-CheckAndRecordGlitch@CScheduleStatistics@@SAJPEBVCFrameInfo@@00AEB_K1PEA_NPEAI@Z.c)
 *     ?DiscardFrame@CKernelTransport@@QEAAJ_K@Z @ 0x180084224 (-DiscardFrame@CKernelTransport@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     McTemplateU0xqxxqq @ 0x180149E54 (McTemplateU0xqxxqq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  int v5; // r15d
  CPartitionVerticalBlankScheduler *v7; // rsi
  char v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  char v13; // r13
  __int64 v14; // rax
  __int128 v15; // xmm0
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm0
  CPartitionVerticalBlankScheduler *v20; // rax
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int64 v23; // rdx
  bool v24; // r12
  __int64 v25; // rax
  const struct CFrameInfo *v26; // r8
  unsigned __int64 *v27; // rdx
  int v28; // eax
  unsigned int v29; // ecx
  bool v30; // bl
  unsigned __int64 v31; // r9
  __int64 i; // r8
  __int64 v33; // r14
  __int64 v34; // rax
  int v35; // r11d
  __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  __int64 v42; // rbx
  __int64 j; // rbx
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r10
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  char v52; // al
  char *v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned int v56; // eax
  unsigned __int64 v57; // r12
  __int64 v58; // rbx
  CTelemetryTouchLatencyAnalysis *v59; // rcx
  unsigned int v60; // ecx
  unsigned __int16 v61; // ax
  _QWORD *v62; // rcx
  signed int LastError; // eax
  char v64; // [rsp+70h] [rbp-71h]
  char v65; // [rsp+71h] [rbp-70h]
  bool v66; // [rsp+72h] [rbp-6Fh] BYREF
  unsigned int v67; // [rsp+74h] [rbp-6Dh] BYREF
  int v68; // [rsp+78h] [rbp-69h]
  unsigned __int64 v69; // [rsp+80h] [rbp-61h] BYREF
  unsigned __int64 QuadPart; // [rsp+88h] [rbp-59h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-51h] BYREF
  bool *v72; // [rsp+98h] [rbp-49h]
  __m128i v73; // [rsp+A0h] [rbp-41h]
  __int128 v74; // [rsp+B0h] [rbp-31h]
  int v75; // [rsp+C0h] [rbp-21h] BYREF
  int v76; // [rsp+C4h] [rbp-1Dh]
  int v77; // [rsp+C8h] [rbp-19h]
  __int128 v78; // [rsp+D0h] [rbp-11h]
  char v79[8]; // [rsp+E0h] [rbp-1h] BYREF
  unsigned __int64 v80; // [rsp+E8h] [rbp+7h]

  v5 = 0;
  v72 = a4;
  v68 = a3;
  v7 = this;
  v66 = 0;
  v8 = 1;
  v64 = 1;
  if ( !*((_BYTE *)a2 + 1057) )
    goto LABEL_37;
  v9 = *((_QWORD *)a2 + 41) + 1LL;
  v10 = 0LL;
  while ( (unsigned int)v10 < *((_DWORD *)a2 + 118) && (unsigned int)v10 < *(_DWORD *)(*((_QWORD *)v7 + 3232) + 472LL) )
  {
    v65 = 0;
    v11 = *(_QWORD *)(*((_QWORD *)v7 + 8) + 64LL);
    if ( (unsigned int)v10 >= *(_DWORD *)(v11 + 96) )
    {
      v65 = 1;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802925EC, 1u, -2147024809, 0x486u);
      MilInstrumentationCheckHR_MaybeFailFast(v60, &dword_1802925EC, 1u, -2147024809, 0xC9Bu);
    }
    else
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v10);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, 76LL) )
      {
        this = *(CPartitionVerticalBlankScheduler **)(*(_QWORD *)(v11 + 24) + 8 * v10);
        v65 = *((_BYTE *)this + 859);
      }
    }
    if ( *((_BYTE *)a2 + v10 + 1061) )
      goto LABEL_81;
    this = (CPartitionVerticalBlankScheduler *)*((_QWORD *)v7 + 3232);
    if ( *((_QWORD *)this + 39) - *((_QWORD *)a2 + 40) > g_qpcFrequency.QuadPart )
    {
      v13 = 1;
LABEL_11:
      v16 = 1;
      goto LABEL_12;
    }
    v13 = 0;
    v14 = 32 * (v10 + 15);
    v15 = *(_OWORD *)((char *)this + v14 + 16);
    LODWORD(v14) = *(_DWORD *)((char *)this + v14);
    v78 = v15;
    if ( *((_DWORD *)a2 + v10 + 8) <= (unsigned int)v14 )
      goto LABEL_11;
    v16 = 0;
LABEL_12:
    *((_BYTE *)a2 + v10 + 1061) = v16;
    if ( v16 )
    {
      v17 = *((_QWORD *)v7 + 3232);
      v18 = 32 * (v10 + 15);
      this = (CPartitionVerticalBlankScheduler *)(*((_QWORD *)a2 + 41) + 1LL);
      v19 = *(_OWORD *)(v17 + v18 + 16);
      v73 = *(__m128i *)(v17 + v18);
      v20 = (CPartitionVerticalBlankScheduler *)_mm_srli_si128(v73, 8).m128i_u64[0];
      v74 = v19;
      if ( v20 <= this )
        v20 = this;
      *((_QWORD *)a2 + v10 + 43) = v20;
      v21 = *((_QWORD *)v7 + 3232);
      v22 = *(_OWORD *)(v21 + v18 + 16);
      v23 = HIDWORD(*(_QWORD *)(v21 + v18));
      *((_DWORD *)a2 + v10 + 59) = v23;
      v78 = v22;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xqxxqq(
          *((_DWORD *)v7 + 7643) != 0,
          v23,
          *(_QWORD *)a2,
          v10,
          v23,
          *((_QWORD *)a2 + v10 + 43),
          v13,
          *((_DWORD *)v7 + 7643) != 0);
    }
    if ( !v65 || v13 )
    {
      v8 = *((_BYTE *)a2 + v10 + 1061) & v64;
      v64 = v8;
      if ( *((_QWORD *)a2 + v10 + 43) > v9 )
        v9 = *((_QWORD *)a2 + v10 + 43);
      goto LABEL_20;
    }
LABEL_81:
    v8 = v64;
LABEL_20:
    v10 = (unsigned int)(v10 + 1);
    if ( !v8 )
      break;
  }
  v24 = a5;
  v5 = 0;
  if ( !v8 && !a5 )
    goto LABEL_39;
  *((_QWORD *)a2 + 42) = v9;
  *((_BYTE *)a2 + 1058) = 1;
  --*((_DWORD *)v7 + 7642);
  if ( !*(_QWORD *)a2 )
    goto LABEL_28;
  v25 = *((unsigned int *)v7 + 6463);
  v26 = 0LL;
  if ( (_DWORD)v25 != -1 )
    v26 = (CPartitionVerticalBlankScheduler *)((char *)v7 + 1608 * v25 + 112);
  v27 = (unsigned __int64 *)*((_QWORD *)v7 + 3232);
  v67 = 0;
  v69 = v27[183];
  QuadPart = g_qpcFrequency.QuadPart;
  v28 = CScheduleStatistics::CheckAndRecordGlitch(a2, (const struct CFrameInfo *)v27, v26, &QuadPart, &v69, &v66, &v67);
  v5 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x76Eu);
  }
  else
  {
    v30 = v66;
    CTelemetryFrames::WasPreviousFrameGlitched(v66);
    if ( v30 )
    {
      ++*((_QWORD *)v7 + 3822);
      v49 = 0LL;
      v50 = *(_QWORD *)a2;
      v51 = v67;
      if ( *((_DWORD *)v7 + 6556) )
      {
        do
        {
          v55 = *(_QWORD *)(*((_QWORD *)v7 + 3275) + 8 * v49);
          if ( *(_QWORD *)(v55 + 56) && v50 > *(_QWORD *)(v55 + 56) )
          {
            v56 = *(_DWORD *)(v55 + 36);
            ++*(_DWORD *)(v55 + 40);
            *(_DWORD *)(v55 + 32) += v51;
            if ( v56 <= (unsigned int)v51 )
              v56 = v51;
            *(_DWORD *)(v55 + 36) = v56;
          }
          v49 = (unsigned int)(v49 + 1);
        }
        while ( (unsigned int)v49 < *((_DWORD *)v7 + 6556) );
        v50 = *(_QWORD *)a2;
      }
      v52 = 0;
      v53 = (char *)v7 + 26888;
      v54 = 10LL;
      do
      {
        if ( *((_DWORD *)v53 - 10) && v50 >= *(_QWORD *)v53 )
        {
          if ( v50 == *(_QWORD *)v53 )
          {
            v53[42] += v51;
            v53[41] = 1;
          }
          else
          {
            v61 = *((_WORD *)v53 + 48);
            ++*((_WORD *)v53 + 47);
            *((_WORD *)v53 + 49) += v51;
            if ( v61 <= (unsigned __int16)v51 )
              v61 = v51;
            *((_WORD *)v53 + 48) = v61;
          }
          v52 = 1;
        }
        v53 += 248;
        --v54;
      }
      while ( v54 );
      if ( v52 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0xq(v53, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_RECORDGLITCH_EVENT, v50, v51);
    }
    v31 = *(_QWORD *)a2;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v7 + 6556); i = (unsigned int)(i + 1) )
    {
      v45 = *(_QWORD *)(*((_QWORD *)v7 + 3275) + 8 * i);
      if ( *(_QWORD *)(v45 + 56) && v31 >= *(_QWORD *)(v45 + 56) )
      {
        ++*(_DWORD *)(v45 + 72);
        if ( *(_QWORD *)(v45 + 88) )
        {
          v46 = *(_QWORD *)(v45 + 96);
          v47 = v9 - *(_QWORD *)(v45 + 88);
          *(_QWORD *)(v45 + 80) += v47;
          if ( v46 <= v47 )
            v46 = v47;
          *(_QWORD *)(v45 + 96) = v46;
        }
        else
        {
          *(_QWORD *)(v45 + 104) = v9;
        }
        *(_QWORD *)(v45 + 88) = v9;
      }
    }
LABEL_28:
    v33 = 0LL;
    v34 = _InterlockedExchange64(&qword_180308218, 0LL);
    dword_18030808C += v34;
    dword_180308090 += HIDWORD(v34);
    if ( *((_DWORD *)a2 + 284) )
    {
      do
      {
        v57 = *(_QWORD *)a2;
        v58 = *(_QWORD *)(*((_QWORD *)a2 + 139) + 8 * v33);
        v59 = *(CTelemetryTouchLatencyAnalysis **)(v58 + 56);
        if ( v59 )
        {
          CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
            v59,
            *(_QWORD *)v58,
            *(_QWORD *)(v58 + 8),
            *(_QWORD *)(v58 + 16),
            *(_QWORD *)(v58 + 24),
            *(_QWORD *)(v58 + 32),
            *((_QWORD *)a2 + 41),
            *((_QWORD *)a2 + 43),
            *(_QWORD *)((char *)v7 + 25892),
            *(_DWORD *)(v58 + 40),
            *(_DWORD *)(v58 + 44),
            *(_DWORD *)(v58 + 48),
            *(_QWORD *)a2);
          CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
            *(CTelemetryTouchLatencyAnalysis **)(v58 + 56),
            *(_QWORD *)v58,
            v57);
          *(_QWORD *)(v58 + 56) = 0LL;
        }
        v33 = (unsigned int)(v33 + 1);
      }
      while ( (unsigned int)v33 < *((_DWORD *)a2 + 284) );
      v24 = a5;
    }
    CPartitionVerticalBlankScheduler::TelemetryFillFrameInfo(v7, (struct CAnimationTracking::TelFrameInfo *)v79, a2);
    v36 = 0LL;
    while ( (unsigned int)v36 < *((_DWORD *)v7 + 6556) )
    {
      v48 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 3275) + 8 * v36) + 64LL);
      if ( v48 && v80 >= v48 )
      {
        CAnimationTracking::StopAnalyzingAnimationScenario(
          (CPartitionVerticalBlankScheduler *)((char *)v7 + 26200),
          v36,
          (const struct CAnimationTracking::TelFrameInfo *)v79);
        v35 = 1;
      }
      else
      {
        v36 = (unsigned int)(v35 + v36);
      }
    }
    v37 = *((_QWORD *)a2 + 3);
    if ( v24 )
    {
      if ( v37 )
        CKernelTransport::DiscardFrame(*((CKernelTransport **)v7 + 6), v37);
      goto LABEL_36;
    }
    v38 = *((_DWORD *)a2 + 8);
    *((_QWORD *)&v78 + 1) = 0LL;
    v75 = v38;
    v76 = *((_DWORD *)a2 + 59);
    v77 = v76;
    *(_QWORD *)&v78 = *((_QWORD *)a2 + 43);
    if ( !v37 )
      goto LABEL_35;
    v39 = (_QWORD *)*((_QWORD *)v7 + 6);
    v71 = v37;
    v5 = 0;
    v40 = NtDCompositionRetireFrame(*v39, &v71, &v75);
    if ( v40 < 0 )
    {
      v5 = v40 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40 | 0x10000000, 0x9Cu);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v5, 0x7B1u);
    }
    else
    {
LABEL_35:
      v42 = 0LL;
      if ( *((_DWORD *)a2 + 276) )
      {
        while ( 1 )
        {
          SetLastError(0);
          v62 = *(_QWORD **)(*((_QWORD *)a2 + 135) + 8 * v42);
          if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v62, v62 + 1) )
            break;
          v42 = (unsigned int)(v42 + 1);
          if ( (unsigned int)v42 >= *((_DWORD *)a2 + 276) )
            goto LABEL_36;
        }
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x88980003, 0LL, 0, LastError, 0x1B3u);
      }
LABEL_36:
      *((_DWORD *)v7 + 6463) = v68;
      if ( v8 || v24 )
      {
LABEL_37:
        for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 292); j = (unsigned int)(j + 1) )
          CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)a2 + 143) + 8 * j));
        *((_DWORD *)a2 + 292) = 0;
        DynArrayImpl<0>::ShrinkToSize((__int64)a2 + 1144, 8u);
      }
LABEL_39:
      *v72 = v8;
    }
  }
  return (unsigned int)v5;
}
