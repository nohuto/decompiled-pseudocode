/*
 * XREFs of DrvChangeDisplaySettingsPreValidate @ 0x1C004BD5C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004B98C (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C004C198 (DrvChangeDisplaySettings.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C0015070 (DrvGetDeviceFromName.c)
 *     UserIsWddmConnectedSession @ 0x1C0016E18 (UserIsWddmConnectedSession.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C0049B60 (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C004BE64 (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 */

__int64 __fastcall DrvChangeDisplaySettingsPreValidate(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _QWORD *a6,
        int *a7)
{
  int v7; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  wchar_t *i; // rcx
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v7 = 0;
  if ( a4 == 1 )
  {
    if ( a5 && a3 && DrvIsPermanentSettingChangesDisabled() )
    {
      v17 = WdLogNewEntry5_WdTrace(v12);
      WdLogEvent5_WdTrace(v17);
      return 4294967293LL;
    }
    if ( (unsigned int)DrvIsTemporarySettingChangeDisabled() )
    {
      v18 = WdLogNewEntry5_WdTrace(String1);
      WdLogEvent5_WdTrace(v18);
      return 0xFFFFFFFFLL;
    }
  }
  if ( String1 )
  {
    if ( DrvGetDeviceFromName(String1) )
    {
LABEL_8:
      if ( (unsigned int)UserIsWddmConnectedSession() )
      {
        if ( v15 )
        {
          v7 = (*(_DWORD *)(v15 + 160) >> 23) & 1;
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
      if ( !a4 || !v15 || *(_QWORD *)(v15 + 136) || (*(_DWORD *)(v15 + 160) & 0x6000008) != 0 )
      {
        *a6 = v15;
        *a7 = v7;
        return 0LL;
      }
      v19 = WdLogNewEntry5_WdTrace(i);
      *(_QWORD *)(v19 + 24) = 2LL;
      goto LABEL_25;
    }
    v19 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v19 + 24) = 0LL;
  }
  else
  {
    if ( !a3 )
      goto LABEL_8;
    if ( a2 ? *(_QWORD *)(a2 + 2576) : 0LL )
      goto LABEL_8;
    v19 = WdLogNewEntry5_WdTrace(String1);
    *(_QWORD *)(v19 + 24) = 1LL;
  }
LABEL_25:
  WdLogEvent5_WdTrace(v19);
  return 4294967291LL;
}
