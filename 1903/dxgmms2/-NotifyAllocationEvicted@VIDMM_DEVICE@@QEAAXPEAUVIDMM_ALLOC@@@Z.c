/*
 * XREFs of ?NotifyAllocationEvicted@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006384C
 * Callers:
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C00636C4 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C008454C (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     ?DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00638C0 (-DecrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063E94 (VidMmiShouldChargeAllocationAgainstBudget.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationEvicted(VIDMM_DEVICE ***this, struct VIDMM_ALLOC *a2)
{
  _QWORD *v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( (unsigned __int8)VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::DecrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 14);
  v5 = (VIDMM_DEVICE *)v3[14];
  if ( *((_QWORD **)v5 + 1) != v3 + 14
    || (v6 = (VIDMM_DEVICE **)v3[15], *v6 != v4)
    || (*v6 = v5, *((_QWORD *)v5 + 1) = v6, v7 = this[21], *v7 != (VIDMM_DEVICE *)(this + 20)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 20;
  v3[15] = v7;
  *v7 = v4;
  this[21] = (VIDMM_DEVICE **)v4;
}
