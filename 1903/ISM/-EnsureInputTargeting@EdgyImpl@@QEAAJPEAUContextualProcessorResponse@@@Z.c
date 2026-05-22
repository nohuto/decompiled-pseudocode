/*
 * XREFs of ?EnsureInputTargeting@EdgyImpl@@QEAAJPEAUContextualProcessorResponse@@@Z @ 0x1801045DC
 * Callers:
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801035D8 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002F1B4 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x180104494 (-Create@EdgyInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 *     ?DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUContextualProcessorResponse@@PEAI@Z @ 0x18010451C (-DetermineInputRouting@EdgyImpl@@QEAA_NPEAW4EdgyInputRouting@Input@Internal@UI@Windows@@PEAUCont.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyImpl::EnsureInputTargeting(EdgyImpl *this, struct ContextualProcessorResponse *a2)
{
  const char *v4; // r9
  int v5; // r14d
  int v6; // eax
  unsigned int v7; // ebx
  struct IInputTarget *v8; // rcx
  struct IInputTarget *v9; // rbx
  __int64 (__fastcall *v10)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v11; // eax
  int v12; // eax
  struct IInputTarget *v13; // rcx
  __int64 v15[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  struct IInputTarget *v18; // [rsp+78h] [rbp+48h] BYREF

  v15[1] = -2LL;
  LODWORD(v18) = 0;
  *(_DWORD *)a2 = 0;
  v17 = 0;
  if ( !EdgyImpl::DetermineInputRouting(this, (enum Windows::UI::Internal::Input::EdgyInputRouting *)&v18, a2, &v17) )
    return 0;
  v5 = (int)v18;
  if ( !v17 )
  {
LABEL_16:
    *((_DWORD *)this + 4) = v5;
    return 0;
  }
  if ( (_DWORD)v18 != 1 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      279LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v4);
    __debugbreak();
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      280LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
      v4);
    __debugbreak();
  }
  v18 = 0LL;
  v15[0] = 0LL;
  v6 = EdgyInputTarget::Create(&v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v18;
    v10 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))v18;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
    v11 = v10(v9, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, v15);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        295LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v11);
      __debugbreak();
    }
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15[0] + 80LL))(v15[0], v17);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        297LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)a2 + 2, (__int64 *)&v18);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x123,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyimpl.cpp",
    (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(v15);
  v8 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
