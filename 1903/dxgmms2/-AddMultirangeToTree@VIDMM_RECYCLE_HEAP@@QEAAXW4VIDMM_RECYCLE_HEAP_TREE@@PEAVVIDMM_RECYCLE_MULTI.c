/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068A10
 * Callers:
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0065188 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00670DC (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0067DEC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0067F60 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068560 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00802B8 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BAA98 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BAB6C (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BABE0 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z @ 0x1C00BAD38 (-CombineFreedRanges@VIDMM_RECYCLE_BLOCK@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@00@Z.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007E460 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP::AddMultirangeToTree(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rsi
  struct _RTL_BALANCED_NODE *v11; // rbx
  struct _RTL_BALANCED_NODE *v12; // rax
  struct _RTL_BALANCED_NODE *v13; // rax
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v15; // rax
  _QWORD *v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  char v18; // [rsp+30h] [rbp-18h]

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v9 = *(_QWORD *)(a3 + 56);
  v17[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v17[1] = v9;
  v18 = 0;
  switch ( (_DWORD)v4 )
  {
    case 0:
      v10 = a1 + 6;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[6];
      if ( !v11 )
        break;
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v17, v11) < 0 )
        {
          v15 = v11->Children[0];
          if ( !v11->Children[0] )
          {
LABEL_24:
            LOBYTE(v8) = 0;
            goto LABEL_15;
          }
        }
        else
        {
          v15 = v11->Children[1];
          if ( !v15 )
          {
LABEL_14:
            LOBYTE(v8) = 1;
            goto LABEL_15;
          }
        }
        v11 = v15;
      }
    case 1:
      v10 = a1 + 7;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v17, v11) < 0 )
          {
            v12 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_24;
          }
          else
          {
            v12 = v11->Children[1];
            if ( !v12 )
              goto LABEL_14;
          }
          v11 = v12;
        }
      }
      break;
    case 2:
      v10 = a1 + 8;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v17, v11) < 0 )
          {
            v13 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_24;
          }
          else
          {
            v13 = v11->Children[1];
            if ( !v13 )
              goto LABEL_14;
          }
          v11 = v13;
        }
      }
      break;
    default:
      v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7);
      v16[3] = 270LL;
      v16[4] = 52LL;
      v16[5] = 15LL;
      v16[6] = v4;
      v16[7] = 0LL;
      result = WdLogEvent5_WdCriticalError(v16);
      goto LABEL_16;
  }
LABEL_15:
  result = RtlAvlInsertNodeEx(v10, v11, v8, a3);
LABEL_16:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
