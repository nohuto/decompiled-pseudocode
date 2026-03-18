/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x1C00C966C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C008CB40 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C0015A6C (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROOTPAGETABLE@@PEAX@Z @ 0x1C007ED58 (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGKARG_SETROO.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x1C00CA0A8 (VidSchiSetPagingHwContextPageDirectory.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(_QWORD *a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v6; // rdi
  char i; // si
  __int64 v10; // rax
  __int64 v11; // rbp
  ADAPTER_RENDER *v12; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v13; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1[32] + 8LL * a2) )
  {
    VidSchiSetPagingHwContextPageDirectory((_DWORD)a1, a2, a3, a4, a5);
  }
  else
  {
    for ( i = 0; ; i = 1 )
    {
      v10 = i ? a1[34] : a1[31];
      v11 = *(_QWORD *)(v10 + 8 * v6);
      memset(&v13, 0, sizeof(v13));
      v12 = (ADAPTER_RENDER *)a1[1];
      v13.hContext = *(HANDLE *)(v11 + 64);
      v13.Address.SegmentId = a4;
      v13.Address.SegmentOffset = a5;
      v13.NumEntries = a3;
      ADAPTER_RENDER::DdiSetRootPageTable(v12, &v13);
      *(_QWORD *)(v11 + 816) = v13.Address.SegmentOffset;
      VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(*(VIDMM_GLOBAL **)(a1[1] + 552LL), 0LL, &v13, (void *)v11);
      if ( i || (*(_BYTE *)(*(_QWORD *)(a1[2] + 2416LL) + 352 * v6 + 16) & 0xC) != 0xC )
        break;
    }
  }
}
