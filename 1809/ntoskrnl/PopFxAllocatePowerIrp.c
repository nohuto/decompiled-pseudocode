/*
 * XREFs of PopFxAllocatePowerIrp @ 0x14017313C
 * Callers:
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     PopFxAddLogEntry @ 0x1400FE884 (PopFxAddLogEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7,
        _QWORD *a8)
{
  KIRQL v13; // al
  __int64 v14; // rdi
  KIRQL v15; // bp
  NTSTATUS v16; // esi
  signed __int32 v18; // edx
  char v19; // al
  unsigned int v20; // edx
  __int16 v21; // ax
  unsigned int v22; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile LONG *SpinLock; // [rsp+60h] [rbp+8h]
  KIRQL v25; // [rsp+90h] [rbp+38h]

  SpinLock = (volatile LONG *)(a1 + 88);
  *a7 = 0LL;
  *a8 = 0LL;
  v13 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v14 = *(_QWORD *)(a1 + 80);
  v25 = v13;
  v15 = v13;
  if ( v14 )
  {
    if ( a6 )
    {
      v16 = 0;
    }
    else
    {
      v16 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v14 + 224), 0LL, &File, 1u, 0x20u);
      if ( v16 < 0 )
      {
LABEL_13:
        v15 = v25;
        goto LABEL_3;
      }
    }
    _m_prefetchw((const void *)(v14 + 32));
    v18 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x10;
    _m_prefetchw((const void *)(v14 + 32));
    v19 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
    if ( v18 )
    {
      if ( (v19 & 0x20) != 0
        && (_m_prefetchw((const void *)(v14 + 32)),
            v20 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 8) & 1,
            _m_prefetchw((const void *)(v14 + 32)),
            v20 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1)) )
      {
        v16 = -1073741670;
      }
      else
      {
        _m_prefetchw((const void *)(v14 + 32));
        v21 = _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
        _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x20u);
        _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x200u);
        v16 = 259;
        *(_QWORD *)(((v21 & 0x200) != 0 ? 8 : 0) + v14 + 496) = a2;
        *(_DWORD *)(((v21 & 0x200) != 0 ? 516LL : 512LL) + v14) = a3;
        *(_QWORD *)(((v21 & 0x200) != 0 ? 8 : 0) + v14 + 520) = a4;
        *(_QWORD *)(((v21 & 0x200) != 0 ? 8 : 0) + v14 + 536) = a5;
      }
    }
    else if ( (v19 & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v14 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) & 0x20) != 0 )
      {
        if ( a6 )
        {
          _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0);
          _InterlockedXor((volatile signed __int32 *)(v14 + 32), 0x100u);
          _m_prefetchw((const void *)(v14 + 32));
          v22 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 8) & 1;
          _m_prefetchw((const void *)(v14 + 32));
          if ( v22 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v14 + 32), 0) >> 9) & 1) )
            _InterlockedAnd((volatile signed __int32 *)(v14 + 32), 0xFFFFFFDF);
          _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
          v16 = 0;
          *a7 = *(_QWORD *)(v14 + 16);
          *a8 = *(_QWORD *)(v14 + 24);
        }
        else
        {
          v16 = -1073741670;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 228), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v14 + 232), 0, 0);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(v14 + 32), 0x10u);
        KeResetEvent((PRKEVENT)(v14 + 552));
        v16 = 0;
        *a7 = *(_QWORD *)(v14 + 16);
        *a8 = *(_QWORD *)(v14 + 24);
      }
    }
    goto LABEL_13;
  }
  v16 = -1073741130;
LABEL_3:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v15);
  if ( v14 )
    PopFxAddLogEntry(*(_QWORD *)(v14 + 48), 0, 21, v16);
  return (unsigned int)v16;
}
