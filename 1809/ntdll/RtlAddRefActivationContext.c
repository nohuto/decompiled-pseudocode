/*
 * XREFs of RtlAddRefActivationContext @ 0x18002E500
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18000B990 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x180026E08 (LdrpAllocateModuleEntry.c)
 *     TppCleanupGroupMemberInitialize @ 0x18002DB64 (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18002E478 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800318B8 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlGetActiveActivationContext @ 0x180031F40 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180033820 (RtlActivateActivationContextEx.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    for ( i = ActivationContext->RefCount;
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(&ActivationContext->RefCount, i + 1, i);
          i = ActivationContext->RefCount )
    {
      ;
    }
  }
}
