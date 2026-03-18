/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00827E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005B998 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006B198 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00828F4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0082944 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::ReleaseTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _VIDMM_GLOBAL_ALLOC *v2; // rdi
  VIDMM_GLOBAL *v4; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rax

  v2 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = *((_QWORD *)v2 + 31);
    v7[4] = *((int *)v2 + 65);
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v2 + 64);
    v7[5] = a2;
  }
  if ( *((_QWORD *)v2 + 29) || *((_QWORD *)v2 + 30) )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 27LL;
    v8[5] = v2;
    v8[6] = this;
    WdLogEvent5_WdCriticalError(v8);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), v2);
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(*((VIDMM_GLOBAL **)this + 1), *((_DWORD *)this + 95));
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v2 + 40));
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *))(*(_QWORD *)this + 64LL))(this, v2);
  if ( *((_BYTE *)v2 + 289) )
  {
    v4 = *(VIDMM_GLOBAL **)this;
    MDLForRange = VidMmGetMDLForRange(v2, *((_QWORD *)v2 + 34), *((_QWORD *)v2 + 35));
    (*((void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v4 + 15))(
      this,
      v2,
      *((_QWORD *)v2 + 34),
      *((_QWORD *)v2 + 35),
      MDLForRange);
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, struct _VIDMM_GLOBAL_ALLOC *, __int64))(*(_QWORD *)this + 104LL))(
      this,
      v2,
      v6);
  }
  *((_QWORD *)v2 + 31) = 0LL;
  *((_QWORD *)v2 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), v2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v2 + 40));
}
