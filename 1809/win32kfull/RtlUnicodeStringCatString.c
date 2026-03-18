/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C00AC764
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00AC468 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00AC5D4 (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C011956C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01196C0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0123CD4 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     AccessPTPEnabledStatus @ 0x1C0128920 (AccessPTPEnabledStatus.c)
 *     ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C01333CC (-OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01BED54 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01BF33C (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F6698 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00AC7DC (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00AC838 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax
  __int16 v5; // bx
  size_t v6; // [rsp+20h] [rbp-28h]
  size_t v7; // [rsp+20h] [rbp-28h]
  ULONG v8; // [rsp+28h] [rbp-20h]
  size_t v9; // [rsp+30h] [rbp-18h] BYREF
  wchar_t *v10; // [rsp+38h] [rbp-10h] BYREF
  size_t pcchNewDestLength; // [rsp+60h] [rbp+18h] BYREF
  size_t v12; // [rsp+68h] [rbp+20h] BYREF

  result = RtlUnicodeStringValidateDestWorker(DestinationString, &v10, &v12, &v9, v6, v8);
  if ( result >= 0 )
  {
    v5 = v9;
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(&v10[v9], v12 - v9, &pcchNewDestLength, pszSrc, v7);
    DestinationString->Length = 2 * (pcchNewDestLength + v5);
  }
  return result;
}
