/*
 * XREFs of EtwpBufferingModeFlush @ 0x1408FAC14
 * Callers:
 *     EtwpFlushTrace @ 0x1406CBED4 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003AC0 (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140003ADC (EtwpPrepareDirtyBuffer.c)
 *     EtwpLockUnlockBufferList @ 0x140109AB0 (EtwpLockUnlockBufferList.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140332D80 (EtwpBufferingModeCompressionFlush.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     EtwpPrepareHeader @ 0x14062FD80 (EtwpPrepareHeader.c)
 *     EtwpFinalizeHeader @ 0x1406B827C (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 *     EtwpFlushBufferToLogfile @ 0x1406B9FF0 (EtwpFlushBufferToLogfile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1406DD29C (EtwpWaitForBufferReferenceCount.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1408FB070 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  int LogFile; // r15d
  __int64 v4; // r14
  __int64 v6; // rcx
  __int64 UsedProcessorCount; // rdi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 i; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rax
  signed __int32 v19; // r14d
  signed __int32 v20; // esi
  unsigned int *v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  char *j; // rax
  unsigned int *v25; // rcx
  signed __int32 v26; // eax
  __int64 v27; // r8
  unsigned int v28; // r10d
  unsigned int v30; // edx
  signed __int64 v31; // r9
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 k; // rdi
  __int64 v35; // r8
  unsigned int *m; // rax
  signed __int64 v37; // r8
  unsigned __int16 v38; // r9
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  unsigned int *v41; // rdx
  void *v42; // rcx

  v1 = 0LL;
  v2 = a1[1];
  LogFile = 0;
  v4 = *a1;
  UsedProcessorCount = (unsigned int)EtwpQueryUsedProcessorCount((__int64)a1);
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v6 + 832), 4u);
  if ( *(_QWORD *)(v6 + 208) )
  {
    LogFile = EtwpCreateLogFile(v6, 0);
    if ( LogFile >= 0 )
    {
      if ( (_DWORD)UsedProcessorCount )
      {
        do
        {
          if ( (a1[3] & 0x10000000) != 0 )
            v8 = a1 + 36;
          else
            v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 139) + 4136LL) + v1) + 8 * v4);
          v9 = *v8 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v9 )
          {
            v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 8), v2);
            if ( v10 <= v2 )
              *(_DWORD *)(v9 + 4) = v10;
            _m_prefetchw(v8);
            for ( i = *v8; (v9 ^ i) <= 0xF; i = v12 )
            {
              v12 = _InterlockedCompareExchange64(v8, 0LL, i);
              if ( i == v12 )
                break;
            }
            if ( (i & 0xFFFFFFFFFFFFFFF0uLL) == v9 )
            {
              _InterlockedExchangeAdd((volatile signed __int32 *)((i & 0xFFFFFFFFFFFFFFF0uLL) + 12), -(i & 0xF));
              EtwpPrepareDirtyBuffer((__int64)a1, v9);
            }
          }
          v1 += 64LL;
          --UsedProcessorCount;
        }
        while ( UsedProcessorCount );
      }
      EtwpLockUnlockBufferList((__int64)a1);
      if ( (a1[3] & 0x4000000) != 0 )
      {
        EtwpBufferingModeCompressionFlush((__int64)a1);
        v13 = *((_QWORD *)a1 + 103) + 1LL;
        if ( v13 >= 0 )
        {
          v14 = a1 + 24;
          do
          {
            --v13;
            v15 = 0LL;
            v16 = *v14 - 56LL;
            if ( (_QWORD *)*v14 == v14 )
              v16 = 0LL;
            if ( !v16 )
              break;
            while ( 1 )
            {
              v17 = *(_QWORD *)(v16 + 24);
              if ( v17 == v13 )
                break;
              if ( v17 < v13 && (!v15 || v17 > *(_QWORD *)(v15 + 24)) )
                v15 = v16;
              v18 = *(_QWORD **)(v16 + 56);
              v16 = (__int64)(v18 - 7);
              if ( v18 == v14 )
                v16 = 0LL;
              if ( !v16 )
                goto LABEL_35;
            }
            v15 = v16;
LABEL_35:
            if ( !v15 )
              break;
            v19 = *(_DWORD *)(v15 + 44);
            if ( (unsigned int)(v19 - 4) <= 1 )
            {
              v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), 3, v19);
              if ( v19 == v20 )
              {
                if ( *(_QWORD *)(v15 + 24) == v13 )
                {
                  EtwpWaitForBufferReferenceCount(v15);
                  if ( v20 == 5 )
                  {
                    if ( *(_DWORD *)(v15 + 8) != 72 )
                    {
                      v21 = (unsigned int *)(v15 + 72);
                      v22 = v15 + *(unsigned int *)(v15 + 8);
                      *(_QWORD *)(v15 + 104) = 0LL;
                      v23 = *(unsigned int *)(v15 + 72);
                      for ( j = (char *)(v15 + 72 + v23); (unsigned __int64)j < v22; j = (char *)v21 + *v21 )
                      {
                        v25 = v21;
                        v21 = (unsigned int *)((char *)v21 + (unsigned int)v23);
                        *((_QWORD *)v21 + 4) = v25;
                        LODWORD(v23) = *v21;
                      }
                      do
                      {
                        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v21, 64) != -2147483614 )
                          LogFile = EtwpFlushBufferToLogfile((__int64)a1, v21);
                        v21 = (unsigned int *)*((_QWORD *)v21 + 4);
                      }
                      while ( v21 );
                      v14 = a1 + 24;
                      v26 = 5;
                      goto LABEL_55;
                    }
                    _InterlockedExchange((volatile __int32 *)(v15 + 44), 0);
                  }
                  else if ( v20 == 4 )
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v15, 0) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v15);
                    v26 = 4;
LABEL_55:
                    _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, v26);
                    if ( LogFile < 0 )
                      break;
                  }
                }
                else
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 44), v19, 3);
                }
              }
            }
          }
          while ( v13 >= 0 );
        }
      }
      else
      {
        v28 = EtwpQueryUsedProcessorCount((__int64)a1);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 166, *((_QWORD *)a1 + 103), -1LL) != -1 )
          return 3221225539LL;
        if ( *((_QWORD *)a1 + 164) )
        {
          v30 = 0;
          if ( v28 )
          {
            v27 = 0LL;
            do
            {
              v31 = *(_QWORD *)(v27 + *((_QWORD *)a1 + 164));
              v32 = *(_QWORD *)(v27 + *((_QWORD *)a1 + 165));
              if ( v31 > v32 )
              {
                do
                {
                  v33 = v32;
                  v32 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8LL * v30),
                          v31,
                          v32);
                }
                while ( v33 != v32 && v31 > v32 );
              }
              ++v30;
              v27 += 8LL;
            }
            while ( v30 < v28 );
          }
        }
        for ( k = EtwpFindAndLockBufferForFlushing(a1, *((_QWORD *)a1 + 166), v27);
              k;
              k = EtwpFindAndLockBufferForFlushing(a1, *((_QWORD *)a1 + 166), v35) )
        {
          EtwpWaitForBufferReferenceCount(k);
          if ( (unsigned int)EtwpPrepareHeader((__int64)a1, k, 0) != -2147483614 )
            LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)k);
          _InterlockedDecrement64((volatile signed __int64 *)a1 + 166);
          _InterlockedExchange((volatile __int32 *)(k + 44), 0);
          if ( LogFile < 0 )
            break;
        }
        if ( *((_QWORD *)a1 + 165) )
        {
          for ( m = (unsigned int *)*((_QWORD *)a1 + 12); ; m = (unsigned int *)*((_QWORD *)v41 + 7) )
          {
            v41 = m - 14;
            if ( m == a1 + 24 )
              v41 = 0LL;
            if ( !v41 )
              break;
            v37 = *((_QWORD *)v41 + 2);
            v38 = *((_WORD *)v41 + 20);
            if ( *((_QWORD *)v41 + 3) <= *((_QWORD *)a1 + 166) )
            {
              v39 = *(_QWORD *)(*((_QWORD *)a1 + 165) + 8LL * v38);
              do
              {
                if ( v37 <= v39 )
                  break;
                v40 = v39;
                v39 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(*((_QWORD *)a1 + 165) + 8LL * v38),
                        v37,
                        v39);
              }
              while ( v40 != v39 );
            }
          }
        }
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 102), 0);
      *((_QWORD *)a1 + 166) = -1LL;
      a1[66] = 0;
    }
    v42 = (void *)*((_QWORD *)a1 + 102);
    if ( v42 )
    {
      ZwClose(v42);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
  }
  return (unsigned int)LogFile;
}
