/*
 * XREFs of ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01F5C78
 * Callers:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00343C8 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C02604D0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01FD1C0 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReference(ADAPTER_RENDER *this)
{
  if ( (*((_DWORD *)this + 368))-- == 1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 872LL) )
      ADAPTER_RENDER::DdiSetStablePowerState(this, 0);
  }
}
