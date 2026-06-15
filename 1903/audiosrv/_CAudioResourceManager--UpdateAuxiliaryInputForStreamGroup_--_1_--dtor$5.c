/*
 * XREFs of _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$5 @ 0x1800F9E5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<AuxiliaryInputDescriptor>::~CAutoPtr<AuxiliaryInputDescriptor>(
           (AuxiliaryInputDescriptor **)(a2 + 104),
           a2);
}
