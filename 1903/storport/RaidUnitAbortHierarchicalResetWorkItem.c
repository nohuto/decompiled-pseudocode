/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C0046C9C
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000F310 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0034ACC (RaidAdapterResetBus.c)
 *     McTemplateK0quj @ 0x1C004386C (McTemplateK0quj.c)
 *     StorIsEventQueueEmpty @ 0x1C0048F28 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1536), &LockHandle);
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_DWORD *)(a1 + 1520) = 0;
  ++*(_DWORD *)(a1 + 1528);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 2720)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 216)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1036) )
  {
    if ( (byte_1C0061743 & 0x40) != 0 )
      McTemplateK0quj(
        *(struct _MCGEN_TRACE_CONTEXT **)(a1 + 24),
        v2,
        v3,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        a1 + 1720);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 96));
  }
  return result;
}
