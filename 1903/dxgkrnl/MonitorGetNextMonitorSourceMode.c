/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C0137FA0
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0137C10 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1C0137D90 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD **v11; // rcx
  _QWORD *v12; // rax
  _QWORD **v13; // r8
  _QWORD *v14; // rax
  bool v15; // zf
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rax

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 296), 1u);
    v11 = (_QWORD **)(a1 + 216);
    if ( a2 )
    {
      v12 = *v11;
      if ( *v11 == v11 )
      {
LABEL_20:
        v19 = WdLogNewEntry5_WdError(v11, v9, v10);
        *(_QWORD *)(v19 + 24) = a2;
        *(_QWORD *)(v19 + 32) = a1;
        WdLogEvent5_WdError(v19);
        v17 = -1071774928;
        goto LABEL_17;
      }
      v9 = (_QWORD *)(a2 + 96);
      if ( v12 != (_QWORD *)(a2 + 96) )
      {
        while ( v11 != v12 )
        {
          v12 = (_QWORD *)*v12;
          if ( v12 == v9 )
            goto LABEL_9;
        }
        goto LABEL_20;
      }
LABEL_9:
      v13 = (_QWORD **)*v9;
      if ( (_QWORD **)*v9 != v11 )
      {
        v14 = v13 - 12;
        v15 = v13 == 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      v18 = *v11;
      if ( *v11 != v11 )
      {
        v14 = v18 - 12;
        v15 = v18 == 0LL;
LABEL_11:
        if ( v15 )
          v14 = 0LL;
        if ( v14 )
        {
          *a3 = v14;
          *a4 = *((_DWORD *)v14 + 28);
LABEL_15:
          ExReleaseResourceLite((PERESOURCE)(a1 + 296));
          KeLeaveCriticalRegion();
          return v8;
        }
      }
    }
    v17 = 1075708748;
LABEL_17:
    v8 = v17;
    goto LABEL_15;
  }
  return 3221225485LL;
}
