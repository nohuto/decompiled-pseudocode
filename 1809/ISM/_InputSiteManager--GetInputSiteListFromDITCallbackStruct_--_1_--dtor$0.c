/*
 * XREFs of _InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::dtor$0 @ 0x18012E98F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18001E0F8 (--1-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Micros.c)
 */

__int64 __fastcall InputSiteManager::GetInputSiteListFromDITCallbackStruct_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::vector<Microsoft::WRL::ComPtr<InputSite>>::~vector<Microsoft::WRL::ComPtr<InputSite>>();
  }
  return result;
}
