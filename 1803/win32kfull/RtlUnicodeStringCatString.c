/*
 * XREFs of RtlUnicodeStringCatString @ 0x1C006980C
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00674A8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00694D8 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006962C (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01105E8 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C019DAE4 (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C019E0A8 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01D1D80 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00698B8 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v4; // r8d
  __int64 v5; // r10
  __int16 v6; // r11
  __int16 v7; // dx
  size_t v8; // r9
  char *v9; // rcx
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = RtlUnicodeStringValidateDestWorker(DestinationString, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = 0x7FFFLL;
    v6 = v15;
    v4 = 0;
    v7 = 0;
    v8 = v14 - v15;
    if ( v14 == v15 )
      goto LABEL_16;
    v9 = (char *)v13 + 2 * v15 - (_QWORD)pszSrc;
    do
    {
      if ( !v5 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v9) = *pszSrc;
      --v5;
      ++pszSrc;
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( !v8 && v5 )
    {
LABEL_16:
      if ( *pszSrc )
        v4 = -2147483643;
    }
    DestinationString->Length = 2 * (v6 + v7);
  }
  return v4;
}
