/*
 * XREFs of ?get@?QIApplication@Xaml@UI@Windows@@Resources@Application@234@UE$AAAPE$AAVResourceDictionary@234@XZ @ 0x1802DAB40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802D2E40 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802D2F28 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802D2F90 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _get__QIApplication_Xaml_UI_Windows__Resources_Application_234_UE_AAAPE_AAVResourceDictionary_234_XZ(
        __int64 (__fastcall ***a1)(_QWORD, __int64, __int64 *))
{
  __int64 v1; // rbx
  int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h]

  v5 = 0LL;
  v1 = __abi_winrt_cast_to(0, a1, (__int64)&_uuidof__AUIApplication_Xaml_UI_Windows__);
  v6 = v1;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, &v5);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  if ( v2 < 0 )
    __abi_WinRTraiseException(v2);
  v3 = __abi_winrt_ptr_ctor(v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
