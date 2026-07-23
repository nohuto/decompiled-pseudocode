/*
 * XREFs of EtwpBufferingModeFlush @ 0x1408BF2D8
 * Callers:
 *     EtwpFlushTrace @ 0x1406C3BE0 (EtwpFlushTrace.c)
 * Callees:
 *     EtwpLockUnlockBufferList @ 0x140014AC8 (EtwpLockUnlockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpPrepareDirtyBuffer @ 0x140015598 (EtwpPrepareDirtyBuffer.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140314C20 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpFlushBufferToLogfile @ 0x1405C1784 (EtwpFlushBufferToLogfile.c)
 *     EtwpWaitForBufferReferenceCount @ 0x1405C2CE0 (EtwpWaitForBufferReferenceCount.c)
 *     EtwpPrepareHeader @ 0x1405C2DD0 (EtwpPrepareHeader.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpFindAndLockBufferForFlushing @ 0x1408BF644 (EtwpFindAndLockBufferForFlushing.c)
 */

__int64 __fastcall EtwpBufferingModeFlush(unsigned int *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebp
  int LogFile; // r14d
  __int64 v4; // r15
  __int64 v6; // rcx
  __int64 UsedProcessorCount; // rdi
  _QWORD *v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int32 v10; // eax
  signed __int64 i; // rcx
  signed __int64 v12; // rax
  __int64 v13; // rbp
  _QWORD *v14; // r13
  _QWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  signed __int32 v18; // r15d
  signed __int32 v19; // esi
  unsigned int *v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  char *j; // rax
  unsigned int *v24; // rcx
  signed __int32 v25; // eax
  __int64 v26; // rsi
  __int64 k; // rdi
  void *v28; // rcx

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
            v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v1) + 8 * v4);
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
            v15 = (_QWORD *)*v14;
            --v13;
            v16 = 0LL;
            if ( (_QWORD *)*v14 == v14 )
              v15 = 0LL;
            if ( !v15 )
              break;
            while ( 1 )
            {
              v17 = *(_QWORD *)(v15[2] + 24LL);
              if ( v17 == v13 )
                break;
              if ( v17 < v13 && (!v16 || v17 > *(_QWORD *)(v16 + 24)) )
                v16 = v15[2];
              v15 = (_QWORD *)*v15;
              if ( v15 == v14 )
                v15 = 0LL;
              if ( !v15 )
                goto LABEL_35;
            }
            v16 = v15[2];
LABEL_35:
            if ( !v16 )
              break;
            v18 = *(_DWORD *)(v16 + 44);
            if ( (unsigned int)(v18 - 4) <= 1 )
            {
              v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), 3, v18);
              if ( v18 == v19 )
              {
                if ( *(_QWORD *)(v16 + 24) == v13 )
                {
                  EtwpWaitForBufferReferenceCount(v16);
                  if ( v19 == 5 )
                  {
                    if ( *(_DWORD *)(v16 + 8) != 72 )
                    {
                      v20 = (unsigned int *)(v16 + 72);
                      v21 = v16 + *(unsigned int *)(v16 + 8);
                      *(_QWORD *)(v16 + 104) = 0LL;
                      v22 = *(unsigned int *)(v16 + 72);
                      for ( j = (char *)(v16 + 72 + v22); (unsigned __int64)j < v21; j = (char *)v20 + *v20 )
                      {
                        v24 = v20;
                        v20 = (unsigned int *)((char *)v20 + (unsigned int)v22);
                        *((_QWORD *)v20 + 4) = v24;
                        LODWORD(v22) = *v20;
                      }
                      do
                      {
                        if ( (unsigned int)EtwpPrepareHeader((__int64)a1, (__int64)v20, 64) != -2147483614 )
                          LogFile = EtwpFlushBufferToLogfile((__int64)a1, v20);
                        v20 = (unsigned int *)*((_QWORD *)v20 + 4);
                      }
                      while ( v20 );
                      v14 = a1 + 24;
                      v25 = 5;
                      goto LABEL_55;
                    }
                    _InterlockedExchange((volatile __int32 *)(v16 + 44), 0);
                  }
                  else if ( v19 == 4 )
                  {
                    if ( (unsigned int)EtwpPrepareHeader((__int64)a1, v16, 0) != -2147483614 )
                      LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)v16);
                    v25 = 4;
LABEL_55:
                    _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), v18, v25);
                    if ( LogFile < 0 )
                      break;
                  }
                }
                else
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 44), v18, 3);
                }
              }
            }
          }
          while ( v13 >= 0 );
        }
      }
      else
      {
        v26 = *((_QWORD *)a1 + 103);
        for ( k = EtwpFindAndLockBufferForFlushing(a1, v26); k; k = EtwpFindAndLockBufferForFlushing(a1, --v26) )
        {
          EtwpWaitForBufferReferenceCount(k);
          if ( (unsigned int)EtwpPrepareHeader((__int64)a1, k, 0) != -2147483614 )
            LogFile = EtwpFlushBufferToLogfile((__int64)a1, (unsigned int *)k);
          _InterlockedExchange((volatile __int32 *)(k + 44), 0);
          if ( LogFile < 0 )
            break;
        }
      }
      EtwpFinalizeHeader((__int64)a1, *((void **)a1 + 102), 0);
      a1[66] = 0;
    }
    v28 = (void *)*((_QWORD *)a1 + 102);
    if ( v28 )
    {
      ZwClose(v28);
      *((_QWORD *)a1 + 102) = 0LL;
    }
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 42));
  }
  return (unsigned int)LogFile;
}
