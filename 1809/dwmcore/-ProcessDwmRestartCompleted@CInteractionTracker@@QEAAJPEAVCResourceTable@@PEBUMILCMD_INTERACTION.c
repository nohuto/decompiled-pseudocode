/*
 * XREFs of ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x1801A047C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18019DFA8 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x18019EEBC (-CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmRestartCompleted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED *a3)
{
  int v4; // eax
  float v5; // xmm3_4
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  *((_BYTE *)this + 532) &= ~0x20u;
  CInteractionTracker::CheckForOutOfBounds(this);
  if ( !*((_DWORD *)this + 42) )
  {
    v4 = *((_DWORD *)this + 20);
    v5 = *((float *)this + 32);
    v7 = *((_QWORD *)this + 9);
    v8 = v4;
    CInteractionTracker::AddPendingStateChange((__int64)this, 0, &v7, v5);
  }
  return 0LL;
}
