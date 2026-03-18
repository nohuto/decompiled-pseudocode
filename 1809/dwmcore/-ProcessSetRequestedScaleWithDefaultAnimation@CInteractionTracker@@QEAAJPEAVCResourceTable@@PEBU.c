/*
 * XREFs of ?ProcessSetRequestedScaleWithDefaultAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEWITHDEFAULTANIMATION@@@Z @ 0x1801A0F7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetRequestedScaleWithDefaultAnimation(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEWITHDEFAULTANIMATION *a3)
{
  int v3; // eax
  float v4; // xmm3_4
  float v5; // xmm1_4
  struct CResourceTable *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v4 = *((float *)this + 31);
  v5 = *((float *)a3 + 2);
  LODWORD(v7) = *((_DWORD *)a3 + 3) ^ _xmm;
  HIDWORD(v7) = *((_DWORD *)a3 + 4) ^ _xmm;
  return CInteractionTracker::AnimateToScale(this, v5, (const struct D2DVector2 *)&v7, v4, v3);
}
