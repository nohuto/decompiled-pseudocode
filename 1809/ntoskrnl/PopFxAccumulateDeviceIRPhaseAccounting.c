/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402D72D4
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402D7F44 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402DA13C (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140417448;
  qword_140417468 += v1;
  if ( v1 > qword_140417458 )
    qword_140417458 = v1;
  if ( v1 < qword_140417460 )
    qword_140417460 = v1;
  ++dword_140417470;
  qword_140417448 = 0LL;
}
