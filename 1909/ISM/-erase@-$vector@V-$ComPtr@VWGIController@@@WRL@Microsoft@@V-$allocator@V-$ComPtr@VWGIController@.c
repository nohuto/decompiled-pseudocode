/*
 * XREFs of ?erase@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800A80D8
 * Callers:
 *     ?OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@Input@Gaming@Windows@@@Z @ 0x1800A7700 (-OnRawGameControllerRemoved@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIRawGameController@I.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A79B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A79B0.c)
 */

_QWORD *__fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  char *v3; // rsi
  char *v4; // rdi
  char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD *result; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(char **)(a1 + 8);
  v4 = (char *)(a3 + 8);
  v8 = v3;
  if ( (char *)(a3 + 8) != v3 )
  {
    do
    {
      v9 = 0LL;
      if ( &v13 != v4 )
      {
        v9 = *(_QWORD *)v4;
        *(_QWORD *)v4 = 0LL;
      }
      v10 = *((_QWORD *)v4 - 1);
      *((_QWORD *)v4 - 1) = v9;
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
      v4 += 8;
    }
    while ( v4 != v3 );
    v3 = *(char **)(a1 + 8);
    v8 = v3;
  }
  v11 = *((_QWORD *)v3 - 1);
  if ( v11 )
  {
    *((_QWORD *)v3 - 1) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v11);
    v8 = *(char **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 8) = v8 - 8;
  result = a2;
  *a2 = a3;
  return result;
}
