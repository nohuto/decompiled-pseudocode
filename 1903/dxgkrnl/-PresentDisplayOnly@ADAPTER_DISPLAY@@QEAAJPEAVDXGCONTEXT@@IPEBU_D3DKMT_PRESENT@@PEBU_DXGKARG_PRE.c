/*
 * XREFs of ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01F301C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027FBA0 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PresentDisplayOnly(
        ADAPTER_DISPLAY *this,
        struct DXGCONTEXT *a2,
        unsigned int a3,
        const struct _D3DKMT_PRESENT *a4,
        const struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6,
        struct tagRECT *a7)
{
  __int64 v7; // rbp
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdi
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a3;
  pPresentRegions = 0LL;
  memset(v13, 0, sizeof(v13));
  if ( *((_DWORD *)this + 94) )
  {
    LODWORD(v13[2]) = 0;
    pPresentRegions = a4->pPresentRegions;
    v13[3] = 0LL;
    v13[1] = a7;
    a4->pPresentRegions = (D3DKMT_PRESENT_RGNS *)v13;
    LODWORD(v13[0]) = 1;
  }
  result = BLTQUEUE::Present((BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 46) + 8LL) + 2760 * v7), a2, a4, a5, a6);
  if ( *((_DWORD *)this + 94) )
    a4->pPresentRegions = pPresentRegions;
  return result;
}
