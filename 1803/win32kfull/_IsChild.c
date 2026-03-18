/*
 * XREFs of _IsChild @ 0x1C00F6964
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxDoPaint @ 0x1C00649C0 (xxxDoPaint.c)
 *     _SelectPalette @ 0x1C00E5978 (_SelectPalette.c)
 *     CheckPwndFilter @ 0x1C00F6928 (CheckPwndFilter.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 80);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}
