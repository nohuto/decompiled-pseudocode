/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18009E430
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180097DDC (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009898C (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800998E8 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x18009E390 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18003ACE4 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x18003B590 (-Unhide@CVisual@@QEAAXXZ.c)
 *     McTemplateU0d @ 0x18007DFB8 (McTemplateU0d.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CPenBarrelKeyVisual *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 340) && (*((_BYTE *)this + 308) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 341) )
    {
      CVisual::Unhide(*((CVisual **)this + 40));
      *((_BYTE *)this + 341) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0d(v2, (int)&UdwmPenBarrel_Start, *((_DWORD *)this + 74));
      *((_BYTE *)this + 342) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 341) )
  {
    CVisual::Hide(*((CVisual **)this + 40));
    *((_BYTE *)this + 341) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0d(v3, (int)&UdwmPenBarrel_Stop, *((_DWORD *)this + 74));
    *((_BYTE *)this + 342) = 0;
  }
  return 0LL;
}
