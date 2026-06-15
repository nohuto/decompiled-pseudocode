/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800FB974
 * Callers:
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$10 @ 0x18006FDD0 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
