/*
 * XREFs of DrvCleanupGraphicsDevices @ 0x1C012A674
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0105800 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LUID@@PEAVCMutex@2@@Z @ 0x1C0085194 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@OPM@@QEAAXPEAU_LU.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x1C00852B0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00B3E50 (DrvCleanupOneGraphicsDevice.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C00B3F00 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 */

struct tagGRAPHICS_DEVICE *__fastcall DrvCleanupGraphicsDevices(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned int v2; // edx
  struct tagGRAPHICS_DEVICE *v3; // r14
  struct tagGRAPHICS_DEVICE *v4; // rsi
  struct tagGRAPHICS_DEVICE *v5; // rax
  wchar_t *v6; // r15
  __int64 v7; // r8
  struct PDEV *i; // rax
  __int64 v9; // rcx
  PVOID v10; // rdi
  struct _KMUTANT *v11; // rcx
  struct tagGRAPHICS_DEVICE *result; // rax
  __int64 v13; // [rsp+60h] [rbp+8h]
  unsigned int v14; // [rsp+68h] [rbp+10h]

  v13 = a1;
  v1 = (gProtocolType != 0) + 1;
  v2 = (gProtocolType != 0) + 3;
  v14 = v2;
  do
  {
    v3 = 0LL;
    if ( (v1 & 1) != 0 )
    {
      v4 = gpRemoteGraphicsDeviceList;
      v5 = gpRemoteGraphicsDeviceListLast;
    }
    else
    {
      v4 = gpLocalGraphicsDeviceList;
      v5 = gpLocalGraphicsDeviceListLast;
    }
    gpGraphicsDeviceListLast = v5;
    gpGraphicsDeviceList = (wchar_t *)v4;
    if ( v4 )
    {
      do
      {
        v6 = (wchar_t *)*((_QWORD *)v4 + 16);
        if ( a1 && a1 == *((_QWORD *)v4 + 18) )
        {
          EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
          EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
          for ( i = gppdevList; i; i = *(struct PDEV **)i )
          {
            if ( *((struct tagGRAPHICS_DEVICE **)i + 322) == v4 )
              *((_QWORD *)i + 322) = 0LL;
          }
          EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (__int64)ghsemDriverMgmt, v7);
          if ( ghsemDriverMgmt )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
            PsLeavePriorityRegion(v9);
          }
          if ( v4 == (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList )
          {
            gpGraphicsDeviceList = v6;
          }
          else if ( v3 )
          {
            *((_QWORD *)v3 + 16) = v6;
          }
          if ( v4 == gpGraphicsDeviceListLast )
            gpGraphicsDeviceListLast = v3;
          if ( (*((_DWORD *)v4 + 40) & 0x800000) != 0 )
          {
            v10 = P;
            OPM::CMutex::Lock((void **)P + 7);
            OPM::CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(
              (__int64)v10 + 24,
              (_DWORD *)v4 + 62,
              (__int64)v10 + 48);
            v11 = (struct _KMUTANT *)*((_QWORD *)v10 + 7);
            if ( v11 )
              KeReleaseMutex(v11, 0);
            DrvRemoveAdapterLuid(*(struct _LUID *)((char *)v4 + 248));
          }
          DrvCleanupOneGraphicsDevice((__int64)v4);
          a1 = v13;
          v4 = v3;
        }
        v3 = v4;
        v4 = (struct tagGRAPHICS_DEVICE *)v6;
      }
      while ( v6 );
      v2 = v14;
    }
    if ( (v1 & 1) != 0 )
    {
      gpRemoteGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
      result = gpGraphicsDeviceListLast;
      gpRemoteGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    }
    else
    {
      gpLocalGraphicsDeviceList = (struct tagGRAPHICS_DEVICE *)gpGraphicsDeviceList;
      result = gpGraphicsDeviceListLast;
      gpLocalGraphicsDeviceListLast = gpGraphicsDeviceListLast;
    }
    ++v1;
  }
  while ( v1 < v2 );
  return result;
}
