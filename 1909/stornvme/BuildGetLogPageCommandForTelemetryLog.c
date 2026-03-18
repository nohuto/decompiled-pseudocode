/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x1C000DDB0
 * Callers:
 *     NVMeGetDeviceTelemetryHeader @ 0x1C0011320 (NVMeGetDeviceTelemetryHeader.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1C0001D18 (BuildGetLogPageCommand.c)
 */

int __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        unsigned __int64 a7,
        char a8)
{
  int result; // eax

  result = BuildGetLogPageCommand(a1, a2, 7u, a4, a5, -1, a7, 0);
  if ( a8 )
  {
    result = *(_DWORD *)(a2 + 4136) & 0xFFFFF0FF | 0x100;
    *(_DWORD *)(a2 + 4136) = result;
  }
  return result;
}
