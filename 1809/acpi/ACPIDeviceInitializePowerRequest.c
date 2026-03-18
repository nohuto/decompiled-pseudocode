/*
 * XREFs of ACPIDeviceInitializePowerRequest @ 0x1C001C2EC
 * Callers:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DA34 (ACPIDeviceInternalDeviceRequest.c)
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C001AE0C (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001C204 (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002C8A0 (ACPIDeviceIrpDeviceRequest.c)
 *     ACPIDeviceIrpWaitWakeRequest @ 0x1C002D0F0 (ACPIDeviceIrpWaitWakeRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C0030290 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C004ECC8 (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDeviceIrpWarmEjectRequest @ 0x1C004F004 (ACPIDeviceIrpWarmEjectRequest.c)
 *     AcpiDeviceResetInvokeReset @ 0x1C0050CD4 (AcpiDeviceResetInvokeReset.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002E854 (ACPIWakeEnableDisableAsync.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIWakeEmulationDisable @ 0x1C005FA10 (ACPIWakeEmulationDisable.c)
 *     ACPIWakeEmulationEnable @ 0x1C005FA58 (ACPIWakeEmulationEnable.c)
 *     ACPIWakeEmulationPrepare @ 0x1C00B21A0 (ACPIWakeEmulationPrepare.c)
 */

__int64 __fastcall ACPIDeviceInitializePowerRequest(
        __int64 a1,
        int a2,
        _SLIST_ENTRY *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  PSLIST_ENTRY v11; // rdi
  struct _SLIST_ENTRY *v12; // r14
  KIRQL v13; // al
  __int64 *v14; // rcx
  __int64 v15; // rdx
  KIRQL v16; // r13
  int v17; // esi
  __int64 v18; // rax
  __int64 result; // rax
  _SLIST_ENTRY *v20; // rbp
  struct _SLIST_ENTRY **v21; // rax
  PSLIST_ENTRY *v22; // rax
  PSLIST_ENTRY *v23; // rax
  __int64 v24; // rdx
  int v25; // ebx
  __int64 v26; // rcx
  void (__fastcall *v27)(__int64, int *); // rax
  int v28; // [rsp+20h] [rbp-38h] BYREF
  char v29; // [rsp+24h] [rbp-34h]

  ++dword_1C0080DD4;
  v11 = ExpInterlockedPopEntrySList(&RequestLookAsideList);
  if ( !v11 )
  {
    ++dword_1C0080DD8;
    v11 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0080DF0)(
                          (unsigned int)dword_1C0080DE4,
                          (unsigned int)dword_1C0080DEC,
                          (unsigned int)dword_1C0080DE8);
    if ( !v11 )
    {
      v25 = -1073741670;
LABEL_39:
      if ( a3 )
        ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(a1, a4, (unsigned int)v25);
      return (unsigned int)v25;
    }
  }
  memset(v11, 0, 0x108uLL);
  LODWORD(v11[16].Next) = 0;
  v12 = v11 + 1;
  LODWORD(v11[3].Next) = a6;
  LODWORD(v11[2].Next) = 1599293264;
  v11[12].Next = a3;
  *((_QWORD *)&v11[12].Next + 1) = a4;
  *((_QWORD *)&v11[2].Next + 1) = a1;
  LODWORD(v11[13].Next) = 3;
  *((_QWORD *)&v11->Next + 1) = v11;
  v11->Next = v11;
  *((_QWORD *)&v11[1].Next + 1) = v11 + 1;
  v11[1].Next = v11 + 1;
  *((_QWORD *)&v11[5].Next + 1) = v11 + 5;
  v11[5].Next = v11 + 5;
  *((_QWORD *)&v11[4].Next + 1) = v11 + 4;
  v11[4].Next = v11 + 4;
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v15 = 0LL;
  v16 = v13;
  if ( !a6 )
  {
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 688), 0, 0) )
    {
LABEL_16:
      v17 = a7;
      goto LABEL_17;
    }
    if ( a5 == 3 )
    {
      if ( a2 != 4 )
        goto LABEL_16;
      v17 = a7 | 0x10;
    }
    else
    {
      if ( a2 != 1 )
        goto LABEL_16;
      v17 = a7 | 0x20;
    }
