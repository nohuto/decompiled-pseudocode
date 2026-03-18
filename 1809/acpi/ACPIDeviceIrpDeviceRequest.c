/*
 * XREFs of ACPIDeviceIrpDeviceRequest @ 0x1C002C8A0
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x1C002C6B0 (ACPIFilterIrpSetPower.c)
 *     ACPIDockIrpSetDevicePower @ 0x1C002C844 (ACPIDockIrpSetDevicePower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x1C001C2EC (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C001D9B0 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceRequest(ULONG_PTR a1, __int64 a2, __int64 (__fastcall *a3)())
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // r8
  int v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // edi
  __int64 v15; // rax
  int v16; // eax
  KIRQL v18; // al
  __int64 *v19; // rcx
  KIRQL v20; // di
  _QWORD *PoolWithTag; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = DeviceExtension;
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C006E28A;
  v12 = (const char *)&unk_1C006E28A;
  if ( DeviceExtension )
  {
    v8 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v7 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v7 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v12,
    0xAu,
    0x1Fu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a2,
    v9 - 1,
    v8,
    v11,
    v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 < 0 || v9 == *(_DWORD *)(v7 + 336) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, __int64, _QWORD))a3)(v7, a2, (unsigned int)v14);
    return (unsigned int)v14;
  }
  else
  {
    if ( v9 == 1 )
    {
      v15 = *(_QWORD *)(v7 + 8);
      if ( (v15 & 0x102000000LL) != 0 )
      {
        if ( (v15 & 0x2000000) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 184), 0, 0) & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 272), 0, 0);
        }
        else if ( (*(_QWORD *)(v7 + 8) & 0x800000000010000LL) == 0x800000000010000LL )
        {
          v18 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v19 = (__int64 *)AcpiPowerWaitWakeList;
          v20 = v18;
          while ( v19 != &AcpiPowerWaitWakeList )
          {
            if ( v19[5] == v7 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50706341u);
              if ( PoolWithTag )
              {
                *PoolWithTag = a2;
                a2 = (__int64)PoolWithTag;
                PoolWithTag[1] = a3;
                a3 = ACPIWaitWakeEnableOnPowerUp;
              }
              break;
            }
            v19 = (__int64 *)*v19;
          }
          KeReleaseSpinLock(&AcpiPowerLock, v20);
        }
      }
    }
    if ( (unsigned int)(v10 - 4) <= 1 || (v16 = 0, v10 == 6) )
      v16 = 1;
    return ACPIDeviceInitializePowerRequest(v7, v9, (_SLIST_ENTRY *)a3, a2, v10, 0, 8 * v16);
  }
}
