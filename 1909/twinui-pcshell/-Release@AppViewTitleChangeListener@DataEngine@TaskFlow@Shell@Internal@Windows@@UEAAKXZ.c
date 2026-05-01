/*
 * XREFs of ?Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x180216DB0
 * Callers:
 *     ?Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ @ 0x1800D9780 (-Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ @ 0x1800D9790 (-Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBA@EAAKXZ.c)
 *     ?Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ @ 0x1800D97A0 (-Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WBI@EAAKXZ.c)
 *     ?Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ @ 0x1800D97B0 (-Release@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveShellHookNotification,Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewTitleChangeListener,Microsoft::WRL::FtmBase>::Release(this);
}
