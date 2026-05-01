/*
 * XREFs of ??$As@UIViewCUIEventStore@@@?$ComPtr@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewCUIEventStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020EAB0
 * Callers:
 *     ?GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z @ 0x1802147B0 (-GetComponentEventHandles@ViewEventDispatcher@@UEAAJIKPEAPEAX@Z.c)
 *     ?GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z @ 0x180214A90 (-GetDesktopBrokerProcessHandle@ViewEventDispatcher@@UEAAJPEAPEAX@Z.c)
 *     ?GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z @ 0x180215510 (-GetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAPEAX@Z.c)
 *     ?SetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z @ 0x1802183B0 (-SetViewEventHandle@ViewEventDispatcher@@UEAAJIW4_CUI_VIEW_EVENT_TYPE@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::OneCore::ViewEventHandlers::IComponentRelationshipStore>::As<IViewCUIEventStore>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_18e60597_2f88_4b40_8b98_82e0f3a84a92,
           a2);
}
