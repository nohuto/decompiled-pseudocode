/*
 * XREFs of _SetTouchWindowFlags @ 0x1C01DF72C
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C0232190 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalSetProp @ 0x1C001AA48 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 v3; // r9

  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomTouchFlags, a2, 5u);
  v2 = (unsigned __int16)gatomTouchFlags;
  v3 = *(_QWORD *)(a1 + 144);
  if ( gatomTouchFlags == word_1C032A65C )
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 312LL) = 0LL;
  RealInternalRemoveProp(v3, v2, 1LL, v3);
  return 1LL;
}
