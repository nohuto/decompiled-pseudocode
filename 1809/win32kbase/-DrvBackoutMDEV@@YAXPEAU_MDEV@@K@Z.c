/*
 * XREFs of ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C0101370
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C003F640 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     HmgSafeNextObjtByIndex @ 0x1C0020040 (HmgSafeNextObjtByIndex.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0029A20 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0029C90 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0029E00 (GreAcquireHmgrSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0047230 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A596C (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C00FF04C (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

void __fastcall DrvBackoutMDEV(struct _MDEV *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // eax
  __int64 i; // rsi
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct SURFACE *v29; // [rsp+50h] [rbp+8h] BYREF
  struct PDEV *v30; // [rsp+60h] [rbp+18h] BYREF

  v4 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v4 + 24) = a1;
  WdLogEvent5_WdEvent(v4);
  v7 = *((_DWORD *)a1 + 5);
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 5 * i;
    v10 = 0;
    v11 = *((_QWORD *)a1 + 5 * i + 4);
    v29 = 0LL;
    v30 = (struct PDEV *)v11;
    while ( 1 )
    {
      GreAcquireHmgrSemaphore(v9, v5, v6);
      v10 = HmgSafeNextObjtByIndex(v10, 5, &v29);
      GreReleaseHmgrSemaphore(v13, v12, v14);
      if ( !v10 )
        break;
      v9 = (__int64)v29;
      if ( *((_QWORD *)v29 + 5) == *(_QWORD *)(v11 + 1800) && (*((_DWORD *)v29 + 29) & 1) != 0 )
        vCleanupRedirectionSurface((HSURF *)v29, 1);
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    if ( *(_DWORD *)(v11 + 12) == 1 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v15);
      if ( ghsemDriverMgmt )
      {
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
        PsLeavePriorityRegion(v17);
      }
      DrvDisableDisplay((HSEMAPHORE *)v11, 0LL, v16);
      EngAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v15);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v18);
    }
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    --*(_DWORD *)(v11 + 12);
    PDEVOBJ::vUnreferencePdev(&v30, 0, v19);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v20);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v21);
    }
    v7 = *((_DWORD *)a1 + 5);
  }
  v22 = 0;
  if ( v7 )
  {
    do
    {
      v23 = *((_QWORD *)a1 + 5 * v22 + 5);
      if ( v23 )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        if ( *(_DWORD *)(v23 + 12) == 1 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v24);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
            PsLeavePriorityRegion(v27);
          }
          DrvEnableDisplay((HSEMAPHORE *)v23, v25, v26);
          EngAcquireSemaphore(ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v24);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v28);
        }
      }
      ++v22;
    }
    while ( v22 < *((_DWORD *)a1 + 5) );
  }
}
