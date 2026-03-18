/*
 * XREFs of ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C00249F0
 * Callers:
 *     VidMmTerminateAdapter @ 0x1C0025570 (VidMmTerminateAdapter.c)
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008ADF0 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00A6B44 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::`scalar deleting destructor'(VIDMM_GLOBAL *P)
{
  VIDMM_GLOBAL::~VIDMM_GLOBAL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
