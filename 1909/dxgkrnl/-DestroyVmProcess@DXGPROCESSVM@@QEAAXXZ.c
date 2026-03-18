/*
 * XREFs of ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C025DED0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000CA50 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C900 (-ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ.c)
 *     ?DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ @ 0x1C00446C0 (-DecrementNumVmProcesses@DXGPROCESSVMWP@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESSVM::DestroyVmProcess(DXGPROCESSVM *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rdx

  v1 = (_QWORD *)((char *)this + 448);
  v3 = *(_QWORD *)(*((_QWORD *)this + 54) + 432LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v3 + 64));
  v4 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)(v3 + 72) = 0LL;
  ExReleasePushLockExclusiveEx(v3 + 64, 0LL);
  KeLeaveCriticalRegion();
  v1[1] = 0LL;
  *v1 = 0LL;
  v6 = *((_DWORD *)this + 119);
  if ( v6 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 54), v6);
    *((_DWORD *)this + 119) = 0;
  }
  DXGPROCESSVMWP::DecrementNumVmProcesses(*((DXGVIRTUALMACHINE ***)this + 54));
  DXGPROCESS::ReleaseReferenceSafe(*((DXGPROCESS **)this + 54), v7);
  *((_QWORD *)this + 54) = 0LL;
}
