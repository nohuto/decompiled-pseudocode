/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180158F34
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18016A1E8 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x1800530F8 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  if ( g_DisplayManager )
  {
    if ( *(_DWORD *)g_DisplayManager == 1 && !dword_180339D10 )
    {
      ReleaseInterface<CDisplaySet const>(&g_DisplayManager);
LABEL_7:
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_180339CF8);
    }
  }
  else if ( qword_180339CF8 && !dword_180339D10 )
  {
    goto LABEL_7;
  }
}
