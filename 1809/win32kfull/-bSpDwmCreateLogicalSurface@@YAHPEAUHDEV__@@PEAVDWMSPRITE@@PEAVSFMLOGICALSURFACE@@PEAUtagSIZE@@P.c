/*
 * XREFs of ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007CF18 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02527B0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 * Callees:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00768A4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C007C8A0 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C928 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C010E78C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C011E898 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0126238 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserGetHwndProcess @ 0x1C01299E4 (UserGetHwndProcess.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C02519F0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

__int64 __fastcall bSpDwmCreateLogicalSurface(
        HDEV a1,
        struct DWMSPRITE *this,
        struct SFMLOGICALSURFACE *a3,
        struct tagSIZE *a4,
        struct SFMLOGICALSURFACE **a5)
{
  int v9; // r12d
  unsigned int v10; // ebp
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  __int64 v15; // rcx
  HSURF Surface; // rax
  __int64 v17; // rdx
  __int64 v18; // rbx
  struct _EPROCESS *HwndProcess; // rax
  HLSURF v20; // rax
  HDEV v21; // rdx
  struct SFMLOGICALSURFACE *v22; // rbx
  HDEV v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r14
  HLSURF HLSURFClone; // rax
  HDEV v27; // rdx
  HDEV v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE v31[32]; // [rsp+30h] [rbp-58h] BYREF
  struct SFMLOGICALSURFACE *v32; // [rsp+50h] [rbp-38h]

  v9 = 1;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v31);
  v10 = 0;
  if ( a4 )
  {
    v11 = *((_QWORD *)a3 + 23);
    if ( v11 || (*((_DWORD *)a3 + 61) & 1) != 0 )
    {
      v12 = 0;
      v13 = 0;
      if ( v11 )
      {
        v12 = *(_DWORD *)(v11 + 36);
        v13 = *(_DWORD *)(v11 + 32);
      }
      if ( a4->cx == v13 && a4->cy == v12 )
        goto LABEL_7;
      *((_DWORD *)this + 16) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = *((_DWORD *)this + 15);
      if ( *a5 == a3 )
      {
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v31, HLSURFClone);
        a3 = v32;
        if ( !v32 )
          goto LABEL_8;
        DWMSPRITE::SetLogicalSurface(this, v27, 0LL);
        DWMSPRITE::SetLogicalSurface(this, v28, a3);
        *a5 = a3;
      }
      else
      {
        a3 = *a5;
      }
    }
    else if ( *a5 != a3 )
    {
      a3 = *a5;
    }
    DWMSPRITE::vUpdateDpiScaling(this, 0LL);
    if ( (*((_DWORD *)this + 41) & 0x20) != 0 )
    {
      bFToL(v15, a4, 6LL);
      bFToL(v29, &a4->cy, v30);
    }
    Surface = hsurfSpCreateSurface(a1, a4);
    if ( Surface )
    {
      LOBYTE(v17) = 5;
      v18 = HmgReferenceCheckLock(Surface, v17, 0LL);
      SFMLOGICALSURFACE::SetShape(a3, a1, (struct _SURFOBJ *)(v18 + 24));
      *((_DWORD *)a3 + 63) |= 8u;
      *((_DWORD *)this + 16) = a4->cx + *((_DWORD *)this + 14);
      *((_DWORD *)this + 17) = a4->cy + *((_DWORD *)this + 15);
      HwndProcess = (struct _EPROCESS *)UserGetHwndProcess(*((_QWORD *)this + 5));
      SURFACE::vAppContainerOwner((SURFACE *)v18, HwndProcess);
    }
    else
    {
      v9 = 0;
    }
  }
  else if ( *a5 == a3 )
  {
    v20 = SFMLOGICALSURFACE::CreateHLSURFClone(a1, a3, 0, 1, 1);
    SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v31, v20);
    v22 = v32;
    if ( !v32 )
      goto LABEL_8;
    DWMSPRITE::SetLogicalSurface(this, v21, 0LL);
    DWMSPRITE::SetLogicalSurface(this, v23, v22);
    v24 = SURFOBJ_TO_SURFACE(*((_QWORD *)a3 + 23));
    v25 = v24;
    if ( v24 )
    {
      INC_SHARE_REF_CNT(v24);
      SFMLOGICALSURFACE::SetShape(a3, a1, 0LL);
      SFMLOGICALSURFACE::SetShape(v22, a1, (struct _SURFOBJ *)(v25 + 24));
      *((_DWORD *)v22 + 63) |= 8u;
      DEC_SHARE_REF_CNT(v25);
    }
    *a5 = v22;
  }
LABEL_7:
  v10 = v9;
LABEL_8:
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v31);
  return v10;
}
