/*
 * XREFs of TpAllocPool @ 0x180062EF0
 * Callers:
 *     sub_18002FBA8 @ 0x18002FBA8 (sub_18002FBA8.c)
 * Callees:
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, struct _PEB_LDR_DATA *Ldr, __int64 a3, __int64 a4)
{
  if ( a1 )
  {
    if ( !Ldr )
    {
      Ldr = NtCurrentPeb()->Ldr;
      if ( !Ldr->ShutdownInProgress )
        return sub_180062F34(a1, 0LL);
    }
  }
  sub_18010EFC8(a1, Ldr, a3, a4);
  return 3221225485LL;
}
