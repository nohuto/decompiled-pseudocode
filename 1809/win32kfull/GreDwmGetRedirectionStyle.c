/*
 * XREFs of GreDwmGetRedirectionStyle @ 0x1C02537E0
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0075730 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C000B9F0 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015EB20 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetRedirectionStyle(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rax
  SFMLOGICALSURFACE *v8; // r10
  __int64 v9; // rbx
  _BYTE v11[8]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v13; // [rsp+58h] [rbp-8h]
  __int64 v14; // [rsp+80h] [rbp+20h] BYREF
  char v15; // [rsp+98h] [rbp+38h] BYREF

  v14 = a1;
  v5 = -1073741811;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v11, ghsemSprite);
  LODWORD(v14) = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v15, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v12);
    v13 = 0LL;
    if ( a2 )
    {
      LOBYTE(v6) = 18;
      v7 = HmgShareLockCheck(a2, v6);
      v13 = (SFMLOGICALSURFACE *)v7;
      v8 = (SFMLOGICALSURFACE *)v7;
      if ( v7 )
      {
        v9 = v7 + 256;
        if ( v7 != -256 )
        {
          KeEnterCriticalRegion();
          GreAcquirePushLockShared(v9);
          v8 = v13;
        }
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)a3,
          (unsigned int *)(a3 + 4),
          (unsigned int *)(a3 + 8),
          (void **)(a3 + 24),
          (struct _LUID *)(a3 + 12));
        v5 = 0;
        if ( v9 )
        {
          GreReleasePushLockShared(v9);
          KeLeaveCriticalRegion();
        }
        if ( v13 )
          DEC_SHARE_REF_CNT(v13);
      }
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v12);
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v11);
  return v5;
}
