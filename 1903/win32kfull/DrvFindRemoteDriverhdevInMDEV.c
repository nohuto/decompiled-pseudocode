/*
 * XREFs of DrvFindRemoteDriverhdevInMDEV @ 0x1C0271110
 * Callers:
 *     GetRemoteHDEV @ 0x1C0212B84 (GetRemoteHDEV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvFindRemoteDriverhdevInMDEV(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // r15
  _DWORD *DisplayDriverNames; // rax
  _DWORD *v14; // rdx
  unsigned int v15; // r11d
  int v16; // r8d
  unsigned __int16 *v17; // rax
  __int64 v18; // r10
  int v19; // r9d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v23; // rbx
  __int64 v24; // rax

  v5 = 0LL;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = a1;
  WdLogEvent5_WdEvent(v6);
  if ( (unsigned int)UserIsDisconnectConnection(v8, v7, v9, v10) || (unsigned int)UserIsConsoleConnection() || !a3 )
  {
    v23 = *(_QWORD *)(a1 + 40);
    v24 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdTrace(v24);
    return v23;
  }
  GreAcquireSemaphore(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  v11 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_19;
  while ( 1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(56LL * v11 + a1 + 40) + 2576LL);
    DisplayDriverNames = (_DWORD *)DrvGetDisplayDriverNames(v12);
    v14 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_14:
    if ( ++v11 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_17;
  }
  v15 = *DisplayDriverNames;
  v16 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_13:
    Win32FreePool(v14);
    v14 = 0LL;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v17 = *(unsigned __int16 **)&v14[4 * v16 + 4];
    v18 = a3 - (_QWORD)v17;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v17 + v18);
      v20 = *v17 - v19;
      if ( v20 )
        break;
      ++v17;
    }
    while ( v19 );
    if ( !v20 && (*(_DWORD *)(v12 + 160) & 0x4000004) == 0x4000004 )
      break;
    if ( ++v16 >= v15 )
      goto LABEL_13;
  }
  v5 = *(_QWORD *)(56LL * v11 + a1 + 40);
LABEL_17:
  if ( v14 )
    Win32FreePool(v14);
LABEL_19:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  v21 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v21 + 24) = v5;
  WdLogEvent5_WdTrace(v21);
  return v5;
}
