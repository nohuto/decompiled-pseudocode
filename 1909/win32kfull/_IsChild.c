/*
 * XREFs of _IsChild @ 0x1C00F5DAC
 * Callers:
 *     xxxDoPaint @ 0x1C003B610 (xxxDoPaint.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     _SelectPalette @ 0x1C00E1194 (_SelectPalette.c)
 *     CheckPwndFilter @ 0x1C00F5D70 (CheckPwndFilter.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChild(__int64 a1, __int64 a2)
{
  while ( a2 && (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 31LL) & 0xC0) == 0x40 )
  {
    a2 = *(_QWORD *)(a2 + 104);
    if ( a1 == a2 )
      return 1LL;
  }
  return 0LL;
}
