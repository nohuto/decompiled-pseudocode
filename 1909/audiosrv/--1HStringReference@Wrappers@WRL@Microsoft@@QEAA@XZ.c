/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800FB4D4
 * Callers:
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x1800702D0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
