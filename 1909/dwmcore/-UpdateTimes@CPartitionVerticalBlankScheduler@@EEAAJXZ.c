/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18002032C (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180025EC8 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x1800264C4 (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074558 (-GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UN.c)
 *     ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180075680 (-CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180076EF8 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D7220 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18018BBB8 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 *     McTemplateU0qNR0 @ 0x180191CFC (McTemplateU0qNR0.c)
 *     McTemplateU0xxf @ 0x180191D78 (McTemplateU0xxf.c)
 *     McTemplateU0qff @ 0x180191E04 (McTemplateU0qff.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  char *v3; // rdi
  unsigned int i; // esi
  void *v5; // rcx
  unsigned int j; // esi
  void *v7; // rcx
  unsigned int k; // esi
  void *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  signed int PresentStatistics; // eax
  __int64 v16; // rcx
  int v17; // r9d
  signed int v18; // edi
  __int64 v19; // rax
  unsigned int v20; // esi
  DWORD *v21; // rcx
  __int64 v22; // rdi
  unsigned int v23; // r14d
  __int64 v24; // r12
  __int64 v25; // rdi
  LONGLONG v26; // r13
  __int64 v27; // r8
  __int64 v28; // rax
  int v29; // ecx
  bool v30; // zf
  __int128 v31; // xmm1
  int v32; // eax
  __int64 v33; // r12
  unsigned __int64 *v34; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  unsigned int v46; // edi
  int v47; // edx
  int v48; // r8d
  __int64 v49; // rcx
  __int64 v50; // rdx
  signed int v51; // eax
  __int64 v52; // rax
  _QWORD *v53; // r15
  __int64 v54; // rcx
  __int64 v55; // rdi
  char v56; // al
  int v58; // r9d
  unsigned int v59; // edx
  __int64 v60; // r8
  __int64 v61; // rax
  signed int v62; // eax
  __int64 v63; // rcx
  signed int v64; // edi
  __int64 v65; // rcx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __m128d v69; // xmm0
  int v70; // edx
  unsigned int m; // esi
  __int64 v72; // rax
  __int128 v73; // xmm1
  __m128d v74; // xmm1
  unsigned __int64 v75; // rcx
  int v76; // r8d
  __int64 v77; // r9
  unsigned int v78; // eax
  unsigned __int64 v79; // r10
  unsigned __int64 v80; // rtt
  unsigned __int64 v81; // rtt
  bool v82[4]; // [rsp+110h] [rbp-198h] BYREF
  unsigned int v83; // [rsp+114h] [rbp-194h] BYREF
  __int64 v84; // [rsp+118h] [rbp-190h]
  _QWORD *v85; // [rsp+120h] [rbp-188h]
  unsigned __int64 v86; // [rsp+128h] [rbp-180h]
  __int128 v87; // [rsp+140h] [rbp-168h]
  unsigned __int64 v88; // [rsp+150h] [rbp-158h]
  CPartitionVerticalBlankScheduler *v89; // [rsp+158h] [rbp-150h]
  unsigned __int64 v90; // [rsp+160h] [rbp-148h]
  unsigned __int64 v91; // [rsp+168h] [rbp-140h]
  __int128 v92; // [rsp+180h] [rbp-128h]
  __int128 v93; // [rsp+190h] [rbp-118h]
  __int128 v94; // [rsp+1B0h] [rbp-F8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+1D0h] [rbp-D8h] BYREF

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v89 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( !*((_BYTE *)this + 26236) || !*((_BYTE *)this + 26237) )
    goto LABEL_4;
  if ( (v1 & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Start);
  v62 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v83 = v62;
  v64 = v62;
  if ( v62 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0xA23u, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 32LL))(*((_QWORD *)this + 8));
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 26238) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  if ( v64 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x4ACu, 0LL);
    v47 = v64;
  }
  else
  {
LABEL_4:
    v3 = (char *)this + 1608 * *((unsigned int *)this + 6470) + 152;
    memset_0(v3, 0, 0x438uLL);
    for ( i = 0; i < *((_DWORD *)v3 + 276); ++i )
      operator delete(*(void **)(*((_QWORD *)v3 + 135) + 8LL * i));
    v5 = (void *)*((_QWORD *)v3 + 135);
    *((_DWORD *)v3 + 276) = 0;
    if ( v5 != *((void **)v3 + 136) )
    {
      operator delete(v5);
      *((_QWORD *)v3 + 135) = *((_QWORD *)v3 + 136);
      *((_DWORD *)v3 + 275) = *((_DWORD *)v3 + 274);
    }
    for ( j = 0; j < *((_DWORD *)v3 + 284); ++j )
    {
      v66 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v3 + 139) + 8LL * j);
      if ( v66 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v66);
    }
    v7 = (void *)*((_QWORD *)v3 + 139);
    *((_DWORD *)v3 + 284) = 0;
    if ( v7 != *((void **)v3 + 140) )
    {
      operator delete(v7);
      *((_QWORD *)v3 + 139) = *((_QWORD *)v3 + 140);
      *((_DWORD *)v3 + 283) = *((_DWORD *)v3 + 282);
    }
    for ( k = 0; k < *((_DWORD *)v3 + 292); ++k )
    {
      v67 = *(_QWORD *)(*((_QWORD *)v3 + 143) + 8LL * k);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
    }
    v9 = (void *)*((_QWORD *)v3 + 143);
    *((_DWORD *)v3 + 292) = 0;
    if ( v9 != *((void **)v3 + 144) )
    {
      operator delete(v9);
      *((_QWORD *)v3 + 143) = *((_QWORD *)v3 + 144);
      *((_DWORD *)v3 + 291) = *((_DWORD *)v3 + 290);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
    v10 = 4LL;
    v11 = *((_QWORD *)this + 3237) + 472LL;
    v12 = *((_QWORD *)this + 3238) + 472LL;
    do
    {
      v11 += 128LL;
      v13 = *(_OWORD *)v12;
      v12 += 128LL;
      *(_OWORD *)(v11 - 128) = v13;
      *(_OWORD *)(v11 - 112) = *(_OWORD *)(v12 - 112);
      *(_OWORD *)(v11 - 96) = *(_OWORD *)(v12 - 96);
      *(_OWORD *)(v11 - 80) = *(_OWORD *)(v12 - 80);
      *(_OWORD *)(v11 - 64) = *(_OWORD *)(v12 - 64);
      *(_OWORD *)(v11 - 48) = *(_OWORD *)(v12 - 48);
      *(_OWORD *)(v11 - 32) = *(_OWORD *)(v12 - 32);
      *(_OWORD *)(v11 - 16) = *(_OWORD *)(v12 - 16);
      --v10;
    }
    while ( v10 );
    v14 = *(_OWORD *)v12;
    v83 = 16;
    *(_OWORD *)v11 = v14;
    v82[0] = 0;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)(v12 + 16);
    *(_OWORD *)(v11 + 32) = *(_OWORD *)(v12 + 32);
    *(_OWORD *)(v11 + 48) = *(_OWORD *)(v12 + 48);
    *(_QWORD *)(v11 + 64) = *(_QWORD *)(v12 + 64);
    PresentStatistics = CRenderTargetManager::GetPresentStatistics(
                          *(CRenderTargetManager **)(*((_QWORD *)this + 8) + 64LL),
                          &v83,
                          v82,
                          (struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)this + 3237) + 480LL),
                          (struct _UNSIGNED_RATIO *)&pExceptionRecord);
    v18 = PresentStatistics;
    if ( PresentStatistics < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802BE438, 2u, PresentStatistics, 0xB7Au, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v68, &dword_1802BE5C8, 2u, v18, 0x328u, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 3237) + 472LL) = v83;
    if ( v18 < 0 || v82[0] || (v19 = *((_QWORD *)this + 3237), !*(_DWORD *)(v19 + 472)) )
    {
      *(_BYTE *)(*((_QWORD *)this + 3237) + 1060LL) = 0;
    }
    else
    {
      *(_BYTE *)(v19 + 1060) = 1;
      v20 = 0;
      v21 = (DWORD *)*((_QWORD *)this + 3237);
      v21[24] = v21[118];
      v22 = *((_QWORD *)this + 3237);
      v23 = *(_DWORD *)(v22 + 96);
      v24 = v22 + 1208;
      if ( v23 )
      {
        v25 = 0LL;
        do
        {
          LODWORD(v21) = g_qpcFrequency.LowPart;
          v26 = g_qpcFrequency.QuadPart
              * *(&pExceptionRecord.ExceptionFlags + 2 * v25)
              / *(&pExceptionRecord.ExceptionCode + 2 * v25);
          if ( v26 != *(_QWORD *)(v24 + 8 * v25) )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              v69 = 0LL;
              v69.m128d_f64[0] = (double)(int)v26;
              if ( v26 < 0 )
                v69.m128d_f64[0] = v69.m128d_f64[0] + 1.844674407370955e19;
              v69.m128d_f64[0] = v69.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
              McTemplateU0qff(
                g_qpcFrequency.LowPart,
                (unsigned int)&EVTDESC_SCHEDULE_NEW_NOMINAL_REFRESH_PERIOD,
                v20,
                v17,
                _mm_cvtpd_ps(v69).m128_i8[0]);
            }
            v61 = *((_QWORD *)&pExceptionRecord.ExceptionCode + v25);
            v21 = &pExceptionRecord.ExceptionFlags + 2 * v25;
            *(_QWORD *)(v24 + 8 * v25) = v26;
            *(_QWORD *)((char *)v21 + v24 - (_QWORD)&pExceptionRecord.ExceptionFlags + 128) = v61;
            *(_BYTE *)(v25 + v24 + 384) = 1;
          }
          ++v20;
          ++v25;
        }
        while ( v20 < v23 );
        v22 = *((_QWORD *)this + 3237);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0qNR0(
          (_DWORD)v21,
          (unsigned int)&EVTDESC_SCHEDULE_GETPRESENTSTATS1,
          *(_DWORD *)(v22 + 472),
          *(_DWORD *)(v22 + 472) << 9,
          v22 + 480);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          for ( m = 0; m < *(_DWORD *)(v22 + 472); ++m )
          {
            v72 = 32 * (m + 15LL);
            v73 = *(_OWORD *)(v72 + v22 + 16);
            v94 = *(_OWORD *)(v72 + v22);
            v87 = v73;
            v92 = v73;
            v93 = v94;
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              v74 = 0LL;
              v74.m128d_f64[0] = (double)(DWORD2(v92) - DWORD2(v93));
              if ( (__int64)(*((_QWORD *)&v92 + 1) - *((_QWORD *)&v93 + 1)) < 0 )
                v74.m128d_f64[0] = v74.m128d_f64[0] + 1.844674407370955e19;
              v74.m128d_f64[0] = v74.m128d_f64[0] * 1000.0 / (double)(int)g_qpcFrequency.LowPart;
              McTemplateU0xxf(DWORD1(v94), v70, m, v87 - DWORD1(v94), _mm_cvtpd_ps(v74).m128_i8[0]);
            }
          }
        }
      }
      v27 = *((_QWORD *)this + 3238);
      if ( *(_BYTE *)(v27 + 1060) && !*((_BYTE *)this + 26236) )
        CRateInfo::CalculateEffectiveRefreshRates(
          (CRateInfo *)(*((_QWORD *)this + 3237) + 1208LL),
          0x10u,
          (const struct DXGI_FRAME_STATISTICS_DWM *)(v27 + 480),
          (const struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)this + 3237) + 480LL));
      v28 = *((_QWORD *)this + 3237);
      v29 = *((_DWORD *)this + 6566);
      v87 = *(_OWORD *)(v28 + 496);
      if ( v29 )
      {
        v58 = v87;
        v59 = 0;
        do
        {
          v60 = *(_QWORD *)(*((_QWORD *)this + 3280) + 8LL * v59);
          if ( *(_QWORD *)(v60 + 56) )
          {
            if ( !*(_DWORD *)(v60 + 24) )
              *(_DWORD *)(v60 + 24) = v58;
            *(_DWORD *)(v60 + 28) = v58;
          }
          ++v59;
        }
        while ( v59 < *((_DWORD *)this + 6566) );
        v28 = *((_QWORD *)this + 3237);
      }
      v30 = *((_DWORD *)this + 6728) == 0;
      v31 = *(_OWORD *)(v28 + 496);
      v32 = 0;
      v87 = v31;
      if ( !v30 )
      {
        if ( !*((_DWORD *)this + 6772) )
          *((_DWORD *)this + 6772) = v31;
        *((_DWORD *)this + 6773) = v31;
        v32 = 1;
      }
      if ( *((_DWORD *)this + 6806) )
      {
        if ( !*((_DWORD *)this + 6850) )
          *((_DWORD *)this + 6850) = v31;
        *((_DWORD *)this + 6851) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 6884) )
      {
        if ( !*((_DWORD *)this + 6928) )
          *((_DWORD *)this + 6928) = v31;
        *((_DWORD *)this + 6929) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 6962) )
      {
        if ( !*((_DWORD *)this + 7006) )
          *((_DWORD *)this + 7006) = v31;
        *((_DWORD *)this + 7007) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7040) )
      {
        if ( !*((_DWORD *)this + 7084) )
          *((_DWORD *)this + 7084) = v31;
        *((_DWORD *)this + 7085) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7118) )
      {
        if ( !*((_DWORD *)this + 7162) )
          *((_DWORD *)this + 7162) = v31;
        *((_DWORD *)this + 7163) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7196) )
      {
        if ( !*((_DWORD *)this + 7240) )
          *((_DWORD *)this + 7240) = v31;
        *((_DWORD *)this + 7241) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7274) )
      {
        if ( !*((_DWORD *)this + 7318) )
          *((_DWORD *)this + 7318) = v31;
        *((_DWORD *)this + 7319) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7352) )
      {
        if ( !*((_DWORD *)this + 7396) )
          *((_DWORD *)this + 7396) = v31;
        *((_DWORD *)this + 7397) = v31;
        ++v32;
      }
      if ( *((_DWORD *)this + 7430) )
      {
        if ( !*((_DWORD *)this + 7474) )
          *((_DWORD *)this + 7474) = v31;
        *((_DWORD *)this + 7475) = v31;
        ++v32;
      }
      if ( v32 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0d(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT,
          (unsigned int)v31);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
    v33 = *((_QWORD *)this + 4455);
    v34 = (unsigned __int64 *)((char *)this + 35656);
    v35 = *((_QWORD *)this + 4457);
    v36 = ((unsigned __int64)this + 35656) | (((_QWORD)this + 35656) << 32);
    if ( (v36 ^ v33) != v35 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v33);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v33;
      pExceptionRecord.ExceptionInformation[2] = (int)((v35 ^ ((unsigned __int64)v34 | (((_QWORD)this + 35656) << 32))) >> 32);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v35 ^ (unsigned int)v34;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v33 = *((_QWORD *)this + 4455);
    }
    *((_QWORD *)this + 4456) = v33;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 4455);
    v37 = *((_QWORD *)this + 4455);
    v38 = *((_QWORD *)this + 4456);
    if ( v37 < v38 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304293;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v37);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v37;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v38);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v38;
      pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      pExceptionRecord.NumberParameters = 8;
      v75 = 1000 * (v38 - v37) / g_qpcFrequency.QuadPart;
      pExceptionRecord.ExceptionInformation[6] = SHIDWORD(v75);
      pExceptionRecord.ExceptionInformation[7] = (unsigned int)v75;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v37 = *((_QWORD *)this + 4455);
    }
    v39 = *((_QWORD *)this + 3237);
    *v34 = v37 ^ v36;
    *(_QWORD *)(v39 + 312) = v37;
    v40 = *((_QWORD *)this + 3237);
    v41 = *(_QWORD *)(v40 + 1464);
    if ( !*(_BYTE *)(v40 + 1060) || *(_BYTE *)(v40 + 1200) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
    }
    else
    {
      *(_QWORD *)(v40 + 304) = *(_QWORD *)(v40 + 504);
      *(_DWORD *)(*((_QWORD *)this + 3237) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 3237) + 496LL);
    }
    v42 = *(_QWORD *)(*((_QWORD *)this + 3238) + 304LL);
    if ( v42 )
      v43 = (*(_QWORD *)(*((_QWORD *)this + 3237) + 304LL) + (v41 >> 4) - v42) / v41;
    else
      v43 = 1LL;
    *((_QWORD *)this + 3239) = v43;
    v44 = *((_QWORD *)this + 3237);
    v45 = *(_QWORD *)(v44 + 312);
    if ( *(_QWORD *)(v44 + 304) > v45
      || *(_BYTE *)(v44 + 1060) && *(_QWORD *)(v44 + 504) < *(_QWORD *)(*((_QWORD *)this + 3238) + 312LL) )
    {
      *(_QWORD *)(v44 + 304) = v45;
      v44 = *((_QWORD *)this + 3237);
    }
    v46 = -1;
    *(_QWORD *)(v44 + 16) = *((_QWORD *)this + 3239) + *(_QWORD *)(*((_QWORD *)this + 3238) + 16LL);
    v47 = 0;
    v48 = *((_DWORD *)this + 6473);
    v83 = 0;
    if ( v48 == -1 )
    {
      v49 = *((unsigned int *)this + 6472);
      if ( (_DWORD)v49 != -1 )
      {
        v76 = ((_BYTE)v49 + 1) & 0xF;
        while ( (_DWORD)v49 != v76 )
        {
          v77 = 1608LL * (unsigned int)v49;
          if ( *((_BYTE *)this + v77 + 1210) )
            break;
          v78 = v49;
          if ( !*((_BYTE *)this + v77 + 1209) )
            v78 = v46;
          v49 = ((_BYTE)v49 - 1) & 0xF;
          v46 = v78;
        }
      }
    }
    else
    {
      v49 = ((_BYTE)v48 + 1) & 0xF;
      if ( (_DWORD)v49 != v48 )
      {
        do
        {
          if ( v46 != -1 )
            break;
          v50 = 1608LL * (unsigned int)v49;
          if ( *((_BYTE *)this + v50 + 1209) && !*((_BYTE *)this + v50 + 1210) )
            v46 = v49;
          v49 = ((_BYTE)v49 + 1) & 0xF;
        }
        while ( (_DWORD)v49 != v48 );
        v47 = 0;
      }
    }
    if ( v46 != -1 )
    {
      while ( 1 )
      {
        v51 = CPartitionVerticalBlankScheduler::RetireFrame(
                this,
                (CPartitionVerticalBlankScheduler *)((char *)this + 1608 * v46 + 152),
                v46,
                v82,
                0);
        v83 = v51;
        v47 = v51;
        if ( v51 < 0 )
          break;
        v46 = ((_BYTE)v46 + 1) & 0xF;
        if ( !v82[0] || v46 == *((_DWORD *)this + 6470) )
          goto LABEL_69;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v51, 0x6D9u, 0LL);
      v47 = v83;
    }
