/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800C7968
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800C7A44 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x1800C7CF8 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXJ@Z @ 0x1800CE718 (-ProcessRenderingStatus@CComposition@@QEAAXJ@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  bool v4; // di
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 45) = a2;
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
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x41Cu);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
    v4 = v8 == 142213121;
  }
  CComposition::ProcessRenderingStatus(this, v8);
  v9 = CComposition::ProcessPostPresent(this, v4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x42Bu);
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0pp)(
      v12,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  result = v11;
  *((_QWORD *)this + 45) = 0LL;
  return result;
}
