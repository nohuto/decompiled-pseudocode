/*
 * XREFs of ?AddStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01C5E20
 * Callers:
 *     ?EnableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C01BD488 (-EnableStablePowerState@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C022BC60 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01CEFC8 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::AddStablePowerReference(ADAPTER_RENDER *this)
{
  __int64 v2; // rcx

  v2 = *((unsigned int *)this + 368);
  if ( !(_DWORD)v2 && *(_QWORD *)(*((_QWORD *)this + 2) + 888LL) != v2 )
  {
    ADAPTER_RENDER::DdiSetStablePowerState(this, 1);
    LODWORD(v2) = *((_DWORD *)this + 368);
  }
  *((_DWORD *)this + 368) = v2 + 1;
}
