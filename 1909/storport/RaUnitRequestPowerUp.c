/*
 * XREFs of RaUnitRequestPowerUp @ 0x1C0040710
 * Callers:
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C000F040 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C0001FE0 (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0002074 (RaidResumeUnitQueue.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 */

__int64 __fastcall RaUnitRequestPowerUp(__int64 a1)
{
  unsigned int v2; // esi
  __int32 v3; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = -1073741823;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 40), &LockHandle);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 492) == 1 || *(char *)(a1 + 448) < 0 || *(_BYTE *)(a1 + 500) )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    RaidPauseUnitQueue(a1);
    v2 = PoRequestPowerIrp(*(PDEVICE_OBJECT *)(a1 + 8), 2u, (POWER_STATE)1, 0LL, 0LL, 0LL);
    if ( v2 == 259 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Fu,
          (__int64)&WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids);
      }
      *(_BYTE *)(a1 + 448) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v3 = 0;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x3Eu,
          (__int64)&WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids);
      }
      RaidResumeUnitQueue(a1);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 1760), v3);
  }
  return v2;
}
