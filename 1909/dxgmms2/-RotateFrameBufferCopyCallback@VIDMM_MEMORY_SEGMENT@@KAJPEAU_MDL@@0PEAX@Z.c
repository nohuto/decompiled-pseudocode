/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0082DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083134 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rsi
  unsigned __int64 ByteCount; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(*(_QWORD *)a3 + 76LL) & 0x3F) + *(_QWORD *)(v5 + 40184) + 436) & 4) == 0 )
    return 3221225473LL;
  if ( *(_BYTE *)(v5 + 40139)
    && (v9 = DpiMapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 192LL), a2, 0LL, 7LL, a2), v12 = v9, v9 < 0) )
  {
    v13 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)a3;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)v12;
  }
  else
  {
    ByteCount = a2->ByteCount;
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((_QWORD *)a3 + 4),
      0LL,
      0LL,
      a2,
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v7 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v7);
    if ( *(_BYTE *)(v5 + 40139) )
      DpiUnmapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 192LL), a2, 0LL, 7LL, a2);
    return 0LL;
  }
}
