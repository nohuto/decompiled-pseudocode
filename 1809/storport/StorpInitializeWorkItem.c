/*
 * XREFs of StorpInitializeWorkItem @ 0x1C0040E58
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeWorkItem(__int64 a1, PIO_WORKITEM **a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rbp
  PIO_WORKITEM *Pool; // rax
  PIO_WORKITEM *v7; // rsi
  PIO_WORKITEM WorkItem; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( KeGetCurrentIrql() > 2u )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Cu,
          (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
      }
      return 3238002696LL;
    }
    v5 = **(_QWORD **)(a1 - 16);
    Pool = (PIO_WORKITEM *)RaidAllocatePool(NonPagedPoolNx, 0x20uLL, 0x49576152u, *(_QWORD *)(v5 + 8));
    v7 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, 0x20uLL);
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v5 + 8));
      *v7 = WorkItem;
      if ( WorkItem )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 5048));
        *a2 = v7;
        return v2;
      }
      ExFreePoolWithTag(v7, 0x49576152u);
    }
    return (unsigned int)-1056964605;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Bu,
      (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids,
      a1,
      a2);
  }
  return 3238002694LL;
}
