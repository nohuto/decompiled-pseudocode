/*
 * XREFs of EtwTracePointerDeviceInRangeMessageStart @ 0x1C00E7B90
 * Callers:
 *     RIMAddToActiveDevices @ 0x1C0114DD0 (RIMAddToActiveDevices.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTracePointerDeviceInRangeMessageStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &PointerDeviceInRangeMessageStart, (const GUID *)&Context.Flags);
  return result;
}
