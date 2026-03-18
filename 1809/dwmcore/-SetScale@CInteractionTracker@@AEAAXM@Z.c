/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x1801A271C
 * Callers:
 *     ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x18019F694 (-EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x18019F6CC (-EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A2530 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801A26C0 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801A23F8 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::SetScale(CInteractionTracker *this, float a2)
{
  float v3; // xmm0_4
  float v4; // xmm1_4
  int v5; // eax
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = fmaxf(0.001, a2);
  v4 = *((float *)this + 32);
  if ( v3 != v4 )
  {
    v5 = *((_DWORD *)this + 42);
    *((float *)this + 32) = v3;
    v6 = v3 / v4;
    if ( !v5 || v5 == 3 && !*((_QWORD *)this + 43) || v5 == 2 && *((_QWORD *)this + 58) )
    {
      v7 = *((float *)this + 36);
      v8 = *((float *)this + 19);
      v9[0] = (float)((float)(*((float *)this + 18) - *((float *)this + 35)) * v6) + *((float *)this + 35);
      v9[2] = *((float *)this + 20);
      v9[1] = (float)((float)(v8 - v7) * v6) + v7;
      CInteractionTracker::SetPosition(this, (const struct D2DVector3 *)v9);
    }
    *((_BYTE *)this + 532) |= 2u;
    CResource::InvalidateAnimationSources(this, 2);
    CResource::InvalidateAnimationSources(this, 58);
  }
}
