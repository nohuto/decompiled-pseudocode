/*
 * XREFs of ??1IterableIterator@?$IterableRange@PEAU?$IKeyValuePair@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@5@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180225060
 * Callers:
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$6 @ 0x180226CE6 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$6.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$7 @ 0x180226CF2 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$7.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall wil::IterableRange<Windows::Foundation::Collections::IKeyValuePair<Windows::Internal::ApplicationModel::WindowManagement::AppViewId,Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *> *> *,wil::err_exception_policy>::IterableIterator::~IterableIterator(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
