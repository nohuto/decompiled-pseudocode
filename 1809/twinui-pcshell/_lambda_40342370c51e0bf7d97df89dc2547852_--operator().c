/*
 * XREFs of _lambda_40342370c51e0bf7d97df89dc2547852_::operator() @ 0x1803AE590
 * Callers:
 *     _lambda_40342370c51e0bf7d97df89dc2547852_::_lambda_invoker_cdecl_ @ 0x1803ADDC0 (_lambda_40342370c51e0bf7d97df89dc2547852_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x1800186D8 (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 lambda_40342370c51e0bf7d97df89dc2547852_::operator()(
        __int64 a1,
        struct _TP_CALLBACK_INSTANCE *a2,
        __int64 a3,
        ...)
{
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  struct IInspectable *v9; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  va_list va1; // [rsp+60h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, struct IInspectable *);
  v8 = a1;
  v4 = *(_QWORD *)(a3 + 152);
  v8 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  DisassociateCurrentThreadFromCallback(a2);
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  v5 = Microsoft::WRL::WeakRef::InternalResolve(
         (Microsoft::WRL::WeakRef *)&v8,
         &GUID_c50898f6_c536_5f47_8583_8b2c2438a13b,
         (struct IInspectable **)va);
  if ( v5 >= 0 )
  {
    if ( v9 )
      ((void (__fastcall *)(struct IInspectable *, _QWORD, _QWORD))v9->lpVtbl->GetIids)(v9, 0LL, 0LL);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1086LL,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
}
