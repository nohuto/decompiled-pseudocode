/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x14082864C
 * Callers:
 *     ExpHwidGetDevicePropertyDataFixed @ 0x140586700 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x140586784 (ExpHwidGetDevicePropertyData.c)
 *     IoGetDeviceInterfacePropertyData @ 0x1408245E0 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405980AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140599CA8 (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14059A008 (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140896610 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v16; // [rsp+70h] [rbp-90h]
  _BYTE v17[176]; // [rsp+80h] [rbp-80h] BYREF

  memset(v17, 0, 0xAAuLL);
  v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    LODWORD(v15) = 11141120;
    v16 = v17;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v15) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v16 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpUnicodeStringToWstr(&v14, 0LL, (unsigned __int16 *)a1);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)v14,
                       3u,
                       0LL,
                       (__int64)v16,
                       a2,
                       a8,
                       a6,
                       a5,
                       a7,
                       0);
  PnpUnicodeStringToWstrFree(v14, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
