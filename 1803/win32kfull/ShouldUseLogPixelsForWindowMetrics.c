/*
 * XREFs of ShouldUseLogPixelsForWindowMetrics @ 0x1C002F2E4
 * Callers:
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 */

__int64 __fastcall ShouldUseLogPixelsForWindowMetrics(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 TopLevelWindow; // rax
  bool v6; // cf

  v1 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      v6 = __CFSHR__(*(_DWORD *)(v3 + 232), 29);
    }
    else
    {
      TopLevelWindow = GetTopLevelWindow(v2);
      if ( !TopLevelWindow )
        return v1;
      v6 = __CFSHR__(*(_DWORD *)(*(_QWORD *)(TopLevelWindow + 40) + 232LL), 30);
    }
    return (unsigned int)-v6;
  }
  return v1;
}
