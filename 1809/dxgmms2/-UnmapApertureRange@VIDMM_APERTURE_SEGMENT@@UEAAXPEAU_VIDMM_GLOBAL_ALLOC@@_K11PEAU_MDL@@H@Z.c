/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C00B9F50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppxt @ 0x1C002851C (McTemplateK0ppxt.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C00ACD9C (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AE420 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        VIDMM_APERTURE_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7)
{
  VIDMM_GLOBAL *v11; // r10
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    VIDMM_GLOBAL::VerifyAllocationIsIdle(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v12 = *(unsigned int *)(*((_QWORD *)v11 + 3) + 308LL);
  if ( (v12 & 4) == 0 )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v13 = 0;
    else
      v13 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::UnmapVideoApertureSegment(
      v11,
      a2,
      v13,
      a3,
      a4,
      v14,
      *(union _LARGE_INTEGER *)((char *)this + 504),
      a7);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0ppxt(v12, &EventApertureUnmapping, a3, a4, (char)a2, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7560LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40160LL) -= a3;
}
