/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x18015A614
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x18016B8D8 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z @ 0x180042658 (--$ReleaseInterface@$$CBVCDisplaySet@@@@YAXAEAPEBVCDisplaySet@@@Z.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this, unsigned int a2)
{
  if ( g_DisplayManager )
  {
    if ( *(_DWORD *)g_DisplayManager == 1 && !dword_18033CC20 )
    {
      ReleaseInterface<CDisplaySet const>(&g_DisplayManager, a2);
LABEL_7:
      ReleaseInterface<CD3DSurface>((__int64 *)&qword_18033CC08);
    }
  }
  else if ( qword_18033CC08 && !dword_18033CC20 )
  {
    goto LABEL_7;
  }
}
