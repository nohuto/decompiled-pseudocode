/*
 * XREFs of ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801A25EC
 * Callers:
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801A0BBC (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801A0C38 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18019F0D8 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A23F8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x1801E5D80 (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 */

char __fastcall CInteractionTracker::SetRequestedPosition(_DWORD *a1, __int64 *a2, int a3)
{
  int v3; // eax
  char v4; // di
  int v8; // eax
  unsigned __int32 v9; // xmm0_4
  double v10; // xmm2_8
  __int64 v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+28h] [rbp-20h]

  v3 = a1[42];
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      return v4;
    CInteractionTracker::TransitionToIdle((CInteractionTracker *)a1);
  }
  v8 = *((_DWORD *)a2 + 2);
  v13 = *a2;
  v14 = v8;
  if ( !a3 )
  {
    v9 = CInteractionTracker::ClampValueToBoundary((__int64)a1, 0LL, COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a2)).m128_u32[0];
    *(_QWORD *)&v10 = *((unsigned int *)a2 + 1);
    LODWORD(v13) = v9;
    HIDWORD(v13) = CInteractionTracker::ClampValueToBoundary(v11, 1LL, v10).m128_u32[0];
    v14 = 0;
  }
  CInteractionTracker::SetPosition((CInteractionTracker *)a1, (const struct D2DVector3 *)&v13);
  InteractionSourceManager::ReconfigureAllManipulations((InteractionSourceManager *)(a1 + 48));
  return 1;
}
