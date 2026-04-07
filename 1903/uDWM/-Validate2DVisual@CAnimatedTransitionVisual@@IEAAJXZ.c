/*
 * XREFs of ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002789C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800274F0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800196D4 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180027988 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800279E0 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0CC8 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0EAC (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate2DVisual(struct tagPOINT ***this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  LONG v6; // eax
  float v7; // xmm0_4
  LONG v8; // eax
  struct tagPOINT **v9; // rcx
  int v10; // eax
  int v11; // eax
  int updated; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // [rsp+28h] [rbp-10h]
  struct tagPOINT v17; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)this[11] & 0x1000) != 0 || ((_DWORD)this[11] & 0x2000) != 0 || ((_BYTE)this[11] & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 986) )
    {
      v11 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x402u, v16);
        return v1;
      }
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip((CAnimatedTransitionVisual *)this);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x403u, v16);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 987) )
    {
      v13 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x407u, v16);
        return v1;
      }
      v14 = CAnimatedTransitionVisual::UpdateBackgroundWithClip((CAnimatedTransitionVisual *)this);
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x408u, v16);
        return v1;
      }
      v15 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x409u, v16);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 975) )
    {
      v6 = RoundToNearestInt((float)*((int *)this + 214) + *((float *)this + 188));
      v7 = (float)*((int *)this + 215);
      v17.x = v6;
      v8 = RoundToNearestInt(v7 + *((float *)this + 189));
      v9 = this[7];
      v17.y = v8;
      CVisual::SetOffset(*v9, &v17);
      v10 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x40Eu, v16);
        return v1;
      }
    }
    else
    {
      v3 = CRenderDataVisual::ClearInstructions((CRenderDataVisual *)(this + 1));
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x412u, v16);
        return v1;
      }
      v4 = CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity((CAnimatedTransitionVisual *)this);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x413u, v16);
        return v1;
      }
    }
    *((_DWORD *)this + 22) &= 0xFFFFCFDF;
  }
  return v1;
}
