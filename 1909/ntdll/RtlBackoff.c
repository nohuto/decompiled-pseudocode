/*
 * XREFs of RtlBackoff @ 0x1800365A0
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpFreeHeap @ 0x180041AB0 (RtlpFreeHeap.c)
 *     RtlTryAcquireSRWLockShared @ 0x1800791F0 (RtlTryAcquireSRWLockShared.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180079618 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  struct _TEB *result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( result->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v4 = 0;
  result = (struct _TEB *)(10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0x7FFE02D6]);
  if ( (_DWORD)result )
  {
    do
    {
      _mm_pause();
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
