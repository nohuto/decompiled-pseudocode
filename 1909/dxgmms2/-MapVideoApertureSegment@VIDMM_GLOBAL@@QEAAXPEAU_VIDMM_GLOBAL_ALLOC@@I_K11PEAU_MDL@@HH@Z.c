/*
 * XREFs of ?MapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11PEAU_MDL@@HH@Z @ 0x1C0084D5C
 * Callers:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z @ 0x1C0086960 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@HH@Z.c)
 * Callees:
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0084DC0 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 */

void __fastcall VIDMM_GLOBAL::MapVideoApertureSegment(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct _MDL *a7,
        int a8,
        int a9)
{
  struct _VIDMM_GLOBAL_ALLOC *v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // [rsp+38h] [rbp-20h]

  v10 = a2;
  if ( a2 )
  {
    v11 = *((_DWORD *)a2 + 19) & 0x3F;
  }
  else
  {
    v10 = 0LL;
    v11 = 0;
  }
  VIDMM_GLOBAL::MapVideoApertureSegmentInternal(this, v11, v10, a3, a4, a5, a7, v12, a8, a9);
}
