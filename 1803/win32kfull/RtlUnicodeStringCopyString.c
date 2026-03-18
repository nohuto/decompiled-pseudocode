/*
 * XREFs of RtlUnicodeStringCopyString @ 0x1C006974C
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00674A8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006962C (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01105E8 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01D1D80 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1C00697B0 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C00698B8 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  int v3; // r8d
  __int64 v4; // r9
  size_t v6; // [rsp+20h] [rbp-18h]
  size_t v7; // [rsp+20h] [rbp-18h]
  ULONG v8; // [rsp+28h] [rbp-10h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF
  size_t pcchDest; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *ppszDest; // [rsp+58h] [rbp+20h] BYREF

  pcchNewDestLength = (size_t)pszSrc;
  v3 = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, 0LL, v6, v8);
  if ( v3 >= 0 )
  {
    pcchNewDestLength &= v4;
    v3 = RtlWideCharArrayCopyStringWorker(ppszDest, pcchDest, &pcchNewDestLength, L"\\Registry\\Machine", v7);
    DestinationString->Length = 2 * pcchNewDestLength;
  }
  return v3;
}
