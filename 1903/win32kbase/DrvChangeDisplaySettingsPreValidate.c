/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C004C4E0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B9BC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C004BEDC (DrvChangeDisplaySettings.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C003C3B0 (DrvGetDeviceFromName.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C004AB0C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C004C438 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     UserIsWddmConnectedSession @ 0x1C004FD20 (UserIsWddmConnectedSession.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        wchar_t *a2,
        __int64 a3,
        int a4,
        int a5,
        wchar_t **a6,
        int *a7)
{
  int v7; // edi
  wchar_t *DeviceFromName; // rbx
  __int64 v12; // rcx
  wchar_t *i; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v7 = 0;
  DeviceFromName = a2;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v15 = WdLogNewEntry5_WdTrace(v12);
      WdLogEvent5_WdTrace(v15);
      return 4294967293LL;
    }
    if ( DrvIsTemporarySettingChangeDisabled() )
    {
      v16 = WdLogNewEntry5_WdTrace(String1);
      WdLogEvent5_WdTrace(v16);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession(String1, a2) )
      {
        if ( DeviceFromName )
        {
          v7 = (*((_DWORD *)DeviceFromName + 40) >> 23) & 1;
        }
        else
        {
          for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
          {
            if ( (*((_DWORD *)i + 40) & 0x800000) != 0 )
            {
              v7 = 1;
              break;
            }
          }
        }
      }
      if ( !a4
        || !DeviceFromName
        || *((_QWORD *)DeviceFromName + 17)
        || (*((_DWORD *)DeviceFromName + 40) & 0x6000008) != 0 )
      {
        *a6 = DeviceFromName;
        *a7 = v7;
        return 0LL;
      }
      v17 = WdLogNewEntry5_WdTrace(i);
      *(_QWORD *)(v17 + 24) = 2LL;
      goto LABEL_25;
    }
    v17 = WdLogNewEntry5_WdTrace(String1);
    *(_QWORD *)(v17 + 24) = 0LL;
  }
  else
  {
    if ( !a3 )
    {
      DeviceFromName = 0LL;
      goto LABEL_8;
    }
    if ( DeviceFromName )
      DeviceFromName = (wchar_t *)*((_QWORD *)DeviceFromName + 322);
    if ( DeviceFromName )
      goto LABEL_8;
    v17 = WdLogNewEntry5_WdTrace(String1);
    *(_QWORD *)(v17 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v17);
  return 4294967291LL;
}
