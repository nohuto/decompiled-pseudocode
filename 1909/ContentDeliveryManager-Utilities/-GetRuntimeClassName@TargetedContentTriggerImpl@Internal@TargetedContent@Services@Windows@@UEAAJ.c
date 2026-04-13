/*
 * XREFs of ?GetRuntimeClassName@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18001FCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::GetRuntimeClassName(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Services.TargetedContent.Internal.TargetedContentTriggerInternal", 0x48u, a2);
}
