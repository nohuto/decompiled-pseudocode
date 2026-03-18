/*
 * XREFs of ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C013C060
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C010CFE0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@W4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C01171E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 */

__int64 __fastcall ReadPresentPrivateDriverData(
        struct DXGADAPTER *a1,
        __int64 a2,
        char *a3,
        struct CRefCountedBuffer **a4)
{
  size_t v6; // rbx
  _DWORD *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  size_t v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax

  v6 = (unsigned int)a2;
  v7 = 0LL;
  *a4 = 0LL;
  if ( *((int *)a1 + 546) < 0x2000 && !*((_BYTE *)a1 + 2484) || *((_DWORD *)a1 + 432) < 0x5007u || !(_DWORD)a2 )
    return 0LL;
  if ( (int)a2 + 8 < (unsigned int)a2 )
  {
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    v13 = v6;
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdWarning(v14);
  }
  else
  {
    v7 = operator new[]((unsigned int)(a2 + 8), 0x4B677844u, (POOL_TYPE)512);
    v13 = v6;
  }
  if ( v7 )
  {
    *v7 = v6;
    v7[1] = 1;
    if ( &a3[v13] < a3 || (unsigned __int64)&a3[v13] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v7 + 2, a3, v13);
    *a4 = (struct CRefCountedBuffer *)v7;
    return 0LL;
  }
  v15 = WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
  *(_QWORD *)(v15 + 24) = 2345LL;
  WdLogEvent5_WdLowResource(v15);
  return 3221225495LL;
}
