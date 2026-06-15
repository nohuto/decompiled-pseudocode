/*
 * XREFs of _CApplicationManager::ProcessTerminated_::_1_::dtor$5 @ 0x180036EF2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::ProcessTerminated_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
