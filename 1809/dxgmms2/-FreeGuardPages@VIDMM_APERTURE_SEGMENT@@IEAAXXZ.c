/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00B91A4
 * Callers:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C0086D2C (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00B8B34 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 62);
  if ( v2 )
  {
    MmUnmapLockedPages(v2, *((PMDL *)this + 61));
    *((_QWORD *)this + 62) = 0LL;
  }
  v3 = (struct _MDL *)*((_QWORD *)this + 61);
  if ( v3 )
  {
    MmFreePagesFromMdl(v3);
    ExFreePoolWithTag(*((PVOID *)this + 61), 0);
    *((_QWORD *)this + 61) = 0LL;
  }
}
