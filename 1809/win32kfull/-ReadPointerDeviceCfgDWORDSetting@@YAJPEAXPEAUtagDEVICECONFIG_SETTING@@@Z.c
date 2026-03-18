/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C01197FC
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00AA230 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C00AC400 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00AC5D4 (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011956C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01196C0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C0128AB0 (_GetPrecisionTouchPadThresholds.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C0128B50 (UpdatePTPConfigFromRegistry.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0132370 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0132D40 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F60AC (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, PCWSTR *a2)
{
  _DWORD *v4; // rbx
  NTSTATUS v5; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  RtlInitUnicodeString(&ValueName, *a2);
  v4 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v4 )
  {
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v4, Length, &Length);
    if ( v5 >= 0 && v4[1] == 4 )
      *((_DWORD *)a2 + 3) = v4[3];
    Win32FreePool(v4);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v5;
}
