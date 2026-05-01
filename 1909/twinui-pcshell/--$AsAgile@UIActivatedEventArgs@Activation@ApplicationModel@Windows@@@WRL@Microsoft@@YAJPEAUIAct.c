/*
 * XREFs of ??$AsAgile@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@YAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAVAgileRef@01@@Z @ 0x18006B63C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___::Run @ 0x18006AAD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8b199a0feb076873244f725fed1af37___--Run.c)
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18003B250 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 */

__int64 __fastcall Microsoft::WRL::AsAgile<Windows::ApplicationModel::Activation::IActivatedEventArgs>(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v2; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e, a1, a2);
  }
  else
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v6);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, &v6);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v6);
  }
  return v2;
}
