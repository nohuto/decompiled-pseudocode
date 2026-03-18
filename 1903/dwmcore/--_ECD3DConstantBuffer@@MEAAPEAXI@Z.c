/*
 * XREFs of ??_ECD3DConstantBuffer@@MEAAPEAXI@Z @ 0x180039270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::`vector deleting destructor'(CD3DConstantBuffer *this, char a2)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 72);
  *(_QWORD *)this = &CMILPoolResource::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
