/*
 * XREFs of RtlGetUmsContextExtendedSize @ 0x14031990C
 * Callers:
 *     PspAttachThreadToUmsCompletionList @ 0x140306EC4 (PspAttachThreadToUmsCompletionList.c)
 *     PspBuildCreateProcessContext @ 0x14060D280 (PspBuildCreateProcessContext.c)
 *     PspUmsInitializeContext @ 0x1408C8B8C (PspUmsInitializeContext.c)
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
