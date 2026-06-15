/*
 * XREFs of _CApplicationManager::ProcessTerminated_::_1_::dtor$1 @ 0x180036384
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ProcessTerminated_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
