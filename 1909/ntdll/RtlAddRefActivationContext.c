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

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    v1 = *a1;
    do
    {
      if ( v1 == _InterlockedCompareExchange(a1, v1 + 1, v1) )
        break;
      v1 = *a1;
    }
    while ( *a1 != 0x7FFFFFFF );
  }
}
