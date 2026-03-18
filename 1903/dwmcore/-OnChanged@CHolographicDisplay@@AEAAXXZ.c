/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x180244538
 * Callers:
 *     ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x180244574 (-ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_CR.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1802445F0 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x180240CBC (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x180242508 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::OnChanged(CHolographicDisplay *this)
{
  CHolographicManager *v2; // rcx

  v2 = (CHolographicManager *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 112) )
    {
      CHolographicManager::UpdateHolographicDisplay(v2, this);
    }
    else
    {
      CHolographicManager::AddHolographicDisplay((RTL_SRWLOCK *)v2, this);
      *((_BYTE *)this + 112) = 1;
    }
  }
}
