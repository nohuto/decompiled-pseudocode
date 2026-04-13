/*
 * XREFs of ??$CreateActivationFactory@VTargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180051760
 * Callers:
 *     <none>
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000488C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActivationFactory@@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@23@VNil@Details@23@V6723@V6723@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180051A98 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@$0A@UIActiva_ea_180051A98.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CABF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::Services::TargetedContent::Internal::TargetedContentActionStatics>(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rdi
  char *v9; // rax
  char *v10; // rbx
  _QWORD *v11; // rdi
  bool v12; // zf
  signed __int32 v13; // eax
  signed __int32 v14; // eax
  int v15; // edi
  signed __int32 v16; // eax
  int CanCastTo; // esi
  int v18; // eax
  signed __int32 v19; // eax
  int v20; // ebx
  signed __int32 v21; // eax
  char *v23; // [rsp+20h] [rbp-28h]

  v4 = 0LL;
  v23 = 0LL;
  v9 = (char *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( !v9 )
  {
    CanCastTo = -2147024882;
    goto LABEL_20;
  }
  v11 = v9 + 8;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v9 + 8));
  *((_QWORD *)v10 + 10) = 0LL;
  v12 = Microsoft::WRL::Details::ModuleBase::module_ == 0LL;
  *(_QWORD *)v10 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable';
  *v11 = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_QWORD *)v10 + 5) = &Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_DWORD *)v10 + 17) = 1;
  *((_DWORD *)v10 + 22) = 4;
  if ( !v12 )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  *(_QWORD *)v10 = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable';
  *v11 = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  *((_QWORD *)v10 + 5) = &Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>>'};
  v13 = _InterlockedIncrement((volatile signed __int32 *)v10 + 17);
  if ( (v10[88] & 4) == 0 && v13 == 2 )
    _InterlockedAdd((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_, 1u);
  v23 = v10;
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v10 + 17, 0xFFFFFFFF);
  v15 = *((_DWORD *)v10 + 22);
  v16 = v14 - 1;
  if ( v16 )
  {
    if ( (v15 & 4) == 0 && v16 == 1 )
      goto LABEL_13;
  }
  else
  {
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 56LL))(v10, 1LL);
    if ( (v15 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_13:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,0,IActivationFactory,Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                v10,
                a3,
                a4);
  if ( CanCastTo >= 0 )
  {
    v18 = *a1;
    if ( (*a1 & 4) == 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)v10 + 17, 1u);
      v18 = *a1;
    }
    v4 = 0LL;
    *((_DWORD *)v10 + 22) = v18;
    v23 = 0LL;
    CanCastTo = 0;
    *((_QWORD *)v10 + 10) = a2;
  }
  else
  {
    v4 = (volatile signed __int32 *)v10;
  }
LABEL_20:
  if ( v4 )
  {
    v19 = _InterlockedExchangeAdd(v4 + 17, 0xFFFFFFFF);
    v20 = *((_DWORD *)v23 + 22);
    v21 = v19 - 1;
    if ( v21 )
    {
      if ( (v20 & 4) == 0 && v21 == 1 )
        goto LABEL_27;
    }
    else
    {
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v23 + 56LL))(v23, 1LL);
      if ( (v20 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_27:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return (unsigned int)CanCastTo;
}
