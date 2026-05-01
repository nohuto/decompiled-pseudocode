/*
 * XREFs of ??$MakeAndInitialize@VCJumpViewExperienceEventArgs@@UIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@@Z @ 0x1801B9450
 * Callers:
 *     ?FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801BB1C8 (-FireCancelledEvent@CJumpViewExperienceManager@@AEAAXXZ.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC170 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC470 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004CC7C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800678C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18012ECFC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18012ECFC.c)
 *     ??0CJumpViewExperienceEventArgs@@QEAA@XZ @ 0x1801B9C78 (--0CJumpViewExperienceEventArgs@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CJumpViewExperienceEventArgs,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs,HSTRING__ *>(
        __int64 *a1,
        HSTRING *a2)
{
  CJumpViewExperienceEventArgs *v4; // rax
  int CanCastTo; // ebx
  CJumpViewExperienceEventArgs *v6; // rax
  __int64 v7; // rdi
  int v8; // eax
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (CJumpViewExperienceEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = CJumpViewExperienceEventArgs::CJumpViewExperienceEventArgs(v4);
  v15 = *a2;
  v7 = (__int64)v6;
  v8 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)v6 + 8, &v15);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperienceeventargs.h",
      (const char *)(unsigned int)v8);
    goto LABEL_12;
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_afe9aba4_877b_44b7_b9cb_1d0c97c6b204, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v7;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v11) )
    {
      *a1 = v7;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    v7 + 8,
                    v12);
      if ( CanCastTo < 0 )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_12:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v7);
  return (unsigned int)CanCastTo;
}
