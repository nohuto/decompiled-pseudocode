/*
 * XREFs of ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C016FEA4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02CDC44 (--1DXGMONITOR@@AEAA@XZ.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02CED98 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02D01BC (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  DXGMONITOR **v3; // rdi
  DXGMONITOR *v4; // rbx
  __int64 v6; // rax
  DXGMONITOR *v7; // rax
  DXGMONITOR **v8; // rdi
  __int64 v9; // rax
  DXGMONITOR *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // r8

  v3 = (DXGMONITOR **)((char *)this + 240);
  v4 = this;
  if ( *v3 != (DXGMONITOR *)v3 )
  {
    v6 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v6 + 24) = v4;
    WdLogEvent5_WdWarning(v6);
    while ( 1 )
    {
      this = *v3;
      if ( *v3 == (DXGMONITOR *)v3 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v3
        || (v7 = *(DXGMONITOR **)this, *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this) )
      {
LABEL_43:
        __fastfail(3u);
      }
      *v3 = v7;
      *((_QWORD *)v7 + 1) = v3;
      operator delete((char *)this - 96);
    }
  }
  v8 = (DXGMONITOR **)((char *)v4 + 280);
  if ( *v8 != (DXGMONITOR *)v8 )
  {
    v9 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v9 + 24) = v4;
    WdLogEvent5_WdWarning(v9);
    while ( 1 )
    {
      this = *v8;
      if ( *v8 == (DXGMONITOR *)v8 )
        break;
      if ( *((DXGMONITOR ***)this + 1) != v8 )
        goto LABEL_43;
      v10 = *(DXGMONITOR **)this;
      if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_43;
      *v8 = v10;
      *((_QWORD *)v10 + 1) = v8;
      operator delete((char *)this - 48);
    }
  }
  if ( *((_DWORD *)v4 + 52) )
  {
    v11 = (_QWORD *)((char *)v4 + 216);
    if ( (_QWORD *)*v11 == v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v12);
    }
    while ( 1 )
    {
      this = (DXGMONITOR *)*v11;
      if ( (_QWORD *)*v11 == v11 )
        break;
      if ( *((_QWORD **)this + 1) != v11 )
        goto LABEL_43;
      v13 = *(_QWORD *)this;
      if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this )
        goto LABEL_43;
      *v11 = v13;
      *(_QWORD *)(v13 + 8) = v11;
      operator delete((char *)this - 96);
    }
    *((_QWORD *)v4 + 29) = 0LL;
    *((_DWORD *)v4 + 52) = 0;
    *((_DWORD *)v4 + 53) = 1024;
  }
  if ( *((DXGMONITOR **)v4 + 27) != (DXGMONITOR *)((char *)v4 + 216) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( *((_DWORD *)v4 + 64) )
  {
    v15 = (_QWORD *)((char *)v4 + 264);
    if ( (_QWORD *)*v15 == v15 )
    {
      v16 = WdLogNewEntry5_WdAssertion(this, a2);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 != v15 )
    {
      v18 = v17 - 6;
      if ( !v17 )
        v18 = 0LL;
      if ( v18 )
      {
        do
        {
          v19 = v18 + 6;
          v20 = (_QWORD *)v18[6];
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
            if ( (_QWORD *)v20[1] != v19 )
              goto LABEL_43;
            v22 = (_QWORD *)v18[7];
            if ( (_QWORD *)*v22 != v19 )
              goto LABEL_43;
            *v22 = v20;
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
