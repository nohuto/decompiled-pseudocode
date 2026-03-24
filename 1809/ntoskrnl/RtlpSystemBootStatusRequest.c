/*
 * XREFs of RtlpSystemBootStatusRequest @ 0x14071C4D4
 * Callers:
 *     PopRecordSleepCheckpoint @ 0x1406DEFDC (PopRecordSleepCheckpoint.c)
 *     PopWriteBsdPowerTransition @ 0x14071C468 (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x140744FC0 (PoClearTransitionMarker.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x140745148 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlGetSystemBootStatusEx @ 0x140760D00 (RtlGetSystemBootStatusEx.c)
 *     RtlGetSystemBootStatus @ 0x140763080 (RtlGetSystemBootStatus.c)
 *     PopRecordPhysicalPowerButton @ 0x140865FE8 (PopRecordPhysicalPowerButton.c)
 *     PopRecordSleepCheckpointSource @ 0x140866180 (PopRecordSleepCheckpointSource.c)
 *     RtlSetSystemBootStatus @ 0x140895ED0 (RtlSetSystemBootStatus.c)
 *     RtlSetSystemBootStatusEx @ 0x140895F00 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401B8D70 (ZwPowerInformation.c)
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
    return (unsigned int)ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x18u, a4, OutputBufferLength);
  }
  return v6;
}
