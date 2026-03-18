/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C004FED4
 * Callers:
 *     FastGetProfileStringW @ 0x1C0010150 (FastGetProfileStringW.c)
 *     NtUserGetHDevName @ 0x1C004FCC0 (NtUserGetHDevName.c)
 *     DrvGetHdevName @ 0x1C004FEA0 (DrvGetHdevName.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00604F0 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00780DC (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00BA434 (-GetSpriteFillColor@@YAKXZ.c)
 *     EtwTraceAuditApiSetWindowsHookEx @ 0x1C010A7A0 (EtwTraceAuditApiSetWindowsHookEx.c)
 *     WinSqmAddToStreamEx @ 0x1C011E3A0 (WinSqmAddToStreamEx.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C0143218 (rimReadSingleDigitizerToMonitorMappings.c)
 *     InitCreateUserSubsystem @ 0x1C02651A8 (InitCreateUserSubsystem.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00BA6E4 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, size_t *a3)
{
  int v3; // r9d
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW(a1, a2, a3, (STRSAFE_PCNZWCH)a3, v5);
  }
  return (unsigned int)v3;
}
