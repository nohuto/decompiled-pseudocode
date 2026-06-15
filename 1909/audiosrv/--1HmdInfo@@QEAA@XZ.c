/*
 * XREFs of ??1HmdInfo@@QEAA@XZ @ 0x18006B06C
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ea6a77349a638633efc06cdc677d7ed3____::_1_::dtor$0 @ 0x1800F5012 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_1800F5012.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$2 @ 0x180126167 (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$2.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$3 @ 0x180126473 (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall HmdInfo::~HmdInfo(__int64 *this)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(this);
}
