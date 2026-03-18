/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140776D6C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14069D694 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1408B1D10 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x1408B2030 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmParkApplyPolicy @ 0x140194948 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x140194CF0 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14074501C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14074760C (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x1407760B8 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x1408A6DA8 (PpmPerfResizeHistoryAll.c)
 */

LONG __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LONG result; // eax
  char v7; // si
  char v8; // di

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
  v7 = 0;
  v8 = 1;
  if ( (result & 2) != 0 )
  {
    v8 = 0;
    v7 = 1;
    PpmPerfUpdateDomainPolicy(0);
    result = *(_DWORD *)v1;
  }
  if ( (result & 4) != 0 )
  {
    if ( v7 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      result = *(_DWORD *)v1;
    }
    v8 = 0;
    if ( (result & 0x2000) != 0 )
      return PpmCheckInitProcessors(1);
    result = PpmCheckApplyParkConstraints(v4, v3, v5);
  }
  if ( v8 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
