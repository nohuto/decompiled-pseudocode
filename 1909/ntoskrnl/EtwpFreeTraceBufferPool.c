/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x1406AC9A4
 * Callers:
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406AC3AC (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x140003974 (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int v3; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int UsedProcessorCount; // eax
  __int64 v9; // rbp
  __int64 v10; // r14
  volatile __int64 *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 *v14; // rcx
  unsigned __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rax

  v1 = *a1;
  v3 = 0;
  do
  {
    v4 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
    v5 = v4;
    if ( v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
      ++v3;
      _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
      ExFreePoolWithTag(v4, 0);
    }
  }
  while ( v5 );
  while ( 1 )
  {
    v6 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
    if ( !v6 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    ++v3;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v6, 0);
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v7);
  if ( UsedProcessorCount )
  {
    v9 = 0LL;
    v10 = UsedProcessorCount;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v11 = (volatile __int64 *)(a1 + 36);
      else
        v11 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v9) + 8 * v1);
      v12 = _InterlockedExchange64(v11, 0LL);
      v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 12), -(v12 & 0xF));
        do
        {
          v16 = *(_QWORD *)(v13 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
          ++v3;
          ExFreePoolWithTag((PVOID)v13, 0);
          v13 = v16;
        }
        while ( v16 );
      }
      v9 += 64LL;
      --v10;
    }
    while ( v10 );
  }
  if ( *((_QWORD *)a1 + 142) )
  {
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    v17 = (__int64 *)*((_QWORD *)a1 + 142);
    ++v3;
    goto LABEL_22;
  }
  while ( 1 )
  {
    v14 = (__int64 *)*((_QWORD *)a1 + 146);
    if ( !v14 )
      break;
    v18 = *v14;
    v17 = v14 - 4;
    *((_QWORD *)a1 + 146) = v18;
LABEL_22:
    ExFreePoolWithTag(v17, 0);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 135) + 4LL * (a1[79] & 1) + 4116), -(v3 * a1[1]));
  return 0LL;
}
