/*
 * XREFs of _CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor$1 @ 0x180071F78
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModelResourceManager::CConstraintModelResourceManager_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(*(_QWORD *)(a2 + 64) + 16LL);
}
