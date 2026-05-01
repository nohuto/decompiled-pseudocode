/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UKBViewInfo@@@std@@EEAAXXZ @ 0x18033AA90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj<KBViewInfo>::_Destroy(__int64 a1)
{
  __int64 *v1; // rbx

  v1 = (__int64 *)(a1 + 16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
}
