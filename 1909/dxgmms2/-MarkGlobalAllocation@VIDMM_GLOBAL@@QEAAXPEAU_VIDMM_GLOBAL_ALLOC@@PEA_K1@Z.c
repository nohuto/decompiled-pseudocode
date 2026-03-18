/*
 * XREFs of ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C005EB18
 * Callers:
 *     ?OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A008 (-OfferAllocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005DAE0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAC44 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00C2028 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B50 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002BD0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0060484 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 */

void __fastcall VIDMM_GLOBAL::MarkGlobalAllocation(
        VIDMM_GLOBAL *this,
        DXGFASTMUTEX **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rcx
  DXGFASTMUTEX *v8; // r15
  DXGFASTMUTEX *v9; // rdi
  DXGFASTMUTEX *v10; // rsi
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  struct VIDMM_ALLOC *v13; // rbp

  DXGFASTMUTEX::Acquire(a2[40]);
  v8 = (DXGFASTMUTEX *)(a2 + 37);
  v9 = a2[37];
  while ( v9 != v8 )
  {
    v10 = v9;
    v9 = *(DXGFASTMUTEX **)v9;
    v11 = (_QWORD **)((char *)v10 - 16);
    v12 = *v11;
    if ( *v11 != v11 )
    {
      do
      {
        v13 = (struct VIDMM_ALLOC *)(v12 - 5);
        v12 = (_QWORD *)*v12;
        if ( (*((_BYTE *)v13 + 28) & 3) == 2 )
        {
          if ( g_IsInternalReleaseOrDbg )
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v7) + 24) = v13;
          VIDMM_GLOBAL::NotifyAllocationEviction(this, v13, 0, a3, a4);
        }
      }
      while ( v12 != v11 );
      v8 = (DXGFASTMUTEX *)(a2 + 37);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
}
