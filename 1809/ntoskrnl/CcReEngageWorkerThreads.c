/*
 * XREFs of CcReEngageWorkerThreads @ 0x140160ABC
 * Callers:
 *     CcAdjustWriteBehindThreadPool @ 0x1400239F0 (CcAdjustWriteBehindThreadPool.c)
 *     CcWorkerThread @ 0x14007F2D0 (CcWorkerThread.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 */

void __fastcall CcReEngageWorkerThreads(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 **v7; // rdi
  __int64 *v8; // r10
  __int64 *v9; // rax
  unsigned int v10; // esi
  __int64 **v11; // rdi
  __int64 *v12; // r10
  __int64 *v13; // rax

  v3 = 0;
  if ( a2 )
  {
    v7 = (__int64 **)(a1 + 208);
    do
    {
      v8 = *v7;
      if ( *v7 == (__int64 *)v7 )
        break;
      if ( (__int64 **)v8[1] == v7 )
      {
        v9 = (__int64 *)*v8;
        if ( *(__int64 **)(*v8 + 8) == v8 )
          continue;
      }
LABEL_17:
      __fastfail(3u);
      *v7 = v9;
      v9[1] = (__int64)v7;
      ++*(_DWORD *)(a1 + 204);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
        __fastfail(0xEu);
      *v8 = 0LL;
      ExQueueWorkItemToPartition(v8, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v3;
    }
    while ( v3 < a2 );
  }
  v10 = 0;
  if ( a3 )
  {
    v11 = (__int64 **)(a1 + 288);
    do
    {
      v12 = *v11;
      if ( *v11 == (__int64 *)v11 )
        break;
      if ( (__int64 **)v12[1] != v11 )
        goto LABEL_17;
      v13 = (__int64 *)*v12;
      if ( *(__int64 **)(*v12 + 8) != v12 )
        goto LABEL_17;
      *v11 = v13;
      v13[1] = (__int64)v11;
      ++*(_DWORD *)(a1 + 304);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 904)) <= 1 )
        __fastfail(0xEu);
      *v12 = 0LL;
      ExQueueWorkItemToPartition(v12, 0, 0xFFFFFFFF, *(_QWORD *)(a1 + 8));
      ++v10;
    }
    while ( v10 < a3 );
  }
}
