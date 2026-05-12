/*
 * XREFs of RaidAdapterRemoveDeviceIrp @ 0x1C0073F5C
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0016EF0 (RaForwardIrpSynchronous.c)
 *     RaidAdapterDeleteChildren @ 0x1C0037928 (RaidAdapterDeleteChildren.c)
 *     RaidAdapterDisableDeviceInterface @ 0x1C0037AE0 (RaidAdapterDisableDeviceInterface.c)
 *     RaidAdapterDisableRpmbInterface @ 0x1C0037C0C (RaidAdapterDisableRpmbInterface.c)
 *     RaidDeleteAdapter @ 0x1C003A9C4 (RaidDeleteAdapter.c)
 *     RaidReleaseAdapterRemoveLockAndWait @ 0x1C003B3FC (RaidReleaseAdapterRemoveLockAndWait.c)
 *     RaCallMiniportCompleteServiceIrp @ 0x1C003D7CC (RaCallMiniportCompleteServiceIrp.c)
 *     RaidAdapterReleaseResources @ 0x1C0073DA0 (RaidAdapterReleaseResources.c)
 */

__int64 __fastcall RaidAdapterRemoveDeviceIrp(__int64 a1, IRP *a2)
{
  struct _DEVICE_OBJECT *v4; // rbp
  unsigned int v5; // eax
  struct _DEVICE_OBJECT *v6; // rsi
  char v7; // r8
  unsigned int v8; // ebx

  RaCallMiniportCompleteServiceIrp(a1);
  v4 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 88) - 5;
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  *(_DWORD *)(a1 + 88) = 6;
  if ( v5 > 1 )
  {
    RaidAdapterDisableDeviceInterface(a1);
    RaidAdapterDisableRpmbInterface((struct _UNICODE_STRING *)a1);
    RaidReleaseAdapterRemoveLockAndWait(a1);
    RaidAdapterReleaseResources(a1, (__int64)a2, v7);
  }
  RaidAdapterDeleteChildren(a1);
  RaidDeleteAdapter(a1);
  RaForwardIrpSynchronous(v6, a2);
  v8 = RaidCompleteRequestEx(a2, 0, 0);
  IoDetachDevice(v6);
  IoDeleteDevice(v4);
  return v8;
}
