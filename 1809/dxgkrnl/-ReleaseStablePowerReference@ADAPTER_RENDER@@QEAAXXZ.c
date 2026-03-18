/*
 * XREFs of ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C705C
 * Callers:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C002EB84 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C022BC60 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01CEFC8 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReference(ADAPTER_RENDER *this)
{
  if ( (*((_DWORD *)this + 368))-- == 1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 888LL) )
      ADAPTER_RENDER::DdiSetStablePowerState(this, 0);
  }
}
