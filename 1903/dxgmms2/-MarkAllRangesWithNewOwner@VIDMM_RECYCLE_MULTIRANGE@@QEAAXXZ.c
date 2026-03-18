/*
 * XREFs of ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0068B80
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C00670DC (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C0067DEC (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C0068560 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(VIDMM_RECYCLE_MULTIRANGE *this, __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = (_QWORD *)*((_QWORD *)this + 8);
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 54);
    if ( v4 )
    {
      v6 = (unsigned int)(v4 - 1);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 1 )
        {
          v2[19] = this;
        }
        else
        {
          v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2);
          v7[3] = 270LL;
          v7[4] = 52LL;
          v7[5] = 10LL;
          v7[6] = 0LL;
          v7[7] = 0LL;
          WdLogEvent5_WdCriticalError(v7);
        }
      }
      else
      {
        v2[18] = this;
      }
    }
    else
    {
      v2[17] = this;
    }
    if ( v2 == *((_QWORD **)this + 9) )
      break;
    a2 = v2[15];
    v5 = v2[9];
    v2 = 0LL;
    if ( a2 != v5 + 72 )
      v2 = (_QWORD *)(a2 - 120);
  }
}
