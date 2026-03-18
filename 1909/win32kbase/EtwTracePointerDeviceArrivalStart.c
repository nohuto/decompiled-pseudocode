/*
 * XREFs of EtwTracePointerDeviceArrivalStart @ 0x1C010B6E0
 * Callers:
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C019C9D8 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceArrivalStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceArrivalStart, &Context.Flags);
  return result;
}
