/*
 * XREFs of _lambda_5ad3673c6eb74b2ca3979c012125fa9b_::operator() @ 0x1800FF1EC
 * Callers:
 *     ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800FF530 (-GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApp.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_5ad3673c6eb74b2ca3979c012125fa9b_::operator()(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // si
  struct IUnknown *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = v4 == 0;
  if ( v4 )
  {
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)a2 + 464LL))(a2, &v7);
    v5 = (unsigned int)SHIsSameObject(v7, *(struct IUnknown **)(a1 + 8)) != 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  }
  if ( v5 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 4) != 0 )
    Microsoft::WRL::ComPtr<IUnknown>::operator=(*(__int64 **)(a1 + 16), a2);
  return **(_QWORD **)(a1 + 16) == 0LL;
}
