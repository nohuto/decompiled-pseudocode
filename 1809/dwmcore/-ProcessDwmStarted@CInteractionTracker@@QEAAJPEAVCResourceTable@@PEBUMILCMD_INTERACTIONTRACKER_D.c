/*
 * XREFs of ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x1801A04D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessDwmStarted(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *a3)
{
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 12);
  if ( *((_DWORD *)a3 + 2) )
  {
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 3);
    *(_QWORD *)((char *)this + 76) = *((unsigned int *)a3 + 4);
    CResource::InvalidateAnimationSources(this, 1);
    CResource::InvalidateAnimationSources(this, 57);
    *((_DWORD *)this + 32) = *((_DWORD *)a3 + 5);
    CResource::InvalidateAnimationSources(this, 2);
    CResource::InvalidateAnimationSources(this, 58);
    *((_BYTE *)this + 532) |= 0x22u;
  }
  return 0LL;
}
