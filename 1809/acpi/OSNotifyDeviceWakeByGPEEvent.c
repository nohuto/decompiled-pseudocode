/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0057410 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LDL @ 0x1C005758C (WPP_RECORDER_SF_LDL.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, int a2, int a3, int a4)
{
  char v4; // bp
  __int64 v6; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rbx
  __int64 *i; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  char v12; // si
  void *v13; // rcx
  void *v14; // rdx
  __int64 v15; // rax
  KIRQL Irql; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v6 = 0LL;
  WPP_RECORDER_SF_LDL(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v6 = i[5];
      if ( (*(_QWORD *)(v6 + 952) & 0x500000000LL) == 0 && *(_DWORD *)(v6 + 456) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v8);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v8 == v8 )
    {
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      v11 = ACPIWakeDisableAsync(v6, v8, v10, v8);
      v12 = v11;
      if ( v11 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v11, 0LL, v8);
      v13 = &unk_1C006E28A;
      v14 = &unk_1C006E28A;
      if ( v6 )
      {
        v15 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v13 = *(void **)(v6 + 560);
          if ( (v15 & 0x400000000000LL) != 0 )
            v14 = *(void **)(v6 + 568);
        }
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x21u,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        v12,
        v4,
        (__int64)v13,
        (__int64)v14);
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x20u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids);
  }
}
