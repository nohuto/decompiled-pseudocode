/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0193700
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0192274 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003DFE4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C0081B88 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C0081BE0 (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C01938B4 (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  MousePerfSummary *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r9
  MousePerfSummary *v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8

  v3 = (MousePerfSummary *)MousePerfSummary::CalculateLatencyInMicroseconds(this, *(_QWORD *)a2, *((_QWORD *)a2 + 1));
  *((_QWORD *)this + 35) = v3;
  *((_QWORD *)this + 36) = MousePerfSummary::CalculateLatencyInMicroseconds(
                             v3,
                             *(_QWORD *)(v4 + 8),
                             *(_QWORD *)(v4 + 32));
  *((_QWORD *)this + 37) = MousePerfSummary::CalculateLatencyInMicroseconds(
                             v6,
                             *(_QWORD *)(v5 + 32),
                             *(_QWORD *)(v5 + 40));
  if ( gptiForeground )
  {
    v8 = *((_QWORD *)gptiForeground + 52);
    if ( v8 )
    {
      RtlStringCchCopyW((unsigned __int16 *)this + 168, 0x10uLL, (size_t *)(v8 + 984));
      *((_WORD *)this + 183) = 0;
      v7 = *((_QWORD *)this + 35);
      *((_DWORD *)this + 92) = *(_DWORD *)(*((_QWORD *)gptiForeground + 52) + 56LL);
    }
  }
  MousePerfStage::UpdatePerfData(this, v7);
  MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 40), *((_QWORD *)this + 36));
  MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *((_QWORD *)this + 37));
  MousePerfSummary::SendMousePerfSummaryTelemetry(this);
}
