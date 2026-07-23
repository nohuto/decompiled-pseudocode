/*
 * XREFs of sub_180079F40 @ 0x180079F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180079F40(__int64 a1, _RTL_SRWLOCK *a2)
{
  _RTL_SRWLOCK *v4; // rax
  _RTL_SRWLOCK *Ptr; // rdi
  _QWORD *v6; // rdx
  bool v7; // bl
  PVOID v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive(a2 + 4);
  v4 = a2 + 5;
  Ptr = (_RTL_SRWLOCK *)a2[5].Ptr;
  if ( Ptr == &a2[5] )
  {
    Ptr = 0LL;
  }
  else
  {
    if ( Ptr[1].Ptr != v4 || (v6 = Ptr->Ptr, *((_RTL_SRWLOCK **)Ptr->Ptr + 1) != Ptr) )
      __fastfail(3u);
    v4->Ptr = v6;
    v6[1] = v4;
  }
  v7 = v4->Ptr != v4;
  RtlReleaseSRWLockExclusive(a2 + 4);
  if ( v7 )
    sub_1800318A8((__int64)a2, *(_RTL_SRWLOCK **)(a1 + 128), 1LL, 0LL);
  if ( Ptr )
  {
    v9 = *(_OWORD *)&Ptr[-4].Ptr;
    v10 = *(_OWORD *)&Ptr[-2].Ptr;
    v8 = Ptr[2].Ptr;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8 + 2, 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3145728, *(PVOID *)v8);
    *(_RTL_SRWLOCK *)(a1 + 88) = a2[7];
    *(_QWORD *)(a1 + 96) = a2;
    ((void (__fastcall *)(__int64, _RTL_SRWLOCK *, _QWORD, __int128 *))a2[7].Ptr)(a1, a2, *((_QWORD *)&v9 + 1), &v10);
  }
}
