/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18000B414
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000AAA4 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        HSTRING *a3)
{
  __int64 *v3; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rdi
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v10; // rax
  const WCHAR *v11; // rbx
  const WCHAR *v12; // rax
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v7 = (__int64 *)*a1;
  v8 = *(__int64 **)(*a1 + 8);
  if ( !*((_BYTE *)v8 + 25) )
  {
    do
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*a3, 0LL);
      v10 = WindowsGetStringRawBuffer((HSTRING)v8[4], 0LL);
      if ( CompareStringOrdinal(v10, -1, StringRawBuffer, -1, 1) == 1 )
      {
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v3 = v8;
        v8 = (__int64 *)*v8;
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    v7 = (__int64 *)*a1;
  }
  if ( v3 == v7
    || (v11 = WindowsGetStringRawBuffer((HSTRING)v3[4], 0LL),
        v12 = WindowsGetStringRawBuffer(*a3, 0LL),
        CompareStringOrdinal(v12, -1, v11, -1, 1) == 1) )
  {
    v3 = (__int64 *)*a1;
  }
  result = a2;
  *a2 = v3;
  return result;
}
