/*
 * XREFs of EtwTraceDitWaitForRitDisEngagement @ 0x1C0095C80
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceDitWaitForRitDisEngagement(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0(a1, &DitWaitForRitDisEngagement, (const GUID *)&Context.Flags);
  return result;
}
