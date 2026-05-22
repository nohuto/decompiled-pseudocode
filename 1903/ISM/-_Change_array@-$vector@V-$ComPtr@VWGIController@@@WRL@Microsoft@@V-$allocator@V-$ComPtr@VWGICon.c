/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@_K1@Z @ 0x1800A8170
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VWGIController@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1800A7004 (--$_Emplace_reallocate@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VWGIControl.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800A7B40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800A7B40.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<WGIController>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int64 **v4; // rbx
  volatile signed __int64 **v9; // rbp
  volatile signed __int64 *v10; // rcx
  __int64 result; // rax

  v4 = *(volatile signed __int64 ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(volatile signed __int64 ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(v10);
        }
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(volatile signed __int64 ***)a1;
    }
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
