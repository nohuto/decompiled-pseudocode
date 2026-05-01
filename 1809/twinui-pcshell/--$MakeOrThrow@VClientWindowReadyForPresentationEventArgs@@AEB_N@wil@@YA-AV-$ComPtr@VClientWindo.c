/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800914F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f048fba51bc173615ba07557fcfffbba___::Run @ 0x18003B070 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f048fba51bc173615ba07557fcfffbba___--Run.c)
 * Callees:
 *     ??0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z @ 0x18003AF70 (--0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z.c)
 *     ?Attach@?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@QEAAXPEAVClientWindowReadyForPresentationEventArgs@@@Z @ 0x18003B10C (-Attach@-$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@QEAAXPEAVClientWind.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
    Microsoft::WRL::ComPtr<ClientWindowReadyForPresentationEventArgs>::Attach(a1, (__int64)v6);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x38, (unsigned int)"internal\\sdk\\inc\\wil\\wrl.h", v5);
    __debugbreak();
  }
  return a1;
}
