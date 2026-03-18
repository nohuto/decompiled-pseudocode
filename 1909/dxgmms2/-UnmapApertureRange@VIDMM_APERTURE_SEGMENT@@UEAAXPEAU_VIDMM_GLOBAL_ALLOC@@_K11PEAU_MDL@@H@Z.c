/*
 * XREFs of ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0084A90
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppxt @ 0x1C002905C (McTemplateK0ppxt.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006AEB0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z @ 0x1C0084B80 (-UnmapVideoApertureSegment@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@I_K11T_LARGE_INTEGER@@H@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084D34 (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B14E0 (-VerifyAllocationPagingOperationDone@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  VIDMM_GLOBAL *v11; // rcx
  VIDMM_GLOBAL *v12; // r10
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned __int64 v15; // [rsp+28h] [rbp-20h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
    v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
    if ( a7 )
      VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(v11, a2);
    else
      VIDMM_GLOBAL::VerifyAllocationIsIdle(v11, a2);
  }
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  v13 = *(unsigned int *)(*((_QWORD *)v12 + 3) + 308LL);
  if ( (v13 & 4) == 0 )
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
      v14 = 0;
    else
      v14 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::UnmapVideoApertureSegment(
      v12,
      a2,
      v14,
      a3,
      a4,
      v15,
      *(union _LARGE_INTEGER *)((char *)this + 504),
      a7);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0ppxt(v13, &EventApertureUnmapping, a3, a4, (char)a2, 0, a7);
  *(_QWORD *)(*((_QWORD *)this + 1) + 7560LL) += a3 << 12;
  *(_QWORD *)(*((_QWORD *)this + 1) + 40160LL) -= a3;
}
