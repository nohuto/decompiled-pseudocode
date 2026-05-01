/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18009B6B0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___::Run @ 0x180027770 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad33d73e1ecf9087493325ab2e1dbde5___--Run.c)
 * Callees:
 *     ??0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z @ 0x180027658 (--0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z.c)
 *     ?Attach@?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z @ 0x18002780C (-Attach@-$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@QEAAXPEAVSizeConversionViewInfo@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801200A8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(__int64 *a1, char *a2)
{
  ClientWindowReadyForPresentationEventArgs *v4; // rax
  const char *v5; // r9
  ClientWindowReadyForPresentationEventArgs *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ClientWindowReadyForPresentationEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ClientWindowReadyForPresentationEventArgs::ClientWindowReadyForPresentationEventArgs(v4, *a2);
    Microsoft::WRL::ComPtr<SizeConversionViewInfo>::Attach(a1, (__int64)v6);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x2F,
      (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
