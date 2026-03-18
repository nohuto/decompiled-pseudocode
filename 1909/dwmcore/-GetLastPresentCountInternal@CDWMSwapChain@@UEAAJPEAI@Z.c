/*
 * XREFs of ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x1800C7790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetLastPresentCountInternal(CDWMSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 53) + 120LL))(
           *((_QWORD *)this + 53),
           a2);
}
