/*
 * XREFs of RIMSetDeviceOutputConfig @ 0x1C005506C
 * Callers:
 *     RIMOnDisplayStateChange @ 0x1C0054E10 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1C00E9050 (RIMFindMonitorForDigitizer.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C00EA954 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C00551B8 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutp.c)
 *     GetPointerDeviceConfig @ 0x1C0055320 (GetPointerDeviceConfig.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     RIMEndAllActiveContacts @ 0x1C00585B0 (RIMEndAllActiveContacts.c)
 *     rimSetDeviceDisplayConfig @ 0x1C0058974 (rimSetDeviceDisplayConfig.c)
 *     RIMSuppressAllActiveContacts @ 0x1C00EDDB0 (RIMSuppressAllActiveContacts.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMSetDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // r9
  _BYTE v14[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  char v16; // [rsp+30h] [rbp-68h]
  _BYTE v17[72]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+88h] [rbp-10h]

  v4 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v9 = *((_QWORD *)a1 + 60);
      v10 = *((_QWORD *)a1 + 42);
      if ( *(_DWORD *)(v9 + 24) == 7 )
        RIMSuppressAllActiveContacts(v10);
      else
        RIMEndAllActiveContacts(v10, a2, 0LL);
    }
    CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v14);
    v18 = 0LL;
    if ( (int)GetPointerDeviceConfig(a1, v14, v17) < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      *((_DWORD *)a2 + 39) = 0;
    }
    else
    {
      *((_DWORD *)a2 + 39) = 1;
      rimSetPointerDeviceOutputConfig(a1, a2, (struct CLockedOutputConfig *)v14, (struct CRegionConfig *)v17);
    }
    if ( !v16 )
    {
      ExReleasePushLockSharedEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  if ( *((_DWORD *)a1 + 212) && a4 && *((_DWORD *)a1 + 216) != 4 && *(_DWORD *)a4 )
  {
    while ( 1 )
    {
      v13 = (_DWORD *)(*(_QWORD *)(a4 + 8) + 200LL * v4);
      if ( v13[4] == *((_DWORD *)a1 + 345) && v13[5] == *((_DWORD *)a1 + 346) && v13[7] == *((_DWORD *)a1 + 347) )
        break;
      if ( ++v4 >= *(_DWORD *)a4 )
        return;
    }
    rimSetDeviceDisplayConfig(a1, a2, a3);
  }
}
