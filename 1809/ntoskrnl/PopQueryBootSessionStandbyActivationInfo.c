/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1402D7034
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D58CC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_140441080 )
  {
    qword_140441080(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_14043D580);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
