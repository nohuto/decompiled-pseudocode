/*
 * XREFs of PpmReapplyPerfPolicy @ 0x14074F024
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x14058ABB4 (PpmSetProfilePolicySetting.c)
 *     PpmReinitializeHeteroEngine @ 0x14074E488 (PpmReinitializeHeteroEngine.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140875734 (PpmCompareAndApplyPolicySettings.c)
 *     PpmPerfProcCapFloorSettingCallback @ 0x140875A20 (PpmPerfProcCapFloorSettingCallback.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x14008BC30 (PpmReleaseLock.c)
 *     PpmParkApplyPolicy @ 0x140189E70 (PpmParkApplyPolicy.c)
 *     PpmCheckApplyParkConstraints @ 0x14018A1F8 (PpmCheckApplyParkConstraints.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140719B8C (PpmPerfUpdateDomainPolicy.c)
 *     PpmUpdateProcessorPolicy @ 0x14071CB38 (PpmUpdateProcessorPolicy.c)
 *     PpmCheckInitProcessors @ 0x14074EE38 (PpmCheckInitProcessors.c)
 *     PpmCheckReInit @ 0x14074F114 (PpmCheckReInit.c)
 *     PopInitializeHeteroProcessors @ 0x14074F434 (PopInitializeHeteroProcessors.c)
 *     PpmPerfResizeHistoryAll @ 0x14086B27C (PpmPerfResizeHistoryAll.c)
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
