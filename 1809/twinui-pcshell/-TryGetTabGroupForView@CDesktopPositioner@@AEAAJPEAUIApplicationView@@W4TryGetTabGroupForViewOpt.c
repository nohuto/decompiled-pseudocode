/*
 * XREFs of ?TryGetTabGroupForView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4TryGetTabGroupForViewOption@1@PEAUIUnknown@@PEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18033F784
 * Callers:
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180027F40 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28 (_lambda_a4c092b385a4fac3af45bae97c388695_--operator().c)
 *     ?PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ @ 0x18033DAB0 (-PerformDelayedInitialization@CDesktopPositioner@@UEAAJXZ.c)
 * Callees:
 *     IsPeoplePane @ 0x180028600 (IsPeoplePane.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::TryGetTabGroupForView(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = a5;
  *(_OWORD *)a5 = 0uLL;
  v10 = *(_QWORD *)(a1 + 312);
  if ( v10 )
  {
    a5 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v10 + 56LL))(
            v10,
            a2,
            &GUID_f264283f_b510_4555_80ed_4c7216018854,
            &a5);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 2739LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
      return v12;
    }
    if ( a5 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a5 + 48LL))(a5, v9);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2743LL;
        goto LABEL_11;
      }
    }
    else if ( a3 == 1 && !IsPeoplePane(a2) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 312) + 72LL))(
              *(_QWORD *)(a1 + 312),
              a2,
              a4,
              v9);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 2747LL;
        goto LABEL_11;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&a5);
  }
  return 0LL;
}
