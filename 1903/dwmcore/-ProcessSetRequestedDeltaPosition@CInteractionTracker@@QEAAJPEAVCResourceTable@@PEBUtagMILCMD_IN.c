/*
 * XREFs of ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x1801DB8B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801DAEBC (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DD3C0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedDeltaPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *a3)
{
  float v3; // xmm0_4
  float v5; // xmm1_4
  __int64 v6; // r8
  int v8; // eax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((float *)this + 18) + *((float *)a3 + 2);
  v5 = *((float *)this + 19) + *((float *)a3 + 3);
  v6 = *((unsigned int *)a3 + 4);
  *(float *)v10 = v3;
  v10[2] = 0;
  *(float *)&v10[1] = v5;
  if ( (unsigned __int8)CInteractionTracker::SetRequestedPosition(this, v10, v6) )
  {
    v8 = *((_DWORD *)this + 45);
    if ( v8 <= *((_DWORD *)a3 + 6) )
      v8 = *((_DWORD *)a3 + 6);
    *((_DWORD *)this + 45) = v8;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
