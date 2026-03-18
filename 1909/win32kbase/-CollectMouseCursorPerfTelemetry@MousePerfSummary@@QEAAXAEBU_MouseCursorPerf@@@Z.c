/*
 * XREFs of ?CollectMouseCursorPerfTelemetry@MousePerfSummary@@QEAAXAEBU_MouseCursorPerf@@@Z @ 0x1C007E108
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C007E1B4 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C007E20C (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 */

void __fastcall MousePerfSummary::CollectMouseCursorPerfTelemetry(
        MousePerfSummary *this,
        const struct _MouseCursorPerf *a2)
{
  unsigned __int64 v2; // rax
  MousePerfSummary *v3; // rcx
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  MousePerfSummary *v6; // rcx
  unsigned __int64 *v7; // r10
  unsigned __int64 v8; // rax
  MousePerfSummary *v9; // rcx
  unsigned __int64 *v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // r11
  __int64 v16; // r11

  v2 = MousePerfSummary::CalculateLatencyInMicroseconds(this, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
  *((_QWORD *)v3 + 38) = v2;
  v5 = MousePerfSummary::CalculateLatencyInMicroseconds(v3, *(_QWORD *)(v4 + 16), *(_QWORD *)(v4 + 24));
  *((_QWORD *)v6 + 39) = v5;
  v8 = MousePerfSummary::CalculateLatencyInMicroseconds(v6, *v7, v7[1]);
  *((_QWORD *)v9 + 40) = v8;
  v11 = MousePerfSummary::CalculateLatencyInMicroseconds(v9, *v10, v10[2]);
  *(_QWORD *)(v12 + 328) = v11;
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v12 + 120), v13);
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v14 + 160), *(_QWORD *)(v14 + 312));
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v15 + 200), *(_QWORD *)(v15 + 320));
  MousePerfStage::UpdatePerfData((MousePerfStage *)(v16 + 240), *(_QWORD *)(v16 + 328));
}
