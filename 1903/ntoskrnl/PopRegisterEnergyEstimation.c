/*
 * XREFs of PopRegisterEnergyEstimation @ 0x14013E3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopRegisterEnergyEstimation(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  PopComputeEnergy = a1;
  PopSnapEnergyCounters = a2;
}
