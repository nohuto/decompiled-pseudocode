/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::_)(HSTRING____)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_Microsoft::WRL::FtmBase___lambda_9598f9a09e0b454f94e474723c5ca7fa___1_HSTRING_____::Invoke @ 0x18001ED20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800153D4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler::___HSTRING______::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_Microsoft::WRL::FtmBase___lambda_9598f9a09e0b454f94e474723c5ca7fa___1_HSTRING_____::Invoke(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v9 = 0LL;
  if ( !v2
    || (v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
               v2,
               &GUID_10c5648f_6c8f_4712_9b38_474bc22e76d8,
               &v9),
        v4 = v9,
        v6 = v5,
        v5 >= 0) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
    v4 = v9;
    v6 = v7;
  }
  if ( v4 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v6 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v6);
  return (unsigned int)v6;
}
