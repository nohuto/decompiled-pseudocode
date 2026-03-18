/*
 * XREFs of DpiPdoRemovePdo @ 0x1C02772BC
 * Callers:
 *     DpiPdoAddPdo @ 0x1C027449C (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdoObjects @ 0x1C0277564 (DpiPdoRemovePdoObjects.c)
 * Callees:
 *     ?DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z @ 0x1C027CC70 (-DmmResetBaseVideoOutputTechnology@@YAJQEAXI@Z.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02913B4 (MonitorRemovePhysicalMonitor.c)
 */

__int64 __fastcall DpiPdoRemovePdo(__int64 a1, __int64 a2, __int64 a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // r14
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rcx

  v4 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  v6 = a2;
  v7 = *(_QWORD ***)(v4 + 3544);
  v8 = v7;
  v9 = *v7;
  if ( *v7 == v7 )
  {
LABEL_5:
    LODWORD(v5) = -1073741811;
    v10 = WdLogNewEntry5_WdWarning(v7, a2, a3);
    *(_QWORD *)(v10 + 24) = *(unsigned int *)(v6 + 24);
    WdLogEvent5_WdWarning(v10);
    return (unsigned int)v5;
  }
  a2 = *(unsigned int *)(a2 + 24);
  while ( *((_DWORD *)v8 + 126) != (_DWORD)a2 )
  {
    v8 = v9;
    v9 = (_QWORD *)*v9;
    if ( v9 == v7 )
      goto LABEL_5;
  }
  v12 = *v8;
  if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v13 = (_QWORD *)v8[1], (_QWORD *)*v13 != v8) )
LABEL_24:
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  --*(_DWORD *)(v4 + 3560);
  *((_BYTE *)v8 + 508) = 0;
  if ( (_BYTE)a3 && *((_DWORD *)v8 + 124) == 1 && !*((_BYTE *)v8 + 511) )
  {
    v14 = MonitorRemovePhysicalMonitor(*(DXGADAPTER **)(v4 + 3792), *((_DWORD *)v8 + 126), 0, a4);
    v16 = v14;
    if ( v14 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdError(v17);
    }
    v18 = DmmResetBaseVideoOutputTechnology(*(void *const *)(v4 + 3792), *((_DWORD *)v8 + 126));
    v5 = v18;
    if ( v18 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v20 + 24) = v5;
      WdLogEvent5_WdError(v20);
    }
  }
  KeWaitForSingleObject((PVOID)(v4 + 3336), Executive, 0, 0, 0LL);
  *(_QWORD *)(v6 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v4 + 3336), 0);
  v22 = (void *)v8[116];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    v8[116] = 0LL;
  }
  v23 = WdLogNewEntry5_WdEvent(v22, v21);
  *(_QWORD *)(v23 + 24) = v8[3];
  WdLogEvent5_WdEvent(v23);
  if ( *((_BYTE *)v8 + 509) )
  {
    v27 = *(_QWORD **)(v4 + 3576);
    if ( *v27 == v4 + 3568 )
    {
      *v8 = v4 + 3568;
      v8[1] = v27;
      *v27 = v8;
      *(_QWORD *)(v4 + 3576) = v8;
      return (unsigned int)v5;
    }
    goto LABEL_24;
  }
  v24 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, File, 1u, 0x20u);
  v5 = v24;
  if ( v24 >= 0 )
  {
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v8 + 2, (PVOID)v6, 0x20u);
    IoQueueWorkItem((PIO_WORKITEM)v8[119], (PIO_WORKITEM_ROUTINE)DpiPdoDestroyPdo, DelayedWorkQueue, 0LL);
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25);
    v26[3] = 275LL;
    v26[4] = 21LL;
    v26[5] = v5;
    WdLogEvent5_WdCriticalError(v26);
  }
  return (unsigned int)v5;
}
