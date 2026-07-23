/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x14085C930
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140727414 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiGetWorkingSetInfoEx @ 0x1402BF044 (MiGetWorkingSetInfoEx.c)
 *     MiGetAggregateWorkingSetSize @ 0x1402BF7FC (MiGetAggregateWorkingSetSize.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwLogPfnInfoRundown @ 0x1408BF69C (EtwLogPfnInfoRundown.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  _QWORD *PoolWithTag; // rbx
  unsigned __int64 v5; // r15
  SIZE_T v6; // rsi
  char *AnyMultiplexedVm; // r12
  char *v8; // rbp
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdi
  int v12; // ecx
  int WorkingSetInfo; // eax
  __int64 v14; // rcx
  _DWORD v16[4]; // [rsp+28h] [rbp-50h]

  v16[0] = 2;
  v16[1] = 3;
  v3 = 0LL;
  v16[2] = 4;
  PoolWithTag = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  v8 = AnyMultiplexedVm;
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v10 )
    v11 = 64LL;
  else
    v11 = AggregateWorkingSetSize - v10 + 64;
  do
  {
    if ( v16[v3] == 2 )
    {
      v8 = AnyMultiplexedVm;
    }
    else
    {
      if ( v16[v3] == 3 )
      {
        v12 = 2;
      }
      else
      {
        if ( v16[v3] != 4 )
          goto LABEL_11;
        v12 = 1;
      }
      v8 = MiGetAnyMultiplexedVm(v12);
    }
LABEL_11:
    if ( v5 < v11 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      v6 = 32 * v11 + 16;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x4D777445u);
      if ( !PoolWithTag )
        return;
      v5 = v11;
    }
    memset(PoolWithTag, 0, v6);
    WorkingSetInfo = MiGetWorkingSetInfoEx((__int64)v8, PoolWithTag, v6, 0);
    v14 = PoolWithTag[1];
    if ( WorkingSetInfo >= 0 )
    {
      if ( v14 )
        EtwLogPfnInfoRundown(0LL, a1, a2, PoolWithTag);
      v3 = (unsigned int)(v3 + 1);
    }
    else
    {
      v11 = v14 + 64;
    }
  }
  while ( (unsigned int)v3 < 3 );
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
