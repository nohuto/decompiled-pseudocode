/*
 * XREFs of ?SetGhostVisualStyleSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@@Z @ 0x180137250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::SetGhostVisualStyleSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3)
{
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v6 = v5(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v8);
  if ( v6 >= 0 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 368LL))(v8, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)v6;
}
