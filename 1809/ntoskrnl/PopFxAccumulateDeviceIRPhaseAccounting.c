/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1402D75C4
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1402D8234 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1402DA42C (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_1404184E8;
  qword_140418508 += v1;
  if ( v1 > qword_1404184F8 )
    qword_1404184F8 = v1;
  if ( v1 < qword_140418500 )
    qword_140418500 = v1;
  ++dword_140418510;
  qword_1404184E8 = 0LL;
}
