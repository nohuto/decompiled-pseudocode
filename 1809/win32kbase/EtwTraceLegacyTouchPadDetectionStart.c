/*
 * XREFs of EtwTraceLegacyTouchPadDetectionStart @ 0x1C0095890
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceLegacyTouchPadDetectionStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &LegacyTouchPadDetectionStart, (const GUID *)&Context.Flags);
  return result;
}
