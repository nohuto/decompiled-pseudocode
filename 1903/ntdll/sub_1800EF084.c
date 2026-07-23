/*
 * XREFs of sub_1800EF084 @ 0x1800EF084
 * Callers:
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     sub_1800170E8 @ 0x1800170E8 (sub_1800170E8.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryEnterCriticalSection @ 0x180046C20 (RtlTryEnterCriticalSection.c)
 *     sub_18004E7DC @ 0x18004E7DC (sub_18004E7DC.c)
 *     ZwDelayExecution @ 0x18009CD60 (ZwDelayExecution.c)
 *     sub_1800F1150 @ 0x1800F1150 (sub_1800F1150.c)
 *     sub_18010A990 @ 0x18010A990 (sub_18010A990.c)
 */

__int64 sub_1800EF084()
{
  struct _PEB *v0; // r14
  unsigned int v1; // edi
  ULONG i; // esi
  PVOID *ProcessHeaps; // rax
  char *v4; // rbx
  int v5; // ebp
  _RTL_SRWLOCK *v7; // rcx
  char v8[40]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+58h] [rbp+10h] BYREF

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection(&stru_180163BE0);
  sub_18004E7DC((_RTL_SRWLOCK *)qword_180166A60, 1, (__int64)v8);
  v1 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v4 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v4 + 4) == -571548178 )
    {
      if ( (v4[20] & 1) == 0 )
      {
        sub_1800170E8((__int64)ProcessHeaps[i], &v9);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 46);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 70);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v4 + 28);
        sub_18010A990(v4 + 832, 0LL);
      }
    }
    else if ( (v4[112] & 1) == 0 )
    {
      v5 = 0;
      DelayInterval.QuadPart = -250000LL;
      while ( !RtlTryEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)v4 + 44)) )
      {
        ZwDelayExecution(0, &DelayInterval);
        if ( (unsigned int)++v5 >= 0x64 )
        {
          v1 = -1073741420;
          sub_1800F1150(0LL, i);
          return v1;
        }
      }
      if ( v4[418] == 2 )
        v7 = (_RTL_SRWLOCK *)*((_QWORD *)v4 + 51);
      else
        v7 = 0LL;
      if ( v7 )
        RtlAcquireSRWLockExclusive(v7);
    }
  }
  return v1;
}
