/*
 * XREFs of ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180157E34
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x18015B630 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18017D8F4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_1ec5d3ef_a8bf_4311_9eeb_33ba50f461fe,
           a2);
}
