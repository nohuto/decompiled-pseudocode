/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180004B70
 * Callers:
 *     _MsixvcUpdatePolicyInternal_::_1_::dtor$11 @ 0x1800067D9 (_MsixvcUpdatePolicyInternal_--_1_--dtor$11.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
