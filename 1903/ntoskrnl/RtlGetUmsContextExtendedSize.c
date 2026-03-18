/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x140319EBC
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140307414 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x14060B770 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x1408C92AC (PspUmsInitializeContext.c)
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
