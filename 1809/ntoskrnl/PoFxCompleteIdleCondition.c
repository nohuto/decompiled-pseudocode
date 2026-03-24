/*
 * XREFs of PoFxCompleteIdleCondition @ 0x140131F10
 * Callers:
 *     <none>
 * Callees:
 *     PopFxAddLogEntry @ 0x1400FE804 (PopFxAddLogEntry.c)
 *     PopFxIdleWorkerTail @ 0x1400FEA08 (PopFxIdleWorkerTail.c)
 *     PopFxBugCheck @ 0x1402D74C0 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxCompleteIdleCondition(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx

  result = *(_QWORD *)(BugCheckParameter2 + 816);
  v4 = (unsigned int)BugCheckParameter3;
  v5 = _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(result + 8LL * (unsigned int)BugCheckParameter3)
                                                       + 136LL));
  if ( !v5 )
  {
    PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter2 + 48), BugCheckParameter3, 13, 1LL);
    result = PopFxIdleWorkerTail((struct _IO_REMOVE_LOCK *)BugCheckParameter2, v4, 0LL);
  }
  if ( v5 < 0 )
    PopFxBugCheck(0x613uLL, BugCheckParameter2, v4, 2uLL);
  return result;
}
