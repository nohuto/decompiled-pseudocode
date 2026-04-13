/*
 * XREFs of _ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor$3 @ 0x1800C8F11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  return Windows::Internal::MoveOnCopy<Windows::Internal::String>::~MoveOnCopy<Windows::Internal::String>((HSTRING *)(a2 + 80));
}
