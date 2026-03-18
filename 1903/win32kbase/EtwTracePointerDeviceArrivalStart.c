/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C010E050
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C019EC88 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceArrivalStart, &Context.Flags);
  return result;
}
