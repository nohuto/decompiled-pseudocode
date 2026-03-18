/*
 * XREFs of ?AccumulateZeroingState@VIDMM_RECYCLE_RANGE@@QEAAXPEAW4VIDMM_RECYCLE_RANGE_ZEROING_STATE@@@Z @ 0x1C0069844
 * Callers:
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0069320 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_RECYCLE_RANGE::AccumulateZeroingState(
        VIDMM_RECYCLE_RANGE *this,
        enum VIDMM_RECYCLE_RANGE_ZEROING_STATE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax

  v3 = *((unsigned int *)this + 20);
  if ( (_DWORD)v3 )
  {
    v3 = (unsigned int)(v3 - 1);
    if ( (_DWORD)v3 )
    {
      v4 = (unsigned int)(v3 - 1);
      if ( (_DWORD)v4 )
      {
        if ( (_DWORD)v4 == 1 )
        {
          if ( dword_1C004E360 && !*(_DWORD *)a2 && g_IsInternalRelease )
          {
            v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v4);
            v5[3] = 270LL;
            v5[4] = 9LL;
            v5[5] = 0LL;
            v5[6] = 0LL;
            v5[7] = 0LL;
            WdLogEvent5_WdCriticalError(v5);
          }
          if ( *(_DWORD *)a2 == 1 || *(_DWORD *)a2 == 2 )
            *(_DWORD *)a2 = 3;
        }
      }
      else
      {
        if ( dword_1C004E360 && !*(_DWORD *)a2 && g_IsInternalRelease )
        {
          v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v4);
          v6[3] = 270LL;
          v6[4] = 9LL;
          v6[5] = 0LL;
          v6[6] = 0LL;
          v6[7] = 0LL;
          WdLogEvent5_WdCriticalError(v6);
        }
        if ( *(_DWORD *)a2 == 1 )
          *(_DWORD *)a2 = 2;
      }
      return;
    }
    if ( !dword_1C004E360 || *(_DWORD *)a2 )
      return;
  }
  else if ( !dword_1C004E360 || !*(_DWORD *)a2 )
  {
    return;
  }
  if ( g_IsInternalRelease )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v3);
    v7[3] = 270LL;
    v7[4] = 9LL;
    v7[5] = 0LL;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
}
