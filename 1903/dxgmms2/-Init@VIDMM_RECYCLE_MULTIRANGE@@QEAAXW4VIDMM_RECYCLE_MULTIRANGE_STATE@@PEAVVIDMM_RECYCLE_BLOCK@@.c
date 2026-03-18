/*
 * XREFs of ?Init@VIDMM_RECYCLE_MULTIRANGE@@QEAAXW4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0068410
 * Callers:
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0067010 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00670DC (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0067F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068560 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Init(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // edi
  __int64 v9; // rax
  CCHAR LeastSignificantBit; // al
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx

  v7 = a2;
  v9 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v9 + 24) = a1;
  WdLogEvent5_WdEvent(v9);
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_DWORD *)(a1 + 216) = v7;
  *(_WORD *)(a1 + 128) = 0;
  ++*(_QWORD *)(a3 + 8);
  LeastSignificantBit = RtlFindLeastSignificantBit(*(_QWORD *)(a1 + 32));
  if ( LeastSignificantBit < 0 )
    result = 0LL;
  else
    result = 1LL << LeastSignificantBit;
  *(_QWORD *)(a1 + 56) = result;
  v12 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 88) = 3LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_BYTE *)(a1 + 130) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_WORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  v13 = *(_QWORD *)(v12 + 136);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 24) + 144LL * *(_QWORD *)(v13 + 32);
    *(_DWORD *)v14 = 0;
    *(_QWORD *)(v14 + 8) = a1;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v14 + 16), 0LL);
    ++*(_QWORD *)(*(_QWORD *)(v12 + 136) + 32LL);
    v15 = *(_QWORD *)(v12 + 136);
    result = *(_QWORD *)(v15 + 48);
    if ( *(_QWORD *)(v15 + 32) == result )
    {
      *(_QWORD *)(v15 + 32) = 0LL;
      result = *(_QWORD *)(v12 + 136);
      *(_BYTE *)(result + 40) = 1;
    }
  }
  return result;
}
