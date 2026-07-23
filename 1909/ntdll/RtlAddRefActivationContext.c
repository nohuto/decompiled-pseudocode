/*
 * XREFs of RtlAddRefActivationContext @ 0x180029A80
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x18002AC94 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x18002D830 (RtlGetActiveActivationContext.c)
 *     TppCleanupGroupMemberInitialize @ 0x180037DCC (TppCleanupGroupMemberInitialize.c)
 *     RtlActivateActivationContextEx @ 0x180071190 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180077B3C (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    RefCount = ActivationContext->RefCount;
    do
    {
      if ( RefCount == _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount + 1, RefCount) )
        break;
      RefCount = ActivationContext->RefCount;
    }
    while ( ActivationContext->RefCount != 0x7FFFFFFF );
  }
}
