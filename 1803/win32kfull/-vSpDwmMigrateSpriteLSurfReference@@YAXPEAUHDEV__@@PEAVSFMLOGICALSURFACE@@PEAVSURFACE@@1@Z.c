/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00E6714
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C00E6700 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0079CE8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00C56F4 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00C771C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00C7AAC (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00C7B74 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00C7CE0 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E68C4 (DwmAsyncUpdateSprite.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *this,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // rbp
  UINT_PTR v7; // r12
  HSPRITE v8; // rdx
  HDEV v10; // rdx
  DWMSPRITE *v11; // rdi
  HDEV v12; // rdx
  int v13; // ecx
  char v14; // dl
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+60h] [rbp-58h] BYREF
  DWMSPRITE *v21; // [rsp+68h] [rbp-50h] BYREF
  _QWORD v22[9]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+10h] BYREF
  unsigned int v24; // [rsp+D0h] [rbp+18h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v7 = 0LL;
  v8 = (HSPRITE)*((_QWORD *)this + 37);
  v21 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v21, v8);
  v11 = v21;
  if ( v21 )
  {
    DWMSPRITE::SetLogicalSurface(v21, v10, 0LL);
    DWMSPRITE::SetLogicalSurface(v11, v12, a4);
    SFMLOGICALSURFACE::SetShape(this, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 16) )
    {
      v22[0] = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)v22);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v20, &v24, &v23, 0LL, 0LL);
    v13 = *((_DWORD *)v11 + 41);
    v14 = *((_DWORD *)a4 + 63);
    v15 = *((_QWORD *)v11 + 13);
    *((_QWORD *)v11 + 13) = 0LL;
    v18 = (void *)UserReferenceDwmApiPort(v13 & 1, v14 & 1, v16, v17);
    DwmAsyncUpdateSprite(v18, (__int64)v11 + 72, 0LL, v20, v24, v23, *((_DWORD *)v11 + 29), v15);
    v19 = *((_QWORD *)a4 + 23);
    if ( v19 )
      v7 = *(_QWORD *)(v19 + 8);
    bSpDwmNotifyDirty(*(_QWORD *)v11, a4, 2, v7);
    *((_DWORD *)a4 + 63) &= ~8u;
    _InterlockedDecrement((volatile signed __int32 *)v11 + 3);
  }
}
