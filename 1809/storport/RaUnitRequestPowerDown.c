/*
 * XREFs of RaUnitRequestPowerDown @ 0x1C0042548
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C000FC60 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerDown(__int64 a1)
{
  unsigned int v2; // ebp
  __int32 v3; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  if ( *(_DWORD *)(a1 + 492) == 4 || (v3 = 1, (*(_BYTE *)(a1 + 449) & 1) != 0) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)4, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      *(_BYTE *)(a1 + 449) |= 1u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x41u,
          (__int64)&WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids);
      }
      v3 = 0;
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x40u,
          (__int64)&WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids);
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1764), v3);
  }
  return v2;
}
