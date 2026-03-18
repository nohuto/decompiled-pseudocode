/*
 * XREFs of VidSchiSetPagingHwContextPageDirectory @ 0x1C00CA0A8
 * Callers:
 *     VidSchSetPagingNodePageDirectory @ 0x1C00C966C (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0015A6C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C007ED58 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 */

void __fastcall VidSchiSetPagingHwContextPageDirectory(__int64 a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v8; // rbx
  ADAPTER_RENDER *v9; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v10; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * a2);
  memset(&v10, 0, sizeof(v10));
  v9 = *(ADAPTER_RENDER **)(a1 + 8);
  v10.hContext = *(HANDLE *)(v8 + 48);
  v10.Address.SegmentOffset = a5;
  v10.Address.SegmentId = a4;
  v10.NumEntries = a3;
  ADAPTER_RENDER::DdiSetRootPageTable(v9, &v10);
  *(_QWORD *)(v8 + 256) = v10.Address.SegmentOffset;
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(
    *(VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 552LL),
    0LL,
    &v10,
    (void *)v8);
}
