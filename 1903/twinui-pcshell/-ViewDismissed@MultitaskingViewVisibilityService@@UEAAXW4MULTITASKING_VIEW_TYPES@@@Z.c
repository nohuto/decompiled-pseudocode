/*
 * XREFs of ?ViewDismissed@MultitaskingViewVisibilityService@@UEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180344470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MultitaskingViewVisibilityService::ViewDismissed(__int64 a1, int a2)
{
  MultitaskingViewVisibilityService::UpdateVisibility((_DWORD *)(a1 - 8), ~a2, a2);
}
