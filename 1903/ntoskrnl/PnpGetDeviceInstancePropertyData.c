/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x140944340
 * Callers:
 *     sub_140918FAC @ 0x140918FAC (sub_140918FAC.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  int ObjectProperty; // ebx
  _DWORD v12[48]; // [rsp+60h] [rbp-D8h] BYREF

  memset(&v12[4], 0, 0xAAuLL);
  v12[0] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_InLocalMachineContainer,
                     (__int64)v12,
                     a6,
                     1,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty >= 0 )
    *a8 = v12[0];
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
