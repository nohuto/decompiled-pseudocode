/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleBarJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UILightDismissNotification@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009ED30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return CPeopleBarJumpViewExperienceManager::GetIids((CPeopleBarJumpViewExperienceManager *)(a1 - 24), a2, a3);
}
