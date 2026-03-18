/*
 * XREFs of ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C771C
 * Callers:
 *     GreHintSpriteShape @ 0x1C0077BD8 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C007C97C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00C6438 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C7514 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6714 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::SetLogicalSurface(DWMSPRITE *this, HDEV a2, struct SFMLOGICALSURFACE *a3)
{
  __int64 v3; // rax
  char v6; // si
  __int64 v7; // rax

  v3 = *((_QWORD *)this + 21);
  if ( v3 || !a3 )
  {
    v6 = 0;
    if ( v3 && !a3 )
    {
      *(_DWORD *)(v3 + 244) &= ~4u;
      *(_QWORD *)(v3 + 296) = 0LL;
      DEC_SHARE_REF_CNT(*((_QWORD *)this + 21));
      EtwDwmSpriteLogicalSurfUnBindEvent(*(_QWORD *)this, **((_QWORD **)this + 21));
    }
  }
  else
  {
    v6 = 1;
  }
  *((_QWORD *)this + 21) = a3;
  if ( v6 )
  {
    INC_SHARE_REF_CNT(a3);
    v7 = *(_QWORD *)this;
    *((_DWORD *)a3 + 61) |= 4u;
    *((_QWORD *)a3 + 37) = v7;
    EtwDwmSpriteLogicalSurfBindEvent(*(_QWORD *)this, *(_QWORD *)a3);
  }
}
