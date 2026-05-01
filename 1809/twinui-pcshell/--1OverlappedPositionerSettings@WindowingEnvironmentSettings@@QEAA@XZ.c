/*
 * XREFs of ??1OverlappedPositionerSettings@WindowingEnvironmentSettings@@QEAA@XZ @ 0x180225088
 * Callers:
 *     _WindowingEnvironmentSettings::WindowingEnvironmentSettings_::_1_::dtor$1 @ 0x180224D6A (_WindowingEnvironmentSettings--WindowingEnvironmentSettings_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall WindowingEnvironmentSettings::OverlappedPositionerSettings::~OverlappedPositionerSettings(
        WindowingEnvironmentSettings::OverlappedPositionerSettings *this)
{
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>((__int64 *)this + 3);
}
