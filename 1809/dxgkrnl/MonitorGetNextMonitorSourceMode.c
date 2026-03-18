/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C00C4A10
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00C46E8 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00C482C (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  struct _ERESOURCE *v9; // rbp
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v15; // eax
  __int64 v16; // rax

  v4 = 0;
  if ( a1 && a3 && a4 )
  {
    *a3 = 0LL;
    v9 = (struct _ERESOURCE *)(a1 + 296);
    *a4 = 0;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(v9, 1u);
    v10 = (_QWORD *)(a1 + 216);
    v11 = *(_QWORD **)(a1 + 216);
    if ( a2 )
    {
      if ( v11 == v10 )
      {
LABEL_19:
        v16 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v16 + 24) = a2;
        *(_QWORD *)(v16 + 32) = a1;
        WdLogEvent5_WdError(v16);
        v15 = -1071774928;
        goto LABEL_18;
      }
      v12 = (_QWORD *)(a2 + 96);
      while ( v11 != v12 )
      {
        if ( v10 == v11 )
          goto LABEL_19;
        v11 = (_QWORD *)*v11;
      }
      v11 = (_QWORD *)*v12;
    }
    if ( v11 != v10 )
    {
      v13 = v11 - 12;
      if ( !v11 )
        v13 = 0LL;
      if ( v13 )
      {
        *a3 = v13;
        *a4 = *((_DWORD *)v13 + 28);
LABEL_16:
        ExReleaseResourceLite(v9);
        KeLeaveCriticalRegion();
        return v4;
      }
    }
    v15 = 1075708748;
LABEL_18:
    v4 = v15;
    goto LABEL_16;
  }
  return 3221225485LL;
}
