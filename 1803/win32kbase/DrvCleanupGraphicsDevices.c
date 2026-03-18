/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C00D3898
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A34A0 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@PEAVCMutex@@@Z @ 0x1C00C5668 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00D0670 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00D3A50 (DrvCleanupOneGraphicsDevice.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  struct tagGRAPHICS_DEVICE *v1; // rsi
  struct tagGRAPHICS_DEVICE *v2; // rbp
  wchar_t *v4; // r14
  int v5; // r8d
  struct PDEV *i; // rax
  __int64 v7; // rcx
  PVOID v8; // rdi
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
        EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
        for ( i = gppdevList; i; i = *(struct PDEV **)i )
        {
          if ( *((struct tagGRAPHICS_DEVICE **)i + 321) == v1 )
            *((_QWORD *)i + 321) = 0LL;
        }
        EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v5);
        if ( ghsemDriverMgmt )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
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
          v8 = P;
          CMutex::Lock((void **)P + 4);
          CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
            (__int64)v8,
            (_DWORD *)v1 + 62,
            (__int64)v8 + 24);
          v9 = (struct _KMUTANT *)*((_QWORD *)v8 + 4);
          if ( v9 )
            KeReleaseMutex(v9, 0);
          DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v1 + 248));
        }
        DrvCleanupOneGraphicsDevice(v1);
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
