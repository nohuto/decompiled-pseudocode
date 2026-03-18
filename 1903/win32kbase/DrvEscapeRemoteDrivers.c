/*
 * XREFs of DrvEscapeRemoteDrivers @ 0x1C00B9090
 * Callers:
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     DrvGetDisplayDriverNames @ 0x1C00484E0 (DrvGetDisplayDriverNames.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     HDXDrvEscape @ 0x1C00B9280 (HDXDrvEscape.c)
 */

__int64 __fastcall DrvEscapeRemoteDrivers(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebp
  unsigned int *DisplayDriverNames; // rax
  unsigned int *v16; // rdi
  int v17; // r14d
  unsigned __int16 *v18; // rax
  __int64 v19; // r8
  int v20; // edx
  int v21; // ecx
  PERESOURCE v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+70h] [rbp+8h]

  v6 = 0LL;
  v7 = a4;
  v8 = 0;
  v11 = WdLogNewEntry5_WdEvent(a1, a2, a3);
  *(_QWORD *)(v11 + 24) = a1;
  WdLogEvent5_WdEvent(v11);
  if ( gRemoteSessionUseWddm )
  {
    v26 = WdLogNewEntry5_WdTrace(v12);
    *(_QWORD *)(v26 + 24) = v7;
    WdLogEvent5_WdTrace(v26);
    return 1LL;
  }
  if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu || !a3 )
    return HDXDrvEscape(*(_QWORD *)(a1 + 40), (unsigned int)v7, a5, a6);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  v14 = 0;
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_18;
  while ( 1 )
  {
    v27 = 56LL * v14;
    v28 = *(_QWORD *)(*(_QWORD *)(v27 + a1 + 40) + 2576LL);
    DisplayDriverNames = DrvGetDisplayDriverNames(v28);
    v16 = DisplayDriverNames;
    if ( DisplayDriverNames )
      break;
LABEL_15:
    if ( ++v14 >= *(_DWORD *)(a1 + 20) )
      goto LABEL_16;
  }
  v17 = 0;
  if ( !*DisplayDriverNames )
  {
LABEL_14:
    Win32FreePool((__int64)v16);
    v16 = 0LL;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v18 = *(unsigned __int16 **)&v16[4 * v17 + 4];
    v19 = a3 - (_QWORD)v18;
    do
    {
      v20 = *(unsigned __int16 *)((char *)v18 + v19);
      v21 = *v18 - v20;
      if ( v21 )
        break;
      ++v18;
    }
    while ( v20 );
    if ( !v21 && (*(_DWORD *)(v28 + 160) & 0x4000000) != 0 )
    {
      v6 = *(_QWORD *)(v27 + a1 + 40);
      v8 = HDXDrvEscape(v6, (unsigned int)v7, a5, a6);
      if ( v8 != 1 )
        break;
    }
    if ( ++v17 >= *v16 )
      goto LABEL_14;
  }
LABEL_16:
  if ( v16 )
    Win32FreePool((__int64)v16);
LABEL_18:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v13);
  v22 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v23);
  }
  v24 = WdLogNewEntry5_WdTrace(v22);
  *(_QWORD *)(v24 + 24) = v6;
  WdLogEvent5_WdTrace(v24);
  return v8;
}
