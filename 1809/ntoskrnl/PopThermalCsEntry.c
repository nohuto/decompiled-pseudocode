/*
 * XREFs of PopThermalCsEntry @ 0x1402DC334
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14071EBD0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x1401427B4 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1402E2A68 (PopTraceThermalStandbyInitiated.c)
 */

__int64 __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_14041724D = 1;
    LOBYTE(a1) = byte_14041724C;
    qword_140417250 = MEMORY[0xFFFFF78000000008];
    result = PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_140417244 )
    return PopThermalStandbyEndTracking(0LL, a2, a3);
  return result;
}
