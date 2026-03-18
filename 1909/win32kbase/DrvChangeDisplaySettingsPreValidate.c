/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C00474DC
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0046FBC (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00478FC (DrvChangeDisplaySettings.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C003A300 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x1C003CF30 (UserIsWddmConnectedSession.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0045F78 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C00475E0 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        wchar_t *DeviceFromName,
        __int64 a3,
        int a4,
        int a5,
        wchar_t **a6,
        int *a7)
{
  int v7; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  wchar_t *i; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v7 = 0;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v16 = WdLogNewEntry5_WdTrace(v12);
      WdLogEvent5_WdTrace(v16);
      return 4294967293LL;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v17 = WdLogNewEntry5_WdTrace(String1);
      WdLogEvent5_WdTrace(v17);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    DeviceFromName = DrvGetDeviceFromName(String1);
    if ( DeviceFromName )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession() )
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
      v18 = WdLogNewEntry5_WdTrace(i);
      *(_QWORD *)(v18 + 24) = 2LL;
      goto LABEL_25;
    }
    v18 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v18 + 24) = 0LL;
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
    v18 = WdLogNewEntry5_WdTrace(String1);
    *(_QWORD *)(v18 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v18);
  return 4294967291LL;
}
