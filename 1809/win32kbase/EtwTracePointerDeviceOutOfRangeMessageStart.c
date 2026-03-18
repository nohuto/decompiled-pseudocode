/*
 * XREFs of EtwTracePointerDeviceOutOfRangeMessageStart @ 0x1C00E7BF0
 * Callers:
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0164844 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTracePointerDeviceOutOfRangeMessageStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceOutOfRangeMessageStart, (const GUID *)&Context.Flags);
  return result;
}
