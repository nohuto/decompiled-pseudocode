/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C01042FC
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C0061B10 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0061BC0 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0072784 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00728E0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rsi
  struct tagGRAPHICS_DEVICE *v2; // rbp
  wchar_t *v4; // r14
  __int64 v5; // r8
  struct PDEV *i; // rax
  __int64 v7; // rcx
  OPM *v8; // rdi
  struct _KMUTANT *v9; // rcx
  struct tagGRAPHICS_DEVICE *result; // rax

  v1 = gpLocalGraphicsDeviceList;
  v2 = 0LL;
  gpGraphicsDeviceList = (wchar_t *)gpLocalGraphicsDeviceList;
  gpGraphicsDeviceListLast = gpLocalGraphicsDeviceListLast;
  if ( gpLocalGraphicsDeviceList )
  {
    do
    {
      v4 = (wchar_t *)*((_QWORD *)v1 + 16);
      if ( a1 && a1 == *((_QWORD *)v1 + 18) )
      {
        EngAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
        for ( i = gppdevList; i; i = *(struct PDEV **)i )
        {
          if ( *((struct tagGRAPHICS_DEVICE **)i + 322) == v1 )
            *((_QWORD *)i + 322) = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v5);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
          PsLeavePriorityRegion(v7);
        }
        if ( v1 == (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList )
        {
          gpGraphicsDeviceList = v4;
        }
        else if ( v2 )
        {
          *((_QWORD *)v2 + 16) = v4;
        }
        if ( v1 == gpGraphicsDeviceListLast )
          gpGraphicsDeviceListLast = v2;
        if ( (*((_DWORD *)v1 + 40) & 0x800000) != 0 )
        {
          v8 = qword_1C01CD640;
          OPM::CMutex::Lock((void **)qword_1C01CD640 + 7);
          OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
            (__int64)v8 + 24,
            (_DWORD *)v1 + 62,
            (__int64)v8 + 48);
          v9 = (struct _KMUTANT *)*((_QWORD *)v8 + 7);
          if ( v9 )
            KeReleaseMutex(v9, 0);
          DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v1 + 248));
        }
        DrvCleanupOneGraphicsDevice((__int64)v1);
        v1 = v2;
      }
      v2 = v1;
      v1 = (struct tagGRAPHICS_DEVICE *)v4;
    }
    while ( v4 );
  }
  gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
  result = gpGraphicsDeviceListLast;
  gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
  return result;
}
