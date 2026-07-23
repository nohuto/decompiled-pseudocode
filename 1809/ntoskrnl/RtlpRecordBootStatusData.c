/*
 * XREFs of RtlpRecordBootStatusData @ 0x140719DB0
 * Callers:
 *     RtlpGetSetBootStatusData @ 0x140719BB4 (RtlpGetSetBootStatusData.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140746404 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlRestoreBootStatusDefaults @ 0x140896FF8 (RtlRestoreBootStatusDefaults.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401B8ED0 (ZwPowerInformation.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

NTSTATUS __fastcall RtlpRecordBootStatusData(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD InputBuffer[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(InputBuffer, 0, 0x20uLL);
  InputBuffer[0] = a2;
  InputBuffer[1] = a4;
  InputBuffer[2] = a3;
  LODWORD(InputBuffer[3]) = 1;
  if ( a1 )
    HIDWORD(InputBuffer[3]) |= 1u;
  return ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
}
