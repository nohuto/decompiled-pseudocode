/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UPeoplePaneViewInfo@@@std@@EEAAXXZ @ 0x1801CC310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj<PeoplePaneViewInfo>::_Destroy(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)(a1 + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1 + 4);
  return std::wstring::_Tidy_deallocate(v1);
}
