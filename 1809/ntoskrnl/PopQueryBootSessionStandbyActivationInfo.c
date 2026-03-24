/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1402D6E44
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D56DC (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_14043FFC0 )
  {
    qword_14043FFC0(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_14043C4C0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
