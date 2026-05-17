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

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    for ( i = *a1; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1, i + 1, i); i = *a1 )
      ;
  }
}
