/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x18001D008
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x18001CEA0 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x18001D15C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001D98C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     McTemplateU0xq @ 0x18015ED28 (McTemplateU0xq.c)
 *     McTemplateU0xxhhxqntzqq @ 0x180191CC8 (McTemplateU0xxhhxqntzqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _LUID a7,
        bool a8)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v13; // rcx
  int v14; // edi
  unsigned __int64 v15; // rsi
  void *v16; // rax
  void *v17; // rbp
  wchar_t *v18; // rax
  wchar_t *v19; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // edi
  const wchar_t *v23; // rsi
  __int128 v24; // xmm0
  __int64 v25; // r9

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v14 = (int)Scenario;
  if ( Scenario )
  {
    v25 = (unsigned int)(*((_DWORD *)Scenario + 22) + 1);
    *((_DWORD *)Scenario + 22) = v25;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0xq(v13, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, *((_QWORD *)Scenario + 1), v25);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0xxhhxqntzqq(
          a8,
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_CONCAT_EVENT,
          *(_QWORD *)a2,
          v14,
          *((_WORD *)a2 + 4),
          *((_WORD *)a2 + 5),
          a5,
          a6);
    }
  }
  else if ( a4 )
  {
    v15 = (a3 >> 1) + 1;
    v16 = operator new(saturated_mul(v15, 2uLL));
    v17 = v16;
    if ( v16 )
    {
      if ( (unsigned int)_o_wcscpy_s(v16, v15, a4) )
      {
        operator delete(v17);
      }
      else
      {
        v18 = wcschr((const wchar_t *)v17, 1u);
        v19 = v18;
        if ( v18 )
          *v18 = 0;
        v20 = CTelemetryTouchLatencyAnalysis::AllocateScenario(this);
        v21 = *(_QWORD *)a2;
        v22 = (int)v20;
        *((_QWORD *)v20 + 1) = *(_QWORD *)a2;
        *((_QWORD *)v20 + 2) = v17;
        if ( v19 )
          v23 = v19 + 1;
        else
          v23 = L"0.0.0.0";
        *((_QWORD *)v20 + 3) = v23;
        *((_DWORD *)v20 + 8) = *((_DWORD *)a2 + 3);
        *((_WORD *)v20 + 34) = *((_WORD *)a2 + 4);
        *((_WORD *)v20 + 35) = *((_WORD *)a2 + 5);
        *((_DWORD *)v20 + 18) = a6;
        *(struct _LUID *)((char *)v20 + 76) = a7;
        *((_BYTE *)v20 + 84) = a8;
        *((_DWORD *)v20 + 10) = *((_DWORD *)a2 + 4);
        v24 = *(_OWORD *)((char *)a2 + 20);
        *((_DWORD *)v20 + 23) = 0;
        *(_OWORD *)((char *)v20 + 52) = v24;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          McTemplateU0xq(
            v21,
            &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
            *(_QWORD *)a2,
            *((unsigned int *)v20 + 22));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
            McTemplateU0xxhhxqntzqq(
              a8,
              (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_EVENT,
              *(_QWORD *)a2,
              v22,
              *((_WORD *)a2 + 4),
              *((_WORD *)a2 + 5),
              a5,
              a6);
        }
      }
    }
  }
}
