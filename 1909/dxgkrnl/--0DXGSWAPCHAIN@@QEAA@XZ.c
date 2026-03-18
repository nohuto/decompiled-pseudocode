/*
 * XREFs of ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C0285600
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C0289520 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014F718 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

DXGSWAPCHAIN *__fastcall DXGSWAPCHAIN::DXGSWAPCHAIN(DXGSWAPCHAIN *this)
{
  AUTOEXPANDALLOCATION *v2; // rcx

  *((_DWORD *)this + 7) = 62;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 32;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  v2 = (DXGSWAPCHAIN *)((char *)this + 72);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  AUTOEXPANDALLOCATION::GetBuffer(v2, 0, 0);
  *((_QWORD *)this + 23) = 1LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 16;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  memset((char *)this + 88, 0, 0x60uLL);
  *((_DWORD *)this + 29) = 1;
  *((_DWORD *)this + 44) = -1;
  *((_DWORD *)this + 32) = -1;
  return this;
}
