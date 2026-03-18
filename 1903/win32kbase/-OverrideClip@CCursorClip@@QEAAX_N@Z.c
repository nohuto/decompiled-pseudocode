/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x1C0177AD0
 * Callers:
 *     SetInputDelegationModeImpl @ 0x1C008FAEC (SetInputDelegationModeImpl.c)
 *     DisableDelegation @ 0x1C009DD90 (DisableDelegation.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0037C84 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C007DFD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  CCursorClip *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  bool v8; // sf

  v2 = gpCursorClip;
  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)gpCursorClip + 32));
  v7 = 2 * v3 - 1;
  v8 = v7 + *((_DWORD *)v2 + 18) < 0;
  *((_DWORD *)v2 + 18) += v7;
  if ( v8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  CPushLock::ReleaseLock((CCursorClip *)((char *)v2 + 32));
}
