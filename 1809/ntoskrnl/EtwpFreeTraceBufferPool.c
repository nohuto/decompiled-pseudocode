/*
 * XREFs of EtwpFreeTraceBufferPool @ 0x1406C1FC4
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400153A8 (EtwpDequeueBuffer.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpFreeTraceBufferPool(unsigned int *a1)
{
  __int64 v1; // r15
  int i; // esi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned int UsedProcessorCount; // eax
  __int64 v8; // rbp
  __int64 v9; // r14
  volatile __int64 *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rax
  _QWORD **v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v1 = *a1;
  for ( i = 0; ; ++i )
  {
    v4 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 8);
    if ( !v4 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v4, 0);
  }
  while ( 1 )
  {
    v5 = EtwpDequeueBuffer((__int64)a1, (_QWORD *)a1 + 10);
    if ( !v5 )
      break;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
    ++i;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 61);
    ExFreePoolWithTag(v5, 0);
  }
  UsedProcessorCount = EtwpQueryUsedProcessorCount(v6);
  if ( UsedProcessorCount )
  {
    v8 = 0LL;
    v9 = UsedProcessorCount;
    do
    {
      if ( (a1[3] & 0x10000000) != 0 )
        v10 = (volatile __int64 *)(a1 + 36);
      else
        v10 = (volatile __int64 *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 135) + 4136LL) + v8) + 8 * v1);
      v11 = _InterlockedExchange64(v10, 0LL);
      v12 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 12), -(v11 & 0xF));
        do
        {
          v13 = *(_QWORD *)(v12 + 32);
          _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
          ++i;
          ExFreePoolWithTag((PVOID)v12, 0);
          v12 = v13;
        }
        while ( v13 );
      }
      v8 += 64LL;
      --v9;
    }
    while ( v9 );
  }
  if ( !*((_QWORD *)a1 + 142) )
    goto LABEL_18;
  _InterlockedDecrement((volatile signed __int32 *)a1 + 62);
  v14 = (__int64 *)*((_QWORD *)a1 + 142);
  ++i;
  while ( 1 )
  {
    ExFreePoolWithTag(v14, 0);
LABEL_18:
    v15 = (__int64 *)*((_QWORD *)a1 + 146);
    if ( !v15 )
      break;
    v16 = *v15;
    v14 = v15 - 4;
    *((_QWORD *)a1 + 146) = v16;
  }
  v17 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v18[1] != v17 || (v19 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
      __fastfail(3u);
    *v17 = v19;
    v19[1] = v17;
    ExFreePoolWithTag(v18, 0);
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)a1 + 135) + 4LL * (a1[79] & 1) + 4116), -(i * a1[1]));
  return 0LL;
}
