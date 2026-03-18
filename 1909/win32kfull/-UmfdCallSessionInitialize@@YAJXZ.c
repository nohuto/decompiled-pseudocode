/*
 * XREFs of ?UmfdCallSessionInitialize@@YAJXZ @ 0x1C0142494
 * Callers:
 *     UmfdSessionInitialize @ 0x1C01423B0 (UmfdSessionInitialize.c)
 * Callees:
 *     ?Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z @ 0x1C0114104 (-Destroy@CMultipleConsumerWorkQueue@@SAXQEAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SAXQEAV1@@Z @ 0x1C011419C (-Destroy@CWorkItemQueue@@SAXQEAV1@@Z.c)
 *     ?Create@CEventPool@@SAQEAV1@XZ @ 0x1C01425A8 (-Create@CEventPool@@SAQEAV1@XZ.c)
 *     ?Create@CManualResetEvent@@SAQEAV1@XZ @ 0x1C0142658 (-Create@CManualResetEvent@@SAQEAV1@XZ.c)
 */

__int64 UmfdCallSessionInitialize(void)
{
  int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // r14
  void **v3; // rsi
  union _SLIST_HEADER *v4; // rax
  union _SLIST_HEADER *v5; // rbx
  struct CManualResetEvent *v6; // rax
  struct CEventPool *v7; // rax
  __int64 v9; // rsi
  void **v10; // rcx

  v0 = 0;
  v1 = 0LL;
  v2 = 0LL;
  while ( v0 >= 0 )
  {
    v3 = (void **)EngAllocMem(0, 0x10u, 0x676D6466u);
    if ( !v3 )
      goto LABEL_15;
    v4 = (union _SLIST_HEADER *)EngAllocMem(0, 0x20u, 0x676D6466u);
    v5 = v4;
    if ( !v4 )
      goto LABEL_12;
    InitializeSListHead(v4 + 1);
    LOBYTE(v5->Alignment) = 0;
    v6 = CManualResetEvent::Create();
    v5->Region = (ULONGLONG)v6;
    if ( !v6 )
    {
      CWorkItemQueue::Destroy(v5);
LABEL_12:
      v5 = 0LL;
    }
    *v3 = v5;
    if ( !v5 || (v7 = CEventPool::Create(), (v3[1] = v7) == 0LL) )
    {
      CMultipleConsumerWorkQueue::Destroy(v3);
LABEL_15:
      v0 = -1073741801;
      goto LABEL_9;
    }
    g_pUmfdServerPort[v2] = v3;
    v0 = 0;
    g_pUmfdClientPort[v2] = v3;
LABEL_9:
    v1 = (unsigned int)(v1 + 1);
    ++v2;
    if ( (unsigned int)v1 >= 4 )
    {
      if ( v0 >= 0 )
        return (unsigned int)v0;
      break;
    }
  }
  if ( (_DWORD)v1 )
  {
    v9 = 0LL;
    do
    {
      v10 = (void **)g_pUmfdServerPort[v9];
      g_pUmfdClientPort[v9] = 0LL;
      CMultipleConsumerWorkQueue::Destroy(v10);
      g_pUmfdServerPort[v9++] = 0LL;
      --v1;
    }
    while ( v1 );
  }
  return (unsigned int)v0;
}
