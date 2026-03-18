/*
 * XREFs of PiCMUnregisterDeviceInterface @ 0x140873394
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     _CmDeleteDeviceInterface @ 0x140933F24 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall PiCMUnregisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r15
  int v11; // ebx
  int ObjectProperty; // ebx
  char v13; // al
  struct _KTHREAD *CurrentThread; // rax
  int v16; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+6Ch] [rbp+Bh] BYREF
  __int64 v18[5]; // [rsp+70h] [rbp+Fh] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = a6;
  v16 = 0;
  v17 = 0;
  *a6 = 0;
  LOBYTE(a6) = 0;
  v11 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v18);
  if ( v11 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v18[2] && !HIDWORD(v18[0]) && LODWORD(v18[1]) == 4 && !HIDWORD(v18[3]) && a3 && a4 >= 8 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v18[2],
                           3LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_DeviceInterface_Enabled,
                           (__int64)&v16,
                           (__int64)&a6,
                           1,
                           (__int64)&v17,
                           0);
        if ( ObjectProperty >= 0 )
        {
          if ( v16 == 17 && v17 == 1 )
          {
            v13 = (char)a6;
          }
          else
          {
            v13 = 0;
            LOBYTE(a6) = 0;
          }
          if ( v13 == -1 )
            ObjectProperty = -1073740024;
          if ( ObjectProperty >= 0 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            ObjectProperty = CmDeleteDeviceInterface(PiPnpRtlCtx, v18[2]);
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      else
      {
        ObjectProperty = -1073741811;
      }
    }
    else
    {
      ObjectProperty = -1073741790;
    }
    v11 = PiCMReturnBasicResultData(ObjectProperty, v18[4], a3, a4, v10);
  }
  PiCMReleaseObjectInputData((__int64)v18);
  return (unsigned int)v11;
}
