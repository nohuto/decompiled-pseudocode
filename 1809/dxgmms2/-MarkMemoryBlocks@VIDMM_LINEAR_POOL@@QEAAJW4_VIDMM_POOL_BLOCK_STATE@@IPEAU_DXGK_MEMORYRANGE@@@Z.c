/*
 * XREFs of ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C5F50
 * Callers:
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00BC240 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 * Callees:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00C5000 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkMemoryBlocks(
        VIDMM_LINEAR_POOL *a1,
        unsigned __int8 a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // edi
  union _LARGE_INTEGER v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BYTE *v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r8
  _QWORD *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // r8
  _QWORD *v23; // rax
  void *v24; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v24 = 0LL;
    v9 = *(union _LARGE_INTEGER *)(a4 + 16LL * v4);
    if ( v9.QuadPart < *((_QWORD *)a1 + 1) )
      break;
LABEL_15:
    if ( ++v4 >= a3 )
      return 0LL;
  }
  v10 = VIDMM_LINEAR_POOL::AllocateAt(a1, v9, *(_QWORD *)(a4 + 16LL * v4 + 8), 0LL, &v24);
  v13 = v10;
  if ( v10 >= 0 )
  {
    v14 = v24;
    if ( a2 == 6 )
    {
      v15 = (char *)v24 + 24;
      v19 = *((_QWORD *)v24 + 3);
      if ( *(void **)(v19 + 8) != (char *)v24 + 24 || (v20 = (_QWORD *)*((_QWORD *)v24 + 4), (_QWORD *)*v20 != v15) )
LABEL_17:
        __fastfail(3u);
      *v20 = v19;
      *(_QWORD *)(v19 + 8) = v20;
      v18 = (_QWORD *)((char *)a1 + 120);
    }
    else
    {
      if ( a2 != 7 )
      {
LABEL_14:
        v14[56] = a2;
        goto LABEL_15;
      }
      v15 = (char *)v24 + 24;
      v16 = *((_QWORD *)v24 + 3);
      if ( *(void **)(v16 + 8) != (char *)v24 + 24 )
        goto LABEL_17;
      v17 = (_QWORD *)*((_QWORD *)v24 + 4);
      if ( (_QWORD *)*v17 != v15 )
        goto LABEL_17;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v18 = (_QWORD *)((char *)a1 + 136);
    }
    v21 = (_QWORD *)v18[1];
    if ( (_QWORD *)*v21 != v18 )
      goto LABEL_17;
    *v15 = v18;
    v15[1] = v21;
    *v21 = v15;
    v18[1] = v15;
    goto LABEL_14;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
  v23[3] = a2;
  v23[4] = *(_QWORD *)(a4 + 16LL * v4);
  v23[5] = *(_QWORD *)(a4 + 16LL * v4 + 8);
  v23[6] = v13;
  WdLogEvent5_WdAssertion(v23);
  return (unsigned int)v13;
}
