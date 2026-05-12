/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004953C
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     McTemplateK0zqjujsssq @ 0x1C0027418 (McTemplateK0zqjujsssq.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     StorIsEventQueueEmpty @ 0x1C004B6C0 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1792), &LockHandle);
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_DWORD *)(a1 + 1776) = 0;
  ++*(_DWORD *)(a1 + 1784);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 3192)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 504)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1268) )
  {
    if ( (byte_1C00617E3 & 0x40) != 0 )
      McTemplateK0zqjujsssq(
        a1 + 169,
        a1 + 160,
        a1 + 1976,
        *(const struct _MCGEN_TRACE_CONTEXT **)(*(_QWORD *)(a1 + 24) + 4864LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_QWORD *)(a1 + 24) + 5256LL,
        *(_BYTE *)(a1 + 96),
        a1 + 1976,
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
        4);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
