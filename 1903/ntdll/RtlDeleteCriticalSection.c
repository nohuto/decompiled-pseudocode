/*
 * XREFs of RtlDeleteCriticalSection @ 0x180032B30
 * Callers:
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_1800874F8 @ 0x1800874F8 (sub_1800874F8.c)
 *     RtlTraceDatabaseDestroy @ 0x1800FC0B0 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     sub_180035DD0 @ 0x180035DD0 (sub_180035DD0.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwAlertThreadByThreadId @ 0x18009D4B0 (ZwAlertThreadByThreadId.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // r14d
  __int64 v4; // rdi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  signed __int64 v10; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  signed __int64 v15; // rtt
  _QWORD *v16; // r9
  __int64 i; // rcx
  __int64 v18; // rax
  bool v19; // zf
  signed __int64 v20; // rax
  __int64 v21; // rsi
  signed __int64 v22; // rax
  _QWORD *v23; // rax

  v2 = a1[3];
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = ZwClose(v2);
  else
    v3 = 0;
  v4 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive(&qword_1801662F8);
    v7 = v4 + 16;
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v4 + 24);
      if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    v10 = _InterlockedCompareExchange64(&qword_1801662F8, 0LL, 1LL);
    if ( v10 != 1 )
    {
      do
      {
        v12 = v10 & 6;
        v13 = 3LL;
        if ( v12 != 2 )
          v13 = -1LL;
        v14 = v10 + v13;
        v15 = v10;
        v10 = _InterlockedCompareExchange64(&qword_1801662F8, v14, v10);
      }
      while ( v15 != v10 );
      if ( v12 == 2 )
      {
        while ( (v14 & 1) == 0 )
        {
LABEL_19:
          v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v16[1] )
          {
            v23 = v16;
            v16 = (_QWORD *)*v16;
            v16[2] = v23;
          }
          if ( v16 != (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v18 = *(_QWORD *)(i + 16);
            if ( v18 )
            {
              *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
              *(_QWORD *)(i + 16) = 0LL;
              _InterlockedAnd64(&qword_1801662F8, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_25:
                v21 = *(_QWORD *)(i + 16);
                _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
                  ZwAlertThreadByThreadId(*(_QWORD *)(i + 24));
                i = v21;
              }
              while ( v21 );
              goto LABEL_11;
            }
          }
          v20 = _InterlockedCompareExchange64(&qword_1801662F8, 0LL, v14);
          v19 = v14 == v20;
          v14 = v20;
          if ( v19 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v22 = _InterlockedCompareExchange64(&qword_1801662F8, v14 - 4, v14);
          v19 = v14 == v22;
          v14 = v22;
          if ( v19 )
            break;
          if ( (v22 & 1) == 0 )
            goto LABEL_19;
        }
      }
    }
LABEL_11:
    v11 = *(unsigned __int16 *)(v4 + 2) + (*(unsigned __int16 *)(v4 + 44) << 16);
    if ( qword_180163B78
      && (_DWORD)v11
      && (unsigned int)v11 <= *(_DWORD *)(qword_180163B78 + 180)
      && *(_QWORD *)(*(_QWORD *)(qword_180163B78 + 184) - 8 * v11)
      && qword_180163B78 )
    {
      sub_1800FAE20();
    }
    memset((void *)v4, 0, 0x30uLL);
    if ( !v6 )
      sub_180035DD0((PSLIST_ENTRY)v4);
  }
  memset(a1, 0, 0x28uLL);
  return v3;
}
