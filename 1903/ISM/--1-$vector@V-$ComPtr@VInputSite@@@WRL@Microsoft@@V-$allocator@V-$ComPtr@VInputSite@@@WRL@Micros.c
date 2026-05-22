/*
 * XREFs of ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800662CC
 * Callers:
 *     _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::dtor$0 @ 0x18003C230 (_InputSiteManager--GetInputSiteListFromDITCallbackStruct_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>(__int64 a1)
{
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(a1);
}
