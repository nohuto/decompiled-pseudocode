/*
 * XREFs of RtlBackoff @ 0x18006ADA0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B660 (RtlTryAcquireSRWLockShared.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18007F878 (RtlpQueueWaitBlockToSRWLock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  int v5; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned __int64)NtCurrentTeb();
    if ( *(_DWORD *)(*(_QWORD *)(result + 96) + 184LL) == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v5 = 0;
  result = (v1 - 1) & (unsigned int)v3;
  v4 = result + v1;
  if ( v4 )
  {
    do
    {
      _mm_pause();
      result = (unsigned int)(v5 + 1);
      v5 = result;
    }
    while ( (unsigned int)result < v4 );
  }
  return result;
}
