/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402F1F64
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402F31D4 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402F5C3C (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140442D68;
  qword_140442D88 += v1;
  if ( v1 > qword_140442D78 )
    qword_140442D78 = v1;
  if ( v1 < qword_140442D80 )
    qword_140442D80 = v1;
  ++dword_140442D90;
  qword_140442D68 = 0LL;
}
