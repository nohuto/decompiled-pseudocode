/*
 * XREFs of StorpQueueWorkItem @ 0x1C00411D8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0022538 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x1C003BD14 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpQueueWorkItem(__int64 a1, signed __int64 a2, void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  signed __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 v9; // rsi
  struct _IO_WORKITEM *v10; // rcx

  v4 = 0;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids,
        a1,
        a2,
        a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Eu,
        (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)a3 + 1, a2, 0LL);
    v8 = *(__int64 **)(a1 - 16);
    v9 = *v8;
    if ( *v8 )
    {
      if ( (int)RaidAcquireAdapterRemoveLock(*v8) >= 0 )
      {
        if ( v7 )
        {
          v4 = -1056964596;
          RaidReleaseAdapterRemoveLock(v9);
        }
        else
        {
          v10 = *(struct _IO_WORKITEM **)a3;
          *((_QWORD *)a3 + 2) = a4;
          IoQueueWorkItem(v10, (PIO_WORKITEM_ROUTINE)StorPortWorkItemRoutine, DelayedWorkQueue, a3);
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
      return v4;
    }
    return (unsigned int)-1056964602;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Fu,
      (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
  }
  return (unsigned int)-1056964600;
}
