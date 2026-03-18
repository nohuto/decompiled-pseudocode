/*
 * XREFs of ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800CC9D0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x1800C8F90 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EA08 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180071A24 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800790D4 (-ComputeLastVSyncFromPreviousFrame@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180080EDC (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180081600 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18008164C (-RetireFrames@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180083100 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CCE70 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x18014C374 (McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::UpdateTimes(CPartitionVerticalBlankScheduler *this)
{
  char v1; // al
  char *v3; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  __int64 v7; // r12
  unsigned __int64 *v8; // rsi
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  int v20; // esi
  unsigned int v21; // edi
  __int64 v22; // rcx
  int v23; // r8d
  unsigned int m; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rdi
  char v30; // al
  int v32; // eax
  int v33; // eax
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned int v37; // edx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v38; // rcx
  ULONG_PTR v39; // rax
  unsigned __int64 v40; // r15
  int v41; // r8d
  unsigned int v42; // eax
  unsigned __int64 v43; // rtt
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rtt
  bool v46; // [rsp+110h] [rbp-118h] BYREF
  int v47; // [rsp+114h] [rbp-114h]
  __int64 v48; // [rsp+118h] [rbp-110h]
  _QWORD *v49; // [rsp+120h] [rbp-108h]
  unsigned __int64 v50; // [rsp+128h] [rbp-100h]
  unsigned __int64 v51; // [rsp+130h] [rbp-F8h]
  CPartitionVerticalBlankScheduler *v52; // [rsp+138h] [rbp-F0h]
  unsigned __int64 v53; // [rsp+140h] [rbp-E8h]
  unsigned __int64 v54; // [rsp+148h] [rbp-E0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+150h] [rbp-D8h] BYREF

  v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  v52 = this;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Start);
    v1 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( !*((_BYTE *)this + 26196) || !*((_BYTE *)this + 26197) )
    goto LABEL_4;
  if ( (v1 & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Start);
  v33 = CPartitionVerticalBlankScheduler::RetireFrames(this, 1);
  v47 = v33;
  v20 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v33, 0xA27u);
  }
  else
  {
    CCrossThreadComposition::Reset(*((CCrossThreadComposition **)this + 8), v34);
    CPartitionVerticalBlankScheduler::Reinitialize(this);
    *((_BYTE *)this + 26198) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RESET_Stop);
  }
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v20, 0x4B4u);
  }
  else
  {
LABEL_4:
    v3 = (char *)this + 1608 * *((unsigned int *)this + 6460);
    memset_0(v3 + 112, 0, 0x438uLL);
    for ( i = 0; i < *((_DWORD *)v3 + 304); ++i )
      WPF::ProcessHeapImpl::Free(*(void **)(*((_QWORD *)v3 + 149) + 8LL * i));
    *((_DWORD *)v3 + 304) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v3 + 1192), 8u);
    for ( j = 0; j < *((_DWORD *)v3 + 312); ++j )
    {
      v38 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v3 + 153) + 8LL * j);
      if ( v38 )
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v38);
    }
    *((_DWORD *)v3 + 312) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v3 + 1224), 8u);
    for ( k = 0; k < *((_DWORD *)v3 + 320); ++k )
      CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v3 + 157) + 8LL * k));
    *((_DWORD *)v3 + 320) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)(v3 + 1256), 8u);
    CPartitionVerticalBlankScheduler::GetPresentStatisticsAndAdjustRates(this);
    v7 = *((_QWORD *)this + 4414);
    v8 = (unsigned __int64 *)((char *)this + 35328);
    v9 = *((_QWORD *)this + 4416);
    if ( (v7 ^ (((unsigned __int64)this + 35328) | (((_QWORD)this + 35328) << 32))) != v9 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304320;
      pExceptionRecord.NumberParameters = 4;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v7);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v7;
      pExceptionRecord.ExceptionInformation[2] = (int)((v9 ^ ((unsigned __int64)v8 | (((_QWORD)this + 35328) << 32))) >> 32);
      pExceptionRecord.ExceptionInformation[3] = (unsigned int)v9 ^ (unsigned int)v8;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v7 = *((_QWORD *)this + 4414);
    }
    *((_QWORD *)this + 4415) = v7;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 4414);
    v10 = *((_QWORD *)this + 4414);
    v11 = *((_QWORD *)this + 4415);
    if ( v10 < v11 )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionCode = -2003304293;
      pExceptionRecord.ExceptionInformation[0] = SHIDWORD(v10);
      pExceptionRecord.ExceptionInformation[1] = (unsigned int)v10;
      pExceptionRecord.ExceptionInformation[2] = SHIDWORD(v11);
      v39 = (unsigned int)v11;
      v40 = v11 - v10;
      pExceptionRecord.ExceptionInformation[3] = v39;
      pExceptionRecord.ExceptionInformation[4] = g_qpcFrequency.HighPart;
      pExceptionRecord.ExceptionInformation[5] = g_qpcFrequency.LowPart;
      pExceptionRecord.NumberParameters = 8;
      pExceptionRecord.ExceptionInformation[6] = (int)((1000 * v40 / g_qpcFrequency.QuadPart) >> 32);
      pExceptionRecord.ExceptionInformation[7] = (unsigned int)(1000 * v40 / g_qpcFrequency.QuadPart);
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
      v10 = *((_QWORD *)this + 4414);
    }
    v12 = *((_QWORD *)this + 3232);
    *v8 = v10 ^ (((unsigned __int64)this + 35328) | (((_QWORD)this + 35328) << 32));
    *(_QWORD *)(v12 + 312) = v10;
    v13 = *((_QWORD *)this + 3232);
    v14 = *(_QWORD *)(v13 + 1464);
    if ( !*(_BYTE *)(v13 + 1060) || *(_BYTE *)(v13 + 1200) )
    {
      CPartitionVerticalBlankScheduler::ComputeLastVSyncFromPreviousFrame(this);
    }
    else
    {
      *(_QWORD *)(v13 + 304) = *(_QWORD *)(v13 + 504);
      *(_DWORD *)(*((_QWORD *)this + 3232) + 108LL) = *(_DWORD *)(*((_QWORD *)this + 3232) + 496LL);
    }
    v15 = *(_QWORD *)(*((_QWORD *)this + 3233) + 304LL);
    if ( v15 )
      v16 = ((v14 >> 4) + *(_QWORD *)(*((_QWORD *)this + 3232) + 304LL) - v15) / v14;
    else
      v16 = 1LL;
    *((_QWORD *)this + 3234) = v16;
    v17 = *((_QWORD *)this + 3232);
    v18 = *(_QWORD *)(v17 + 312);
    if ( *(_QWORD *)(v17 + 304) > v18
      || *(_BYTE *)(v17 + 1060) && *(_QWORD *)(v17 + 504) < *(_QWORD *)(*((_QWORD *)this + 3233) + 312LL) )
    {
      *(_QWORD *)(v17 + 304) = v18;
      v17 = *((_QWORD *)this + 3232);
    }
    v19 = *((_QWORD *)this + 3233);
    v20 = 0;
    v21 = -1;
    v47 = 0;
    v22 = *((_QWORD *)this + 3234) + *(_QWORD *)(v19 + 16);
    *(_QWORD *)(v17 + 16) = v22;
    v23 = *((_DWORD *)this + 6463);
    if ( v23 == -1 )
    {
      v37 = *((_DWORD *)this + 6462);
      if ( v37 != -1 )
      {
        v41 = ((_BYTE)v37 + 1) & 0xF;
        while ( v37 != v41 )
        {
          v22 = 1608LL * v37;
          if ( *((_BYTE *)this + v22 + 1170) )
            break;
          v42 = v37;
          if ( !*((_BYTE *)this + v22 + 1169) )
            v42 = v21;
          v37 = ((_BYTE)v37 - 1) & 0xF;
          v21 = v42;
        }
      }
    }
    else
    {
      for ( m = ((_BYTE)v23 + 1) & 0xF; m != v23; m = ((_BYTE)m + 1) & 0xF )
      {
        if ( v21 != -1 )
          goto LABEL_36;
        v22 = m;
        v25 = 1608LL * m;
        if ( *((_BYTE *)this + v25 + 1169) && !*((_BYTE *)this + v25 + 1170) )
          v21 = m;
      }
    }
    if ( v21 != -1 )
    {
LABEL_36:
      while ( 1 )
      {
        v32 = CPartitionVerticalBlankScheduler::RetireFrame(
                this,
                (CPartitionVerticalBlankScheduler *)((char *)this + 1608 * v21 + 112),
                v21,
                &v46,
                0);
        v47 = v32;
        v20 = v32;
        if ( v32 < 0 )
          break;
        v21 = ((_BYTE)v21 + 1) & 0xF;
        if ( !v46 || v21 == *((_DWORD *)this + 6460) )
          goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v32, 0x6E1u);
    }
LABEL_27:
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v20, 0x4CFu);
    else
      *(_DWORD *)(*((_QWORD *)this + 3232) + 32LL) = *(_DWORD *)(*((_QWORD *)this + 3233) + 32LL) + 1;
  }
  v26 = *((_QWORD *)this + 3233);
  v27 = (_QWORD *)*((_QWORD *)this + 3232);
  v49 = v27;
  v28 = *(_QWORD *)(v26 + 304);
  if ( v28 )
    v29 = v27[38] - v28;
  else
    v29 = v27[183];
  v30 = Microsoft_Windows_Dwm_CoreEnableBits;
  v48 = v29;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
  {
    v43 = v27[40];
    v50 = 10000000 * (v27[39] / g_qpcFrequency.QuadPart)
        + (unsigned __int64)(10000000 * (v27[39] % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart;
    v44 = v27[38];
    v51 = 10000000 * (v43 / g_qpcFrequency.QuadPart)
        + 10000000 * (v43 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v45 = v27[148];
    v53 = 10000000 * (v44 / g_qpcFrequency.QuadPart)
        + 10000000 * (v44 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    v54 = 10000000 * (v45 / g_qpcFrequency.QuadPart)
        + 10000000 * (v45 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart;
    McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
      v51 - v50,
      *((_DWORD *)v49 + 8),
      *((_DWORD *)v52 + 6460),
      *v49,
      *((_DWORD *)v49 + 8),
      v54,
      v49[148],
      *((_DWORD *)v49 + 43));
    v30 = Microsoft_Windows_Dwm_CoreEnableBits;
    v20 = v47;
  }
  if ( (v30 & 2) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_UPDATE_TIMES_Stop);
  return (unsigned int)v20;
}
