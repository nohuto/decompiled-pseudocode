/*
 * XREFs of ??$As@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@?$ComPtr@UIContactCardOptions@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContactCardOptions2@Contacts@ApplicationModel@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18016FE2C
 * Callers:
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x180171F34 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x1801743D0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::ApplicationModel::Contacts::IContactCardOptions>::As<Windows::ApplicationModel::Contacts::IContactCardOptions2>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_8f271ba0_d74b_4cc6_9f53_1b0eb5d1273c,
           a2);
}
