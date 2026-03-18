/*
 * XREFs of OSNotifyDeviceWake @ 0x1C0056E10
 * Callers:
 *     NotifyHandler @ 0x1C002E080 (NotifyHandler.c)
 *     ACPICMButtonSetPower @ 0x1C004CDD0 (ACPICMButtonSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0025AEC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0057410 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_qsqss @ 0x1C005767C (WPP_RECORDER_SF_qsqss.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 */

__int64 __fastcall OSNotifyDeviceWake(__int64 *a1)
{
  __int64 v1; // r8
  const char *v2; // rbp
  char v3; // si
  __int64 v4; // r9
  void *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  const char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // r14
  void *v15; // rax
  __int64 v16; // rcx
  KIRQL Irql; // [rsp+80h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (const char *)&unk_1C006E28A;
  v3 = 0;
  LODWORD(v4) = 0;
  v5 = &unk_1C006E28A;
  v6 = *(_QWORD **)(*a1 + 104);
  if ( v6 )
  {
    v7 = v6[1];
    v4 = *(_QWORD *)(*a1 + 104);
    if ( (v7 & 0x200000000000LL) != 0 && (v7 & 0x400000000000LL) != 0 )
      v5 = (void *)v6[71];
  }
  dword_1C00806E0 = *(_DWORD *)(v1 + 40);
  byte_1C00806E4 = 0;
  WPP_RECORDER_SF_qsqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v5, v1, v4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    ACPIWakeRemoveDevicesAndUpdate((__int64)v6, (__int64)v9);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v13 = ACPIWakeDisableAsync(v6, v9, v12, v9);
      v14 = v13;
      if ( v13 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v13, 0LL, v9);
      v15 = &unk_1C006E28A;
      if ( v6 )
      {
        v16 = v6[1];
        v3 = (char)v6;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v2 = (const char *)v6[70];
          if ( (v16 & 0x400000000000LL) != 0 )
            v15 = (void *)v6[71];
        }
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x1Cu,
        (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
        v14,
        v3,
        (__int64)v2,
        (__int64)v15);
    }
  }
  else
  {
    v10 = (const char *)&unk_1C006E28A;
    if ( v6 )
    {
      v11 = v6[1];
      v3 = (char)v6;
      if ( (v11 & 0x200000000000LL) != 0 )
      {
        v2 = (const char *)v6[70];
        if ( (v11 & 0x400000000000LL) != 0 )
          v10 = (const char *)v6[71];
      }
    }
    WPP_RECORDER_SF_qss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x1Bu,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      v3,
      v2,
      v10);
  }
  return 0LL;
}
