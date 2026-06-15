/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800F7908
 * Callers:
 *     _DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent_::_1_::dtor$5 @ 0x18006AAB3 (_DolbyOEMLicenseCheck--IsDolbyOEMLicensePresent_--_1_--dtor$5.c)
 *     _DolbyOEMLicenseCheck::IsDolbyOEMLicensePresent_::_1_::dtor$6 @ 0x18006AAC5 (_DolbyOEMLicenseCheck--IsDolbyOEMLicensePresent_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
