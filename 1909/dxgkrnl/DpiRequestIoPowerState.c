/*
 * XREFs of DpiRequestIoPowerState @ 0x1C0158AA0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0157B84 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01586C0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C02A0380 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 *     DpiFdoResetFdo @ 0x1C02A288C (DpiFdoResetFdo.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C001DE94 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v10; // r8
  __int64 v12; // rax
  struct _KEVENT v13[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v13, 0, 0x58uLL);
  v13[1].Header.WaitListHead.Flink = 0LL;
  v13[3].Header.WaitListHead.Flink = 0LL;
  v13[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v13[1].Header.LockNV = a2;
  LODWORD(v13[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v13[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4296));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v13);
  KeSetEvent((PRKEVENT)(v4 + 3944), 0, 0);
  if ( a2 == 7 )
  {
    v9 = KeWaitForSingleObject(*(PVOID *)(v4 + 3936), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 3936));
  }
  else
  {
    v9 = KeWaitForSingleObject(&v13[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4296));
  if ( v9 )
  {
    v12 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v12 + 24) = v9;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    return (unsigned int)v13[3].Header.Lock;
  }
  return (unsigned int)v9;
}
