/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C011CD94
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00FC840 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C011B490 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        __int64 a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rdi
  unsigned int v7; // eax
  SIZE_T v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  __int64 v12; // rax

  v6 = (unsigned int)a2;
  *a4 = 0LL;
  if ( (*((int *)a1 + 540) >= 0x2000 || *((_BYTE *)a1 + 2452)) && *((_DWORD *)a1 + 428) >= 0x5007u && (_DWORD)a2 )
  {
    v7 = a2 + 8;
    v8 = 0xFFFFFFFFLL;
    if ( (int)a2 + 8 >= (unsigned int)a2 )
      v8 = v7;
    if ( v7 >= (unsigned int)a2 )
    {
      v11 = operator new[](v8, 0x4B677844u, (POOL_TYPE)512);
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(v8, a2, a3);
      *(_QWORD *)(v9 + 24) = v6;
      WdLogEvent5_WdWarning(v9);
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v12 + 24) = 2301LL;
      WdLogEvent5_WdLowResource(v12);
      return 3221225495LL;
    }
    *v11 = v6;
    v11[1] = 1;
    if ( &a3[v6] < a3 || (unsigned __int64)&a3[v6] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v11 + 2, a3, v6);
    *a4 = (struct CRefCountedBuffer *)v11;
  }
  return 0LL;
}
