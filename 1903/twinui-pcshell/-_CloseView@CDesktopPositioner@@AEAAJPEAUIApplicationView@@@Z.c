/*
 * XREFs of ?_CloseView@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803A5380
 * Callers:
 *     ?SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x1803A40E0 (-SetViewStateForDesiredAppState@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DES.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18040EE40 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_CloseView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  HRESULT v3; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppvOut; // [rsp+60h] [rbp+18h] BYREF
  IUnknown *punk; // [rsp+68h] [rbp+20h] BYREF

  ppvOut = 0LL;
  punk = 0LL;
  (*(void (__fastcall **)(CDesktopPositioner *, GUID *, IUnknown **))(*(_QWORD *)this + 32LL))(
    this,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v3 = IUnknown_QueryService(punk, &stru_1804FFC20, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
  if ( v3 >= 0 )
  {
    v6 = ApplicationViewHelpers::CloseView(a2, ppvOut, 8LL);
    v3 = v6;
    if ( v6 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = (unsigned int)v6;
    v5 = 2918LL;
  }
  else
  {
    v4 = (unsigned int)v3;
    v5 = 2915LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v3;
}
