/*
 * XREFs of ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C005EE64
 * Callers:
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D354 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005DED0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00AB1C8 (-Defragment@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AE4FC (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C006BDE4 (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 */

void __fastcall VIDMM_GLOBAL::StartPreparation(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  unsigned int v6; // edi
  unsigned int v9; // esi
  _QWORD *v11; // rax

  v5 = *(int *)(a1 + 8);
  v6 = 0;
  v9 = a2;
  if ( (_DWORD)v5 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v11[3] = 270LL;
    v11[4] = 64LL;
    v11[5] = a1;
    v11[6] = v5;
    v11[7] = a5;
    WdLogEvent5_WdCriticalError(v11);
  }
  ++*(_QWORD *)(a1 + 4600);
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 7016) = a3;
  *(_QWORD *)(a1 + 7024) = a4;
  if ( v9 == -1 )
  {
    if ( *(_DWORD *)(a1 + 6992) )
    {
      do
        VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, v6++);
      while ( v6 < *(_DWORD *)(a1 + 6992) );
    }
  }
  else
  {
    VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter((VIDMM_GLOBAL *)a1, v9);
  }
}
