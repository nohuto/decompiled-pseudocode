/*
 * XREFs of ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180076EF8
 * Callers:
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800264C4 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18001B524 (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180077970 (-CheckAndNotifyAboutLongFrames@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B3DA8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z @ 0x1800C9BD8 (-RecordGlitch@CTelemetryTouchLatencyAnalysis@@QEAAX_KI@Z.c)
 *     ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800CAB64 (-TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xqxxqq @ 0x1801782BC (McTemplateU0xqxxqq.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  CPartitionVerticalBlankScheduler *v6; // rdi
  unsigned int v7; // r12d
  char v8; // r13
  unsigned __int64 v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  char v14; // r13
  __int64 v15; // rax
  __int128 v16; // xmm0
  bool v17; // cc
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v21; // xmm0
  CPartitionVerticalBlankScheduler *v22; // rax
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned int v28; // r14d
  __int64 v29; // r9
  unsigned int v30; // edx
  char v31; // si
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // edx
  unsigned int v35; // r8d
  unsigned __int64 i; // r9
  unsigned int v37; // esi
  __int64 v38; // rax
  unsigned __int64 v39; // r10
  unsigned int v40; // esi
  __int64 v41; // rdx
  signed int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // esi
  unsigned int j; // edi
  __int64 v47; // rdx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // rcx
  int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // r8d
  unsigned __int64 v54; // r9
  __int64 v55; // rdx
  unsigned int v56; // eax
  __int64 v57; // rcx
  _DWORD *v58; // r8
  _QWORD *v59; // rcx
  signed int LastError; // eax
  __int64 v61; // rcx
  char v62; // [rsp+40h] [rbp-71h]
  char v63; // [rsp+41h] [rbp-70h]
  unsigned __int64 v64; // [rsp+48h] [rbp-69h] BYREF
  int v65; // [rsp+50h] [rbp-61h]
  unsigned __int64 QuadPart; // [rsp+58h] [rbp-59h] BYREF
  bool *v67; // [rsp+60h] [rbp-51h]
  __m128i v68; // [rsp+68h] [rbp-49h]
  __int128 v69; // [rsp+78h] [rbp-39h]
  char v70[8]; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int64 v71; // [rsp+90h] [rbp-21h]
  unsigned __int64 v72; // [rsp+98h] [rbp-19h]
  int v73; // [rsp+A0h] [rbp-11h] BYREF
  int v74; // [rsp+A4h] [rbp-Dh]
  int v75; // [rsp+A8h] [rbp-9h]
  __int128 v76; // [rsp+B0h] [rbp-1h]

  v67 = a4;
  v65 = a3;
  v6 = this;
  v7 = 0;
  LODWORD(v64) = 0;
  v8 = 1;
  v62 = 1;
  if ( !*((_BYTE *)a2 + 1057) )
    goto LABEL_40;
  v9 = *((_QWORD *)a2 + 41) + 1LL;
  v10 = 0;
  while ( v10 < *((_DWORD *)a2 + 118) && v10 < *(_DWORD *)(*((_QWORD *)v6 + 3237) + 472LL) )
  {
    v11 = *(_QWORD *)(*((_QWORD *)v6 + 8) + 64LL);
    if ( v10 >= *(_DWORD *)(v11 + 96) )
    {
      v63 = 1;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802BE434, 1u, 0x80070057, 0x46Au, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v57, &dword_1802BE434, 1u, 0x80070057, 0xBD0u, 0LL);
      v12 = v10;
    }
    else
    {
      v12 = v10;
      v13 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8LL * v10);
      v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 280LL))(v13);
    }
    if ( !*((_BYTE *)a2 + v12 + 1062) )
    {
      this = (CPartitionVerticalBlankScheduler *)*((_QWORD *)v6 + 3237);
      if ( *((_QWORD *)this + 39) - *((_QWORD *)a2 + 40) > g_qpcFrequency.QuadPart )
      {
        v14 = 1;
LABEL_10:
        v18 = 1;
      }
      else
      {
        v14 = 0;
        v15 = 32 * (v12 + 15);
        v16 = *(_OWORD *)((char *)this + v15 + 16);
        v17 = *((_DWORD *)a2 + v12 + 8) <= *(_DWORD *)((char *)this + v15);
        v18 = 0;
        v76 = v16;
        if ( v17 )
          goto LABEL_10;
      }
      *((_BYTE *)a2 + v12 + 1062) = v18;
      if ( v18 )
      {
        v19 = *((_QWORD *)v6 + 3237);
        v20 = 32 * (v12 + 15);
        this = (CPartitionVerticalBlankScheduler *)(*((_QWORD *)a2 + 41) + 1LL);
        v21 = *(_OWORD *)(v20 + v19 + 16);
        v68 = *(__m128i *)(v20 + v19);
        v22 = (CPartitionVerticalBlankScheduler *)_mm_srli_si128(v68, 8).m128i_u64[0];
        v69 = v21;
        if ( v22 <= this )
          v22 = this;
        *((_QWORD *)a2 + v12 + 43) = v22;
        v23 = *((_QWORD *)v6 + 3237);
        v24 = *(_OWORD *)(v20 + v23 + 16);
        v25 = HIDWORD(*(_QWORD *)(v20 + v23));
        *((_DWORD *)a2 + v12 + 59) = v25;
        v76 = v24;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xqxxqq(
            *((_DWORD *)v6 + 7725) != 0,
            v25,
            *(_QWORD *)a2,
            v10,
            v25,
            *((_QWORD *)a2 + v12 + 43),
            v14,
            *((_DWORD *)v6 + 7725) != 0);
      }
      if ( !v63 || v14 )
      {
        v8 = *((_BYTE *)a2 + v12 + 1062) & v62;
        v62 = v8;
        if ( *((_QWORD *)a2 + v12 + 43) > v9 )
          v9 = *((_QWORD *)a2 + v12 + 43);
      }
      else
      {
        v8 = v62;
      }
    }
    ++v10;
    if ( !v8 )
      break;
  }
  v7 = v64;
  if ( !v8 && !a5 )
    goto LABEL_42;
  *((_QWORD *)a2 + 42) = v9;
  *((_BYTE *)a2 + 1058) = 1;
  --*((_DWORD *)v6 + 7724);
  if ( *(_QWORD *)a2 )
  {
    v26 = *((unsigned int *)v6 + 6473);
    v27 = 0LL;
    if ( (_DWORD)v26 != -1 )
      v27 = (__int64)v6 + 1608 * v26 + 152;
    v28 = 0;
    v29 = *((_QWORD *)v6 + 3237);
    v64 = *(_QWORD *)(v29 + 1464);
    QuadPart = g_qpcFrequency.QuadPart;
    if ( *((_BYTE *)a2 + 1060) && *(_BYTE *)(v29 + 1060) )
    {
      v30 = *((_DWORD *)a2 + 59);
      v31 = 0;
      v32 = *((_DWORD *)a2 + 43);
      if ( v30 > v32 )
      {
        if ( v27 )
        {
          v51 = *(_DWORD *)(v27 + 236);
          if ( v51 )
          {
            v52 = v51 + 1;
            if ( v32 > v52 )
              v52 = *((_DWORD *)a2 + 43);
            v32 = v52;
            if ( v52 >= v30 )
              v32 = *((_DWORD *)a2 + 59);
          }
        }
        v31 = 1;
        v28 = v30 - v32;
      }
      v33 = *(_DWORD *)(v29 + 472);
      v34 = 1;
      if ( v33 > 1 )
      {
        v58 = (_DWORD *)((char *)a2 + 176);
        do
        {
          if ( v34 >= 0x10 )
            break;
          if ( v58[16] > *v58 )
            v31 = 1;
          ++v34;
          ++v58;
        }
        while ( v34 < v33 );
      }
      if ( v31 )
      {
        CScheduleStatistics::TraceGlitch(v33, a2, &QuadPart, &v64);
        ++dword_180339898;
        if ( byte_1803399E0 )
          ++dword_180339874;
        if ( byte_1803399E1 )
          ++dword_180339870;
        ++*((_QWORD *)v6 + 3863);
        v53 = 0;
        v54 = *(_QWORD *)a2;
        if ( *((_DWORD *)v6 + 6566) )
        {
          do
          {
            v55 = *(_QWORD *)(*((_QWORD *)v6 + 3280) + 8LL * v53);
            if ( *(_QWORD *)(v55 + 56) && v54 > *(_QWORD *)(v55 + 56) )
            {
              v56 = *(_DWORD *)(v55 + 36);
              ++*(_DWORD *)(v55 + 40);
              *(_DWORD *)(v55 + 32) += v28;
              if ( v56 <= v28 )
                v56 = v28;
              *(_DWORD *)(v55 + 36) = v56;
            }
            ++v53;
          }
          while ( v53 < *((_DWORD *)v6 + 6566) );
          v54 = *(_QWORD *)a2;
        }
        CTelemetryTouchLatencyAnalysis::RecordGlitch((CPartitionVerticalBlankScheduler *)((char *)v6 + 26816), v54, v28);
      }
    }
    v35 = 0;
    for ( i = *(_QWORD *)a2; v35 < *((_DWORD *)v6 + 6566); ++v35 )
    {
      v47 = *(_QWORD *)(*((_QWORD *)v6 + 3280) + 8LL * v35);
      if ( *(_QWORD *)(v47 + 56) && i >= *(_QWORD *)(v47 + 56) )
      {
        ++*(_DWORD *)(v47 + 72);
        if ( *(_QWORD *)(v47 + 88) )
        {
          v48 = *(_QWORD *)(v47 + 96);
          v49 = v9 - *(_QWORD *)(v47 + 88);
          *(_QWORD *)(v47 + 80) += v49;
          if ( v48 <= v49 )
            v48 = v49;
          *(_QWORD *)(v47 + 96) = v48;
        }
        else
        {
          *(_QWORD *)(v47 + 104) = v9;
        }
        *(_QWORD *)(v47 + 88) = v9;
      }
    }
  }
  v37 = 0;
  v38 = _InterlockedExchange64(&qword_1803399E8, 0LL);
  dword_18033985C += v38;
  dword_180339860 += HIDWORD(v38);
  if ( *((_DWORD *)a2 + 284) )
  {
    do
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::UpdateScenarioLatency(
        *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)a2 + 139) + 8LL * v37++),
        *(_QWORD *)((char *)v6 + 25932),
        *((_QWORD *)a2 + 41),
        *((_QWORD *)a2 + 43),
        *(_QWORD *)a2);
    while ( v37 < *((_DWORD *)a2 + 284) );
  }
  if ( *((_DWORD *)a2 + 118) != 1 || *((_BYTE *)v6 + 30912) || (v70[0] = 1, *((_BYTE *)v6 + 30913)) )
    v70[0] = 0;
  v39 = *(_QWORD *)a2;
  v71 = *(_QWORD *)a2;
  v40 = 0;
  v72 = 10000000 * (*((_QWORD *)a2 + 183) / g_qpcFrequency.QuadPart)
      + (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 183) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
  while ( v40 < *((_DWORD *)v6 + 6566) )
  {
    v50 = *(_QWORD *)(*((_QWORD *)v6 + 3280) + 8LL * v40);
    if ( *(_QWORD *)(v50 + 64) && v39 >= *(_QWORD *)(v50 + 64) )
    {
      CAnimationTracking::StopAnalyzingAnimationScenario(
        (CPartitionVerticalBlankScheduler *)((char *)v6 + 26240),
        v40,
        (const struct CAnimationTracking::TelFrameInfo *)v70);
      v39 = v71;
    }
    else
    {
      ++v40;
    }
  }
  v7 = 0;
  v41 = *((_QWORD *)a2 + 3);
  if ( a5 )
  {
    if ( v41 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 6) + 40LL))(*((_QWORD *)v6 + 6));
      v7 = 0;
    }
    goto LABEL_39;
  }
  v73 = *((_DWORD *)a2 + 8);
  v74 = *((_DWORD *)a2 + 59);
  v75 = v74;
  v76 = *((unsigned __int64 *)a2 + 43);
  if ( v41
    && (v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)v6 + 6) + 32LL))(
                *((_QWORD *)v6 + 6),
                v41,
                &v73),
        v7 = v42,
        v42 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x7A9u, 0LL);
  }
  else
  {
    v44 = 0;
    if ( *((_DWORD *)a2 + 276) )
    {
      while ( 1 )
      {
        SetLastError(0);
        v59 = *(_QWORD **)(*((_QWORD *)a2 + 135) + 8LL * v44);
        if ( !(unsigned int)DwmHLsurfSetUpdatedId(*v59, v59 + 1) )
          break;
        if ( ++v44 >= *((_DWORD *)a2 + 276) )
          goto LABEL_39;
      }
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0x1D2u, 0LL);
    }
LABEL_39:
    *((_DWORD *)v6 + 6473) = v65;
    CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(v6);
    if ( v8 || a5 )
    {
LABEL_40:
      for ( j = 0; j < *((_DWORD *)a2 + 292); ++j )
      {
        v61 = *(_QWORD *)(*((_QWORD *)a2 + 143) + 8LL * j);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 32LL))(v61);
      }
      *((_DWORD *)a2 + 292) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)a2 + 1144, 8LL);
    }
LABEL_42:
    *v67 = v8;
  }
  return v7;
}
