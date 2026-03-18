/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0060D28
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C005AFE8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0060C04 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C007E590 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = *((_QWORD *)this + 27);
  if ( v3 < v3 - a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 290LL;
    WdLogEvent5_WdAssertion(v13);
    v3 = *((_QWORD *)this + 27);
  }
  v7 = *((unsigned int *)this + 95);
  v8 = *((_QWORD *)this + 1);
  v9 = *((int *)this + 119);
  *((_QWORD *)this + 27) = v3 - a3;
  v10 = *(_QWORD *)(v8 + 40184);
  if ( (*(_BYTE *)(v10 + 24 * (v9 + 65 * v7) + 512) & 1) != 0 )
  {
    v9 = 368LL * *(unsigned int *)(*(_QWORD *)(v8 + 24) + 208LL);
    v11 = *(_QWORD *)(v9 + *((_QWORD *)a2 + 5) + 24) + 328 * v7;
  }
  else
  {
    v11 = 328 * v9 + 544 + v10 + 1560 * v7;
  }
  v12 = *(_QWORD *)(v11 + 112);
  if ( v12 < v12 - a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12, v9);
    *(_QWORD *)(v14 + 24) = 297LL;
    WdLogEvent5_WdAssertion(v14);
    v12 = *(_QWORD *)(v11 + 112);
  }
  *(_QWORD *)(v11 + 112) = v12 - a3;
}
