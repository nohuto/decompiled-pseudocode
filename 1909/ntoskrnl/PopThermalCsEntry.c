/*
 * XREFs of PopThermalCsEntry @ 0x1402F79B4
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140730470 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopThermalStandbyEndTracking @ 0x140167808 (PopThermalStandbyEndTracking.c)
 *     PopQueueWorkItem @ 0x140177F70 (PopQueueWorkItem.c)
 *     PopTraceThermalStandbyInitiated @ 0x1402FF23C (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(PopSystemThermalInfo) = 0;
  if ( (_BYTE)a1 )
  {
    byte_1404429ED = 1;
    LOBYTE(a1) = byte_1404429EC;
    qword_1404429F0 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(a1);
  }
  if ( !dword_1404429E4 )
    PopThermalStandbyEndTracking(0LL, a2, a3);
  return PopQueueWorkItem((__int64)&unk_140442A88, DelayedWorkQueue);
}
