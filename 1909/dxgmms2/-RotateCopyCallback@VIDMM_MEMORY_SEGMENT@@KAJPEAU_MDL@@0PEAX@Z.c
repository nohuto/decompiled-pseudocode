/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C00BE220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C005B520 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083134 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rbx
  unsigned __int64 ByteCount; // r14
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // rax
  struct _VIDMM_GLOBAL_ALLOC *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1560LL * (*(_DWORD *)(*(_QWORD *)a3 + 76LL) & 0x3F) + *(_QWORD *)(v5 + 40184) + 436) & 4) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending(*(VIDMM_GLOBAL **)(*((_QWORD *)a3 + 1) + 8LL)) )
  {
    *(_QWORD *)(v8 + 32) += ByteCount;
  }
  else
  {
    if ( *(_BYTE *)(v5 + 40139) )
    {
      v9 = DpiMapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 192LL), a1, 0LL, 7LL, a1);
      v12 = v9;
      if ( v9 < 0 )
      {
        v13 = WdLogNewEntry5_WdWarning(v11, v10);
        *(_QWORD *)(v13 + 24) = *(_QWORD *)a3;
        *(_QWORD *)(v13 + 32) = v12;
        WdLogEvent5_WdWarning(v13);
        return (unsigned int)v12;
      }
    }
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((_QWORD *)a3 + 4),
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      0LL,
      0LL,
      a1,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v14 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v14);
    if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v5) )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 528LL);
      if ( (*(_BYTE *)(v16 + 2428) & 4) != 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15);
        v17[5] = 0LL;
        v17[7] = 0LL;
        v17[3] = 270LL;
        v17[4] = 4LL;
        v17[6] = 10LL;
        WdLogEvent5_WdCriticalError(v17);
      }
    }
    if ( *(_BYTE *)(v5 + 40139) )
      DpiUnmapIommuIdentityRange(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 192LL), a1, 0LL, 7LL, a1);
  }
  return 0LL;
}
