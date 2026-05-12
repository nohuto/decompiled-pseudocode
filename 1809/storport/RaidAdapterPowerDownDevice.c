/*
 * XREFs of RaidAdapterPowerDownDevice @ 0x1C001420C
 * Callers:
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0014104 (RaidAdapterSetDevicePowerIrp.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C00062A4 (RaidAcquireAdapterRemoveLock.c)
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0016AD0 (RaidAdapterStopOnPowerdown.c)
 *     WPP_SF_qq @ 0x1C003BBF8 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaidAdapterPowerDownDevice(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // bp
  __int64 v5; // r14
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids, a1, a2);
  }
  RaidAcquireAdapterRemoveLock(a1);
  RaidPauseAdapterQueue(a1);
  v4 = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v5 = *(_QWORD *)(a1 + 8);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 832), &LockHandle);
  if ( *(_DWORD *)(a1 + 1024) )
  {
    *(_QWORD *)(a1 + 1056) = 0LL;
    *(_QWORD *)(a1 + 1072) = RaidAdapterStopOnPowerdown;
    *(_BYTE *)(a1 + 1040) = 1;
    *(_QWORD *)(a1 + 1048) = a2;
    *(_QWORD *)(a1 + 1064) = v5;
  }
  else
  {
    v4 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 )
    RaidAdapterStopOnPowerdown(v5, a2, 0LL);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 24LL, &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids, a1, a2, v4);
  }
  return 259LL;
}
