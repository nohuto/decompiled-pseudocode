/*
 * XREFs of GetModificationNumber @ 0x1C0186AD0
 * Callers:
 *     VKFromVSC @ 0x1C0186AF0 (VKFromVSC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetModificationNumber(__int64 a1, unsigned __int16 a2)
{
  if ( a2 <= *(_WORD *)(a1 + 8) )
    return *(unsigned __int8 *)(a2 + a1 + 10);
  else
    return 15LL;
}
