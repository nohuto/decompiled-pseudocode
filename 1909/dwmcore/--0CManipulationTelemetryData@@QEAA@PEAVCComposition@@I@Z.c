/*
 * XREFs of ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x1801D54A8
 * Callers:
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801D5984 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 * Callees:
 *     <none>
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::CManipulationTelemetryData(
        CManipulationTelemetryData *this,
        struct CComposition *a2,
        int a3)
{
  char *v6; // rcx
  CManipulationTelemetryData *result; // rax

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CManipulationTelemetryData::`vftable'{for `IManipulationTelemetryData'};
  *((_QWORD *)this + 1) = &CManipulationTelemetryData::`vftable'{for `CMILRefCountBase'};
  v6 = (char *)this + 96;
  *((_DWORD *)v6 + 4) = 0;
  v6[20] = 0;
  *((_QWORD *)v6 + 1) = v6;
  *(_QWORD *)v6 = v6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
  *((_QWORD *)this + 21) = a2;
  result = this;
  *((_DWORD *)this + 44) = a3;
  return result;
}
