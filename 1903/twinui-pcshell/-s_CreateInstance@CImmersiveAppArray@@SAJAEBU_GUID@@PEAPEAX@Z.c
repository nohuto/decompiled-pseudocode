/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B3DC
 * Callers:
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1800633D0 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180112B00 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x180125A10 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x180026898 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  void **v3; // rdi
  void **v4; // rax
  const struct _GUID *v5; // rdx
  int v6; // ecx
  void **v7; // rbx
  void **v8; // rsi
  int Instance; // ebx

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v4;
  v8 = 0LL;
  if ( v4 )
  {
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *v4 = &Microsoft::WRL::ChainInterfaces<IAppResizeDataInternal,IAppResizeData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v4 + 5) = 1;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v6 = (int)Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v7 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v7[1] = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v7[3] = 0LL;
    v8 = v7;
    v3 = v7;
  }
  if ( v8 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v6, v5, v8 + 3);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(void **, GUID *, void **))*v3)(
                   v3,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v8 )
    (*((void (__fastcall **)(void **))*v8 + 2))(v8);
  return (unsigned int)Instance;
}
