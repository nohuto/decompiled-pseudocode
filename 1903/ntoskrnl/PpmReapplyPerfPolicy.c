/*
 * XREFs of PpmReapplyPerfPolicy @ 0x14077378C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1406A0B54 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x140772AA8 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B24B0 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408B27D0 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x140194168 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x140194510 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074311C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14074570C (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140772AD8 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408A7548 (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  LONG result; // eax
  char v4; // si
  char v5; // di

  v1 = a1;
  if ( (*a1 & 0x1800) != 0 )
  {
    LOBYTE(a1) = (*a1 & 0x800) != 0;
    v2 = PopInitializeHeteroProcessors(a1);
    if ( (*(_DWORD *)v1 & 0x800) != 0 || v2 )
      *(_DWORD *)v1 |= 0x200Eu;
  }
  PpmUpdateProcessorPolicy(v1, 0LL);
  result = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    result = *(_DWORD *)v1;
  }
  if ( (result & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    result = *(_DWORD *)v1;
  }
  if ( (result & 8) != 0 )
  {
    PpmCheckReInit();
    result = *(_DWORD *)v1;
  }
  v4 = 0;
  v5 = 1;
  if ( (result & 2) != 0 )
  {
    v5 = 0;
    v4 = 1;
    PpmPerfUpdateDomainPolicy(0);
    result = *(_DWORD *)v1;
  }
  if ( (result & 4) != 0 )
  {
    if ( v4 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      result = *(_DWORD *)v1;
    }
    v5 = 0;
    if ( (result & 0x2000) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints();
  }
  if ( v5 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
