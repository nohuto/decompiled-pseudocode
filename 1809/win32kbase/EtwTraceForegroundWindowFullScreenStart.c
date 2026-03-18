/*
 * XREFs of EtwTraceForegroundWindowFullScreenStart @ 0x1C00E6820
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceForegroundWindowFullScreenStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &ForegroundWindowFullScreenStart, (const GUID *)a1);
  return result;
}
