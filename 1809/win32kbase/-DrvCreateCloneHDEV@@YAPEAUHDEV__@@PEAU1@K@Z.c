/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C01016DC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HmgShareLockCheck @ 0x1C0021790 (HmgShareLockCheck.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0029CE0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002A1B0 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C002A260 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003E228 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C005D300 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0?$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00AB9D8 (--0-$HmgShareLockResult@VBRUSH@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgShareLockResult@VBRUSH@@@@QEAA@XZ @ 0x1C00ABA2C (--1-$HmgShareLockResult@VBRUSH@@@@QEAA@XZ.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00F7354 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00F8214 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct PDEV *v5; // r14
  __int64 v6; // rcx
  struct PDEV *v7; // rbx
  _QWORD *v8; // rdi
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17[6]; // [rsp+40h] [rbp-30h] BYREF
  struct PDEV *v18; // [rsp+A0h] [rbp+30h] BYREF
  struct PDEV *v19; // [rsp+B0h] [rbp+40h] BYREF
  char v20; // [rsp+B8h] [rbp+48h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = 1LL;
  WdLogEvent5_WdEvent(v4);
  v19 = a1;
  v5 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v20, (struct PDEVOBJ *)&v19);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v18, (char *)a1);
  v7 = v18;
  if ( v18 )
  {
    v8 = PALLOCMEM2(0x868uLL, 1886221383LL, 1);
    if ( v8 && (int)IsbSpEnableSpritesSupported() >= 0 && (unsigned int)bSpEnableSprites(v7) )
    {
      if ( (int)IsvEnableSynchronizeSupported() >= 0 )
        vEnableSynchronize(v7);
      v9 = (unsigned int)ghbrGrayPattern;
      v8[122] = v8 + 68;
      *((_DWORD *)v8 + 182) = 0;
      *(_DWORD *)(v8[122] + 176LL) = 0xFFFFFF;
      v10 = v8[122];
      *((_DWORD *)v8 + 30) = 0;
      *(_QWORD *)(v10 + 248) = 0LL;
      v11 = HmgShareLockCheck(v9, 16);
      HmgShareLockResult<BRUSH>::HmgShareLockResult<BRUSH>((unsigned __int64)v17, v11);
      *((_QWORD *)v7 + 197) = 0LL;
      *((_QWORD *)v7 + 194) = 0LL;
      *((_DWORD *)v7 + 390) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v7 + 386,
        (__int64)v8,
        v17[0],
        (__int64)ppalDefault,
        *(_QWORD *)(*((_QWORD *)v7 + 319) + 128LL),
        *((_QWORD *)v7 + 319),
        1u);
      HmgShareLockResult<BRUSH>::~HmgShareLockResult<BRUSH>((__int64)v17);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v19, 0, v12);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v13);
      GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
      PDEVOBJ::bDisabled((PDEVOBJ *)&v18, *((_DWORD *)a1 + 10) & 0x400);
      v5 = v7;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v18);
      PDEVOBJ::vUnreferencePdev(&v18, 0, v14);
    }
    if ( v8 )
      Win32FreePool((__int64)v8);
  }
  v15 = WdLogNewEntry5_WdTrace(v6);
  *(_QWORD *)(v15 + 24) = v5;
  WdLogEvent5_WdTrace(v15);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v20);
  return v5;
}
