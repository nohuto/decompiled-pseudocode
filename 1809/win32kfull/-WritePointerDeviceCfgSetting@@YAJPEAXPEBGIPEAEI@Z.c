/*
 * XREFs of ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F6630
 * Callers:
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F64C0 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F6698 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     WritePTPSettingValues @ 0x1C01F68B0 (WritePTPSettingValues.c)
 *     WritePointerDeviceSettings @ 0x1C01F6960 (WritePointerDeviceSettings.c)
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
