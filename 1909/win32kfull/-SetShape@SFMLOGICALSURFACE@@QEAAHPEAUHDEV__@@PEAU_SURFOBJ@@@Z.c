/*
 * XREFs of ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008CB08
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C002F504 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     GreHintSpriteShape @ 0x1C002FB44 (GreHintSpriteShape.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x1C008C8BC (-DeInitialize@SFMLOGICALSURFACE@@QEAAXPEAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E1EC4 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     vSpDwmMigrateLSurfShapeReferenceWrap @ 0x1C011B060 (vSpDwmMigrateLSurfShapeReferenceWrap.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     ?UnlockSurface@SFMLOGICALSURFACE@@AEAAXPEAU_SURFOBJ@@@Z @ 0x1C008ABAC (-UnlockSurface@SFMLOGICALSURFACE@@AEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?LockSurface@SFMLOGICALSURFACE@@AEAAPEAU_SURFOBJ@@PEAUHSURF__@@PEAUHLSURF__@@@Z @ 0x1C008CAAC (-LockSurface@SFMLOGICALSURFACE@@AEAAPEAU_SURFOBJ@@PEAUHSURF__@@PEAUHLSURF__@@@Z.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C008E150 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 */

_BOOL8 __fastcall SFMLOGICALSURFACE::SetShape(SFMLOGICALSURFACE *this, HDEV a2, struct _SURFOBJ *a3)
{
  BOOL v4; // edi
  struct _SURFOBJ *v5; // rdx
  char v8; // r14
  __int64 v9; // rax
  HLSURF v10; // r8
  int v11; // eax

  v4 = 0;
  v5 = (struct _SURFOBJ *)*((_QWORD *)this + 23);
  if ( v5 || !a3 )
  {
    v8 = 0;
    if ( v5 && !a3 )
    {
      SFMLOGICALSURFACE::UnlockSurface(this, v5);
      if ( a2 )
        SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, *((struct _SURFOBJ **)this + 23), 0);
      v4 = 1;
      EtwLogicalSurfPhysSurfUnbindEvent(*(_QWORD *)this, *(_QWORD *)(*((_QWORD *)this + 23) + 8LL));
    }
  }
  else
  {
    v8 = 1;
  }
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 61) &= ~2u;
  *((_QWORD *)this + 23) = a3;
  if ( v8 )
  {
    v9 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    SFMLOGICALSURFACE::LockSurface(this, *(HSURF *)(v9 + 32), v10);
    *((_DWORD *)this + 61) |= 1u;
    v4 = 1;
    if ( a2 )
    {
      v11 = SpNotifyLSurfaceRedirSurfAssoc(a2, *(HLSURF *)this, a3, 1);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741822 )
        v4 = 0;
    }
    EtwLogicalSurfPhysSurfBindEvent(*(_QWORD *)this, a3->hsurf);
  }
  return v4;
}
