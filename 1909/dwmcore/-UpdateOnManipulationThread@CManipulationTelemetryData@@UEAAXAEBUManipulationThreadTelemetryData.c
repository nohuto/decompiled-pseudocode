/*
 * XREFs of ?UpdateOnManipulationThread@CManipulationTelemetryData@@UEAAXAEBUManipulationThreadTelemetryData@@@Z @ 0x1800DB8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTelemetryData::UpdateOnManipulationThread(
        CManipulationTelemetryData *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 3);
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 8);
}
