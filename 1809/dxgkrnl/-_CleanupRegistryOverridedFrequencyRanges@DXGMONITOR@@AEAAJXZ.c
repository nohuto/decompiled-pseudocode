/*
 * XREFs of ?_CleanupRegistryOverridedFrequencyRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133AE8
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0133988 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupRegistryOverridedFrequencyRanges(DXGMONITOR *this)
{
  unsigned int v2; // ebp
  DXGMONITOR **v4; // rbx
  DXGMONITOR *v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rsi
  _QWORD *v11; // r8

  v2 = -1073741275;
  if ( *((_DWORD *)this + 64) )
  {
    v4 = (DXGMONITOR **)((char *)this + 264);
    v5 = (DXGMONITOR *)*((_QWORD *)this + 33);
    if ( v5 != (DXGMONITOR *)((char *)this + 264)
      || (v6 = WdLogNewEntry5_WdAssertion(this), WdLogEvent5_WdAssertion(v6), v5 = *v4, *v4 != (DXGMONITOR *)v4) )
    {
      v7 = (_QWORD *)((char *)v5 - 48);
      if ( !v5 )
        v7 = 0LL;
      if ( v7 )
      {
        do
        {
          v8 = v7 + 6;
          v9 = v7[6];
          if ( (DXGMONITOR **)v9 == v4 )
          {
            v10 = 0LL;
          }
          else
          {
            v10 = (_QWORD *)(v9 - 48);
            if ( !v9 )
              v10 = 0LL;
          }
          if ( *(_DWORD *)v7 == 4 )
          {
            if ( *(_QWORD **)(v9 + 8) != v8 || (v11 = (_QWORD *)v7[7], (_QWORD *)*v11 != v8) )
              __fastfail(3u);
            *v11 = v9;
            *(_QWORD *)(v9 + 8) = v11;
            operator delete(v7);
            --*((_DWORD *)this + 64);
            v2 = 0;
            --*((_DWORD *)this + 33);
          }
          v7 = v10;
        }
        while ( v10 );
      }
    }
  }
  return v2;
}
