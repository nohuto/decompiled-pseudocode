/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x18020C338
 * Callers:
 *     ?ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_CREATE@@@Z @ 0x18020C374 (-ProcessCreate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_CREAT.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18020C3F0 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 * Callees:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x18020A5F0 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x18020BCA4 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
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
