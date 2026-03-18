/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x14070A418
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x14070A3D0 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405980AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x140599CA8 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E5270 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140896610 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-A0h]
  _BYTE v16[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v16, 0, 0xAAuLL);
  v14 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    LODWORD(v14) = 11141120;
    v15 = v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v14) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v15 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr((__int16 **)&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v13, 3, 0LL, (__int64)v15, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
