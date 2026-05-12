/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0001FA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidFreeDeferredItem @ 0x1C00020C0 (RaidFreeDeferredItem.c)
 *     RaidSetUnitPauseTimer @ 0x1C00020FC (RaidSetUnitPauseTimer.c)
 *     RaidAdapterResumeUnit @ 0x1C0002148 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C0007964 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001435C (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00376A0 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C0037958 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0037A2C (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0038334 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C0038E1C (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C003A438 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C003BA34 (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C004A404 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C004C1B4 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, char a3)
{
  __int64 v3; // rdi
  LARGE_INTEGER *v5; // rsi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebp
  unsigned int HighPart; // ebx
  __int64 Unit; // rax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  unsigned int v21; // edx
  unsigned int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4264));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v15 = LowPart - 8;
    if ( !v15 )
    {
      StorSetIoGatewayNotBusy(v3 + 832);
      goto LABEL_43;
    }
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
              v3,
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
        RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else if ( LowPart == 7 )
  {
    if ( v3 != -832 && !*(_DWORD *)(v3 + 872) )
    {
      v20 = *(_DWORD *)(v3 + 1024);
      if ( v20 )
      {
        v21 = a2[5].LowPart;
        v22 = 0;
        if ( v21 <= v20 )
          v22 = v20 - v21;
        *(_DWORD *)(v3 + 864) = v22;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 832), &LockHandle);
        *(_DWORD *)(v3 + 872) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else
  {
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          v12 = a2[5].LowPart;
          HighPart = a2[4].HighPart;
          Unit = RaidAdapterFindUnit(v3, HighPart);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v12);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_ddd(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_2427d071e20036a288b852fd33055616_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 1152);
        v5 = 0LL;
        if ( !*(_DWORD *)(v3 + 1524) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1920);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v3 + 1152);
    v5 = 0LL;
    if ( *(_DWORD *)(v3 + 1524) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1920, v3 + 1792, *(unsigned int *)(v3 + 1520));
      goto LABEL_10;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v3) )
    {
LABEL_43:
      LOBYTE(v19) = a3;
      RaidAdapterRestartQueues(v3, v19);
    }
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4264));
  if ( v5 )
    RaidFreeDeferredItem(v3 + 1152);
}
