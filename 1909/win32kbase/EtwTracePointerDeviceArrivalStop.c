/*
 * XREFs of EtwTracePointerDeviceArrivalStop @ 0x1C010B710
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C019CA68 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceArrivalStop, &Context.Flags);
  return result;
}
