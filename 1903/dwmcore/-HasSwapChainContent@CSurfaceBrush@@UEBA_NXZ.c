/*
 * XREFs of ?HasSwapChainContent@CSurfaceBrush@@UEBA_NXZ @ 0x1801FC550
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CSurfaceBrush::HasSwapChainContent(CSurfaceBrush *this)
{
  __int64 v1; // rax
  bool v2; // si
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v7 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CSurfaceBrush *))(v1 + 296))(this) )
  {
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 12);
    v5 = **v4;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v7);
    v2 = v5(v4, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v7) >= 0;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v7);
  return v2;
}
