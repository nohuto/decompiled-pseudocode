/*
 * XREFs of IsNonClientDpiScalingEnabledX @ 0x1C01AF648
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsNonClientDpiScalingEnabledX(__int64 a1)
{
  unsigned int v1; // r9d
  __int64 v2; // r10

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2
    && (unsigned int)IsTopLevelWindow(a1)
    && (*(_DWORD *)(v2 + 232) & 0x10000000) != 0 )
  {
    return 1;
  }
  return v1;
}
