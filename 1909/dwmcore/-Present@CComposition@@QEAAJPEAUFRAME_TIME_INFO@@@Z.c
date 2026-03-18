/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180077538
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800716E0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x180075570 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180077614 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007782C (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     McTemplateU0pp @ 0x180164430 (McTemplateU0pp.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  bool v4; // di
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 47) = a2;
  PerformanceCount.QuadPart = 0LL;
  v4 = 1;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0pp)(
      v5,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v6 = CRenderTargetManager::Present(
         *((CRenderTargetManager **)this + 8),
         *(_DWORD *)(*(_QWORD *)a2 + 96LL),
         (unsigned int *)(*(_QWORD *)a2 + 172LL));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x426u, 0LL);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
    v4 = v8 == 142213121;
  }
  CComposition::ProcessRenderingStatus(this, v8);
  v9 = CComposition::ProcessPostPresent(this, v4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x435u, 0LL);
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0pp)(
      v12,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  result = v11;
  *((_QWORD *)this + 47) = 0LL;
  return result;
}
