/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStop @ 0x1C0095870
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceLegacyTouchPadDetectionStop(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &LegacyTouchPadDetectionStop, (const GUID *)&Context.Flags);
  return result;
}
