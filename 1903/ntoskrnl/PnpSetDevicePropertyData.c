/*
 * XREFs of PnpSetDevicePropertyData @ 0x14072DF98
 * Callers:
 *     IoSetDevicePropertyData @ 0x14072DEF0 (IoSetDevicePropertyData.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PnpSetDeviceInstancePropertyChangeEvent @ 0x140171780 (PnpSetDeviceInstancePropertyChangeEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     PnpSetInterruptInformation @ 0x14077F850 (PnpSetInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1408D4D20 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE *v16; // [rsp+58h] [rbp-F0h]
  _BYTE v17[176]; // [rsp+60h] [rbp-E8h] BYREF

  memset(v17, 0, 0xAAuLL);
  v15 = 0LL;
  if ( a1 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v10 = 0LL;
  if ( !v10 || !*(_QWORD *)(v10 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    WORD1(v15) = 170;
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
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v12 = PiPnpRtlSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          *(const WCHAR **)(v10 + 48),
          1,
          0LL,
          (__int64)v16,
          a2,
          a5,
          a7,
          a6,
          0);
  if ( v12 >= 0 && *(_DWORD *)(a2 + 16) == 2 )
  {
    v14 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v14 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v14 )
      v12 = PnpSetInterruptInformation(a1, a7, a6);
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v12 == -1073741275 )
    v12 = -1073741772;
  if ( *(int *)(v10 + 300) >= 771 )
    PnpSetDeviceInstancePropertyChangeEvent(v10);
  return (unsigned int)v12;
}
