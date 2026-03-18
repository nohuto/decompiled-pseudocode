/*
 * XREFs of ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0060C04
 * Callers:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060748 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0060874 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006C900 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C13E8 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0060D28 (-DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z.c)
 *     ?MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z @ 0x1C0060E00 (-MarkBlockForEviction@VIDMM_LINEAR_POOL@@QEAAXPEAXPEA_K1@Z.c)
 */

void __fastcall VIDMM_SEGMENT::MarkResourcesForEviction(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_POOL_BLOCK **a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  struct VIDMM_PARTITION **v8; // rdx
  unsigned __int64 v9; // r8
  struct _VIDMM_POOL_BLOCK *v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  VIDMM_SEGMENT *v13; // rax
  struct _VIDMM_POOL_BLOCK *v14; // rdx
  struct _VIDMM_POOL_BLOCK *v15; // rcx
  VIDMM_SEGMENT **v16; // rdx
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
    v10 = a2[62];
    if ( !v10 || _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 11, 0xFFFFFFFF) == 1 )
    {
      v11 = *(_QWORD *)a2[61];
      v12 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 56), -(__int64)a2[2]);
      if ( v12 < (unsigned __int64)a2[2] )
      {
        v17 = WdLogNewEntry5_WdAssertion(v11, v12);
        *(_QWORD *)(v17 + 24) = 2191LL;
        WdLogEvent5_WdAssertion(v17);
      }
    }
  }
  v13 = (VIDMM_SEGMENT *)(a2 + 48);
  v14 = a2[48];
  if ( *((struct _VIDMM_POOL_BLOCK ***)v14 + 1) != a2 + 48
    || (v15 = a2[49], *(VIDMM_SEGMENT **)v15 != v13)
    || (*(_QWORD *)v15 = v14,
        *((_QWORD *)v14 + 1) = v15,
        v16 = (VIDMM_SEGMENT **)this[23],
        *v16 != (VIDMM_SEGMENT *)(this + 22)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v13 = this + 22;
  a2[49] = (struct _VIDMM_POOL_BLOCK *)v16;
  *v16 = v13;
  this[23] = v13;
}
