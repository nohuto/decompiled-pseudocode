/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C000FC60
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C000FFE0 (StorTickEventQueue.c)
 *     RaidUnitDisablePendingTimer @ 0x1C00104D4 (RaidUnitDisablePendingTimer.c)
 *     McTemplateK0zqjujsssq @ 0x1C0027418 (McTemplateK0zqjujsssq.c)
 *     McTemplateK0zqjuuujsssq @ 0x1C0027594 (McTemplateK0zqjuuujsssq.c)
 *     RaidAdapterResetBus @ 0x1C0038ED4 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C003BA90 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C0042548 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0042688 (RaUnitRequestPowerUp.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004953C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C004A5E8 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C0050990 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // ebx
  char v7; // si
  char v8; // bp
  int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-20h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 504);
  if ( !v5 )
    return;
  if ( *(int *)(v4 + 1776) > 0 )
  {
    v6 = *(_DWORD *)(v5 + 4);
    v7 = 0;
    v8 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1792), &LockHandle);
    v9 = *(_DWORD *)(v4 + 1776);
    if ( v9 > 0 )
    {
      if ( v9 >= v6 )
      {
        v10 = v9 - v6;
        *(_DWORD *)(v4 + 1776) = v10;
        if ( v10 )
        {
          v7 = 0;
          goto LABEL_9;
        }
      }
      else
      {
        *(_DWORD *)(v4 + 1776) = 0;
      }
      v7 = 1;
    }
LABEL_9:
    v11 = *(_DWORD *)(v4 + 1780);
    if ( v11 <= 0 || v7 )
      goto LABEL_16;
    if ( v11 >= v6 )
    {
      v12 = v11 - v6;
      *(_DWORD *)(v4 + 1780) = v12;
      if ( v12 )
      {
        v8 = 0;
LABEL_16:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( *(_BYTE *)(v4 + 3192) )
        {
          if ( (*(_BYTE *)(v4 + 450) & 2) == 0 )
          {
            v14 = *(_DWORD *)(v4 + 3200);
            if ( v14 != -1 )
            {
              v15 = *(_DWORD *)(v4 + 1264);
              if ( v15 < 0x1E )
                v15 = 30;
              v13 = 4 * v15 - *(_DWORD *)(v4 + 1776) + 42;
              if ( !v14 || v14 < (unsigned int)v13 )
              {
                v16 = *(_DWORD *)(v4 + 96);
                StorpTelemetryMarkUnitUnresponsive(v4, v13);
                *(_BYTE *)(v4 + 450) |= 2u;
                if ( byte_1C00617E3 < 0 )
                  McTemplateK0zqjuuujsssq(
                    v4 + 169,
                    &EventUnitUnresponsive,
                    v4 + 1976,
                    *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
                    *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
                    *(_QWORD *)(v4 + 24) + 5256LL,
                    (_BYTE)v16,
                    BYTE1(v16),
                    BYTE2(v16),
                    v4 + 1976,
                    v4 + 160,
                    v4 + 169,
                    v4 + 186,
                    1);
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                {
                  WPP_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    63LL,
                    &WPP_d11a79b88e3f3e003d260997dd6ff069_Traceguids,
                    v4);
                }
              }
            }
          }
        }
        if ( v7 )
        {
          if ( (qword_1C00612B0 & 0x400) != 0 )
            DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
          RaidUnitAbortHierarchicalResetWorkItem(v4);
        }
        else if ( v8 )
        {
          if ( (byte_1C00617E3 & 0x40) != 0 )
            McTemplateK0zqjujsssq(
              v4 + 169,
              v4 + 160,
              v4 + 1976,
              *(_QWORD *)(*(_QWORD *)(v4 + 24) + 4864LL),
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
              *(_QWORD *)(v4 + 24) + 5256LL,
              *(_BYTE *)(v4 + 96),
              v4 + 1976,
              v4 + 160,
              v4 + 169,
              v4 + 186,
              3);
          LOBYTE(v13) = *(_BYTE *)(v4 + 96);
          RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v13);
        }
        return;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 1780) = 0;
    }
    v8 = 1;
    goto LABEL_16;
  }
  if ( (int)StorTickEventQueue(v4, v5, SystemArgument1, SystemArgument2) >= 0 )
  {
    if ( (*(char *)(v4 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 5152LL)) && (*(_DWORD *)(v4 + 456) & 4) == 0 )
      RaidUnitDisablePendingTimer(v4);
    if ( _InterlockedExchange((volatile __int32 *)(v4 + 1760), 0) )
    {
      RaUnitRequestPowerUp(v4);
    }
    else if ( _InterlockedExchange((volatile __int32 *)(v4 + 1764), 0) )
    {
      RaUnitRequestPowerDown(v4);
    }
  }
  else
  {
    if ( (qword_1C00612B0 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitRequestTimeout(v4);
  }
}
