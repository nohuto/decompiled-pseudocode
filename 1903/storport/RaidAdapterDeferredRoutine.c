/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C0001C60 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C0001C9C (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0001CE8 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C0005F98 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C001655C (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0016638 (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C0033240 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C00334F4 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C00335C8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0033F1C (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C0034A14 (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C00360D4 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C00378FC (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C0047C58 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0049A5C (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v2; // rdi
  LARGE_INTEGER *v3; // rsi
  int LowPart; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int HighPart; // ebx
  unsigned int v11; // ebp
  __int64 Unit; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v3 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 4200));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v13 = LowPart - 8;
    if ( !v13 )
    {
      StorSetIoGatewayNotBusy(v2 + 768);
      goto LABEL_43;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
              v2,
              (unsigned int)a2[4].HighPart,
              (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v2, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v2, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else if ( LowPart == 7 )
  {
    v17 = a2[5].LowPart;
    v18 = 0;
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( v2 != -768 && !*(_DWORD *)(v2 + 808) )
    {
      v19 = *(_DWORD *)(v2 + 960);
      if ( v19 )
      {
        if ( v17 <= v19 )
          v18 = v19 - v17;
        *(_DWORD *)(v2 + 800) = v18;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v2 + 768), &LockHandle);
        *(_DWORD *)(v2 + 808) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else
  {
    v5 = LowPart - 1;
    if ( !v5 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v2,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_10;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      RaidAdapterLogIoError(v2, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            RaidAdapterResumeUnit(v2, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v11 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v2, HighPart);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v11);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_ddd(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v2 + 1088);
        v3 = 0LL;
        if ( !*(_DWORD *)(v2 + 1460) )
          RaidAdapterCancelPauseTimer(v2, v2 + 1856);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v2 + 1088);
    v3 = 0LL;
    if ( *(_DWORD *)(v2 + 1460) == 1 )
    {
      RaidAdapterSetPauseTimer(v2, v2 + 1856, v2 + 1728, *(unsigned int *)(v2 + 1456));
      goto LABEL_10;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v2) )
LABEL_43:
      RaidAdapterRestartQueues(v2);
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v2 + 4200));
  if ( v3 )
    RaidFreeDeferredItem(v2 + 1088);
}
