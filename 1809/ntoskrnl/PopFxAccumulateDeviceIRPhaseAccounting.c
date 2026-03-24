/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402D73D4
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402D8044 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402DA23C (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140417468;
  qword_140417488 += v1;
  if ( v1 > qword_140417478 )
    qword_140417478 = v1;
  if ( v1 < qword_140417480 )
    qword_140417480 = v1;
  ++dword_140417490;
  qword_140417468 = 0LL;
}
