/*
 * XREFs of ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C00E97B4
 * Callers:
 *     ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00CD7AC (-CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z.c)
 *     ?AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW@@@Z @ 0x1C00CEB48 (-AddSourceViewToSession@DXGSESSIONDATA@@QEAAJAEAUtagRECT@@AEBU_LUID@@IEPEAU3@PEAPEAVSESSION_VIEW.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C00E96E8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C014BC54 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     <none>
 */

struct DISPLAY_SOURCE *__fastcall SESSION_ADAPTER::GetDisplaySource(SESSION_ADAPTER *this, int a2)
{
  SESSION_ADAPTER *i; // rax

  for ( i = (SESSION_ADAPTER *)*((_QWORD *)this + 14);
        i != (SESSION_ADAPTER *)((char *)this + 112);
        i = *(SESSION_ADAPTER **)i )
  {
    if ( *((_DWORD *)i - 4) == a2 )
      return (SESSION_ADAPTER *)((char *)i - 32);
  }
  return 0LL;
}
