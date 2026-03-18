/*
 * XREFs of KiActivateWaiterPriQueue @ 0x14010D40C
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14010D238 (KiActivateWaiterQueueWithNoLocks.c)
 * Callees:
 *     KiAttemptFastRemovePriQueue @ 0x14010D480 (KiAttemptFastRemovePriQueue.c)
 *     KiWakePriQueueWaiter @ 0x14010D55C (KiWakePriQueueWaiter.c)
 */

_QWORD *__fastcall KiActivateWaiterPriQueue(ULONG_PTR a1, unsigned int a2)
{
  _QWORD *result; // rax
  _QWORD *v4; // rdi
  ULONG_PTR v5; // rcx

  result = (_QWORD *)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      result = (_QWORD *)KiAttemptFastRemovePriQueue(a1);
      v4 = result;
      if ( result )
      {
        result = (_QWORD *)KiWakePriQueueWaiter(KeGetCurrentPrcb(), a1, result, a2);
        if ( !(_BYTE)result )
        {
          ++*(_DWORD *)(a1 + 4);
          v5 = a1 + 16LL * (int)a2 + 24;
          result = *(_QWORD **)v5;
          if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
            __fastfail(3u);
          *v4 = result;
          v4[1] = v5;
          result[1] = v4;
          *(_QWORD *)v5 = v4;
        }
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
