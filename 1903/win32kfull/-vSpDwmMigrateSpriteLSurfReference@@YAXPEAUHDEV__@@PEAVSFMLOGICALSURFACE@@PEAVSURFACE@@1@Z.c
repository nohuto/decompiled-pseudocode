/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0108014
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C0108000 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00296A4 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C0046D48 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0048138 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0049270 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C01081E0 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0108384 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0108454 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rbp
  UINT_PTR v7; // r13
  HDEV v9; // rdx
  DWMSPRITE *v10; // rdi
  HDEV v11; // rdx
  int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rbp
  BOOL v15; // esi
  void *v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+60h] [rbp-58h] BYREF
  DWMSPRITE *v19; // [rsp+68h] [rbp-50h] BYREF
  __int64 v20; // [rsp+70h] [rbp-48h] BYREF
  HSPRITE v21; // [rsp+78h] [rbp-40h]
  unsigned int v22; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+D0h] [rbp+18h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v21 = (HSPRITE)*((_QWORD *)this + 37);
  v7 = 0LL;
  v19 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v19, v21);
  v10 = v19;
  if ( v19 )
  {
    DWMSPRITE::SetLogicalSurface(v19, v9, 0LL);
    DWMSPRITE::SetLogicalSurface(v10, v11, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 16) )
    {
      v20 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v20);
      v13 = *((_DWORD *)a4 + 63) & 0xFFFFFFFD;
    }
    else
    {
      v13 = *((_DWORD *)a4 + 63);
    }
    *((_DWORD *)a4 + 63) = v13 | 8;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState, v12);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v18, &v23, &v22, 0LL, 0LL);
    v14 = *((_QWORD *)v10 + 13);
    *((_QWORD *)v10 + 13) = 0LL;
    v15 = *((_DWORD *)v10 + 29) >= 1;
    v16 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v16, (__int64)v10 + 72, 0LL, v18, v23, v22, v15, v14);
    v17 = *((_QWORD *)a4 + 23);
    if ( v17 )
      v7 = *(_QWORD *)(v17 + 8);
    bSpDwmNotifyDirty(*(HSPRITE *)v10, a4, 2, v7);
    *((_DWORD *)a4 + 63) &= ~8u;
    _InterlockedDecrement((volatile signed __int32 *)v10 + 3);
  }
}
