/*
 * XREFs of RaidUnitPendingDpcRoutine @ 0x1C000F040
 * Callers:
 *     <none>
 * Callees:
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     StorTickEventQueue @ 0x1C000F0F0 (StorTickEventQueue.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000F610 (RaidUnitDisablePendingTimer.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 *     RaUnitRequestPowerDown @ 0x1C00405C0 (RaUnitRequestPowerDown.c)
 *     RaUnitRequestPowerUp @ 0x1C0040710 (RaUnitRequestPowerUp.c)
 *     McTemplateK0quuujq @ 0x1C0044D64 (McTemplateK0quuujq.c)
 *     RaidUnitAbortHierarchicalResetWorkItem @ 0x1C004808C (RaidUnitAbortHierarchicalResetWorkItem.c)
 *     RaidUnitRequestTimeout @ 0x1C0048FC8 (RaidUnitRequestTimeout.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C004FE78 (StorpTelemetryMarkUnitUnresponsive.c)
 */

void __fastcall RaidUnitPendingDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  char v6; // bp
  char v7; // r14
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // edi
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v4 = DeferredContext[8];
  v5 = *(_QWORD *)(v4 + 504);
  if ( !v5 )
    return;
  if ( *(int *)(v4 + 1776) <= 0 )
  {
    if ( (int)StorTickEventQueue(v4, v5, SystemArgument1, SystemArgument2) < 0 )
    {
      if ( (qword_1C00622B0 & 0x400) != 0 )
        DbgLogRequest(*(_QWORD *)(v4 + 24), 9, v4, 0LL, 0LL, 0LL, 0LL);
      RaidUnitRequestTimeout(v4);
    }
    else
    {
      if ( (*(char *)(v4 + 449) < 0 || *(_QWORD *)(*(_QWORD *)(v4 + 24) + 5024LL)) && (*(_DWORD *)(v4 + 456) & 4) == 0 )
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
    return;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(v5 + 4);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1792), &LockHandle);
  v9 = *(_DWORD *)(v4 + 1776);
  if ( v9 > 0 )
  {
    if ( v9 >= v8 )
    {
      v16 = v9 - v8;
      *(_DWORD *)(v4 + 1776) = v16;
      if ( v16 )
      {
        v6 = 0;
        goto LABEL_15;
      }
    }
    else
    {
      *(_DWORD *)(v4 + 1776) = 0;
    }
    v6 = 1;
  }
LABEL_15:
  v10 = *(_DWORD *)(v4 + 1780);
  if ( v10 <= 0 || v6 )
    goto LABEL_20;
  if ( v10 < v8 )
  {
    *(_DWORD *)(v4 + 1780) = 0;
LABEL_19:
    v7 = 1;
    goto LABEL_20;
  }
  v17 = v10 - v8;
  *(_DWORD *)(v4 + 1780) = v17;
  if ( !v17 )
    goto LABEL_19;
  v7 = 0;
LABEL_20:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( *(_BYTE *)(v4 + 2976) )
  {
    if ( (*(_BYTE *)(v4 + 450) & 2) == 0 )
    {
      v12 = *(_DWORD *)(v4 + 2984);
      if ( v12 != -1 )
      {
        v13 = *(_DWORD *)(v4 + 1288);
        if ( v13 < 0x1E )
          v13 = 30;
        v11 = 4 * v13 - *(_DWORD *)(v4 + 1776) + 42;
        if ( !v12 || v12 < (unsigned int)v11 )
        {
          v14 = *(_DWORD *)(v4 + 96);
          StorpTelemetryMarkUnitUnresponsive(v4, v11);
          *(_BYTE *)(v4 + 450) |= 2u;
          if ( byte_1C0062743 < 0 )
            McTemplateK0quuujq(
              *(_QWORD *)(v4 + 24),
              (unsigned int)&EventUnitUnresponsive,
              v15,
              *(_DWORD *)(*(_QWORD *)(v4 + 24) + 56LL),
              v14,
              SBYTE1(v14),
              SBYTE2(v14),
              v4 + 1976,
              1);
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 60LL, &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids, v4);
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( (qword_1C00622B0 & 0x400) != 0 )
      DbgLogRequest(*(_QWORD *)(v4 + 24), 10, v4, 0LL, 0LL, 0LL, 0LL);
    RaidUnitAbortHierarchicalResetWorkItem(v4);
  }
  else if ( v7 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 61LL, &WPP_bda341a9323f32b668d48d296e0ff956_Traceguids, v4);
    }
    LOBYTE(v11) = *(_BYTE *)(v4 + 96);
    RaidAdapterResetBus(*(_QWORD *)(v4 + 24), v11);
  }
}
