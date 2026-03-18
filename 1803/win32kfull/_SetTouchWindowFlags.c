/*
 * XREFs of _SetTouchWindowFlags @ 0x1C01A942C
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1C01F31F0 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, int a2)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)(a1 + 120);
  if ( a2 )
    return RealInternalSetProp(v2, (unsigned __int16)gatomTouchFlags, a2, 5LL);
  RealInternalRemoveProp(*v2, (unsigned __int16)gatomTouchFlags, 1LL);
  return 1LL;
}
