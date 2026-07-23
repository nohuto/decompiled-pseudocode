/*
 * XREFs of TppDirectExecuteCallback @ 0x18007F440
 * Callers:
 *     <none>
 * Callees:
 *     TpPostTask @ 0x1800159A0 (TpPostTask.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TppDirectExecuteCallback(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rdi
  _RTL_SRWLOCK *Value; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  Value = (_RTL_SRWLOCK *)a2[5].Value;
  if ( Value == &a2[5] )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = a2[5].Value;
    if ( (_RTL_SRWLOCK *)Value[1].Value != v4 || (v7 = Value->Value, *(_RTL_SRWLOCK **)(Value->Value + 8) != Value) )
      __fastfail(3u);
    v4->Value = v7;
    *(_QWORD *)(v7 + 8) = v4;
    Value = (_RTL_SRWLOCK *)v4->Value;
  }
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( Value != v4 )
    TpPostTask((__int64)a2, *(char **)(a1 + 128), 1, 0LL);
  if ( v6 )
  {
    v9 = *(_OWORD *)(v6 - 32);
    v10 = *(_OWORD *)(v6 - 16);
    v8 = *(_QWORD *)(v6 + 16);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Value)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
