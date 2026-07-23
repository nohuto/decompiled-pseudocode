/*
 * XREFs of RtlpInitializeStaticCriticalSection @ 0x180082A80
 * Callers:
 *     RtlpEnterCriticalSectionContended @ 0x18001B3D0 (RtlpEnterCriticalSectionContended.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ZwAlertThreadByThreadId @ 0x18009DC60 (ZwAlertThreadByThreadId.c)
 */

int __fastcall RtlpInitializeStaticCriticalSection(_QWORD *a1)
{
  __int64 v2; // rbx
  struct _PEB *v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rcx
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // rcx
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  _QWORD *v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rbx
  _QWORD *v15; // rax

  v2 = a1[4] | 0x7D0LL;
  v3 = NtCurrentPeb();
  if ( (a1[4] & 0x2FFFFFFLL) != 0x2000000 )
    v2 = a1[4];
  if ( v3->NumberOfProcessors == 1 )
    v2 = (unsigned int)v2 & 0xFF000000;
  RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
  v4 = *a1 + 16LL;
  if ( !*(_QWORD *)v4 )
  {
    a1[4] = v2;
    v5 = (__int64 *)off_18015F578[0];
    if ( *(_UNKNOWN ***)off_18015F578[0] != &RtlCriticalSectionList )
      __fastfail(3u);
    *(_QWORD *)v4 = &RtlCriticalSectionList;
    *(_QWORD *)(v4 + 8) = v5;
    *v5 = v4;
    off_18015F578[0] = (_UNKNOWN **)v4;
  }
  v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, 1LL);
  if ( v6 != 1 )
  {
    do
    {
      v7 = 3LL;
      v8 = v6 & 6;
      if ( v8 != 2 )
        v7 = -1LL;
      v9 = v6 + v7;
      v10 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v9, v6);
    }
    while ( v10 != v6 );
    if ( v8 == 2 )
    {
      while ( (v9 & 1) == 0 )
      {
LABEL_15:
        v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL);
        v12 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
        if ( !v12 )
        {
          do
          {
            v15 = v11;
            v11 = (_QWORD *)*v11;
            v11[2] = v15;
            v12 = v11[1];
          }
          while ( !v12 );
          if ( v11 != (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v12;
        }
        if ( (*(_DWORD *)(v12 + 36) & 1) != 0 )
        {
          v6 = *(_QWORD *)(v12 + 16);
          if ( v6 )
          {
            *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v6;
            *(_QWORD *)(v12 + 16) = 0LL;
            _InterlockedAnd64((volatile signed __int64 *)&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
            do
            {
LABEL_19:
              v14 = *(_QWORD *)(v12 + 16);
              _interlockedbittestandset((volatile signed __int32 *)(v12 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v12 + 36), 1u) )
                LODWORD(v6) = ZwAlertThreadByThreadId(*(HANDLE *)(v12 + 24));
              v12 = v14;
            }
            while ( v14 );
            return v6;
          }
        }
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, 0LL, v9);
        v13 = v9 == v6;
        v9 = v6;
        if ( v13 )
          goto LABEL_19;
      }
      while ( 1 )
      {
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)&RtlCriticalSectionLock, v9 - 4, v9);
        v13 = v9 == v6;
        v9 = v6;
        if ( v13 )
          break;
        if ( (v6 & 1) == 0 )
          goto LABEL_15;
      }
    }
  }
  return v6;
}
