/*
 * XREFs of ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CCE70
 * Callers:
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ?CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z @ 0x180059938 (-CalculateEffectiveRefreshRates@CRateInfo@@QEAAXIPEBUDXGI_FRAME_STATISTICS_DWM@@0@Z.c)
 *     ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18007A73C (-GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ @ 0x1800CD524 (-TracePresentStats@CScheduleFrameInfoVolatileData@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0d @ 0x180147BF8 (McTemplateU0d.c)
 *     McTemplateU0qff @ 0x1801518D0 (McTemplateU0qff.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(
        CScheduleFrameInfoVolatileData **this,
        __int64 a2,
        __int64 a3,
        int a4)
{
  CPartitionVerticalBlankScheduler *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int128 v8; // xmm0
  char v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r13
  int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // r14d
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  bool v17; // r15
  __int64 v18; // rax
  int v19; // eax
  int v20; // esi
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned int v23; // esi
  CScheduleFrameInfoVolatileData *v24; // rcx
  unsigned int v25; // r14d
  char *v26; // r15
  LARGE_INTEGER v27; // rcx
  LONGLONG v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // edx
  __int64 v34; // r8
  struct CRenderTarget *PrimaryRenderTargetNoRef; // rax
  int v36; // eax
  int v37; // esi
  __int64 v38; // rcx
  __m128d v39; // xmm0
  __int64 v40; // [rsp+30h] [rbp-E8h]
  __int128 v42; // [rsp+50h] [rbp-C8h]
  unsigned int v43[32]; // [rsp+60h] [rbp-B8h] BYREF

  v4 = (CPartitionVerticalBlankScheduler *)this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Start);
  v5 = 4LL;
  v6 = *((_QWORD *)v4 + 3232) + 472LL;
  v7 = *((_QWORD *)v4 + 3233) + 472LL;
  do
  {
    v6 += 128LL;
    v8 = *(_OWORD *)v7;
    v7 += 128LL;
    *(_OWORD *)(v6 - 128) = v8;
    *(_OWORD *)(v6 - 112) = *(_OWORD *)(v7 - 112);
    *(_OWORD *)(v6 - 96) = *(_OWORD *)(v7 - 96);
    *(_OWORD *)(v6 - 80) = *(_OWORD *)(v7 - 80);
    *(_OWORD *)(v6 - 64) = *(_OWORD *)(v7 - 64);
    *(_OWORD *)(v6 - 48) = *(_OWORD *)(v7 - 48);
    *(_OWORD *)(v6 - 32) = *(_OWORD *)(v7 - 32);
    *(_OWORD *)(v6 - 16) = *(_OWORD *)(v7 - 16);
    --v5;
  }
  while ( v5 );
  v9 = 0;
  *(_OWORD *)v6 = *(_OWORD *)v7;
  *(_OWORD *)(v6 + 16) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(v6 + 32) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)(v6 + 48) = *(_OWORD *)(v7 + 48);
  *(_QWORD *)(v6 + 64) = *(_QWORD *)(v7 + 64);
  v10 = *((_QWORD *)v4 + 3232) + 480LL;
  v40 = v10;
  v11 = *(_QWORD *)(*((_QWORD *)v4 + 8) + 64LL);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  if ( !*(_DWORD *)(v11 + 48) )
    goto LABEL_63;
  v15 = *((_QWORD *)v4 + 3232) + 480LL;
  while ( v13 < 0x10 )
  {
    v16 = *(_QWORD **)(*(_QWORD *)(v11 + 24) + 8LL * v14);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v16 + 48LL))(v16, 76LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v16 + 224LL))(v16) )
    {
      v17 = 0;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v16 + 224LL))(v16) )
      {
        v18 = v16[21];
        v17 = *(_BYTE *)(v18 + 321) && *(_BYTE *)(v18 + 322);
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int *))(v16[8] + 112LL))(
              v16 + 8,
              v15 + 32LL * v13,
              &v43[2 * v13]);
      v20 = v19;
      if ( v17 )
      {
        if ( v19 != 142213121 )
        {
          v9 = 0;
          goto LABEL_17;
        }
        v9 = 1;
      }
      else
      {
LABEL_17:
        if ( v19 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802925F0, 2u, v19, 0x3D6u);
      }
      if ( !v12 || v12 >= 0 && v20 < 0 )
        v12 = v20;
      ++v13;
    }
    if ( ++v14 >= *(_DWORD *)(v11 + 48) )
      break;
  }
  v4 = (CPartitionVerticalBlankScheduler *)this;
  if ( v13 )
    goto LABEL_24;
  v10 = v40;
LABEL_63:
  PrimaryRenderTargetNoRef = CRenderTargetManager::GetPrimaryRenderTargetNoRef((CRenderTargetManager *)v11);
  if ( PrimaryRenderTargetNoRef )
  {
    v36 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*((_QWORD *)PrimaryRenderTargetNoRef + 8) + 112LL))(
            (__int64)PrimaryRenderTargetNoRef + 64,
            v10 + 32LL * v13,
            &v43[2 * v13]);
    v37 = v36;
    if ( v36 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802925F0, 2u, v36, 0x3E3u);
    if ( !v12 || v12 >= 0 && v37 < 0 )
      v12 = v37;
    ++v13;
  }
LABEL_24:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802925F0, 2u, v12, 0xC45u);
    MilInstrumentationCheckHR_MaybeFailFast(v38, &dword_1802925E0, 2u, v12, 0x330u);
  }
  *(_DWORD *)(*((_QWORD *)v4 + 3232) + 472LL) = v13;
  if ( v12 < 0 || v9 || (v21 = *((_QWORD *)v4 + 3232), !*(_DWORD *)(v21 + 472)) )
  {
    *(_BYTE *)(*((_QWORD *)v4 + 3232) + 1060LL) = 0;
  }
  else
  {
    *(_BYTE *)(v21 + 1060) = 1;
    v22 = 0LL;
    v23 = 0;
    *(_DWORD *)(*((_QWORD *)v4 + 3232) + 96LL) = *(_DWORD *)(*((_QWORD *)v4 + 3232) + 472LL);
    v24 = (CScheduleFrameInfoVolatileData *)*((_QWORD *)v4 + 3232);
    v25 = *((_DWORD *)v24 + 24);
    v26 = (char *)v24 + 1208;
    if ( v25 )
    {
      v27 = g_qpcFrequency;
      do
      {
        v28 = v27.QuadPart * v43[2 * v22 + 1];
        if ( v43[2 * v22] == 60020LL )
          v29 = v28 / 60020;
        else
          v29 = v28 / v43[2 * v22];
        if ( v29 != *(_QWORD *)&v26[8 * v22] )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            v39 = 0LL;
            v39.m128d_f64[0] = (double)(int)v29;
            if ( v29 < 0 )
              v39.m128d_f64[0] = v39.m128d_f64[0] + 1.844674407370955e19;
            v39.m128d_f64[0] = v39.m128d_f64[0] * 1000.0 / (double)(int)v27.LowPart;
            McTemplateU0qff(
              v27.LowPart,
              (unsigned int)&EVTDESC_SCHEDULE_NEW_NOMINAL_REFRESH_PERIOD,
              v23,
              a4,
              _mm_cvtpd_ps(v39).m128_i8[0]);
          }
          *(_QWORD *)((char *)&v43[2 * v22 + 33] + v26 - (char *)&v43[1]) = *(_QWORD *)&v43[2 * v22];
          *(_QWORD *)&v26[8 * v22] = v29;
          v26[v22 + 384] = 1;
          v27 = g_qpcFrequency;
        }
        ++v23;
        ++v22;
      }
      while ( v23 < v25 );
      v4 = (CPartitionVerticalBlankScheduler *)this;
      LODWORD(v22) = 0;
      v24 = this[3232];
    }
    CScheduleFrameInfoVolatileData::TracePresentStats(v24);
    v30 = *((_QWORD *)v4 + 3233);
    if ( *(_BYTE *)(v30 + 1060) && !*((_BYTE *)v4 + 26196) )
      CRateInfo::CalculateEffectiveRefreshRates(
        (CRateInfo *)(*((_QWORD *)v4 + 3232) + 1208LL),
        0x10u,
        (const struct DXGI_FRAME_STATISTICS_DWM *)(v30 + 480),
        (const struct DXGI_FRAME_STATISTICS_DWM *)(*((_QWORD *)v4 + 3232) + 480LL));
    v31 = *((_QWORD *)v4 + 3232);
    v42 = *(_OWORD *)(v31 + 496);
    if ( *((_DWORD *)v4 + 6556) )
    {
      v33 = 0;
      do
      {
        v34 = *(_QWORD *)(*((_QWORD *)v4 + 3275) + 8LL * v33);
        if ( *(_QWORD *)(v34 + 56) )
        {
          if ( !*(_DWORD *)(v34 + 24) )
            *(_DWORD *)(v34 + 24) = v42;
          *(_DWORD *)(v34 + 28) = v42;
        }
        ++v33;
      }
      while ( v33 < *((_DWORD *)v4 + 6556) );
      v31 = *((_QWORD *)v4 + 3232);
    }
    v32 = (unsigned int)*(_OWORD *)(v31 + 496);
    if ( *((_DWORD *)v4 + 6712) )
    {
      if ( !*((_DWORD *)v4 + 6747) )
        *((_DWORD *)v4 + 6747) = v32;
      *((_DWORD *)v4 + 6748) = v32;
      LODWORD(v22) = 1;
    }
    if ( *((_DWORD *)v4 + 6774) )
    {
      if ( !*((_DWORD *)v4 + 6809) )
        *((_DWORD *)v4 + 6809) = v32;
      *((_DWORD *)v4 + 6810) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 6836) )
    {
      if ( !*((_DWORD *)v4 + 6871) )
        *((_DWORD *)v4 + 6871) = v32;
      *((_DWORD *)v4 + 6872) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 6898) )
    {
      if ( !*((_DWORD *)v4 + 6933) )
        *((_DWORD *)v4 + 6933) = v32;
      *((_DWORD *)v4 + 6934) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 6960) )
    {
      if ( !*((_DWORD *)v4 + 6995) )
        *((_DWORD *)v4 + 6995) = v32;
      *((_DWORD *)v4 + 6996) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 7022) )
    {
      if ( !*((_DWORD *)v4 + 7057) )
        *((_DWORD *)v4 + 7057) = v32;
      *((_DWORD *)v4 + 7058) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 7084) )
    {
      if ( !*((_DWORD *)v4 + 7119) )
        *((_DWORD *)v4 + 7119) = v32;
      *((_DWORD *)v4 + 7120) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 7146) )
    {
      if ( !*((_DWORD *)v4 + 7181) )
        *((_DWORD *)v4 + 7181) = v32;
      *((_DWORD *)v4 + 7182) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 7208) )
    {
      if ( !*((_DWORD *)v4 + 7243) )
        *((_DWORD *)v4 + 7243) = v32;
      *((_DWORD *)v4 + 7244) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( *((_DWORD *)v4 + 7270) )
    {
      if ( !*((_DWORD *)v4 + 7305) )
        *((_DWORD *)v4 + 7305) = v32;
      *((_DWORD *)v4 + 7306) = v32;
      LODWORD(v22) = v22 + 1;
    }
    if ( (_DWORD)v22 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
      McTemplateU0d(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEDXREFRESH_EVENT,
        v32);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_GETPRESENTSTATS_Stop);
}
