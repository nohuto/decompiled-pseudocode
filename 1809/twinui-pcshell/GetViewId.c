/*
 * XREFs of GetViewId @ 0x1801B35D0
 * Callers:
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B4FCC (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801B514C (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1801B52B4 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetViewId(__int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *), _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  void *v10; // rcx
  void *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+58h] [rbp+28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v4 = (**a1)(a1, &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v15 = 0LL;
    v6 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL))(v6, &v15);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v14 = 0LL;
      v8 = v15;
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        &v14,
        0LL);
      v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v8 + 40LL))(v8, &v14);
      v5 = v9;
      if ( v9 >= 0 )
      {
        v11 = v14;
        v10 = 0LL;
        v14 = 0LL;
        *a2 = v11;
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D,
          (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
          (const char *)(unsigned int)v9);
        v10 = v14;
      }
      if ( v10 )
        CoTaskMemFree(v10);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (__int64)"pcshell\\twinui\\holographicpositioner\\inc\\holographicpositionertracing.h",
      (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return v5;
}
