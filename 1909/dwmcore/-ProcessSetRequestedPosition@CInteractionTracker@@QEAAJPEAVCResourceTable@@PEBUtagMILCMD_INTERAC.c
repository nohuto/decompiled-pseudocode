/*
 * XREFs of ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x1801DA2AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801D9834 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DBCE0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPosition(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *a3)
{
  int v3; // xmm0_4
  int v4; // xmm1_4
  __int64 v6; // r8
  int v8; // eax
  _DWORD v10[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v4 = *((_DWORD *)a3 + 3);
  v6 = *((unsigned int *)a3 + 4);
  v10[0] = v3;
  v10[2] = 0;
  v10[1] = v4;
  if ( (unsigned __int8)CInteractionTracker::SetRequestedPosition(this, v10, v6) )
  {
    v8 = *((_DWORD *)this + 45);
    if ( v8 <= *((_DWORD *)a3 + 6) )
      v8 = *((_DWORD *)a3 + 6);
    *((_BYTE *)this + 532) |= 4u;
    *((_DWORD *)this + 45) = v8;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  return 0LL;
}
