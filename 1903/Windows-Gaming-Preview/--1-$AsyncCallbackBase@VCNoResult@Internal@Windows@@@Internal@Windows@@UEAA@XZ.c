/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x18001E6B4
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_d6e28d15cb03386e0d7e5ac918f3cf05____::_1_::dtor$1 @ 0x180044E35 (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Inter_ea_180044E35.c)
 *     _Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry__Windows::Gaming::Preview::GamesEnumeration::GameListEntry___Windows::Internal::ComTaskPoolHandler__lambda_2bb0be94c8b34b0b06b3ace075c36ca6____::_1_::dtor$1 @ 0x180044E82 (_Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_ea_180044E82.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  return result;
}
