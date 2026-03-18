/*
 * XREFs of ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B9900
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001BE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001C40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070160 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C007CB4C (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00800C4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::ReleaseTemporaryResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  struct _VIDMM_GLOBAL_ALLOC *v2; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  VIDMM_GLOBAL *v6; // rbx
  struct _MDL *MDLForRange; // rax
  __int64 v8; // r8

  v2 = a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v4[3] = *((_QWORD *)v2 + 31);
    v4[4] = *((int *)v2 + 65);
    a2 = (struct _VIDMM_GLOBAL_ALLOC *)*((unsigned int *)v2 + 64);
    v4[5] = a2;
  }
  if ( *((_QWORD *)v2 + 29) || *((_QWORD *)v2 + 30) )
  {
    v5 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v5[7] = 0LL;
    v5[3] = 270LL;
    v5[4] = 27LL;
    v5[5] = v2;
    v5[6] = this;
    WdLogEvent5_WdCriticalError(v5);
  }
  VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], v2);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v2 + 40));
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, v2);
  if ( *((_BYTE *)v2 + 289) )
  {
    v6 = *this;
    MDLForRange = VidMmGetMDLForRange(v2, *((_QWORD *)v2 + 34), *((_QWORD *)v2 + 35));
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))v6 + 15))(
      this,
      v2,
      *((_QWORD *)v2 + 34),
      *((_QWORD *)v2 + 35),
      MDLForRange);
    LOBYTE(v8) = 1;
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64))*this + 13))(this, v2, v8);
  }
  VIDMM_LINEAR_POOL::Free(this[19], *((struct _VIDMM_POOL_BLOCK **)v2 + 31));
  *((_QWORD *)v2 + 31) = 0LL;
  *((_QWORD *)v2 + 33) = 0LL;
  VIDMM_GLOBAL::ResetBackingStore(this[1], v2);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v2 + 40));
}
