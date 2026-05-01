/*
 * XREFs of ?_MinimizeView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18034117C
 * Callers:
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18033F1A0 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18013F77C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180141C8C (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_MinimizeView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CDesktopPositioner *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = this;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v9);
  if ( v9 )
  {
    *((_DWORD *)v9 + 20) = 1;
    v6 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 320LL))(a2);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = (unsigned int)v6;
    v5 = 2884LL;
  }
  else
  {
    v3 = -2147024882;
    v4 = 2147942414LL;
    v5 = 2882LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v9);
  return v3;
}
