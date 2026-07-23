/*
 * XREFs of ExStartRecordingIRTimerExpiries @ 0x1408D0A5C
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF2DC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void ExStartRecordingIRTimerExpiries()
{
  int v0; // edx
  unsigned __int8 *v1; // rcx
  __int64 v2; // r8
  int v3; // eax
  SIZE_T v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  void *v7; // rbx

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_1403510B0;
  v2 = 15LL;
  do
  {
    v3 = *v1;
    v1 += 24;
    v0 += v3;
    --v2;
  }
  while ( v2 );
  v4 = (unsigned int)(4 * v0);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x69547845u);
  v6 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v4);
    v7 = (void *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x69547845u);
  }
}
