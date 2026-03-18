/*
 * XREFs of PnpGetDeviceInterfacePropertyData @ 0x140862214
 * Callers:
 *     ExpHwidGetDevicePropertyDataFixed @ 0x140626CE4 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x140626D68 (ExpHwidGetDevicePropertyData.c)
 *     IoGetDeviceInterfacePropertyData @ 0x14085E110 (IoGetDeviceInterfacePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDF10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF910 (PnpUnicodeStringToWstr.c)
 *     RtlLCIDToCultureName @ 0x1408D4620 (RtlLCIDToCultureName.c)
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
  v14 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    v16 = v17;
    WORD1(v15) = 170;
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
                       3LL,
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
