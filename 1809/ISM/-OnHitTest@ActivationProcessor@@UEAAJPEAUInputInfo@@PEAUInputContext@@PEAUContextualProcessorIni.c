/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800C4C80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004F154 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  unsigned int v6; // r10d
  unsigned int v7; // eax
  _BYTE *v8; // rcx
  char *v10; // rdi
  char *v11; // rax
  char *v12; // rbx
  _QWORD *v13; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v14; // rcx
  __int64 *v15; // r14
  char *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_DWORD *)a4 = 1;
  if ( (*(_BYTE *)a2 & 0x3B) != 0 && (v6 = *((_DWORD *)a2 + 12), v7 = 0, v6) )
  {
    v8 = (char *)a2 + 60;
    while ( (*v8 & 2) == 0 )
    {
      ++v7;
      v8 += 32;
      if ( v7 >= v6 )
        goto LABEL_6;
    }
    v10 = 0LL;
    v11 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 + 24;
      Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v11 + 24));
      v14 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v12 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
      *((_QWORD *)v12 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v12 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v13 = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_QWORD *)v12 + 8) = 1LL;
      if ( v14 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v14 + 8LL))(v14);
      *(_QWORD *)v12 = &ActivationContext::`vftable'{for `IInspectable'};
      *((_QWORD *)v12 + 1) = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IActivationContext,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
      *((_QWORD *)v12 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IActivationContext,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
      *v13 = &ActivationContext::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v12 + 18) = *((_DWORD *)a3 + 6);
      v12[76] = 0;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
      v10 = v12;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 16LL))(v12);
      v15 = (__int64 *)((char *)a4 + 8);
      v16 = v12;
      v17 = *v15;
      if ( *v15 )
      {
        *v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v12)(
              v12,
              &GUID_00000000_0000_0000_c000_000000000046,
              v15);
      v19 = v18;
      if ( v18 >= 0 )
        v19 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\"
                   "activationprocessor.cpp",
          (const char *)(unsigned int)v18);
    }
    else
    {
      v19 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\ac"
                 "tivationprocessor.cpp",
        (const char *)0x8007000ELL);
      v16 = 0LL;
    }
    if ( v16 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
    return v19;
  }
  else
  {
LABEL_6:
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
}
