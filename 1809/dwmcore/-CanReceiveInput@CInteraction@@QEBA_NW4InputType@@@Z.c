/*
 * XREFs of ?CanReceiveInput@CInteraction@@QEBA_NW4InputType@@@Z @ 0x180015F88
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_N@Z @ 0x18002C198 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 *     ?BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@IW4InputType@@_NPEAVCInteractionChain@@PEA_N@Z @ 0x1801F64A0 (-BuildInteractionChainAndUpdateTree@CManipulationContext@@SAXPEAVCVisualTree@@PEAVCInteraction@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CInteraction::CanReceiveInput(_QWORD *a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1[34] || (*(unsigned int (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 80LL))(a1, a2, 0LL) )
    return 1;
  return v2;
}
