/*
 * XREFs of ?ProcessSetRequestedPositionWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONWITHDEFAULTANIMATION@@@Z @ 0x1801A0D9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedPositionWithDefaultAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONWITHDEFAULTANIMATION *a3)
{
  int v3; // xmm1_4
  int v4; // r9d
  float v5; // xmm2_4
  _DWORD v7[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v4 = *((_DWORD *)a3 + 4);
  v5 = *((float *)this + 30);
  v7[0] = *((_DWORD *)a3 + 2);
  v7[2] = 0;
  v7[1] = v3;
  return CInteractionTracker::ScrollToPosition(this, (const struct D2DVector3 *)v7, v5, v4);
}
