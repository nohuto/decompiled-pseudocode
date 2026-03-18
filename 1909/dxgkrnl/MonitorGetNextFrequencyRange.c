/*
 * XREFs of MonitorGetNextFrequencyRange @ 0x1C013BF30
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C013BAE0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006884 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(struct HDXGMONITOR__ *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rcx
  bool v13; // zf
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v20);
  if ( (int)result >= 0 )
  {
    v9 = v20;
    if ( !v20 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v18);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    if ( a2 )
    {
      v16 = (_QWORD *)((char *)v9 + 264);
      v17 = (_QWORD *)*((_QWORD *)v9 + 33);
      if ( v17 == (_QWORD *)((char *)v9 + 264) )
      {
LABEL_23:
        v19 = WdLogNewEntry5_WdError(v10, v16, v11);
        *(_QWORD *)(v19 + 24) = a2;
        *(_QWORD *)(v19 + 32) = v9;
        WdLogEvent5_WdError(v19);
        v14 = -1071774928;
        goto LABEL_10;
      }
      v10 = (_QWORD *)(a2 + 48);
      while ( v17 != v10 )
      {
        if ( v16 == v17 )
          goto LABEL_23;
        v17 = (_QWORD *)*v17;
      }
      v12 = (_QWORD *)*v10;
      v13 = v12 == v16;
    }
    else
    {
      v12 = (_QWORD *)*((_QWORD *)v9 + 33);
      v13 = v12 == (_QWORD *)((char *)v9 + 264);
    }
    if ( !v13 )
    {
      v15 = v12 - 6;
      if ( !v12 )
        v15 = 0LL;
      if ( v15 )
      {
        *a3 = v15;
        goto LABEL_11;
      }
    }
    v14 = 1075708748;
LABEL_10:
    v3 = v14;
LABEL_11:
    ExReleaseResourceLite((PERESOURCE)((char *)v9 + 296));
    KeLeaveCriticalRegion();
    return v3;
  }
  return result;
}
