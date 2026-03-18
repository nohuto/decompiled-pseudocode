/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402F1CC4
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402F2F34 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402F56EC (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140442D08;
  qword_140442D28 += v1;
  if ( v1 > qword_140442D18 )
    qword_140442D18 = v1;
  if ( v1 < qword_140442D20 )
    qword_140442D20 = v1;
  ++dword_140442D30;
  qword_140442D08 = 0LL;
}
