/*
 * XREFs of RtlAddRefActivationContext @ 0x180029A80
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 *     sub_18002AC94 @ 0x18002AC94 (sub_18002AC94.c)
 *     RtlGetActiveActivationContext @ 0x18002D830 (RtlGetActiveActivationContext.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     RtlActivateActivationContextEx @ 0x180070F40 (RtlActivateActivationContextEx.c)
 *     sub_1800776BC @ 0x1800776BC (sub_1800776BC.c)
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
