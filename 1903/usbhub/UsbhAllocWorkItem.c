/*
 * XREFs of UsbhAllocWorkItem @ 0x1C00109E0
 * Callers:
 *     UsbhFdoScheduleDeferredPowerRequest @ 0x1C0002A10 (UsbhFdoScheduleDeferredPowerRequest.c)
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     UsbhHubSSH_Timer @ 0x1C000FA80 (UsbhHubSSH_Timer.c)
 * Callees:
 *     Log @ 0x1C0013360 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

struct _LIST_ENTRY *__fastcall UsbhAllocWorkItem(
        _LIST_ENTRY *a1,
        _LIST_ENTRY *a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int8 a6)
{
  _LIST_ENTRY *Flink; // rsi
  struct _LIST_ENTRY *PoolWithTag; // rax
  struct _LIST_ENTRY *v12; // rbx
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *v14; // rax
  __int64 v15; // rax

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  Flink = a1[4].Flink;
  if ( !Flink )
    goto LABEL_22;
  if ( LODWORD(Flink->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1[4].Flink);
  if ( a5 != 2001228627 )
    Log((_DWORD)a1, 8, 1633110861, a4, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_10fd33d0d4c73f43ffd0851bf01e9310_Traceguids,
      a4);
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v13 = a1[4].Flink;
  if ( !v13 )
LABEL_22:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( LODWORD(v13->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1[4].Flink);
  v14 = v13[298].Flink;
  if ( !v14 || (v15 = ((__int64 (__fastcall *)(_LIST_ENTRY *, _QWORD))v14)(a1, a6)) == 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return 0LL;
  }
  v12[2].Blink = (_LIST_ENTRY *)v15;
  LODWORD(v12->Flink) = 1230463592;
  HIDWORD(v12->Flink) = a5;
  HIDWORD(v12->Blink) = a4;
  v12[2].Flink = (_LIST_ENTRY *)a3;
  v12[1].Flink = a1;
  v12[1].Blink = a2;
  ExInterlockedInsertTailList(Flink + 174, v12 + 3, (PKSPIN_LOCK)&Flink[175]);
  if ( HIDWORD(v12->Flink) != 2001228627 )
    Log((_DWORD)a1, 8, 1464552747, 0, (__int64)v12);
  return v12;
}
