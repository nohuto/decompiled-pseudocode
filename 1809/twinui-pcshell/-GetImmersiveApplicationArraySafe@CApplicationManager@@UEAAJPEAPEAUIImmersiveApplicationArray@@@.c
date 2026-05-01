/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180030780
 * Callers:
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180030710 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1800EE0C0 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  _QWORD *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbx
  _DWORD *v10; // rcx
  _DWORD *v11; // r14
  signed int v12; // ebx
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // r15
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rsi
  signed int v21; // [rsp+88h] [rbp+48h]
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF
  _DWORD *v23; // [rsp+98h] [rbp+58h]

  *a2 = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v5;
  v10 = 0LL;
  v11 = 0LL;
  if ( v5 )
  {
    memset_0(v5, 0, 0x20uLL);
    *(_QWORD *)v9 = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v9[5] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v9 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v9 + 1) = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    *((_QWORD *)v9 + 3) = 0LL;
    v10 = v9;
    v4 = v9;
    v23 = v9;
    v11 = v9;
  }
  v12 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
  {
    v4[3] = 0LL;
    v12 = -2147024882;
    v13 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    v6 = 0LL;
    if ( v13 )
    {
      *v13 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
      v13[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
      v13[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
      *((_DWORD *)v13 + 6) = 1;
      *(_QWORD *)((char *)v13 + 28) = 4LL;
      v13[5] = 0LL;
      v13[6] = 0LL;
      v13[7] = 0LL;
      v13[8] = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v14)(
              v14,
              &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
              v4 + 3);
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
    }
    if ( v12 >= 0 )
      v12 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v4)(
              v4,
              &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
              &v22);
  }
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
  v21 = v12;
  v15 = v22;
  if ( v12 >= 0 )
  {
    v16 = v22;
    v17 = v22;
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, v6, v7, v8);
      v15 = v22;
    }
    v18 = *((_QWORD *)this + 49);
    v19 = 0LL;
    if ( v18 )
    {
      do
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 64LL))(
                v17,
                *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v19));
        v21 = v12;
        if ( v12 < 0 )
          break;
        ++v19;
      }
      while ( v19 < v18 );
      v15 = v22;
    }
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v15 = v22;
      v12 = v21;
    }
    if ( v12 >= 0 )
    {
      v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplicationArray **))v15)(
              v15,
              &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
              a2);
      v15 = v22;
    }
  }
  if ( v15 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v12;
}
