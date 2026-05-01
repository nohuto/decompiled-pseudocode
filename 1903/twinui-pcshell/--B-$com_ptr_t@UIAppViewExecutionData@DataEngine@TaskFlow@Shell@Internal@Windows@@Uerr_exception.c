/*
 * XREFs of ??B?$com_ptr_t@UIAppViewExecutionData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x180098174
 * Callers:
 *     ?OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180067F60 (-OnApplicationViewChanged@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUI.c)
 *     ?GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIAppViewExecutionData@23456@@Z @ 0x1801F8C60 (-GetInFocusViewData@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAPEAUIApp.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803193E0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::IAppViewExecutionData,wil::err_exception_policy>::operator bool(
        _QWORD *a1)
{
  return *a1 != 0LL;
}
