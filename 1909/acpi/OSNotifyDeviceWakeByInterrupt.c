/*
 * XREFs of OSNotifyDeviceWakeByInterrupt @ 0x1C0058DBC
 * Callers:
 *     ACPIWakeEmulationInterruptServiceRoutine @ 0x1C0056E40 (ACPIWakeEmulationInterruptServiceRoutine.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0021EFC (ACPIWakeRemoveDevicesAndUpdate.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0058F90 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeDisableAsync @ 0x1C0061528 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEmulationDisable @ 0x1C0061968 (ACPIWakeEmulationDisable.c)
 */

void __fastcall OSNotifyDeviceWakeByInterrupt(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rax
  _QWORD *v8; // r14
  _QWORD *i; // rax
  _QWORD *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rcx
  KIRQL Irql; // [rsp+78h] [rbp+10h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0x22u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a1,
      *(_DWORD *)(a1 + 32));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    v4 = v3[1];
    if ( v4 )
    {
      do
      {
        v5 = (__int64 *)AcpiPowerWaitWakeList;
        v6 = v4;
        v7 = v4;
        if ( (__int64 *)AcpiPowerWaitWakeList != &AcpiPowerWaitWakeList )
        {
          v8 = (_QWORD *)(a1 + 16);
          do
          {
            for ( i = (_QWORD *)*v8; i != v8; i = (_QWORD *)*i )
            {
              if ( v5 == (__int64 *)i[2] )
              {
                ACPIWakeRemoveDevicesAndUpdate(v5[5], (__int64)v3);
                break;
              }
            }
            v7 = v3[1];
            if ( v4 != v7 )
              break;
            v5 = (__int64 *)*v5;
          }
          while ( v5 != &AcpiPowerWaitWakeList );
        }
        v4 = v7;
      }
      while ( v7 != v6 );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    v10 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
    {
      ExFreePoolWithTag(v3, 0);
    }
    else
    {
      do
      {
        ACPIWakeEmulationDisable(v10);
        v12 = v10[5];
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v3 );
      if ( !v12 || (unsigned int)ACPIWakeDisableAsync(v12, v3, v11, v3) != 259 )
        OSNotifyDeviceWakeCallBack(0LL, 0LL, 0LL, v3);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0x23u,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids);
  }
}
