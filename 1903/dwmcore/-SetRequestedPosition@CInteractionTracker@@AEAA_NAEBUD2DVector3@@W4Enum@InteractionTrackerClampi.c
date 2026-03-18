/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DD3C0
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801DB8B0 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_IN.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801DB92C (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAF88 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801D9D50 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DD044 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DDE88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801E0488 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x18021F7BC (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(__int64 a1, float *a2, int a3)
{
  int v3; // eax
  char v4; // di
  float v8; // eax
  unsigned __int32 v9; // xmm0_4
  double v10; // xmm2_8
  float v11; // xmm3_4
  __int64 v12; // rcx
  float v13; // xmm0_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm4_4
  CInteractionTrackerBindingManager *v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-30h] BYREF
  float v20; // [rsp+28h] [rbp-28h]
  float v21[4]; // [rsp+30h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 168);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      return v4;
    CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
  }
  v8 = a2[2];
  v19 = *(_QWORD *)a2;
  v20 = v8;
  if ( a3 )
  {
    v14 = v20;
    v13 = *((float *)&v19 + 1);
    v11 = *(float *)&v19;
  }
  else
  {
    v9 = CInteractionTracker::ClampValueToBoundary(a1, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v10 = *((unsigned int *)a2 + 1);
    LODWORD(v19) = v9;
    v11 = *(float *)&v9;
    LODWORD(v13) = CInteractionTracker::ClampValueToBoundary(v12, 1LL, v10).m128_u32[0];
    v14 = 0.0;
    *((float *)&v19 + 1) = v13;
    v20 = 0.0;
  }
  v15 = v13 - *(float *)(a1 + 76);
  v16 = v14 - *(float *)(a1 + 80);
  v21[0] = v11 - *(float *)(a1 + 72);
  v21[1] = v15;
  v21[2] = v16;
  CInteractionTracker::SetPosition(a1, (__int64)&v19, 0);
  v17 = *(CInteractionTrackerBindingManager **)(a1 + 632);
  if ( v17 )
  {
    *(_BYTE *)(a1 + 533) |= 1u;
    CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
      v17,
      (struct CInteractionTracker *)a1,
      (const struct D2DVector3 *)v21,
      1);
    CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)a1, 0);
  }
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 192));
  return 1;
}
