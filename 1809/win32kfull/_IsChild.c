/*
 * XREFs of _IsChild @ 0x1C0154384
 * Callers:
 *     xxxDoPaint @ 0x1C0030450 (xxxDoPaint.c)
 *     DoTimer @ 0x1C00D3BB8 (DoTimer.c)
 *     _SelectPalette @ 0x1C00FE484 (_SelectPalette.c)
 *     CheckPwndFilter @ 0x1C0111038 (CheckPwndFilter.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
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
