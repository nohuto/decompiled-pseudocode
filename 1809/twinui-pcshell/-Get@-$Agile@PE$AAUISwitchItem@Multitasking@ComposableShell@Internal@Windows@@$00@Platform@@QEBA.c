/*
 * XREFs of ?Get@?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@Platform@@QEBAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@XZ @ 0x18026FD50
 * Callers:
 *     ??$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platform@@YAPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@AEBV?$Agile@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@2@@Z @ 0x180267154 (--$Unwrap@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Details@Collections@Platf.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Platform::Agile<Windows::Internal::ComposableShell::Multitasking::ISwitchItem __gc *,1>::Get(
        __int64 a1)
{
  HRESULT ContextToken; // eax
  Platform::Details *v3; // rcx
  int ProxyImpl; // eax
  __int64 v5; // rbx
  struct IUnknown v7; // [rsp+50h] [rbp+20h] BYREF
  __int64 v8; // [rsp+58h] [rbp+28h] BYREF
  ULONG_PTR pToken; // [rsp+60h] [rbp+30h] BYREF

  if ( *(_DWORD *)(a1 + 24) == 1 || !*(_QWORD *)a1 )
  {
    v3 = *(Platform::Details **)a1;
    return __abi_winrt_ptr_ctor((__int64)v3);
  }
  ContextToken = CoGetContextToken(&pToken);
  if ( ContextToken < 0 )
    __abi_WinRTraiseException(ContextToken);
  v3 = *(Platform::Details **)a1;
  if ( pToken == *(_QWORD *)(a1 + 16) )
    return __abi_winrt_ptr_ctor((__int64)v3);
  v7.lpVtbl = 0LL;
  ProxyImpl = Platform::Details::GetProxyImpl(
                v3,
                (struct IUnknown *)&_uuidof__AUISwitchItem_Multitasking_ComposableShell_Internal_Windows__,
                *(const struct _GUID **)(a1 + 8),
                &v7,
                (struct IUnknown **)0xFFFFFFFFFFFFFFFELL);
  if ( ProxyImpl < 0 )
    __abi_WinRTraiseException(ProxyImpl);
  if ( *(_DWORD *)(a1 + 24) != 2 )
    goto LABEL_15;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (*(unsigned int (__fastcall **)(struct IUnknownVtbl *, GUID *, __int64 *))v7.lpVtbl->QueryInterface)(
         v7.lpVtbl,
         &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90,
         &v8) )
  {
    *(_DWORD *)(a1 + 24) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
LABEL_15:
    v5 = __abi_winrt_ptr_ctor((__int64)v7.lpVtbl);
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 24) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
  v5 = __abi_winrt_ptr_ctor(*(_QWORD *)a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
LABEL_11:
  if ( v7.lpVtbl )
    (*((void (__fastcall **)(struct IUnknownVtbl *, HRESULT (__stdcall *)(IUnknown *, const IID *const, void **)))v7.lpVtbl->QueryInterface
     + 2))(
      v7.lpVtbl,
      v7.lpVtbl->QueryInterface);
  return v5;
}
