/*
 * XREFs of ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00635C4
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0063528 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pq @ 0x1C00261CC (McTemplateK0pq.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005B938 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00641C0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C00B8DE8 (-RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitAllocationList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC **a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  unsigned int v5; // ebp
  struct VIDMM_ALLOC **v6; // r12
  struct VIDMM_ALLOC **i; // rdi
  struct VIDMM_ALLOC *v10; // rbx
  int v11; // eax
  const GUID *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[10]; // [rsp+30h] [rbp-68h] BYREF

  v5 = 0;
  v6 = &a3[a4];
  for ( i = a3; i != v6; ++i )
  {
    v10 = *i;
    if ( *((int *)*i + 41) > 0
      || (*((_DWORD *)v10 + 7) & 3) != 2
      || *((_DWORD *)this + 2) == 206 && *((struct VIDMM_ALLOC **)this + 878) == v10
      || VIDMM_GLOBAL::IsPagingOperationPending(this, **(struct _VIDMM_GLOBAL_ALLOC ***)v10, 1) )
    {
      memset(v17, 0, sizeof(v17));
      v17[4] = 0LL;
      LODWORD(v17[0]) = 206;
      v17[2] = v10;
      v11 = VIDMM_GLOBAL::QueueDeferredCommand(
              this,
              a2,
              (struct _VIDMM_DEFERRED_COMMAND *)v17,
              dword_1C004E338 == 0,
              a5);
      v13 = *((unsigned int *)v10 + 7);
      v5 = v11;
      if ( (v13 & 0x20) != 0 && v11 == 259 )
      {
        *((_QWORD *)v10 + 30) = a2;
        v13 = *a5;
        *((_QWORD *)v10 + 33) = *a5;
      }
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      LODWORD(v16) = *((_DWORD *)v10 + 38);
      McTemplateK0pq(v13, &EventVidMmMakeResident, v12, v10, v16);
    }
    if ( *((_QWORD *)this + 5115) )
    {
      if ( a5 )
        v15 = *a5;
      else
        v15 = 0LL;
      VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(this, a2, v10, v5 == 259, v15);
    }
  }
  return v5;
}
