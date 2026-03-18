/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStart @ 0x1C010B7E0
 * Callers:
 *     ApiSetPostPointerDeviceInRangeMessage @ 0x1C019DF3C (ApiSetPostPointerDeviceInRangeMessage.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePointerDeviceInRangeMessageStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceInRangeMessageStart, &Context.Flags);
  return result;
}
