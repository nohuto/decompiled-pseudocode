/*
 * XREFs of ?GetBuffer@CDWMOffScreenSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x1800EB1F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetBuffer(
        CDWMOffScreenSwapChain *this,
        int a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    *a3 = 64;
    *a4 = (struct ID3D11Texture2D *)*((_QWORD *)this + 53);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 8LL))(*((_QWORD *)this + 53));
  }
  return v4;
}
