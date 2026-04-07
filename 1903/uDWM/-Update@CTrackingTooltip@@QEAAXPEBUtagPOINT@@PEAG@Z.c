/*
 * XREFs of ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x18009E988
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x18009699C (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180096BC4 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 * Callees:
 *     ?UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ @ 0x18009EA1C (-UpdateTooltipLocation@CTrackingTooltip@@IEAAXXZ.c)
 */

void __fastcall CTrackingTooltip::Update(CTrackingTooltip *this, const struct tagPOINT *a2, unsigned __int16 *a3)
{
  if ( a3 )
  {
    *((_QWORD *)this + 11) = a3;
    SendMessageW(*((HWND *)this + 1), 0x439u, 0LL, (LPARAM)this + 40);
    GetWindowRect(*((HWND *)this + 1), (LPRECT)this + 1);
  }
  if ( a2 )
  {
    if ( !*((_DWORD *)this + 4) && !*((_DWORD *)this + 6) )
      GetWindowRect(*((HWND *)this + 1), (LPRECT)this + 1);
    *((struct tagPOINT *)this + 4) = *a2;
  }
  if ( a3 || a2 )
    CTrackingTooltip::UpdateTooltipLocation(this);
}
