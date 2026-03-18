/*
 * XREFs of ?FreeMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C88BC
 * Callers:
 *     ?ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C0F54 (-ProcessUnblockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANG.c)
 * Callees:
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007E6C0 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FreeMemoryBlocks(VIDMM_LINEAR_POOL *a1, char a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx

  if ( a2 != 7 )
    return 3221225485LL;
  v6 = (_QWORD *)((char *)a1 + 136);
  v7 = (_QWORD *)*((_QWORD *)a1 + 17);
  do
  {
    if ( v7 == v6 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
      v9[3] = 275LL;
      v9[4] = 23LL;
      v9[5] = 7LL;
      v9[6] = *a4;
      v9[7] = a4[1];
      WdLogEvent5_WdCriticalError(v9);
      return 3221225485LL;
    }
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
  }
  while ( *((_BYTE *)v8 + 56) != 7 || *v8 != *a4 );
  if ( v8[1] != a4[1] )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v11[3] = 275LL;
    v11[4] = 23LL;
    v11[5] = v8[1];
    v12 = a4[1];
    v11[7] = 0LL;
    v11[6] = v12;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_LINEAR_POOL::Free(a1, (struct _VIDMM_POOL_BLOCK *)v8);
  return 0LL;
}
