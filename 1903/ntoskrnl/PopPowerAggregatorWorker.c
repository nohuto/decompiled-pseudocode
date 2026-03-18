/*
 * XREFs of PopPowerAggregatorWorker @ 0x1408B2E60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTracePowerAggregatorCompletionEvent @ 0x1408B0410 (PopDiagTracePowerAggregatorCompletionEvent.c)
 *     PopPowerAggregatorExecuteState @ 0x1408B2A8C (PopPowerAggregatorExecuteState.c)
 */

void PopPowerAggregatorWorker()
{
  int v0; // eax
  int i; // ebx
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 **v5; // r8
  struct _KEVENT *v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 **v9; // [rsp+28h] [rbp-18h]
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v0 = dword_1404391A8;
  for ( i = 0; (dword_1404391A8 & 2) != 0; v0 = dword_1404391A8 )
  {
    v2 = dword_1404391A4;
    v3 = (__int64 *)qword_140439548;
    ++dword_1404391A4;
    v9 = &v8;
    v8 = (__int64 *)&v8;
    v10 = *(__int128 *)((char *)&xmmword_1404391AC + 8);
    if ( (__int64 *)qword_140439548 != &qword_140439548 )
    {
      v4 = qword_140439550;
      if ( *(__int64 **)(qword_140439548 + 8) != &qword_140439548
        || *(__int64 **)qword_140439550 != &qword_140439548
        || (*(_QWORD *)qword_140439550 = qword_140439548,
            v3[1] = v4,
            v5 = v9,
            qword_140439550 = (__int64)&qword_140439548,
            qword_140439548 = (__int64)&qword_140439548,
            (__int64 **)v8[1] != &v8)
        || *v9 != (__int64 *)&v8
        || *(__int64 **)(*v3 + 8) != v3
        || *(__int64 **)v3[1] != v3 )
      {
LABEL_17:
        __fastfail(3u);
      }
      *v9 = v3;
      v9 = (__int64 **)v3[1];
      *(_QWORD *)v3[1] = &v8;
      v3[1] = (__int64)v5;
    }
    dword_1404391A8 &= ~2u;
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    i = PopPowerAggregatorExecuteState(&v10, v2);
    while ( 1 )
    {
      v6 = (struct _KEVENT *)v8;
      if ( v8 == (__int64 *)&v8 )
        break;
      if ( (__int64 **)v8[1] != &v8 )
        goto LABEL_17;
      v7 = (__int64 *)*v8;
      if ( *(__int64 **)(*v8 + 8) != v8 )
        goto LABEL_17;
      v8 = (__int64 *)*v8;
      v7[1] = (__int64)&v8;
      LODWORD(v6->Header.WaitListHead.Blink) = i;
      KeSetEvent(v6 + 1, 0, 0);
    }
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  }
  dword_1404391A8 = v0 & 0xFFFFFFFE;
  PopDiagTracePowerAggregatorCompletionEvent(PopPowerAggregatorContext, i);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
