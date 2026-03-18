/*
 * XREFs of ?NotifyAllocationResident@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00847F0
 * Callers:
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0084710 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 * Callees:
 *     VidMmiShouldChargeAllocationAgainstBudget @ 0x1C0063E94 (VidMmiShouldChargeAllocationAgainstBudget.c)
 *     ?IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0084864 (-IncrementCurrentUsage@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::NotifyAllocationResident(VIDMM_DEVICE ***this, __int64 **a2)
{
  _QWORD *v3; // r11
  VIDMM_DEVICE *v4; // rax
  VIDMM_DEVICE *v5; // rdx
  VIDMM_DEVICE **v6; // rcx
  VIDMM_DEVICE **v7; // rdx

  if ( VidMmiShouldChargeAllocationAgainstBudget(a2) )
    VIDMM_DEVICE::IncrementCurrentUsage((VIDMM_DEVICE *)this, (struct VIDMM_ALLOC *)v3);
  v4 = (VIDMM_DEVICE *)(v3 + 14);
  v5 = (VIDMM_DEVICE *)v3[14];
  if ( *((_QWORD **)v5 + 1) != v3 + 14
    || (v6 = (VIDMM_DEVICE **)v3[15], *v6 != v4)
    || (*v6 = v5, *((_QWORD *)v5 + 1) = v6, v7 = this[19], *v7 != (VIDMM_DEVICE *)(this + 18)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v4 = this + 18;
  v3[15] = v7;
  *v7 = v4;
  this[19] = (VIDMM_DEVICE **)v4;
}
