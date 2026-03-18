/*
 * XREFs of ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015E2E0
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C002E6E0 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?DisableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015E360 (-DisableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

CKernelStackSwapAuto *__fastcall CKernelStackSwapAuto::CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *(_BYTE *)this = 0;
  CKernelStackSwap::DisableStackSwap(this);
  return this;
}
