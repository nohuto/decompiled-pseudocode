/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG1IU_LUID@@_N@Z @ 0x180018EA8
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_BEGIN_PACKED_INFO@@_KPEBG@Z @ 0x180018D40 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXPEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180018FE8 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180019724 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     McTemplateU0xq @ 0x1801491D8 (McTemplateU0xq.c)
 *     McTemplateU0xxhhxqntzqq @ 0x1801502D0 (McTemplateU0xxhhxqntzqq.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_PACKED_INFO *a2,
        unsigned __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct _LUID a7,
        bool a8)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  __int64 v13; // rcx
  int v14; // ebx
  unsigned __int64 v15; // rsi
  void *v16; // rax
  void *v17; // rbp
  wchar_t *v18; // rax
  wchar_t *v19; // rsi
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // ebx
  const wchar_t *v23; // rsi
  __int64 v24; // r9

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v14 = (int)Scenario;
  if ( Scenario )
  {
    v24 = (unsigned int)(*((_DWORD *)Scenario + 16) + 1);
    *((_DWORD *)Scenario + 16) = v24;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    {
      McTemplateU0xq(v13, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT, *(_QWORD *)Scenario, v24);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0xxhhxqntzqq(
          a8,
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_CONCAT_EVENT,
          *(_QWORD *)a2,
          v14,
          *((_WORD *)a2 + 5),
          *((_WORD *)a2 + 6),
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
        WPF::ProcessHeapImpl::Free(v17);
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
        *(_QWORD *)v20 = *(_QWORD *)a2;
        *((_QWORD *)v20 + 1) = v17;
        if ( v19 )
          v23 = v19 + 1;
        else
          v23 = L"0.0.0.0";
        *((_QWORD *)v20 + 2) = v23;
        *((_DWORD *)v20 + 6) = *((_DWORD *)a2 + 4);
        *((_WORD *)v20 + 22) = *((_WORD *)a2 + 5);
        *((_WORD *)v20 + 23) = *((_WORD *)a2 + 6);
        *((_DWORD *)v20 + 12) = a6;
        *(struct _LUID *)((char *)v20 + 52) = a7;
        *((_BYTE *)v20 + 60) = a8;
        *((_DWORD *)v20 + 8) = *((_DWORD *)a2 + 5);
        *((_DWORD *)v20 + 17) = 0;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        {
          McTemplateU0xq(
            v21,
            &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATEREFERENCE_EVENT,
            *(_QWORD *)a2,
            *((unsigned int *)v20 + 16));
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
            McTemplateU0xxhhxqntzqq(
              a8,
              (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_SCENARIOBEGIN_EVENT,
              *(_QWORD *)a2,
              v22,
              *((_WORD *)a2 + 5),
              *((_WORD *)a2 + 6),
              a5,
              a6);
        }
      }
    }
  }
}
