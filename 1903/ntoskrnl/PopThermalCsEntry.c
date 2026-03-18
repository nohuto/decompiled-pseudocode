/*
 * XREFs of PopThermalCsEntry @ 0x1402F7F04
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14073B180 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140167DB8 (PopThermalStandbyEndTracking.c)
 *     PopQueueWorkItem @ 0x140177880 (PopQueueWorkItem.c)
 *     PopTraceThermalStandbyInitiated @ 0x1402FF78C (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_140442A4D = 1;
    LOBYTE(a1) = byte_140442A4C;
    qword_140442A50 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_140442A44 )
    PopThermalStandbyEndTracking(0LL, a2, a3);
  return PopQueueWorkItem((__int64)&unk_140442AE8, DelayedWorkQueue);
}
