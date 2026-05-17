/*
 * XREFs of TpAllocPool @ 0x180062F90
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( !Ldr )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return TpAllocPoolInternal(a1, 0LL);
    }
  }
  TppRaiseInvalidParameter(a1, Ldr, a3, a4);
  return 3221225485LL;
}
