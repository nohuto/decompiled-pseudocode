/*
 * XREFs of EmProviderDeregister @ 0x140814AC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     EmpQueueRuleUpdateState @ 0x14017FD20 (EmpQueueRuleUpdateState.c)
 *     EmpProviderDeregisterEntry @ 0x14026E798 (EmpProviderDeregisterEntry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EmProviderDeregister(char *P)
{
  unsigned int i; // edx
  _QWORD *v3; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 j; // rbp
  _QWORD *k; // rsi
  char *v8; // rsi
  char *v9; // rcx
  __int64 m; // rsi
  _QWORD *n; // r14
  void *v12; // rcx

  if ( P )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpDatabaseLock, 0LL);
    if ( *((_QWORD *)P + 3) )
    {
      for ( i = 0; i < *((_DWORD *)P + 8); *(_QWORD *)(v4 + 8) = v5 )
      {
        v3 = (_QWORD *)(32LL * i + *((_QWORD *)P + 3) + 16LL);
        v4 = *v3;
        if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
          __fastfail(3u);
        *v5 = v4;
        ++i;
      }
      ExFreePoolWithTag(*((PVOID *)P + 3), 0x72704D45u);
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)P + 4); j = (unsigned int)(j + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 16LL),
             0xFFFFFFFF) == 1 )
      {
        for ( k = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 1) + 8 * j) + 72LL); k; k = (_QWORD *)*k )
          EmpQueueRuleUpdateState(*(k - 1), 0LL);
      }
    }
    v8 = (char *)*((_QWORD *)P + 7);
    while ( v8 != P + 56 )
    {
      v9 = v8 - 40;
      v8 = *(char **)v8;
      EmpProviderDeregisterEntry(v9);
    }
    for ( m = 0LL; (unsigned int)m < *((_DWORD *)P + 12); m = (unsigned int)(m + 1) )
    {
      if ( _InterlockedExchangeAdd(
             (volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 24LL),
             0xFFFFFFFF) == 1 )
      {
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 16LL) = 0LL;
        for ( n = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)P + 5) + 8 * m) + 48LL); n; n = (_QWORD *)*n )
          EmpQueueRuleUpdateState(*(n - 1), 0LL);
      }
    }
    if ( *(_QWORD *)P )
      ObfDereferenceObject(*(PVOID *)P);
    v12 = (void *)*((_QWORD *)P + 5);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x72704D45u);
    ExFreePoolWithTag(P, 0x72704D45u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
  }
}
