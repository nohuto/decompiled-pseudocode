/*
 * XREFs of CmpInitDelayDerefKCBEngine @ 0x14076338C
 * Callers:
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x1400063D0 (KeInitializeGuardedMutex.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeInitializeTimer2 @ 0x1400FD550 (KeInitializeTimer2.c)
 */

__int64 CmpInitDelayDerefKCBEngine()
{
  unsigned __int64 v0; // rax
  __int64 v1; // r8
  __int128 *v2; // r9
  __int64 v3; // r11
  int v4; // r10d
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // r10
  const char *v8; // rcx
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int128 *v14; // rdx
  __int64 v15; // rax
  int v16; // r9d
  __int64 v18; // rax
  __int64 v19; // rax

  qword_140438F98 = (__int64)&CmpDelayDerefKCBListHead;
  CmpDelayDerefKCBListHead = (__int64)&CmpDelayDerefKCBListHead;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayDerefKCBLock);
  CmpDelayDerefKCBWorkItem.Parameter = 0LL;
  CmpDelayDerefKCBWorkItem.List.Flink = 0LL;
  CmpDelayDerefKCBWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayDerefKCBWorker;
  _mm_lfence();
  if ( !qword_140439950 )
  {
    v0 = __rdtsc();
    v1 = (41929663 * (unsigned int)((((unsigned __int64)HIDWORD(v0) << 32) | (unsigned int)v0) >> 4)) ^ 0x5A4LL;
    if ( !v1 )
      v1 = 1LL;
    qword_140439950 = v1;
    v2 = &KeServiceDescriptorTable;
    v3 = (41929663 * (unsigned int)(__rdtsc() >> 4)) ^ 0x5A4LL;
    qword_140439958 = v3;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v4 = 64;
    v5 = v1;
    v6 = 8LL;
    do
    {
      v5 = __ROR8__(v5 - *(_QWORD *)v2, v3);
      v2 = (__int128 *)((char *)v2 + 8);
      v4 -= 8;
      --v6;
    }
    while ( v6 );
    for ( ; v4; --v4 )
    {
      v18 = *(unsigned __int8 *)v2;
      v2 = (__int128 *)((char *)v2 + 1);
      v5 = __ROR8__(v5 - v18, v3);
    }
    v7 = (_QWORD *)KeServiceDescriptorTable;
    v8 = (const char *)KeServiceDescriptorTable;
    v9 = 4 * xmmword_14055A890;
    v10 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_14055A890);
    qword_140439968 = v5;
    if ( (unsigned __int64)KeServiceDescriptorTable < v10 )
    {
      do
      {
        _mm_prefetch(v8, 0);
        v8 += 64;
      }
      while ( (unsigned __int64)v8 < v10 );
    }
    v11 = v1;
    if ( v9 >= 8 )
    {
      v12 = (unsigned __int64)v9 >> 3;
      do
      {
        v11 = __ROR8__(v11 - *v7++, v3);
        v9 -= 8;
        --v12;
      }
      while ( v12 );
    }
    for ( ; v9; --v9 )
    {
      v13 = *(unsigned __int8 *)v7;
      v7 = (_QWORD *)((char *)v7 + 1);
      v11 = __ROR8__(v11 - v13, v3);
    }
    qword_140439970 = v11;
    v14 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v15 = 4LL;
    v16 = 32;
    do
    {
      v1 = __ROR8__(v1 - *(_QWORD *)v14, v3);
      v14 = (__int128 *)((char *)v14 + 8);
      v16 -= 8;
      --v15;
    }
    while ( v15 );
    for ( ; v16; --v16 )
    {
      v19 = *(unsigned __int8 *)v14;
      v14 = (__int128 *)((char *)v14 + 1);
      v1 = __ROR8__(v1 - v19, v3);
    }
    qword_140439978 = v1;
    qword_140439960 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
  }
  return KeInitializeTimer2((__int64)&CmpDelayDerefKCBTimer);
}
