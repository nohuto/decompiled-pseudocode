/*
 * XREFs of GetHvPpmCapabilities @ 0x1C00201C8
 * Callers:
 *     RegisterHvIdleStates @ 0x1C00202F0 (RegisterHvIdleStates.c)
 *     InitDriver @ 0x1C0035008 (InitDriver.c)
 *     ProcLibGlobalInit @ 0x1C0035560 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001C614 (GetRegistryDwordValueNoDefault.c)
 */

int __fastcall GetHvPpmCapabilities(bool *a1, bool *a2, char *a3)
{
  bool v6; // bl
  bool v7; // di
  char v8; // bp
  int result; // eax
  int v10; // esi
  int v11; // [rsp+20h] [rbp-58h] BYREF
  int v12; // [rsp+24h] [rbp-54h] BYREF
  __int64 v13; // [rsp+28h] [rbp-50h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]

  v13 = 0LL;
  v14 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  result = ZwQuerySystemInformation(SystemHypervisorInformation, &v13, 0x10u, 0LL);
  if ( result >= 0 )
  {
    v10 = v14;
    v6 = (v14 & 8) != 0;
    if ( (v14 & 0x400) != 0 )
    {
      result = GetRegistryDwordValueNoDefault(
                 (__int64)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Processor",
                 (__int64)L"LegacyHvAlgorithm",
                 (__int64)&v11);
      if ( result < 0 || !v11 )
      {
        result = HvlQueryActiveHypervisorProcessorCount(&v12);
        if ( result >= 0 )
        {
          result = KeQueryActiveProcessorCountEx(0xFFFFu);
          v7 = result == v12;
        }
      }
    }
    if ( (*(_QWORD *)&v10 & 0x20000LL) != 0 )
      v8 = 1;
  }
  if ( a1 )
    *a1 = v6;
  if ( a2 )
    *a2 = v7;
  if ( a3 )
    *a3 = v8;
  return result;
}
