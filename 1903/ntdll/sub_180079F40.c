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

signed __int64 __fastcall sub_180079F40(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  bool v7; // bl
  signed __int64 result; // rax
  __int64 v9; // r8
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+40h] [rbp-18h] BYREF

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  v4 = (_QWORD *)(a2 + 40);
  v5 = *(_QWORD **)(a2 + 40);
  if ( v5 == (_QWORD *)(a2 + 40) )
  {
    v5 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v5[1] != v4 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
  }
  v7 = *v4 != (_QWORD)v4;
  result = RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a2 + 32));
  if ( v7 )
    result = sub_1800318A8(a2, a1[16], 1LL, 0LL);
  if ( v5 )
  {
    v10 = *((_OWORD *)v5 - 2);
    v11 = *((_OWORD *)v5 - 1);
    v9 = v5[2];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_180166080 + 3145728, *(_QWORD *)v9);
    a1[11] = *(_QWORD *)(a2 + 56);
    a1[12] = a2;
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int128 *))(a2 + 56))(
             a1,
             a2,
             *((_QWORD *)&v10 + 1),
             &v11);
  }
  return result;
}
