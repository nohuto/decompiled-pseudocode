/*
 * XREFs of ?GetThumbnail@CDropFeedbackItem@@UEAAJPEAPEAUIDCompThumbnail@@@Z @ 0x1803FC510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CDropFeedbackItem::GetThumbnail(CDropFeedbackItem *this, struct IDCompThumbnail **a2)
{
  struct IDCompThumbnail **v2; // rbx

  v2 = (struct IDCompThumbnail **)((char *)this + 168);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 21);
  *a2 = *v2;
  return 0LL;
}
