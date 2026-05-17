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
  unsigned __int64 v1; // r9
  unsigned int v2; // edi
  unsigned int i; // esi
  void **ProcessHeaps; // rax
  char *v5; // rbx
  int v6; // ebp
  volatile signed __int64 *v8; // rcx
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h]

  v0 = NtCurrentPeb();
  RtlEnterCriticalSection((__int64)&unk_180163BE0);
  sub_18004E7DC((__int64)&unk_180166A60, 1uLL, (unsigned __int64)v9, v1);
  v2 = 0;
  for ( i = 0; i < v0->NumberOfHeaps; ++i )
  {
    ProcessHeaps = v0->ProcessHeaps;
    v5 = (char *)ProcessHeaps[i];
    if ( *((_DWORD *)v5 + 4) == -571548178 )
    {
      if ( (v5[20] & 1) == 0 )
      {
        sub_1800170E8((__int64)ProcessHeaps[i], &v10);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 46);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 70);
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)v5 + 28);
        sub_18010A990(v5 + 832, 0LL);
      }
    }
    else if ( (v5[112] & 1) == 0 )
    {
      v6 = 0;
      v11 = -250000LL;
      while ( !(unsigned int)RtlTryEnterCriticalSection(*((_QWORD *)v5 + 44)) )
      {
        ZwDelayExecution();
        if ( (unsigned int)++v6 >= 0x64 )
        {
          v2 = -1073741420;
          sub_1800F1150(0LL, i);
          return v2;
        }
      }
      if ( v5[418] == 2 )
        v8 = (volatile signed __int64 *)*((_QWORD *)v5 + 51);
      else
        v8 = 0LL;
      if ( v8 )
        RtlAcquireSRWLockExclusive(v8);
    }
  }
  return v2;
}
