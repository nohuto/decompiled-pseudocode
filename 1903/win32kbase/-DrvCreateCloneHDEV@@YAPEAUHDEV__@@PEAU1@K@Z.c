/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0129FCC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     PALLOCMEM2 @ 0x1C00148AC (PALLOCMEM2.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0015350 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     HmgShareLockCheck @ 0x1C001C500 (HmgShareLockCheck.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003BFD0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C0042060 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00542E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00571F4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0123F24 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0124DB0 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  struct PDEV *v5; // rdi
  __int64 v6; // rcx
  struct PDEV *v7; // rbx
  _QWORD *v8; // rsi
  ULONG NumberOfMapRegisters; // ecx
  __int64 v10; // rax
  __int64 v11; // rax
  struct HOBJ__ **v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  struct PDEV *v19; // [rsp+60h] [rbp+8h] BYREF
  struct PDEV *v20; // [rsp+70h] [rbp+18h] BYREF
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  *(_QWORD *)(v4 + 32) = 1LL;
  WdLogEvent5_WdEvent(v4);
  v20 = a1;
  v5 = 0LL;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v21, (struct PDEVOBJ *)&v20);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v19, (char *)a1);
  v7 = v19;
  if ( v19 )
  {
    v8 = PALLOCMEM2(0x840uLL, 0x706D7447u, 1);
    if ( v8 && (int)IsbSpEnableSpritesSupported() >= 0 && (unsigned int)bSpEnableSprites(v7) )
    {
      if ( (int)IsvEnableSynchronizeSupported() >= 0 )
        vEnableSynchronize(v7);
      NumberOfMapRegisters = WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters;
      v8[122] = v8 + 68;
      *((_DWORD *)v8 + 182) = 0;
      *(_DWORD *)(v8[122] + 176LL) = 0xFFFFFF;
      v10 = v8[122];
      *((_DWORD *)v8 + 30) = 0;
      *(_QWORD *)(v10 + 248) = 0LL;
      v11 = HmgShareLockCheck(NumberOfMapRegisters, 16);
      *((_QWORD *)v7 + 197) = 0LL;
      v12 = (struct HOBJ__ **)v11;
      *((_QWORD *)v7 + 194) = 0LL;
      *((_DWORD *)v7 + 390) = 0;
      EBRUSHOBJ::vInitBrush(
        (int *)v7 + 386,
        (__int64)v8,
        v11,
        (__int64)ppalDefault,
        *(_QWORD *)(*((_QWORD *)v7 + 319) + 128LL),
        *((_QWORD *)v7 + 319),
        1u);
      DEC_SHARE_REF_CNT_LAZY0(v12);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
      --*((_DWORD *)a1 + 3);
      PDEVOBJ::vUnreferencePdev(&v20, 0, v13);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v14);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v15);
      }
      PDEVOBJ::bDisabled((PDEVOBJ *)&v19, *((_DWORD *)a1 + 10) & 0x400);
      v5 = v7;
    }
    else
    {
      PDEVOBJ::vClearSurface((PDEVOBJ *)&v19);
      PDEVOBJ::vUnreferencePdev(&v19, 0, v16);
    }
    if ( v8 )
      Win32FreePool((__int64)v8);
  }
  v17 = WdLogNewEntry5_WdTrace(v6);
  *(_QWORD *)(v17 + 24) = v5;
  WdLogEvent5_WdTrace(v17);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v21);
  return v5;
}
