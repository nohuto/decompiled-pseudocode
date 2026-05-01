/*
 * XREFs of ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x1803DEE0C
 * Callers:
 *     ?CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z @ 0x1803DF358 (-CDragVisualAcc_CreateInstance@@YAJPEAUIDragVisual@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x180129BE0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV12.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803B92E0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSim.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1803DF790 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 */

CDragVisualAcc *__fastcall CDragVisualAcc::CDragVisualAcc(CDragVisualAcc *this, struct IDragVisual *a2)
{
  int v4; // eax
  HWND v5; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-248h] BYREF
  WCHAR String[264]; // [rsp+30h] [rbp-238h] BYREF

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::`vftable'{for `IRawElementProviderFragment'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::`vftable'{for `IDragProvider'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDragVisualAcc>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 8) = a2;
  *((_DWORD *)this + 12) = 0;
  *((_WORD *)this + 26) = 0;
  *(_QWORD *)this = &CDragVisualAcc::`vftable';
  *((_QWORD *)this + 1) = &CDragVisualAcc::`vftable'{for `IRawElementProviderFragment'};
  *((_QWORD *)this + 2) = &CDragVisualAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>'};
  *((_QWORD *)this + 3) = &CDragVisualAcc::`vftable'{for `IDragProvider'};
  *((_QWORD *)this + 4) = &CDragVisualAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDragVisualAcc>'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *(_QWORD *)((char *)this + 188) = 31LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 96LL))(*((_QWORD *)this + 8));
  *((_DWORD *)this + 14) = v4;
  *((_DWORD *)this + 12) = v4 == 6;
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8)
                                                                                         + 120LL))(
                                                *((_QWORD *)this + 8),
                                                v7);
  VariantInit((VARIANTARG *)((char *)this + 88));
  v5 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 112LL))(*((_QWORD *)this + 8));
  if ( GetWindowTextW(v5, String, 260) > 0 )
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
      (LPVOID *)this + 14,
      (__int64)String,
      0xFFFFFFFFFFFFFFFFuLL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 136);
  *((_QWORD *)this + 18) = -1LL;
  *((_QWORD *)this + 19) = -1LL;
  if ( (int)GenerateDropEffectPlaceMode(*((_QWORD *)this + 14), 0LL, (char *)this + 136) < 0 )
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
      (LPVOID *)this + 17,
      (__int64 *)this + 14);
  return this;
}
