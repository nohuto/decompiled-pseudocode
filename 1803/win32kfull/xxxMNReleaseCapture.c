/*
 * XREFs of xxxMNReleaseCapture @ 0x1C01E8950
 * Callers:
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0205D9C (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 */

__int64 __fastcall xxxMNReleaseCapture(__int64 a1)
{
  __int64 result; // rax

  result = gptiCurrent;
  if ( a1 )
  {
    result = *(unsigned int *)(a1 + 8);
    if ( (result & 0x40000) != 0 )
    {
      *(_DWORD *)(a1 + 8) = result & 0xFFFBFFFF;
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
      return xxxReleaseCapture();
    }
  }
  return result;
}
