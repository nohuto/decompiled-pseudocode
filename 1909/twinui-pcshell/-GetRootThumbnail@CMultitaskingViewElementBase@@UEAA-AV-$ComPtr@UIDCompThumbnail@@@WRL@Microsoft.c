/*
 * XREFs of ?GetRootThumbnail@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@XZ @ 0x180384420
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetRootThumbnail(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 88);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
