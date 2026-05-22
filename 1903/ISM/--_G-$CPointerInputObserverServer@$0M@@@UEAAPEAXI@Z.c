/*
 * XREFs of ??_G?$CPointerInputObserverServer@$0M@@@UEAAPEAXI@Z @ 0x180068410
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18002736C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180028AA4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CPointerInputObserverServer<12>::`scalar deleting destructor'(__int64 *a1, char a2)
{
  void *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx

  v4 = (void *)a1[21];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)((a1[23] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    a1[21] = 0LL;
    a1[22] = 0LL;
    a1[23] = 0LL;
  }
  v5 = (_QWORD **)a1[19];
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(a1[19] + 8) = a1[19];
  a1[20] = 0LL;
  v7 = (_QWORD *)a1[19];
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      v9 = v6[3];
      if ( v9 )
      {
        v6[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      }
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x28);
      v6 = v8;
      v7 = (_QWORD *)a1[19];
    }
    while ( v8 != v7 );
  }
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x28);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)(a1 + 10), v10);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    a1 + 3,
    0LL);
  Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(a1 + 2);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0xD8);
  return a1;
}
