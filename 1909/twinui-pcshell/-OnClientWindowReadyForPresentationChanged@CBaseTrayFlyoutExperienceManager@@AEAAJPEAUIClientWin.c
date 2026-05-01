/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180098AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged(
        CBaseTrayFlyoutExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  return SingleViewLightDismissHelper::UpdateLightDismiss(
           (char *)this + 272,
           *((unsigned int *)this + 66),
           *((_QWORD *)this + 12));
}
