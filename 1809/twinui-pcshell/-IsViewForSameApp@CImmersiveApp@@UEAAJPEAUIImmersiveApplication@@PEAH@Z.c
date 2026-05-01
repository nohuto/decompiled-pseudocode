/*
 * XREFs of ?IsViewForSameApp@CImmersiveApp@@UEAAJPEAUIImmersiveApplication@@PEAH@Z @ 0x18011DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::IsViewForSameApp(CImmersiveApp *this, struct IImmersiveApplication *a2, int *a3)
{
  int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v6 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         &v10);
  if ( v6 >= 0 )
  {
    v7 = *(_QWORD *)this;
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
    v6 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64, int *))(v7 + 88))(this, v8, a3);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return (unsigned int)v6;
}
