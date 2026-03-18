/*
 * XREFs of ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x1801A03F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18019E3F8 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x1801A019C (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessApplyScaleImpulse(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *a3)
{
  float v5; // xmm1_4
  int v6; // eax
  struct CResourceTable *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  *((_BYTE *)this + 532) |= 0x10u;
  LODWORD(v8) = *((_DWORD *)a3 + 3) ^ _xmm;
  v5 = *((float *)a3 + 2);
  HIDWORD(v8) = *((_DWORD *)a3 + 4) ^ _xmm;
  if ( CInteractionTracker::ApplyScaleImpulse(this, v5, (const struct D2DVector2 *)&v8) )
  {
    v6 = *((_DWORD *)this + 45);
    if ( v6 <= *((_DWORD *)a3 + 5) )
      v6 = *((_DWORD *)a3 + 5);
    *((_DWORD *)this + 45) = v6;
  }
  else
  {
    CInteractionTracker::NotifyRequestIgnored(this);
  }
  *((_BYTE *)this + 532) &= ~0x10u;
  return 0LL;
}
