/*
 * XREFs of ?GetWindowsSafe@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x180132590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetWindowsSafe(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // ebx

  v8 = a5;
  *(_QWORD *)a5 = 0LL;
  a5 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  v10 = v9(a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &a5);
  if ( v10 >= 0 )
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)a5 + 352LL))(a5, a3, a4, v8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&a5);
  return (unsigned int)v10;
}
