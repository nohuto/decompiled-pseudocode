/*
 * XREFs of sub_1800F41D0 @ 0x1800F41D0
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F40B0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F41D0(__int64 a1, __int64 a2)
{
  char v4; // r14
  char *v5; // rsi
  _DWORD *v6; // rbx
  __int64 *v7; // rdi
  bool v8; // zf
  __int64 **v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v15; // [rsp+28h] [rbp-8h]

  v15 = &v14;
  v14 = (__int64)&v14;
  v4 = 0;
  RtlAcquireSRWLockExclusive(&qword_180166978);
  v5 = (char *)off_18015FA78;
  if ( off_18015FA78 != (_UNKNOWN *)&off_18015FA78 )
  {
    do
    {
      v6 = v5 + 16;
      v7 = (__int64 *)v5;
      ++*((_DWORD *)v5 + 4);
      RtlReleaseSRWLockExclusive(&qword_180166978);
      if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64))v5 + 3))(a1, a2) )
        v4 = 1;
      RtlAcquireSRWLockExclusive(&qword_180166978);
      v8 = (*v6)-- == 1;
      v5 = *(char **)v5;
      if ( v8 )
      {
        if ( *((__int64 **)v5 + 1) != v7
          || (v9 = (__int64 **)v7[1], *v9 != v7)
          || (*v9 = (__int64 *)v5, *((_QWORD *)v5 + 1) = v9, v10 = v15, (__int64 *)*v15 != &v14) )
        {
LABEL_15:
          __fastfail(3u);
        }
        v7[1] = (__int64)v15;
        *v7 = (__int64)&v14;
        *v10 = (__int64)v7;
        v15 = v7;
      }
    }
    while ( v5 != (char *)&off_18015FA78 );
  }
  RtlReleaseSRWLockExclusive(&qword_180166978);
  while ( 1 )
  {
    v11 = v14;
    if ( (__int64 *)v14 == &v14 )
      return v4;
    if ( *(__int64 **)(v14 + 8) != &v14 )
      goto LABEL_15;
    v12 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
      goto LABEL_15;
    v14 = *(_QWORD *)v14;
    *(_QWORD *)(v12 + 8) = &v14;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
  }
}
