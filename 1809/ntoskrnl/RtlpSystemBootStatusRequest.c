/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x14071D774
 * Callers:
 *     PopRecordSleepCheckpoint @ 0x1406E027C (PopRecordSleepCheckpoint.c)
 *     PopWriteBsdPowerTransition @ 0x14071D708 (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x1407461B0 (PoClearTransitionMarker.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140746338 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlGetSystemBootStatusEx @ 0x140761EF0 (RtlGetSystemBootStatusEx.c)
 *     RtlGetSystemBootStatus @ 0x140764270 (RtlGetSystemBootStatus.c)
 *     PopRecordPhysicalPowerButton @ 0x140867248 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x1408673E0 (PopRecordSleepCheckpointSource.c)
 *     RtlSetSystemBootStatus @ 0x140897130 (RtlSetSystemBootStatus.c)
 *     RtlSetSystemBootStatusEx @ 0x140897160 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401B8ED0 (ZwPowerInformation.c)
 */

__int64 __fastcall RtlpSystemBootStatusRequest(unsigned int a1, __int64 a2, unsigned int a3, void *a4)
{
  ULONG OutputBufferLength; // r10d
  unsigned int v6; // ecx
  unsigned __int64 v8; // rax
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  OutputBufferLength = 0;
  if ( !a4 )
    goto LABEL_2;
  v8 = 4LL * a3;
  OutputBufferLength = -1;
  if ( v8 <= 0xFFFFFFFF )
    OutputBufferLength = 4 * a3;
  v6 = v8 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v8 <= 0xFFFFFFFF )
  {
LABEL_2:
    InputBuffer[2] = a2;
    InputBuffer[1] = a3;
    InputBuffer[0] = a1;
    return (unsigned int)ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  return v6;
}
