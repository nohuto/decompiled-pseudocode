/*
 * XREFs of DpiRequestIoPowerState @ 0x1C014314C
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C0141C00 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C01428E0 (DpiFdoHandleDevicePower.c)
 *     DpiFdoInitializeFdo @ 0x1C014B840 (DpiFdoInitializeFdo.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C0264AA0 (DpiFdoExcludeAdapterAccess.c)
 *     DpiFdoHandleSurpriseRemoval @ 0x1C02658B0 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 * Callees:
 *     ?DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z @ 0x1C001E054 (-DpiInsertEntryToPowerActionQueue@@YAXPEAU_FDO_CONTEXT@@PEAU_DPI_POWER_ACTION@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DpiRequestIoPowerState(__int64 a1, LONG a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  NTSTATUS v8; // ebx
  __int64 v10; // rax
  struct _KEVENT v11[4]; // [rsp+30h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  memset(v11, 0, 0x58uLL);
  v11[1].Header.WaitListHead.Flink = 0LL;
  v11[3].Header.WaitListHead.Flink = 0LL;
  v11[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)0xB74727044LL;
  v11[1].Header.LockNV = a2;
  LODWORD(v11[1].Header.WaitListHead.Blink) = a4;
  KeInitializeEvent(&v11[2], SynchronizationEvent, 0);
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 4184));
  DpiInsertEntryToPowerActionQueue((KSPIN_LOCK *)v4, (struct _DPI_POWER_ACTION *)v11);
  KeSetEvent((PRKEVENT)(v4 + 3840), 0, 0);
  if ( a2 == 7 )
  {
    v8 = KeWaitForSingleObject(*(PVOID *)(v4 + 3832), Executive, 0, 0, 0LL);
    ObfDereferenceObject(*(PVOID *)(v4 + 3832));
  }
  else
  {
    v8 = KeWaitForSingleObject(&v11[2], Executive, 0, 0, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 4184));
  if ( v8 )
  {
    v10 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v10 + 24) = v8;
    WdLogEvent5_WdError(v10);
  }
  else
  {
    return (unsigned int)v11[3].Header.Lock;
  }
  return (unsigned int)v8;
}
