/*
 * XREFs of ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x1803586E4
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180358740 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WR.c)
 *     ??_GCAltTabViewController@@UEAAPEAXI@Z @ 0x180358780 (--_GCAltTabViewController@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@UISnapAssistViewController@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18035E840 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@UIS.c)
 *     ??_ECSnapAssistViewController@@UEAAPEAXI@Z @ 0x18035E880 (--_ECSnapAssistViewController@@UEAAPEAXI@Z.c)
 *     ??_ECPPIAllUpViewController@@UEAAPEAXI@Z @ 0x18035F9B0 (--_ECPPIAllUpViewController@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(
        CMultitaskingViewControllerBase *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
}
