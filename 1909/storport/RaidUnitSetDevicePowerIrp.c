/*
 * XREFs of RaidUnitSetDevicePowerIrp @ 0x1C0010728
 * Callers:
 *     RaidUnitSetPowerIrp @ 0x1C001050C (RaidUnitSetPowerIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00108BC (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001FBD0 (RaidAdapterPoFxActivateComponent.c)
 *     WPP_SF_qq @ 0x1C0038EB0 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidUnitSetDevicePowerIrp(struct _SLIST_ENTRY *Context, _SLIST_ENTRY *Irp)
{
  __int64 v2; // rdi
  __int64 v5; // r8
  char v7; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)&Context[1].Next + 1);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 50LL, &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids, Context, Irp);
  }
  if ( *((_DWORD *)&Context[30].Next + 3) == 4 && *(_DWORD *)(*((_QWORD *)&Irp[11].Next + 1) + 24LL) == 1 )
  {
    if ( (*(_BYTE *)(v2 + 109) & 4) == 0 && *(_QWORD *)(v2 + 5024) )
    {
      v7 = BYTE1(Context[28].Next);
      if ( (v7 & 8) == 0 )
      {
        BYTE1(Context[28].Next) = v7 | 8;
        RaidAdapterPoFxActivateComponent(v2, 0LL, 0LL);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 80), &LockHandle);
    if ( *(int *)(v2 + 268) > 1 )
    {
      LOBYTE(v5) = 1;
      *((_BYTE *)&Context[119].Next + 9) = 1;
      Context[120].Next = Irp;
      RaUnitAcquireRemoveLock((__int64)Context, (__int64)Irp, v5);
      *(_BYTE *)(*((_QWORD *)&Irp[11].Next + 1) + 3LL) |= 1u;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(v2 + 5008), Context + 121);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 259LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return RaidUnitProcessSetDevicePowerIrp(Context, (PIRP)Irp);
}
