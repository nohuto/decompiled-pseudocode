/*
 * XREFs of ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C0185A84
 * Callers:
 *     NtSetCursorInputSpace @ 0x1C01136A0 (NtSetCursorInputSpace.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0051384 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0051F7C (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 */

__int64 __fastcall CInputConfig::BindMouse(CInputConfig *this, struct _LUID a2)
{
  CInputConfig *v2; // rdi
  CCursorClip *v4; // rcx

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  *((struct _LUID *)v2 + 2) = a2;
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)v2 + 16));
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CCursorClip::OnDisplayStateChange(v4);
  return 0LL;
}
