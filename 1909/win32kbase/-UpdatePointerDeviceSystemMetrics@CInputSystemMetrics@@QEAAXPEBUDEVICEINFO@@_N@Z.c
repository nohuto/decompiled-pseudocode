/*
 * XREFs of ?UpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEAAXPEBUDEVICEINFO@@_N@Z @ 0x1C018DD6C
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8980 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00A8AC0 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0182AF0 (UpdatePointerDeviceSystemMetrics.c)
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C0053848 (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     IsPublicPointerDevice @ 0x1C00A6348 (IsPublicPointerDevice.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C00A9284 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C00A93D0 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     ?GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C018DD18 (-GetHardwareType@CInputSystemMetrics@@AEBAKPEBUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputSystemMetrics::UpdatePointerDeviceSystemMetrics(
        CInputSystemMetrics *this,
        const struct DEVICEINFO *a2)
{
  struct CInputSystemMetrics *v2; // r14
  CInputSystemMetrics *v4; // rcx
  char v5; // r8
  int v6; // edi
  unsigned int v7; // ebp
  __int64 v8; // rbx
  int HardwareType; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  CInputSystemMetrics *v12; // rcx
  struct RIMDEV *i; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // ebx
  void *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF
  char v20; // [rsp+28h] [rbp-10h]

  v2 = gpInputSystemMetrics;
  if ( IsPublicPointerDevice((__int64)a2) )
  {
    v6 = 0;
    v7 = 0;
    if ( v5 )
    {
      v8 = *((_QWORD *)a2 + 60);
      HardwareType = CInputSystemMetrics::GetHardwareType(v4, (const struct tagHID_POINTER_DEVICE_INFO *)v8);
      v7 = *((_DWORD *)v2 + 2);
      v12 = (CInputSystemMetrics *)*(unsigned int *)(v8 + 720);
      v6 = *((_DWORD *)v2 + 1) | HardwareType;
      if ( v7 <= (unsigned int)v12 )
        v7 = *(_DWORD *)(v8 + 720);
    }
    else
    {
      CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        (CInpLockSharedIfNeeded *)&v19,
        (struct CInpPushLock *)&CBaseInput::_sLock);
      for ( i = CBaseInput::_spDevList; i; i = (struct RIMDEV *)*((_QWORD *)i + 7) )
      {
        if ( IsPublicPointerDevice((__int64)i) && (*((_DWORD *)i + 46) & 0x400) == 0 )
        {
          v14 = *((_QWORD *)i + 60);
          v6 |= CInputSystemMetrics::GetHardwareType(v12, (const struct tagHID_POINTER_DEVICE_INFO *)v14);
          if ( v7 <= *(_DWORD *)(v14 + 720) )
            v7 = *(_DWORD *)(v14 + 720);
        }
      }
      if ( !v20 )
      {
        ExReleasePushLockSharedEx(v19, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    if ( (v6 & 0xFFFFFF30) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v10, v11);
    v15 = 0xFFFFLL;
    v16 = v7;
    if ( v7 > 0xFFFF )
      v16 = 0xFFFF;
    v17 = (v16 << 8) | v6 & 0xCF;
    if ( v17 != *(_DWORD *)v2 )
    {
      CInputSystemMetrics::WriteSystemMetricsKey((void *)0xFFFF, v17, 0);
      CInputSystemMetrics::WriteSystemMetricsKey(v18, v17, 1);
      *(_DWORD *)v2 = v17;
    }
    if ( v6 != *((_DWORD *)v2 + 1) )
    {
      CInputSystemMetrics::WritePointerDevicePresenceKey((CInputSystemMetrics *)v15, v6);
      *((_DWORD *)v2 + 1) = v6;
    }
    *((_DWORD *)v2 + 2) = v7;
  }
}
