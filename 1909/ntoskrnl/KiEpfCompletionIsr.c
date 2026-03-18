/*
 * XREFs of KiEpfCompletionIsr @ 0x1402B30A0
 * Callers:
 *     KiHvInterruptSubDispatch @ 0x1401C9FF0 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
 */

__int64 KiEpfCompletionIsr()
{
  __int64 result; // rax

  if ( KiEpfCompletionQueue )
  {
    result = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != result )
    {
      _InterlockedIncrement(&dword_140446AC8);
      return KiInsertQueueDpc((ULONG_PTR)&KiEpfCompletionDpc, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
