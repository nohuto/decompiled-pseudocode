/*
 * XREFs of TppPoolAddWorker @ 0x18007D040
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall TppPoolAddWorker(_RTL_SRWLOCK *a1, __int64 a2)
{
  _RTL_SRWLOCK *v4; // rax
  _RTL_SRWLOCK **Value; // rdx

  *(_DWORD *)(a2 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_QWORD *)(a2 + 48) = a1;
  RtlAcquireSRWLockExclusive(a1 + 9);
  v4 = (_RTL_SRWLOCK *)(a2 + 16);
  Value = (_RTL_SRWLOCK **)a1[13].Value;
  if ( *Value != &a1[12] )
    __fastfail(3u);
  v4->Value = (unsigned __int64)&a1[12];
  *(_QWORD *)(a2 + 24) = Value;
  *Value = v4;
  a1[13].Value = (unsigned __int64)v4;
  RtlReleaseSRWLockExclusive(a1 + 9);
}
