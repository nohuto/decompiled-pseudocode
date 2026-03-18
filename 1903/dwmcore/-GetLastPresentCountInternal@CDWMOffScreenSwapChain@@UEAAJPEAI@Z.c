/*
 * XREFs of ?GetLastPresentCountInternal@CDWMOffScreenSwapChain@@UEAAJPEAI@Z @ 0x1800DD5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetLastPresentCountInternal(CDWMOffScreenSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 67) + 32LL))(
           *((_QWORD *)this + 67),
           a2);
}
