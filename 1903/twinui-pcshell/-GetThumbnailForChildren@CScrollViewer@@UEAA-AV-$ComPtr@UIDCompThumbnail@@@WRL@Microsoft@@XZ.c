/*
 * XREFs of ?GetThumbnailForChildren@CScrollViewer@@UEAA?AV?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@XZ @ 0x18037CD30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CScrollViewer::GetThumbnailForChildren(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 224);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
