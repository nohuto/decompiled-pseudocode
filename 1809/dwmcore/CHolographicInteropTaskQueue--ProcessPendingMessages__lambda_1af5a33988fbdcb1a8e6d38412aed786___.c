/*
 * XREFs of CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___ @ 0x18020A25C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x18020B124 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x18020B690 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x18020B6F8 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x18020BBE0 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z @ 0x180211A38 (-ClearMessage@CHolographicInteropTaskQueue@@AEAAXPEAUMESSAGE@1@@Z.c)
 *     ?ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z @ 0x180211C84 (-ReverseList@CHolographicInteropTaskQueue@@AEAAPEAU_SLIST_ENTRY@@PEAU2@@Z.c)
 */

PSLIST_ENTRY __fastcall CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_1af5a33988fbdcb1a8e6d38412aed786___(
        __int64 a1,
        __int64 *a2)
{
  struct _SLIST_ENTRY *v4; // rax
  CHolographicInteropTaskQueue *v5; // rcx
  PSLIST_ENTRY result; // rax
  CHolographicInteropTaskQueue *v7; // rcx
  _QWORD *p_Next; // rsi
  union _SLIST_HEADER *v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp+8h]

  wil::details::ResetEvent(*(wil::details **)(a1 + 48), a2);
  v4 = InterlockedFlushSList((PSLIST_HEADER)(a1 + 16));
  result = CHolographicInteropTaskQueue::ReverseList(v5, v4);
  p_Next = &result->Next;
  if ( result )
  {
    v9 = (union _SLIST_HEADER *)(a1 + 32);
    do
    {
      v10 = *a2;
      v11 = p_Next;
      p_Next = (_QWORD *)*p_Next;
      if ( *((_DWORD *)v11 + 2) == 19 )
      {
        v7 = (CHolographicInteropTaskQueue *)*((unsigned int *)v11 + 8);
        LODWORD(v12) = *((_DWORD *)v11 + 8);
        HIDWORD(v12) = *((_DWORD *)v11 + 6);
        if ( __PAIR64__(HIDWORD(v12), (unsigned int)v7) != *(_QWORD *)(v10 + 60) )
        {
          CHolographicManager::ReleaseInteropRenderTarget((CHolographicManager *)v10);
          CHolographicManager::ReleaseResourcesForDisplayChange((CHolographicManager *)v10);
          *(_QWORD *)(v10 + 60) = v12;
          if ( (int)CHolographicManager::EnsureInteropRenderTarget((CHolographicManager *)v10) < 0 )
            *(_QWORD *)(v10 + 60) = 0LL;
        }
      }
      CHolographicInteropTaskQueue::ClearMessage(v7, (struct MESSAGE *)v11);
      result = InterlockedPushEntrySList(v9, (PSLIST_ENTRY)v11);
    }
    while ( p_Next );
  }
  return result;
}
