/*
 * XREFs of ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0059D84 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A8B8 (-ShiftTreeMembershipOnDebouncedStateChange@VIDMM_RECYCLE_HEAP@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C005B6B8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C005C370 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005C4E0 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005C8C0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B7808 (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B78DC (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B7950 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 * Callees:
 *     ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C007C9E4 (-VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
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
  __int64 result; // rax
  struct _RTL_BALANCED_NODE *v14; // rax
  _QWORD *v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  char v17; // [rsp+30h] [rbp-18h]

  v4 = (int)a2;
  v6 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v6 + 24) = a3;
  *(_QWORD *)(v6 + 32) = v4;
  WdLogEvent5_WdEvent(v6);
  v9 = *(_QWORD *)(a3 + 56);
  v16[0] = *(_QWORD *)(a3 + 40) - *(_QWORD *)(a3 + 32);
  v16[1] = v9;
  v17 = 0;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v10 = a1 + 7;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[7];
      if ( v11 )
      {
        while ( 1 )
        {
          while ( (int)VidMmCompareForInsertAlignedRange(v16, v11) >= 0 )
          {
            if ( !v11->Children[1] )
              goto LABEL_15;
            v11 = v11->Children[1];
          }
          if ( !v11->Children[0] )
            break;
          v11 = v11->Children[0];
        }
LABEL_18:
        LOBYTE(v8) = 0;
      }
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)(v4 - 1), v7);
        v15[3] = 270LL;
        v15[4] = 52LL;
        v15[5] = 15LL;
        v15[6] = v4;
        v15[7] = 0LL;
        result = WdLogEvent5_WdCriticalError(v15);
        goto LABEL_17;
      }
      v10 = a1 + 8;
      LOBYTE(v8) = 0;
      v11 = (struct _RTL_BALANCED_NODE *)a1[8];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( (int)VidMmCompareForInsertAlignedRange(v16, v11) >= 0 )
          {
            v12 = v11->Children[1];
            if ( !v12 )
              goto LABEL_15;
          }
          else
          {
            v12 = v11->Children[0];
            if ( !v11->Children[0] )
              goto LABEL_18;
          }
          v11 = v12;
        }
      }
    }
  }
  else
  {
    v10 = a1 + 6;
    LOBYTE(v8) = 0;
    v11 = (struct _RTL_BALANCED_NODE *)a1[6];
    if ( v11 )
    {
      while ( 1 )
      {
        if ( (int)VidMmCompareForInsertAlignedRange(v16, v11) >= 0 )
        {
          v14 = v11->Children[1];
          if ( !v14 )
          {
LABEL_15:
            LOBYTE(v8) = 1;
            break;
          }
        }
        else
        {
          v14 = v11->Children[0];
          if ( !v11->Children[0] )
            goto LABEL_18;
        }
        v11 = v14;
      }
    }
  }
  result = RtlAvlInsertNodeEx(v10, v11, v8, a3);
LABEL_17:
  *(_DWORD *)(a3 + 88) = v4;
  return result;
}
