/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DBCE0
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801DA230 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801DA2AC (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED190 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801D8640 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DB9B4 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DC770 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801DED78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021E0AC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 a1, __int64 *a2, int a3)
{
  int v3; // eax
  char v4; // di
  int v8; // eax
  unsigned __int32 v9; // xmm0_4
  double v10; // xmm2_8
  __int64 v11; // rcx
  CInteractionTrackerBindingManager *v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+28h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 168);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      return v4;
    CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
  }
  v8 = *((_DWORD *)a2 + 2);
  v14 = *a2;
  v15 = v8;
  if ( a3 )
  {
    if ( a3 == 1 )
      *(_BYTE *)(a1 + 533) |= 2u;
  }
  else
  {
    v9 = CInteractionTracker::ClampValueToBoundary(a1, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v10 = *((unsigned int *)a2 + 1);
    LODWORD(v14) = v9;
    HIDWORD(v14) = CInteractionTracker::ClampValueToBoundary(v11, 1LL, v10).m128_u32[0];
    v15 = 0;
  }
  CInteractionTracker::SetPosition(a1, (__int64)&v14, 0);
  v12 = *(CInteractionTrackerBindingManager **)(a1 + 632);
  if ( v12 )
  {
    *(_BYTE *)(a1 + 533) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
      v12,
      (struct CInteractionTracker *)a1,
      (const struct D2DVector3 *)&v14,
      1);
    CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)a1, 0);
  }
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 192));
  return 1;
}
