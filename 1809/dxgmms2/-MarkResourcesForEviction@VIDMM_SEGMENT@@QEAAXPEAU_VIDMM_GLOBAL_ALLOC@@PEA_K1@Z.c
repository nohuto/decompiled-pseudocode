/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0076034
 * Callers:
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0072534 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00728D0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0076CC0 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00BE494 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0076158 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0076230 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct VIDMM_PARTITION **v8; // rdx
  unsigned __int64 v9; // r8
  VIDMM_SEGMENT *v10; // rax
  struct _VIDMM_POOL_BLOCK *v11; // rdx
  struct _VIDMM_POOL_BLOCK *v12; // rcx
  VIDMM_SEGMENT **v13; // rdx
  struct _VIDMM_POOL_BLOCK *v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::MarkBlockForEviction(this[19], a2[19], a3, a4);
  v8 = (struct VIDMM_PARTITION **)a2[61];
  v9 = (unsigned __int64)a2[2];
  *((_DWORD *)a2 + 32) = 1;
  VIDMM_SEGMENT::DecrementBytesCommitted((VIDMM_SEGMENT *)this, *v8, v9);
  --*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v14 = a2[62];
    if ( !v14 || _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 11, 0xFFFFFFFF) == 1 )
    {
      v15 = *(_QWORD *)a2[61];
      v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 48), -(__int64)a2[2]);
      if ( v16 < (unsigned __int64)a2[2] )
      {
        v17 = WdLogNewEntry5_WdAssertion(v15, v16);
        *(_QWORD *)(v17 + 24) = 2176LL;
        WdLogEvent5_WdAssertion(v17);
      }
    }
  }
  v10 = (VIDMM_SEGMENT *)(a2 + 48);
  v11 = a2[48];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v11 + 1) != a2 + 48
    || (v12 = a2[49], *(VIDMM_SEGMENT **)v12 != v10)
    || (*(_QWORD *)v12 = v11,
        *((_QWORD *)v11 + 1) = v12,
        v13 = (VIDMM_SEGMENT **)this[23],
        *v13 != (VIDMM_SEGMENT *)(this + 22)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v10 = this + 22;
  a2[49] = (struct _VIDMM_POOL_BLOCK *)v13;
  *v13 = v10;
  this[23] = v10;
}
