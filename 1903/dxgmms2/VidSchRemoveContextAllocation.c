/*
 * XREFs of VidSchRemoveContextAllocation @ 0x1C0080B50
 * Callers:
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0062BBC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0080ACC (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 */

void __fastcall VidSchRemoveContextAllocation(_QWORD *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rcx
  void **v4; // rax
  __int64 v5; // rcx

  if ( a1 )
  {
    v1 = a1[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
    v3 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (void **)a1[1], *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    v5 = a1[2];
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    operator delete(a1);
  }
}
