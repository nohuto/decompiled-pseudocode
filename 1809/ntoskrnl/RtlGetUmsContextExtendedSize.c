/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x1402FB730
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x1402EA044 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x140623378 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x14088C04C (PspUmsInitializeContext.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetUmsContextExtendedSize()
{
  unsigned int v0; // ecx

  v0 = 1312;
  if ( MEMORY[0xFFFFF780000003E8] )
    return (unsigned int)(MEMORY[0xFFFFF780000003E8] + 1375);
  return v0;
}
