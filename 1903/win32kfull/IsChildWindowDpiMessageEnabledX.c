/*
 * XREFs of IsChildWindowDpiMessageEnabledX @ 0x1C01E702C
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsChildWindowDpiMessageEnabledX(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 TopLevelWindow; // rax

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 )
  {
    TopLevelWindow = GetTopLevelWindow(a1);
    if ( a1 == TopLevelWindow )
    {
      return 1;
    }
    else if ( TopLevelWindow )
    {
      return (*(_DWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 232LL) & 0x20000000) != 0;
    }
  }
  return v1;
}
