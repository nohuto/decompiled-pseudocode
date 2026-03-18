/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8B5C
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C007643C (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00A8AD0 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C00609D8 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C00663F0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070330 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00A89EC (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // r15
  int v4; // r12d
  __int64 v7; // rbx
  struct _VIDSCH_SYNC_OBJECT **v8; // rdi
  int v9; // eax
  _QWORD v10[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+B8h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v12; // [rsp+C0h] [rbp+40h] BYREF

  v2 = *(__int64 **)a2;
  v3 = 0LL;
  v4 = 0;
  v11 = 0LL;
  v7 = *v2;
  v8 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) + 176LL * (*(_DWORD *)(*v2 + 76) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 8LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(this, (DXGFASTMUTEX **)v7, 0LL, 0);
  if ( *(_QWORD *)(v7 + 136) )
  {
    memset(v10, 0, sizeof(v10));
    v10[1] = *((_QWORD *)a2 + 1);
    LODWORD(v10[0]) = 211;
    v10[4] = v7;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)v8,
           (struct _VIDMM_DEFERRED_COMMAND *)v10,
           0,
           &v11);
    v3 = v11;
    v4 = v9;
  }
  else
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 320));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 320));
  }
  if ( v4 == 259 )
  {
    v12 = v8[11];
    v11 = v3;
    VIDMM_GLOBAL::WaitForFences(this, &v12, (char *)&v11, 1u, 0LL);
  }
}
