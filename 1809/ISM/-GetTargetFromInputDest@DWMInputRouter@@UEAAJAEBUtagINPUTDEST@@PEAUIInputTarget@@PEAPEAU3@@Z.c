/*
 * XREFs of ?GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x18008AD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::GetTargetFromInputDest(
        DWMInputRouter *this,
        const struct tagINPUTDEST *a2,
        struct IInputTarget *a3,
        struct IInputTarget **a4)
{
  struct IInputTarget *v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  struct IInputTarget *v11; // rcx
  unsigned int v12; // ebx
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct IInputTarget *v16; // [rsp+60h] [rbp+20h] BYREF

  v14[1] = -2LL;
  v16 = 0LL;
  if ( a3 )
  {
    v14[0] = 0LL;
    (**(void (__fastcall ***)(struct IInputTarget *, GUID *, _QWORD *))a3)(
      a3,
      &GUID_245edb10_c010_455c_a24c_6780cdaecce8,
      v14);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, const struct tagINPUTDEST *))(*(_QWORD *)v14[0] + 24LL))(v14[0], a2) )
    {
      if ( v16 != a3 )
      {
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 8LL))(a3);
        v7 = v16;
        v16 = a3;
        if ( v7 )
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    v8 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v16 )
      goto LABEL_14;
  }
  v16 = 0LL;
  v14[2] = 0LL;
  v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    v9[5] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable>::`vftable'{for `IInputTarget'};
    *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputTarget,IInputDestComparable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestComparable>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v10 = &InputDestTarget::`vftable'{for `IInputTarget'};
    *((_QWORD *)v10 + 1) = &InputDestTarget::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputDestComparable>'};
    *(_OWORD *)(v10 + 6) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(v10 + 10) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v10 + 7) = *((_QWORD *)a2 + 8);
    *((_QWORD *)v10 + 8) = *(_QWORD *)((char *)a2 + 4);
    if ( v10 )
    {
      (**(void (__fastcall ***)(_DWORD *, GUID *, struct IInputTarget **))v10)(
        v10,
        &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
        &v16);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
LABEL_14:
      v11 = 0LL;
      *a4 = v16;
      v12 = 0;
      goto LABEL_16;
    }
  }
  v12 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
    (const char *)0x8007000ELL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
    (const char *)0x8007000ELL);
  v11 = v16;
LABEL_16:
  if ( v11 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v12;
}
