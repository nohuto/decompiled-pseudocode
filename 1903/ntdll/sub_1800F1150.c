/*
 * XREFs of sub_1800F1150 @ 0x1800F1150
 * Callers:
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 *     sub_1800EF8F8 @ 0x1800EF8F8 (sub_1800EF8F8.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004E6DC @ 0x18004E6DC (sub_18004E6DC.c)
 *     sub_18010A8F4 @ 0x18010A8F4 (sub_18010A8F4.c)
 */

NTSTATUS __fastcall sub_1800F1150(unsigned int a1, unsigned int a2)
{
  struct _PEB *v2; // r14
  __int64 v4; // rsi
  __int64 v5; // rbp
  PVOID *ProcessHeaps; // rax
  PVOID v7; // rbx
  _RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  HANDLE UniqueThread; // rcx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  char v13; // [rsp+24h] [rbp-24h]
  PVOID *v14; // [rsp+28h] [rbp-20h]

  v2 = NtCurrentPeb();
  if ( a2 )
  {
    v4 = 0LL;
    v5 = a2;
    do
    {
      ProcessHeaps = v2->ProcessHeaps;
      v7 = ProcessHeaps[v4];
      if ( *((_DWORD *)v7 + 4) == -571548178 )
      {
        if ( (*((_BYTE *)v7 + 20) & 1) == 0 )
          sub_18010A8F4(ProcessHeaps[v4], a1);
      }
      else if ( (*((_BYTE *)v7 + 112) & 1) == 0 )
      {
        if ( *((_BYTE *)v7 + 418) == 2 )
          v8 = (_RTL_SRWLOCK *)*((_QWORD *)v7 + 51);
        else
          v8 = 0LL;
        if ( v8 )
        {
          if ( a1 )
            v8->Ptr = (PVOID)1;
          RtlReleaseSRWLockExclusive(v8);
        }
        if ( a1 )
        {
          v9 = *((_QWORD *)v7 + 44);
          *((_WORD *)v7 + 208) = 0;
          *(_QWORD *)(v9 + 16) = NtCurrentTeb()->ClientId.UniqueThread;
          *(_DWORD *)(v9 + 8) = -2;
          *(_DWORD *)(v9 + 12) = 1;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
        RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)v7 + 44));
      }
      ++v4;
      --v5;
    }
    while ( v5 );
  }
  if ( a1 )
  {
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180166A80 = -1LL;
    stru_180163BE0.OwningThread = UniqueThread;
    stru_180163BE0.LockCount = -2;
    stru_180163BE0.RecursionCount = 1;
    stru_180163BE0.LockSemaphore = 0LL;
    qword_180166A78 = 1LL;
  }
  v12 = 1;
  v14 = qword_180166A60;
  v13 = -1;
  sub_18004E6DC((__int64)&v12);
  return RtlLeaveCriticalSection(&stru_180163BE0);
}
