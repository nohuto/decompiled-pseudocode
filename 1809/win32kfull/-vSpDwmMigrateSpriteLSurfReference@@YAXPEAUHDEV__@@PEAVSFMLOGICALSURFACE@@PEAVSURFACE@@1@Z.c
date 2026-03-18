/*
 * XREFs of ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C000BD70
 * Callers:
 *     vSpDwmMigrateSpriteLSurfReferenceWrap @ 0x1C000B950 (vSpDwmMigrateSpriteLSurfReferenceWrap.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C000B964 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C000BABC (DwmAsyncUpdateSprite.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C000E604 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0074E04 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C928 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00A1CDC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmMigrateSpriteLSurfReference(
        HDEV a1,
        struct SFMLOGICALSURFACE *a2,
        struct SURFACE *a3,
        struct SFMLOGICALSURFACE *a4)
{
  struct _SURFOBJ *v4; // r14
  HDEV v8; // rdx
  DWMSPRITE *v9; // r13
  HDEV v10; // rdx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // r15
  int v15; // ebx
  BOOL v16; // edi
  void *v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // r9
  DWMSPRITE *v20; // rax
  int v21; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+68h] [rbp-11h] BYREF
  HSPRITE v23; // [rsp+70h] [rbp-9h]
  _BYTE v24[32]; // [rsp+78h] [rbp-1h] BYREF
  DWMSPRITE *v25; // [rsp+98h] [rbp+1Fh]
  unsigned int v26; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v27; // [rsp+F0h] [rbp+77h] BYREF

  v4 = (struct _SURFOBJ *)((char *)a3 + 24);
  v23 = (HSPRITE)*((_QWORD *)a2 + 37);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v24);
  v25 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v24, v23);
  v9 = v25;
  if ( v25 )
  {
    DWMSPRITE::SetLogicalSurface(v25, v8, 0LL);
    DWMSPRITE::SetLogicalSurface(v9, v10, a4);
    SFMLOGICALSURFACE::SetShape(a2, a1, 0LL);
    SFMLOGICALSURFACE::SetShape(a4, a1, v4);
    if ( *((_QWORD *)a4 + 16) )
    {
      v22 = *((_QWORD *)a4 + 16);
      RGNOBJ::vSet((RGNOBJ *)&v22);
      *((_DWORD *)a4 + 63) &= ~2u;
    }
    *((_DWORD *)a4 + 63) |= 8u;
    SFMLOGICALSURFACE::StartSfmStateTracking(a4, a1, gpSfmState);
    SFMLOGICALSURFACE::GetRedirectionInfo(a4, (enum _HLSURF_REDIRECTIONSTYLE *)&v21, &v27, &v26, 0LL, 0LL);
    v11 = *((_DWORD *)a4 + 63);
    v12 = *((_DWORD *)v9 + 41);
    v13 = *((_QWORD *)v9 + 13);
    *((_QWORD *)v9 + 13) = 0LL;
    v14 = *(_QWORD *)a4;
    v15 = v12 & 1 | v11 & 0xC | (2 * (v11 & 1 | (4 * (v12 & 0xE))));
    v16 = *((_DWORD *)v9 + 29) >= 1;
    v17 = (void *)UserReferenceDwmApiPort();
    DwmAsyncUpdateSprite(v17, (__int64)v23, v14, v15, (__int64)v9 + 72, 0LL, v21, v27, v26, v16, v13);
    v18 = *((_QWORD *)a4 + 23);
    if ( v18 )
      v19 = *(_QWORD *)(v18 + 8);
    else
      v19 = 0LL;
    bSpDwmNotifyDirty(*(HSPRITE *)v9, a4, 2u, v19);
    v20 = v25;
    *((_DWORD *)a4 + 63) &= ~8u;
    if ( v20 )
      _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
  }
  v25 = 0LL;
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v24);
}
