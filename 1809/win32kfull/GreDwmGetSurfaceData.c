/*
 * XREFs of GreDwmGetSurfaceData @ 0x1C00A15B8
 * Callers:
 *     NtGdiHLSurfGetInformation @ 0x1C0075730 (NtGdiHLSurfGetInformation.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0074C00 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z @ 0x1C00A1A2C (-GetSoSurfaceData@SFMLOGICALSURFACE@@QEAAJPEAUtagDWMSURFACEDATA@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C015EB20 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDwmGetSurfaceData(__int64 a1, __int64 a2, struct tagDWMSURFACEDATA *a3)
{
  __int64 v6; // rdx
  SFMLOGICALSURFACE *v7; // rax
  char *v8; // rbx
  unsigned int SoSurfaceData; // edi
  _BYTE v11[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-28h] BYREF
  SFMLOGICALSURFACE *v13; // [rsp+48h] [rbp-8h]
  int v14; // [rsp+70h] [rbp+20h] BYREF
  char v15; // [rsp+88h] [rbp+38h] BYREF

  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v11, ghsemSprite);
  v14 = 0;
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v15, ghsemDwmState, 1);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( g_pDwmState )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 2552) + 96LL) == 6 )
      {
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v12);
        v7 = 0LL;
        v13 = 0LL;
        if ( a2 && (LOBYTE(v6) = 18, v7 = (SFMLOGICALSURFACE *)HmgShareLockCheck(a2, v6), (v13 = v7) != 0LL) )
        {
          v8 = (char *)v7 + 256;
          if ( v7 != (SFMLOGICALSURFACE *)-256LL )
          {
            KeEnterCriticalRegion();
            GreAcquirePushLockShared(v8);
            v7 = v13;
          }
          SoSurfaceData = SFMLOGICALSURFACE::GetSoSurfaceData(v7, a3);
          if ( v8 )
          {
            GreReleasePushLockShared(v8);
            KeLeaveCriticalRegion();
          }
          v7 = v13;
        }
        else
        {
          SoSurfaceData = -1073741816;
        }
        if ( v7 )
          DEC_SHARE_REF_CNT(v7);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v12);
      }
      else
      {
        SoSurfaceData = -1073741811;
      }
    }
    else
    {
      SoSurfaceData = -1071775733;
    }
  }
  else
  {
    SoSurfaceData = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v15);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v14);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v11);
  return SoSurfaceData;
}
