/*
 * XREFs of ?GetIids@TargetedContentActionStatics@Internal@TargetedContent@Services@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180052A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionStatics::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           a1 - 40,
           a2,
           a3);
}
