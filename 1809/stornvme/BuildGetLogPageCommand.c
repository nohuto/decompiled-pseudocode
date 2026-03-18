/*
 * XREFs of BuildGetLogPageCommand @ 0x1C00029D8
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C0001094 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00012C0 (NVMeAsyncEventRequestCompletion.c)
 *     FirmwareGetInfo @ 0x1C0002370 (FirmwareGetInfo.c)
 *     ScsiModeSenseRequest @ 0x1C0002878 (ScsiModeSenseRequest.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011050 (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0011954 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0011B30 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C0012174 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0012308 (NVMeGetDeviceTelemetryHeader.c)
 *     ProtocolCommandCompletion @ 0x1C0013170 (ProtocolCommandCompletion.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00156E0 (NVMeGetCommandEffectsLog.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002AF4 (SetPrpFromBuffer.c)
 */

int __fastcall BuildGetLogPageCommand(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned int v12; // eax
  unsigned int v13; // esi
  int result; // eax

  v7 = *(_QWORD *)(a1 + 1528);
  v8 = a4;
  if ( a3 == 1 || (unsigned __int8)(a3 - 3) <= 2u || a3 == (char)0x80 )
    a6 = -1;
  *(_BYTE *)(a2 + 4136) = a3;
  v12 = *(_DWORD *)(a2 + 4136) & 0xF0007FFF;
  *(_DWORD *)(a2 + 4100) = a6;
  v13 = a4 >> 2;
  *(_BYTE *)(a2 + 4096) = 2;
  *(_DWORD *)(a2 + 4136) = v12 | ((((unsigned __int16)(a4 >> 2) - 1) & 0xFFF) << 16);
  result = SetPrpFromBuffer(a1, a2, a5, a4);
  if ( a3 == 7 )
  {
    result = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
    *(_DWORD *)(a2 + 4136) = result;
  }
  if ( (*(_BYTE *)(v7 + 261) & 4) != 0 )
  {
    *(_WORD *)(a2 + 4138) = v13 - 1;
    *(_WORD *)(a2 + 4140) = ((unsigned int)(v8 >> 2) - 1) >> 16;
    result = a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4144) = a7 & 0xFFFFFFFC;
    *(_DWORD *)(a2 + 4148) = (a7 >> 16) & 0xFFFF0000;
  }
  return result;
}
