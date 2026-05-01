/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18005C100
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x18005C010 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801307B0 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180130840 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC38 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  void **v4; // rdi
  void **v5; // rax
  const struct _GUID *v6; // rdx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  __int64 v8; // r8
  void **v9; // rbx
  void **v10; // rsi
  int Instance; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  int v18; // [rsp+88h] [rbp+48h]
  __int64 v19; // [rsp+90h] [rbp+50h] BYREF
  void **v20; // [rsp+98h] [rbp+58h]

  *a2 = 0LL;
  v19 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = (void **)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v5;
  v10 = 0LL;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    v5[3] = 0LL;
    *v5 = &Microsoft::WRL::ChainInterfaces<IAppResizeDataInternal,IAppResizeData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    *((_DWORD *)v5 + 5) = 1;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v9 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    v9[1] = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    v9[3] = 0LL;
    v10 = v9;
    v4 = v9;
    v20 = v9;
  }
  if ( v10 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance((__int64)v7, v6, v10 + 3);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(void **, GUID *, __int64 *))*v4)(
                   v4,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   &v19);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v10 )
    (*((void (__fastcall **)(void **))*v10 + 2))(v10);
  v18 = Instance;
  v12 = v19;
  if ( Instance >= 0 )
  {
    v13 = v19;
    v14 = v19;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64, const struct _GUID *, __int64))(*(_QWORD *)v19 + 8LL))(v19, v6, v8);
      v12 = v19;
    }
    v15 = *((_QWORD *)this + 49);
    v16 = 0LL;
    if ( v15 )
    {
      do
      {
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 64LL))(
                     v14,
                     *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v16));
        v18 = Instance;
        if ( Instance < 0 )
          break;
        ++v16;
      }
      while ( v16 < v15 );
      v12 = v19;
    }
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = v19;
      Instance = v18;
    }
    if ( Instance >= 0 )
    {
      Instance = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplicationArray **))v12)(
                   v12,
                   &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
                   a2);
      v12 = v19;
    }
  }
  if ( v12 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)Instance;
}
