/*
 * XREFs of ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01D1D24
 * Callers:
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01D1BC8 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01D1D80 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     WritePTPSettingValues @ 0x1C01D1F50 (WritePTPSettingValues.c)
 *     WritePointerDeviceSettings @ 0x1C01D1FF8 (WritePointerDeviceSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WritePointerDeviceCfgSetting(
        HANDLE KeyHandle,
        const unsigned __int16 *a2,
        ULONG a3,
        unsigned __int8 *a4,
        ULONG DataSize)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, a3, a4, DataSize);
}
