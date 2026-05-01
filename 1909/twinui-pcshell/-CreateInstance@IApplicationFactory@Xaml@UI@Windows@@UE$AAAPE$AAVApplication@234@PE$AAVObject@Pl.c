/*
 * XREFs of ?CreateInstance@IApplicationFactory@Xaml@UI@Windows@@UE$AAAPE$AAVApplication@234@PE$AAVObject@Platform@@PEAPE$AAV67@@Z @ 0x1802D74B0
 * Callers:
 *     ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x1802D67EC (--0Application@Xaml@UI@Windows@@QE$AAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802D24BC (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::UI::Xaml::IApplicationFactory::CreateInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  if ( a3 )
    __abi_winrt_ptr_assign(a3, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, a3, &v9);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = __abi_winrt_ptr_ctor(v9);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return v7;
}
