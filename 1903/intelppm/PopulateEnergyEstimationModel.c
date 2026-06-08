/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C003953C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00396F4 (ProcLibGlobalInit.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0001F64 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001FC34 (GetRegistryDwordValueNoDefault.c)
 *     ReadEnergyEquation @ 0x1C0039628 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0039DB0 (ReadPowerCurve.c)
 *     IsValidPowerCurve @ 0x1C0039F50 (IsValidPowerCurve.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C003A9AC (ProcLibTraceInvalidPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  int v9; // r9d
  int result; // eax
  int v11; // ecx
  int v12; // [rsp+20h] [rbp-1B8h]
  int v13[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = a1;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = a1;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    if ( (unsigned __int8)IsValidPowerCurve(a2, v6, v7, (unsigned int)a2[1]) )
    {
      a2[1] = v9 | 1;
    }
    else
    {
      LOBYTE(v8) = a1;
      ProcLibTraceInvalidPowerCurve(v8, (unsigned __int8)v9 >> 1, a2 + 2);
    }
  }
  v12 = a1;
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v12);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v13), result < 0)
    || (v11 = v13[0], result = v13[0] - 1, (unsigned int)(v13[0] - 1) > 0x3E7F) )
  {
    v11 = 750;
  }
  *a2 = v11;
  return result;
}
