/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x180004BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  void **v3; // rdi
  void ***v4; // rbx
  int v5; // eax
  int v7; // eax
  void **v8; // rax
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, char *, _QWORD); // rax

  RtlAcquireSRWLockExclusive(a2 + 32);
  v3 = (void **)(a2 + 16);
  while ( 1 )
  {
    v4 = (void ***)*v3;
    if ( *v3 == v3 )
    {
      v5 = *(_DWORD *)(a2 + 64);
      if ( (v5 & 2) == 0 )
        break;
    }
    v7 = *(_DWORD *)(a2 + 64);
    if ( (v7 & 2) != 0 )
    {
      *(_DWORD *)(a2 + 64) = v7 & 0xFFFFFFFD;
      v4 = 0LL;
    }
    else
    {
      if ( v4[1] != v3 || (v8 = *v4, (*v4)[1] != v4) )
        __fastfail(3u);
      *v3 = v8;
      v8[1] = v3;
    }
    RtlReleaseSRWLockExclusive(a2 + 32);
    v9 = *(_QWORD *)(a2 + 8);
    v10 = *(void (__fastcall **)(__int64, char *, _QWORD))(a2 + 40);
    if ( v4 )
    {
      v10(v9, (char *)v4 + 20, *((unsigned int *)v4 + 4));
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    }
    else
    {
      v10(v9, 0LL, 0LL);
    }
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_DWORD *)(a2 + 64) = v5 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
