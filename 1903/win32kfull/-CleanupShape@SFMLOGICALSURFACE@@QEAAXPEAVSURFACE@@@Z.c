/*
 * XREFs of ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C0045590
 * Callers:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C0047EEC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 */

void __fastcall SFMLOGICALSURFACE::CleanupShape(SFMLOGICALSURFACE *this, HSURF *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 61);
  if ( (v2 & 0x20) != 0 )
  {
    if ( a2 )
    {
      GreDereferenceObject(a2[4]);
      v2 = *((_DWORD *)this + 61);
    }
    *((_DWORD *)this + 61) = v2 & 0xFFFFFFDF;
  }
}