LABEL_17:
    *((_DWORD *)&v11[6].Next + 2) = a2;
    *((_DWORD *)&v11[6].Next + 3) = 0;
    *((_DWORD *)&v11[3].Next + 2) = v17;
    if ( a2 > *(_DWORD *)(a1 + 336) )
    {
      v14 = *(__int64 **)(a1 + 720);
      if ( v14 )
        PoSetPowerState((PDEVICE_OBJECT)v14, DevicePowerState, (POWER_STATE)a2);
    }
    if ( a2 > 1 )
      *(_QWORD *)(a1 + 952) &= ~0x10000uLL;
    goto LABEL_8;
  }
  if ( a6 == 1 )
  {
    LOWORD(v17) = a7;
    *((_DWORD *)&v11[6].Next + 3) = a5;
    *((_DWORD *)&v11[6].Next + 2) = a2;
    goto LABEL_8;
  }
  if ( a6 != 2 )
  {
    if ( a6 == 3 )
    {
      v17 = a7;
      *((_DWORD *)&v11[6].Next + 2) = a2;
    }
    else
    {
      v17 = a7;
      if ( a6 != 4 )
        goto LABEL_8;
    }
    *((_DWORD *)&v11[3].Next + 2) = v17;
LABEL_8:
    if ( (v17 & 2) != 0 )
    {
LABEL_14:
      KeReleaseSpinLock(&AcpiPowerQueueLock, v16);
      return 3221225494LL;
    }
    if ( (v17 & 0x100) != 0 )
    {
      v18 = AcpiPowerSynchronizeList;
      v14 = &AcpiPowerSynchronizeList;
      if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) == &AcpiPowerSynchronizeList )
      {
        v11->Next = (_SLIST_ENTRY *)AcpiPowerSynchronizeList;
        *((_QWORD *)&v11->Next + 1) = &AcpiPowerSynchronizeList;
        *(_QWORD *)(v18 + 8) = v11;
        AcpiPowerSynchronizeList = (__int64)v11;
        goto LABEL_12;
      }
LABEL_54:
      __fastfail(3u);
    }
    v20 = (_SLIST_ENTRY *)(a1 + 536);
    v21 = (struct _SLIST_ENTRY **)*((_QWORD *)&v20->Next + 1);
    if ( v20->Next == v20 )
    {
      if ( *v21 != v20 )
        goto LABEL_54;
      v12->Next = v20;
      *((_QWORD *)&v11[1].Next + 1) = v21;
      *v21 = v12;
      *((_QWORD *)&v20->Next + 1) = v12;
      if ( (v17 & 1) != 0 )
      {
        v22 = (PSLIST_ENTRY *)qword_1C00800D8;
        v14 = &AcpiPowerDelayedQueueList;
        if ( *(__int64 **)qword_1C00800D8 != &AcpiPowerDelayedQueueList )
          goto LABEL_54;
        v11->Next = (_SLIST_ENTRY *)&AcpiPowerDelayedQueueList;
        *((_QWORD *)&v11->Next + 1) = v22;
        *v22 = v11;
        qword_1C00800D8 = (__int64)v11;
      }
      else
      {
        v23 = (PSLIST_ENTRY *)qword_1C00800E8;
        v14 = &AcpiPowerQueueList;
        if ( *(__int64 **)qword_1C00800E8 != &AcpiPowerQueueList )
          goto LABEL_54;
        v11->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
        *((_QWORD *)&v11->Next + 1) = v23;
        *v23 = v11;
        qword_1C00800E8 = (__int64)v11;
      }
    }
    else
    {
      if ( *v21 != v20 )
        goto LABEL_54;
      v12->Next = v20;
      *((_QWORD *)&v11[1].Next + 1) = v21;
      *v21 = v12;
      *((_QWORD *)&v20->Next + 1) = v12;
    }
LABEL_12:
    AcpiPowerDpcFlags |= 2u;
    if ( (v17 & 1) == 0 )
      ACPIPowerScheduleDpc(v14, v15);
    goto LABEL_14;
  }
  *((_DWORD *)&v11[3].Next + 2) = a7;
  *((_DWORD *)&v11[6].Next + 2) = a2;
  LODWORD(v11[7].Next) = 1;
  KeReleaseSpinLock(&AcpiPowerQueueLock, v13);
  if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) != 0 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v25 = -1073741496;
      goto LABEL_39;
    }
    v25 = ACPIWakeEmulationPrepare(v11);
    if ( v25 < 0 )
      goto LABEL_39;
    v25 = ACPIWakeEmulationEnable(v11);
    if ( v25 < 0 )
    {
      ACPIWakeEmulationDisable(v11);
      goto LABEL_39;
    }
  }
  if ( (*(_QWORD *)(a1 + 952) & 0x4000000000LL) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 944);
    v28 = *(_DWORD *)(a1 + 928);
    v27 = *(void (__fastcall **)(__int64, int *))(a1 + 936);
    v29 = 1;
    v27(v26, &v28);
  }
  LOBYTE(v24) = 1;
  result = ACPIWakeEnableDisableAsync(a1, v24, &ACPIDeviceIrpWaitWakeRequestPending, v11);
  if ( (_DWORD)result == 259 )
    return 3221225494LL;
  return result;
}
