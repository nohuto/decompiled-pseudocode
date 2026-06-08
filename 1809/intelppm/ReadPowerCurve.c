/*
 * XREFs of ReadPowerCurve @ 0x1C0036C30
 * Callers:
 *     PopulateEnergyEstimationModel @ 0x1C0036040 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0002F78 (RtlStringCchPrintfW.c)
 *     RtlStringCopyWorkerW @ 0x1C0002FF8 (RtlStringCopyWorkerW.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0023418 (GetRegistryDwordValueNoDefault.c)
 */

__int64 __fastcall ReadPowerCurve(unsigned __int8 a1, __int64 a2)
{
  int RegistryDwordValueNoDefault; // ebx
  size_t *v4; // r8
  unsigned int v5; // eax
  _BYTE *v6; // rsi
  unsigned int i; // r14d
  size_t cchToCopy; // [rsp+20h] [rbp-E0h]
  size_t cchToCopya; // [rsp+20h] [rbp-E0h]
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12[4]; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v15[192]; // [rsp+1C0h] [rbp+C0h] BYREF

  LODWORD(cchToCopy) = a1;
  RegistryDwordValueNoDefault = RtlStringCchPrintfW(
                                  pszDest,
                                  0xC0uLL,
                                  L"%s\\EfficiencyClass\\%d\\PowerCurve",
                                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU");
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_16;
  RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PointCount", (__int64)&v11);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_16;
  if ( !v11 )
  {
    RegistryDwordValueNoDefault = -1073741807;
LABEL_16:
    *(_DWORD *)(a2 + 4) &= 0xFFFFFF01;
    memset((void *)(a2 + 8), 0, 0x20uLL);
    return (unsigned int)RegistryDwordValueNoDefault;
  }
  if ( v11 > 8 )
    RegistryDwordValueNoDefault = -2147483643;
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_16;
  RegistryDwordValueNoDefault = RtlStringCopyWorkerW(v15, 0xC0uLL, v4, pszDest, cchToCopy);
  if ( RegistryDwordValueNoDefault < 0 )
    goto LABEL_16;
  v5 = v11;
  v6 = (_BYTE *)(a2 + 8);
  for ( i = 0; i < v5; v6 += 4 )
  {
    LODWORD(cchToCopya) = i;
    RegistryDwordValueNoDefault = RtlStringCchPrintfW(pszDest, 0xC0uLL, L"%s\\%d", v15, cchToCopya);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_16;
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"FrequencyPercent",
                                    (__int64)v12);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_16;
    *v6 = v12[0];
    RegistryDwordValueNoDefault = GetRegistryDwordValueNoDefault(
                                    (__int64)pszDest,
                                    (__int64)L"PowerEnvelope",
                                    (__int64)&v13);
    if ( RegistryDwordValueNoDefault < 0 )
      goto LABEL_16;
    ++i;
    v5 = v11;
    *(_DWORD *)v6 = (v13 << 8) | (unsigned __int8)*(_DWORD *)v6;
  }
  *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (2 * v5)) & 0xFE;
  return (unsigned int)RegistryDwordValueNoDefault;
}
