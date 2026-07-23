/*
 * XREFs of PspNotifyEmptyJobsInJobChain @ 0x140604D9C
 * Callers:
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 * Callees:
 *     PspEvaluateAndNotifyEmptyJob @ 0x140604DE8 (PspEvaluateAndNotifyEmptyJob.c)
 */

__int64 __fastcall PspNotifyEmptyJobsInJobChain(__int64 a1)
{
  struct _KEVENT *i; // rbx
  __int64 result; // rax

  _interlockedbittestandset((volatile signed __int32 *)(a1 + 768), 0xBu);
  for ( i = *(struct _KEVENT **)(a1 + 944); i; i = (struct _KEVENT *)i[44].Header.WaitListHead.Blink )
    result = PspEvaluateAndNotifyEmptyJob(i);
  return result;
}
