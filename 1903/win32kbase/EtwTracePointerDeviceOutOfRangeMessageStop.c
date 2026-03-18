/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStop @ 0x1C010E1E0
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C01A02C4 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceOutOfRangeMessageStop(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceOutOfRangeMessageStop, &Context.Flags);
  return result;
}
