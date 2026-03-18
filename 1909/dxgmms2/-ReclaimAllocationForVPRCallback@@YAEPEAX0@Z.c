/*
 * XREFs of ?ReclaimAllocationForVPRCallback@@YAEPEAX0@Z @ 0x1C00C132C
 * Callers:
 *     ?ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C1390 (-ReclaimScrubRegionResources@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00ADCD8 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

unsigned __int8 __fastcall ReclaimAllocationForVPRCallback(void *a1, _QWORD *a2)
{
  _QWORD *v2; // rcx
  VIDMM_GLOBAL *v4; // rbx

  v2 = (_QWORD *)a2[17];
  v4 = (VIDMM_GLOBAL *)v2[1];
  (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD, _QWORD))(*v2 + 24LL))(v2, a2, a2[19], a2[2]);
  a2[19] = 0LL;
  *((_DWORD *)a2 + 32) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(v4, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0);
  return 1;
}
