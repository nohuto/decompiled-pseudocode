/*
 * XREFs of sub_18006B390 @ 0x18006B390
 * Callers:
 *     RtlExitUserProcess @ 0x18006AF00 (RtlExitUserProcess.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180019BF0 (RtlUnlockHeap.c)
 */

void sub_18006B390()
{
  struct _PEB *v0; // rax
  _QWORD *ProcessHeap; // r8
  __int64 v2; // rdx
  HANDLE UniqueThread; // rcx

  v0 = NtCurrentPeb();
  ProcessHeap = v0->ProcessHeap;
  if ( *((_DWORD *)ProcessHeap + 4) == -571548178 )
  {
    sub_180016FFC((__int64)v0->ProcessHeap, 1);
  }
  else if ( (*((_DWORD *)ProcessHeap + 29) & 0x1000000) == 0 )
  {
    v2 = ProcessHeap[44];
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    *(_QWORD *)(v2 + 24) = 0LL;
    *(_QWORD *)(v2 + 16) = UniqueThread;
    *(_DWORD *)(v2 + 8) = -2;
    *(_DWORD *)(v2 + 12) = 1;
    RtlUnlockHeap(ProcessHeap);
  }
}
