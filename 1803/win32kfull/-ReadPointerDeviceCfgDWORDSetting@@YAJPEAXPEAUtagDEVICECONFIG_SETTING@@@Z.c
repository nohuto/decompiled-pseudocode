/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C0069C7C
 * Callers:
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C00655A0 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00674A8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadPointerDeviceSettings @ 0x1C0069000 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0069470 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006962C (GetLocalMachineRegistryDWORDValues.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C0107DC0 (_GetPrecisionTouchPadThresholds.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C0107E50 (UpdatePTPConfigFromRegistry.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01105E8 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0111F70 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01D1810 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
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
