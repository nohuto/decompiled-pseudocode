/*
 * XREFs of QueuePowerRequest @ 0x1C00588A0
 * Callers:
 *     W32CalloutDispatch @ 0x1C0023550 (W32CalloutDispatch.c)
 *     UserPowerStateCallout @ 0x1C0059C88 (UserPowerStateCallout.c)
 *     UserPowerInfoCallout @ 0x1C0062AE4 (UserPowerInfoCallout.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0107280 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0056D40 (Win32AllocPoolNonPaged.c)
 *     EtwTraceCompletePowerRequest @ 0x1C005A110 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C005B2C0 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     McTemplateK0xdx @ 0x1C0111EFC (McTemplateK0xdx.c)
 */

__int64 __fastcall QueuePowerRequest(_OWORD *a1, char a2)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  _OWORD *v7; // rax
  struct _FAST_MUTEX *v8; // rcx
  int v9; // r8d
  struct _LIST_ENTRY *Flink; // rax

  v4 = 0;
  v5 = Win32AllocPoolNonPaged(80LL, 0x6F707355u);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  if ( a1 )
  {
    v7 = (_OWORD *)(v5 + 40);
    *v7 = *a1;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(v6 + 64) = v7;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(v6 + 16), SynchronizationEvent, 0);
  v8 = gpPowerRequestMutex;
  *(_BYTE *)(v6 + 72) = a2;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v8);
  if ( gbPowerCalloutsReady )
  {
    if ( a1 )
    {
      if ( ((*(_DWORD *)a1 - 4) & 0xFFFFFFF7) == 0 && ++gPowerOnRequestCount == 1 )
        ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
    }
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx(*(_QWORD *)(v6 + 48), *(_DWORD *)(v6 + 40), v9, v6, *(_DWORD *)(v6 + 40), *(_QWORD *)(v6 + 48));
    Flink = gPowerRequestList.Flink;
    if ( gPowerRequestList.Flink->Blink != &gPowerRequestList )
      __fastfail(3u);
    *(_QWORD *)v6 = gPowerRequestList.Flink;
    *(_QWORD *)(v6 + 8) = &gPowerRequestList;
    Flink->Blink = (struct _LIST_ENTRY *)v6;
    gPowerRequestList.Flink = (struct _LIST_ENTRY *)v6;
  }
  else
  {
    v4 = -1073741823;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  if ( v4 >= 0 )
  {
    KeSetEvent(gpEventPowerRequest, 1, 0);
    if ( !a2 )
      return 0LL;
    v4 = KeWaitForSingleObject((PVOID)(v6 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v4 >= 0 )
      v4 = *(_DWORD *)(v6 + 56);
  }
  EtwTraceCompletePowerRequest(v6, *(unsigned int *)(v6 + 56));
  Win32FreePool(v6);
  return (unsigned int)v4;
}
