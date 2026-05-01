/*
 * XREFs of ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXI@Z @ 0x1802E39D8
 * Callers:
 *     ?OnContainerNavigate@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXI@Z @ 0x1800BCDE0 (-OnContainerNavigate@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1802BBC70 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x1802DEBDC (CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall _OnContainerNavigate__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXI_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int v4; // r12d
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  _QWORD v15[2]; // [rsp+38h] [rbp-48h] BYREF
  int v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  __int64 v21; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v23; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+C8h] [rbp+48h] BYREF

  v4 = a2;
  v23 = 0LL;
  v6 = Windows::UI::Core::CoreWindow::GetForCurrentThread(a1, a2, a3, a4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
         v6,
         &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f,
         &v23);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      358LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v7);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      360LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = __abi_winrt_ptr_ctor(a1);
  v10 = __abi_winrt_ptr_ctor(a1);
  v18 = v10;
  v11 = __abi_winrt_ptr_ctor(v9);
  v19 = v11;
  v20 = v4;
  v12 = v24;
  v21 = v24;
  v15[0] = __abi_winrt_ptr_ctor(v10);
  v15[1] = __abi_winrt_ptr_ctor(v11);
  v16 = v4;
  v17 = v12;
  v13 = CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa___(*(_QWORD *)(a1 + 88), v15);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      369LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
      (const char *)(unsigned int)v13);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
}
