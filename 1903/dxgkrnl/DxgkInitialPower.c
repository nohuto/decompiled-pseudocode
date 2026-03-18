/*
 * XREFs of DxgkInitialPower @ 0x1C015A574
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v4 = v0;
  if ( v0 < 0 )
    goto LABEL_4;
  byte_1C00A2757 = OutputBuffer;
  if ( !OutputBuffer )
    return (unsigned int)v4;
  v7 = WdLogNewEntry5_WdEvent(v2);
  *(_QWORD *)(v7 + 24) = 0LL;
  WdLogEvent5_WdEvent(v7);
  v8 = PoRegisterPowerSettingCallback(
         (PDEVICE_OBJECT)g_pDeviceObject,
         &GUID_MONITOR_POWER_ON,
         DpiMiracastHandlePowerCallback,
         0LL,
         &Handle);
  v4 = v8;
  if ( v8 < 0
    || (v9 = PoRegisterPowerSettingCallback(
               (PDEVICE_OBJECT)g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               DpiMiracastHandlePowerCallback,
               0LL,
               &qword_1C00A2B68),
        v4 = v9,
        v9 < 0) )
  {
LABEL_4:
    v6 = WdLogNewEntry5_WdError(v2, v1, v3);
    *(_QWORD *)(v6 + 24) = v4;
    WdLogEvent5_WdError(v6);
    return (unsigned int)v4;
  }
  dword_1C00A2B70 = 0;
  byte_1C00A2759 = 0;
  qword_1C00A2BF8 = (__int64)IoAllocateWorkItem((PDEVICE_OBJECT)g_pDeviceObject);
  if ( qword_1C00A2BF8 )
  {
    KeInitializeTimerEx(&Timer, SynchronizationTimer);
    KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
  }
  else
  {
    v14 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    LODWORD(v4) = -1073741801;
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v14);
  }
  return (unsigned int)v4;
}
