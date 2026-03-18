/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C000F008
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000CC54 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C000EA78 (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000EF0C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002D5F0 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002E0E0 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C0030ED0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C0050538 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C0050884 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C005264C (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIDeviceInternalQueueRequest @ 0x1C000F274 (ACPIDeviceInternalQueueRequest.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F19C (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C0061968 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C00619B0 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00B5B58 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned int a7)
{
  PSLIST_ENTRY v11; // rdi
  KIRQL v12; // r12
  unsigned int v13; // esi
  __int64 result; // rax
  struct _DEVICE_OBJECT *v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rcx
  void (__fastcall *v19)(__int64, __int64 *); // rax
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF

  ++dword_1C0082DD4;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v11 )
  {
    ++dword_1C0082DD8;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0082DF0)(
                          (unsigned int)dword_1C0082DE4,
                          (unsigned int)dword_1C0082DEC,
                          (unsigned int)dword_1C0082DE8);
    if ( !v11 )
    {
      v17 = -1073741670;
LABEL_26:
      if ( a3 )
        ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a4, (unsigned int)v17);
      return (unsigned int)v17;
    }
  }
  memset(v11, 0, 0x108uLL);
  LODWORD(v11[3].Next) = a6;
  LODWORD(v11[2].Next) = 1599293264;
  v11[12].Next = a3;
  *((_QWORD *)&v11[12].Next + 1) = a4;
  *((_QWORD *)&v11[2].Next + 1) = a1;
  LODWORD(v11[13].Next) = 3;
  LODWORD(v11[16].Next) = 0;
  *((_QWORD *)&v11->Next + 1) = v11;
  v11->Next = v11;
  *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
  v11[1].Next = v11 + 1;
  *((_QWORD *)&v11[5].Next + 1) = v11 + 5;
  v11[5].Next = v11 + 5;
  *((_QWORD *)&v11[4].Next + 1) = v11 + 4;
  v11[4].Next = v11 + 4;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  if ( !a6 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 688), 0, 0) )
    {
LABEL_12:
      v13 = a7;
      goto LABEL_13;
    }
    if ( a5 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_12;
      v13 = a7 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_12;
      v13 = a7 | 0x20;
    }
LABEL_13:
    *((_DWORD *)&v11[6].Next + 2) = a2;
    *((_DWORD *)&v11[6].Next + 3) = 0;
    *((_DWORD *)&v11[3].Next + 2) = v13;
    if ( a2 > *(_DWORD *)(a1 + 336) )
    {
      v15 = *(struct _DEVICE_OBJECT **)(a1 + 720);
      if ( v15 )
        PoSetPowerState(v15, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 952) &= ~0x10000uLL;
    goto LABEL_8;
  }
  if ( a6 == 1 )
  {
    v13 = a7;
    *((_DWORD *)&v11[6].Next + 3) = a5;
    *((_DWORD *)&v11[6].Next + 2) = a2;
    goto LABEL_8;
  }
  if ( a6 != 2 )
  {
    if ( a6 == 3 )
    {
      v13 = a7;
      *((_DWORD *)&v11[6].Next + 2) = a2;
    }
    else
    {
      v13 = a7;
      if ( a6 != 4 )
      {
LABEL_8:
        if ( (v13 & 2) == 0 )
          ACPIDeviceInternalQueueRequest(a1, v11, v13);
        KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
        return 3221225494LL;
      }
    }
    *((_DWORD *)&v11[3].Next + 2) = v13;
    goto LABEL_8;
  }
  *((_DWORD *)&v11[3].Next + 2) = a7;
  *((_DWORD *)&v11[6].Next + 2) = a2;
  LODWORD(v11[7].Next) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v17 = -1073741496;
      goto LABEL_26;
    }
    v17 = ACPIWakeEmulationPrepare(v11);
    if ( v17 < 0 )
      goto LABEL_26;
    v17 = ACPIWakeEmulationEnable(v11);
    if ( v17 < 0 )
    {
      ACPIWakeEmulationDisable(v11);
      goto LABEL_26;
    }
  }
  if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 944);
    v20 = *(unsigned int *)(a1 + 928);
    v19 = *(void (__fastcall **)(__int64, __int64 *))(a1 + 936);
    BYTE4(v20) = 1;
    v19(v18, &v20);
  }
  LOBYTE(v16) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v16, &ACPIDeviceIrpWaitWakeRequestPending, v11);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
