/*
 * XREFs of ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180031020
 * Callers:
 *     ?GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x180030FC0 (-GetAllApplicationsByHostId@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe(
        CApplicationManager *this,
        __int64 a2,
        struct IObjectArray **a3)
{
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  _DWORD *v9; // rcx
  _DWORD *v10; // r14
  signed int v11; // ebx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v24; // [rsp+30h] [rbp-30h]
  __int64 v25; // [rsp+38h] [rbp-28h]
  _QWORD *v26; // [rsp+40h] [rbp-20h]
  signed int *v27; // [rsp+48h] [rbp-18h]
  __int64 v28; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  signed int v31; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v25 = -2LL;
  v5 = 0LL;
  *a3 = 0LL;
  v23 = 0LL;
  v32 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( v7 )
  {
    memset_0(v7, 0, 0x20uLL);
    *(_QWORD *)v8 = &Microsoft::WRL::ChainInterfaces<ITaskbarLayoutItemInternal,ITaskbarLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v8[5] = 1;
    *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IImmersiveApplicationArray2>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::ChainInterfaces<IImmersiveApplicationArrayPrivate,IImmersiveApplicationArray,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
    *((_QWORD *)v8 + 1) = &CImmersiveAppArray::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationArray2>'};
    *((_QWORD *)v8 + 3) = 0LL;
    v9 = v8;
    v6 = v8;
    v24 = v8;
    v10 = v8;
  }
  v11 = v9 == 0LL ? 0x8007000E : 0;
  if ( v9 )
  {
    v6[3] = 0LL;
    v11 = -2147024882;
    v12 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    v26 = v12;
    if ( v12 )
    {
      *v12 = &CEnumerableObjectCollection::`vftable'{for `IObjectCollection'};
      v12[1] = &CEnumerableObjectCollection::`vftable'{for `IEnumObjects'};
      v12[2] = &CEnumerableObjectCollection::`vftable'{for `IEnumUnknown'};
      *((_DWORD *)v12 + 6) = 1;
      *(_QWORD *)((char *)v12 + 28) = 4LL;
      v12[5] = 0LL;
      v12[6] = 0LL;
      v12[7] = 0LL;
      v12[8] = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v13)(
              v13,
              &GUID_5632b1a4_e38a_400a_928a_d4cd63230295,
              v6 + 3);
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
    v5 = 0LL;
    if ( v11 >= 0 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v6)(
              v6,
              &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
              &v32);
  }
  if ( v10 )
    (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  v31 = v11;
  v14 = v32;
  if ( v11 >= 0 )
  {
    v27 = &v31;
    v15 = v32;
    v28 = v32;
    v16 = v32;
    if ( v32 )
    {
      (*(void (**)(void))(*(_QWORD *)v32 + 8LL))();
      v14 = v32;
      v11 = v31;
    }
    v17 = *((_QWORD *)this + 48);
    if ( v17 )
    {
      do
      {
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 64LL))(
                v16,
                *(_QWORD *)(*((_QWORD *)this + 47) + 8 * v5));
        v31 = v11;
        if ( v11 < 0 )
          break;
        ++v5;
      }
      while ( v5 < v17 );
      v14 = v32;
    }
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      v14 = v32;
      v11 = v31;
    }
    if ( v11 >= 0 )
    {
      v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD))v14)(
              v14,
              &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
              &v23);
      v31 = v11;
      v14 = v32;
    }
  }
  if ( v14 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1059,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v11,
      v22);
  }
  else
  {
    v22 = 0LL;
    v18 = (**v23)(v23, &GUID_2e18eac3_3253_4bf0_be9f_38feb4360c34, &v22);
    v11 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105B,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v18,
        v22);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64, struct IObjectArray **))(*(_QWORD *)v22 + 40LL))(v22, a2, a3);
      if ( v11 >= 0 )
        v11 = 0;
    }
    v19 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  v20 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
  }
  return (unsigned int)v11;
}
