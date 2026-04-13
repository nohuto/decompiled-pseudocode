/*
 * XREFs of _MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor$4 @ 0x1800CFAA1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>::~VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *>>(a2 + 72);
}
