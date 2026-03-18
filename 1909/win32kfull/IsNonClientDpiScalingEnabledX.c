/*
 * XREFs of IsNonClientDpiScalingEnabledX @ 0x1C01E6F0C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
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
