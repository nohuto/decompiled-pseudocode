/*
 * XREFs of PpmReapplyPerfPolicy @ 0x140750214
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14058BBB4 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x14074F678 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140876994 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140876C80 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     PpmParkApplyPolicy @ 0x140189FB0 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A338 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14071AE2C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14071DDD8 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x140750028 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x14086C4DC (PpmPerfResizeHistoryAll.c)
 */

void __fastcall PpmReapplyPerfPolicy(_DWORD *a1)
{
  _WORD *v1; // rbx
  char v2; // al
  int v3; // eax
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
  v3 = *(_DWORD *)v1;
  if ( (*(_DWORD *)v1 & 4) != 0 )
  {
    PpmParkApplyPolicy();
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 0x10) != 0 )
  {
    PpmPerfResizeHistoryAll();
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 8) != 0 )
  {
    PpmCheckReInit();
    v3 = *(_DWORD *)v1;
  }
  v4 = 0;
  v5 = 1;
  if ( (v3 & 2) != 0 )
  {
    v5 = 0;
    v4 = 1;
    PpmPerfUpdateDomainPolicy(0);
    v3 = *(_DWORD *)v1;
  }
  if ( (v3 & 4) != 0 )
  {
    if ( v4 )
    {
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
      v3 = *(_DWORD *)v1;
    }
    v5 = 0;
    if ( (v3 & 0x2000) != 0 )
    {
      PpmCheckInitProcessors(1);
      return;
    }
    PpmCheckApplyParkConstraints();
  }
  if ( v5 )
    PpmReleaseLock(&PpmPerfPolicyLock);
}
