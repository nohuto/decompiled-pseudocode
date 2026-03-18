/*
 * XREFs of KiOutSwapProcesses @ 0x140074770
 * Callers:
 *     KeSwapProcessOrStack @ 0x14018A530 (KeSwapProcessOrStack.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     KiReadyOutSwappedThreads @ 0x140074960 (KiReadyOutSwappedThreads.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiOutSwapProcesses(_QWORD *a1)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 result; // rax
  char v9; // r15
  unsigned __int8 v10; // cl
  unsigned int v11; // eax
  signed __int64 *v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v16; // rcx
  int v17; // [rsp+50h] [rbp+8h] BYREF

  do
  {
    v2 = (__int64)(a1 - 33);
    a1 = (_QWORD *)*a1;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v17 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)v2, 7u) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( (*(_DWORD *)v2 & 0x80u) != 0 );
    }
    v4 = v2 + 248;
    v5 = *(_QWORD *)(v2 + 248);
    if ( v5 == v2 + 248 || (*(_DWORD *)(v2 + 576) & 7) == 6 )
    {
      _InterlockedXor((volatile signed __int32 *)(v2 + 576), *(_DWORD *)(v2 + 576) & 7 ^ 5);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
      MmOutSwapProcess(v2);
      v9 = 0;
      v10 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KiAcquireKobjectLockSafe(v2);
      if ( *(_QWORD *)v4 == v4 )
      {
        v11 = 4;
      }
      else
      {
        v12 = (signed __int64 *)(v2 + 264);
        _m_prefetchw(&KiProcessInSwapListHead);
        v13 = KiProcessInSwapListHead;
        do
        {
          *v12 = v13;
          v14 = v13;
          v13 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v12, v13);
        }
        while ( v13 != v14 );
        if ( !v13 )
          v9 = 1;
        v11 = 7;
      }
      _InterlockedXor((volatile signed __int32 *)(v2 + 576), v11);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      if ( v9 )
      {
        KiAcquireKobjectLockSafe(&KiSwapEvent);
        KiSwapEvent.Header.SignalState = 1;
        _InterlockedAnd((volatile signed __int32 *)&KiSwapEvent, 0xFFFFFF7F);
      }
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result >= 2u && CurrentIrql < 2u )
          {
            v16 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
            result = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    else
    {
      v6 = *(_QWORD *)v4;
      v7 = *(_QWORD **)(v2 + 256);
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v7 != v4 )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)(v2 + 256) = v2 + 248;
      *(_QWORD *)v4 = v4;
      _InterlockedXor((volatile signed __int32 *)(v2 + 576), 3u);
      _InterlockedAnd((volatile signed __int32 *)v2, 0xFFFFFF7F);
      result = KiReadyOutSwappedThreads(v5, CurrentIrql);
    }
  }
  while ( a1 );
  return result;
}