LABEL_69:
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v47, 0x4C7u, 0LL);
      v47 = v83;
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)this + 3237) + 32LL) = *(_DWORD *)(*((_QWORD *)this + 3238) + 32LL) + 1;
    }
  }
  v52 = *((_QWORD *)this + 3238);
  v53 = (_QWORD *)*((_QWORD *)this + 3237);
  v85 = v53;
  v54 = *(_QWORD *)(v52 + 304);
  if ( v54 )
    v55 = v53[38] - v54;
  else
    v55 = v53[183];
  v56 = Microsoft_Windows_Dwm_CoreEnableBits;
  v84 = v55;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v79 = v53[38];
    v80 = v53[40];
    v86 = (unsigned __int64)(10000000 * (v53[39] % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
        + 10000000 * (v53[39] / g_qpcFrequency.QuadPart);
    v88 = 10000000 * (v80 / g_qpcFrequency.QuadPart)
        + 10000000 * (v80 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v81 = v53[148];
    v90 = 10000000 * (v79 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v79 / g_qpcFrequency.QuadPart);
    v91 = 10000000 * (v81 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart
        + 10000000 * (v81 / g_qpcFrequency.QuadPart);
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      v88 - v86,
      *((_DWORD *)v85 + 8),
      *((_DWORD *)v89 + 6470),
      *v85,
      *((_DWORD *)v85 + 8),
      v91,
      v85[148],
      *((_DWORD *)v85 + 43));
    v56 = Microsoft_Windows_Dwm_CoreEnableBits;
    v47 = v83;
  }
  if ( (v56 & 2) == 0 )
    return (unsigned int)v47;
  McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return v83;
}
