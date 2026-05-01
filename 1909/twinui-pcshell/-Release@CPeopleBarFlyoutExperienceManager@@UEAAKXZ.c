/*
 * XREFs of ?Release@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x1801AF7C0
 * Callers:
 *     ?Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ @ 0x1800D7AD0 (-Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ @ 0x1800D7AE0 (-Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WBI@EAAKXZ @ 0x1800D7AF0 (-Release@CPeopleBarFlyoutExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WCA@EAAKXZ @ 0x1800D7B00 (-Release@CPeopleBarFlyoutExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WCI@EAAKXZ @ 0x1800D7B10 (-Release@CPeopleBarFlyoutExperienceManager@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
