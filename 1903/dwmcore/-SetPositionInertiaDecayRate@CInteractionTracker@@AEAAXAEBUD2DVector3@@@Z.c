/*
 * XREFs of ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DD134
 * Callers:
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x1801DB610 (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERAC.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DD1F0 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800919FC (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::SetPositionInertiaDecayRate(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  float v3; // xmm4_4
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+20h] [rbp-28h]

  v5 = __PAIR64__(
         COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(1.0 - *((float *)a2 + 1), 0.0))),
         COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(1.0 - *(float *)a2, 0.0))));
  v3 = fminf(1.0, fmaxf(1.0 - *((float *)a2 + 2), 0.0));
  v4 = *(_QWORD *)((char *)this + 108) - v5;
  if ( !v4 )
    v4 = *((unsigned int *)this + 29) - (unsigned __int64)LODWORD(v3);
  if ( v4 )
  {
    *(_QWORD *)((char *)this + 108) = v5;
    *((float *)this + 29) = v3;
  }
  CResource::InvalidateAnimationSources(this, 60);
}
