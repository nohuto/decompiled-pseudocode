/*
 * XREFs of ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0063140
 * Callers:
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0105C70 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0105E30 (NtGdiGetGammaRampCapability.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C002A340 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C002ABA4 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0066A70 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

void __fastcall DEVLOCKOBJ::vLockGammaRamp(DEVLOCKOBJ *this, struct XDCOBJ *a2)
{
  __int64 v4; // rbx
  HSEMAPHORE v5; // rcx
  int v6; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  *((_QWORD *)this + 1) = ghsemDynamicModeChange;
  v7 = v4;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( *(_QWORD *)a2
    && ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x8200) == 0x200 || !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7)) )
  {
    *(_QWORD *)this = ghsemGreLock;
    v5 = (HSEMAPHORE)ghsemGreLock;
  }
  else
  {
    v5 = *(HSEMAPHORE *)(v4 + 56);
    *(_QWORD *)this = v5;
  }
  *((_QWORD *)this + 2) = v4;
  *((_DWORD *)this + 6) = 9;
  EngAcquireSemaphore(v5);
  v6 = 12;
  if ( *(PERESOURCE *)this == ghsemGreLock )
    v6 = 2;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemTrg", *(_QWORD *)this, v6);
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
}
