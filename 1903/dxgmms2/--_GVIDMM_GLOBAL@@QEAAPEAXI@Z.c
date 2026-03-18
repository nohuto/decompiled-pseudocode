/*
 * XREFs of ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C0024100
 * Callers:
 *     VidMmTerminateAdapter @ 0x1C0024CD0 (VidMmTerminateAdapter.c)
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008E620 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00AA1C4 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::`scalar deleting destructor'(VIDMM_GLOBAL *P)
{
  VIDMM_GLOBAL::~VIDMM_GLOBAL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
