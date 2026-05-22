/*
 * XREFs of ?Initialize@ViewMenuChordedKeyHandler@@IEAAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@@Z @ 0x180079DAC
 * Callers:
 *     ?Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z0AEBV23@PEAPEAV1@@Z @ 0x180079CD4 (-Create@ViewMenuChordedKeyHandler@@SAJP6AJPEAXAEAV-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Assign_range@PEAU?$pair@G_N@std@@@?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@AEAAXPEAU?$pair@G_N@1@0Uforward_iterator_tag@1@@Z @ 0x18007953C (--$_Assign_range@PEAU-$pair@G_N@std@@@-$vector@U-$pair@G_N@std@@V-$allocator@U-$pair@G_N@std@@@2.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ViewMenuChordedKeyHandler::Initialize(__int64 a1, __int64 a2, __int64 a3, ...)
{
  char **v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, int (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64); // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v5 = (char **)(a1 + 80);
  if ( v5 != (char **)&xmmword_1801E1540 )
    std::vector<std::pair<unsigned short,bool>>::_Assign_range<std::pair<unsigned short,bool> *>(
      v5,
      xmmword_1801E1540,
      *((unsigned __int64 *)&xmmword_1801E1540 + 1));
  *(_QWORD *)(a1 + 32) = ControllerProcessor::TaskSwitcherInvokedCallbackStatic;
  *(_QWORD *)(a1 + 40) = a3;
  *(_DWORD *)(a1 + 16) = 1;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)va);
  v6 = CoreUICreate((__int64 *)va);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = v13;
    v10 = *(__int64 (__fastcall **)(__int64, int (__fastcall *)(ViewMenuChordedKeyHandler *), __int64, __int64))(*(_QWORD *)v13 + 128LL);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)(a1 + 24));
    v6 = v10(v9, lambda_d6b818e87fb176752f65e0086b51e68b_::_lambda_invoker_cdecl_, a1, a1 + 24);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
      *(_WORD *)(a1 + 73) = 0;
      *(_BYTE *)(a1 + 72) = 0;
      v7 = 0;
      goto LABEL_9;
    }
    v8 = 103LL;
  }
  else
  {
    v8 = 96LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_9:
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease((__int64 *)va);
  return v7;
}
