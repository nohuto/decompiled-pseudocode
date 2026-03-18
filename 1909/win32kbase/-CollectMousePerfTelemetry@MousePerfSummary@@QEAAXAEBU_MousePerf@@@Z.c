/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0191500
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C0190084 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C007E1B4 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C007E20C (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C0191650 (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  unsigned __int64 v2; // rax
  MousePerfSummary *v3; // rcx
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  MousePerfSummary *v6; // rcx
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  MousePerfStage *v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // r11
  MousePerfSummary *v13; // r11

  v2 = MousePerfSummary::CalculateLatencyInMicroseconds(this, *(_QWORD *)a2, *((_QWORD *)a2 + 1));
  *((_QWORD *)v3 + 35) = v2;
  v5 = MousePerfSummary::CalculateLatencyInMicroseconds(v3, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 32));
  *((_QWORD *)v6 + 36) = v5;
  v8 = MousePerfSummary::CalculateLatencyInMicroseconds(v6, *(_QWORD *)(v7 + 32), *(_QWORD *)(v7 + 40));
  *((_QWORD *)v9 + 37) = v8;
  MousePerfStage::UpdatePerfData(v9, v10);
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v11 + 40), *(_QWORD *)(v11 + 288));
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v12 + 80), *(_QWORD *)(v12 + 296));
  MousePerfSummary::SendMousePerfSummaryTelemetry(v13);
}
