/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x140738248
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x140738200 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDF10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF910 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x1408D4620 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v15, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v15;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr((__int16 **)&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v13, 3, 0LL, (__int64)String.Buffer, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
