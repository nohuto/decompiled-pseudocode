/*
 * XREFs of IsHypervisorLpiCapable @ 0x1C0006430
 * Callers:
 *     AcpiRootIsFeatureSupported @ 0x1C002DA00 (AcpiRootIsFeatureSupported.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

bool IsHypervisorLpiCapable()
{
  char v0; // cl
  bool result; // al
  __int64 SystemInformation; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+28h] [rbp-20h]

  v0 = AcpiRootLpiCapableHypervisor;
  SystemInformation = 0LL;
  v3 = 0LL;
  if ( AcpiRootLpiCapableHypervisor != 2 )
    return v0 == 1;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL) < 0 || (v3 & 0x40000) == 0 )
  {
    v0 = 0;
    AcpiRootLpiCapableHypervisor = 0;
    return v0 == 1;
  }
  result = 1;
  AcpiRootLpiCapableHypervisor = 1;
  return result;
}
