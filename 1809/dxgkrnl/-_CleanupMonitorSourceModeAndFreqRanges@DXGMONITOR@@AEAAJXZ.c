/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0133B9C
 * Callers:
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C0133988 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C029A63C (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C029CE54 (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  DXGMONITOR **v3; // rdi
  DXGMONITOR *v4; // rbx
  __int64 v5; // rax
  DXGMONITOR *v6; // rax
  DXGMONITOR **v7; // rdi
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rax
  DXGMONITOR *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  DXGMONITOR **v15; // rdi
  DXGMONITOR *v16; // rax
  __int64 v17; // rax
  DXGMONITOR **v18; // rcx
  DXGMONITOR *v19; // rdx
  DXGMONITOR **v20; // rax
  DXGMONITOR **v21; // rsi
  DXGMONITOR *v22; // r8

  v3 = (DXGMONITOR **)((char *)this + 240);
  v4 = this;
  if ( *v3 != (DXGMONITOR *)v3 )
  {
    v5 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdWarning(v5);
    while ( 1 )
    {
      this = *v3;
      if ( *v3 == (DXGMONITOR *)v3 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v3
        || (v6 = *(DXGMONITOR **)this, *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this) )
      {
LABEL_20:
        __fastfail(3u);
      }
      *v3 = v6;
      *((_QWORD *)v6 + 1) = v3;
      operator delete((char *)this - 96);
    }
  }
  v7 = (DXGMONITOR **)((char *)v4 + 280);
  if ( *v7 != (DXGMONITOR *)v7 )
  {
    v11 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v11 + 24) = v4;
    WdLogEvent5_WdWarning(v11);
    while ( 1 )
    {
      this = *v7;
      if ( *v7 == (DXGMONITOR *)v7 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v7 )
        goto LABEL_20;
      v12 = *(DXGMONITOR **)this;
      if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_20;
      *v7 = v12;
      *((_QWORD *)v12 + 1) = v7;
      operator delete((char *)this - 48);
    }
  }
  if ( *((_DWORD *)v4 + 52) )
  {
    v8 = (_QWORD *)((char *)v4 + 216);
    if ( (_QWORD *)*v8 == v8 )
    {
      v13 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v13);
    }
    while ( 1 )
    {
      this = (DXGMONITOR *)*v8;
      if ( (_QWORD *)*v8 == v8 )
        break;
      if ( *((_QWORD **)this + 1) != v8 )
        goto LABEL_20;
      v9 = *(_QWORD *)this;
      if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_20;
      *v8 = v9;
      *(_QWORD *)(v9 + 8) = v8;
      operator delete((char *)this - 96);
    }
    *((_QWORD *)v4 + 29) = 0LL;
    *((_DWORD *)v4 + 52) = 0;
    *((_DWORD *)v4 + 53) = 1024;
  }
  if ( *((DXGMONITOR **)v4 + 27) != (DXGMONITOR *)((char *)v4 + 216) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)v4 + 64) )
  {
    v15 = (DXGMONITOR **)((char *)v4 + 264);
    v16 = (DXGMONITOR *)*((_QWORD *)v4 + 33);
    if ( v16 != (DXGMONITOR *)((char *)v4 + 264)
      || (v17 = WdLogNewEntry5_WdAssertion(this), WdLogEvent5_WdAssertion(v17), v16 = *v15, *v15 != (DXGMONITOR *)v15) )
    {
      v18 = (DXGMONITOR **)((char *)v16 - 48);
      if ( !v16 )
        v18 = 0LL;
      if ( v18 )
      {
        do
        {
          v19 = (DXGMONITOR *)(v18 + 6);
          v20 = (DXGMONITOR **)v18[6];
          if ( v20 == v15 )
          {
            v21 = 0LL;
          }
          else
          {
            v21 = v20 - 6;
            if ( !v20 )
              v21 = 0LL;
          }
          if ( *(_DWORD *)v18 != 4 )
          {
            if ( v20[1] != v19 )
              goto LABEL_20;
            v22 = v18[7];
            if ( *(DXGMONITOR **)v22 != v19 )
              goto LABEL_20;
            *(_QWORD *)v22 = v20;
            v20[1] = v22;
            operator delete(v18);
            --*((_DWORD *)v4 + 64);
          }
          v18 = v21;
        }
        while ( v21 );
      }
    }
  }
  return 0LL;
}
