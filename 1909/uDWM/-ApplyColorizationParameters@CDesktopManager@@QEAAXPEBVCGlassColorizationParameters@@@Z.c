/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x180038A8C
 * Callers:
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800388E8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18004BC34 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x180038B00 (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  if ( a2 != (CDesktopManager *)((char *)this + 532) )
  {
    *(_OWORD *)((char *)this + 532) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 548) = *((_OWORD *)a2 + 1);
  }
  if ( !*((_BYTE *)this + 25) )
    *((_DWORD *)this + 138) = 1;
  DwmpCalculateColorizationColor((char *)this + 532, &wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
}
