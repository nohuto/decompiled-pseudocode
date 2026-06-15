/*
 * XREFs of _CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::catch$2 @ 0x1800FF9FB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CConstraintModelResourceManager::AddWorkItemToQueue_::_1_::catch_2(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = *(_DWORD **)(a2 + 40);
  if ( *v3 == -1073741571 )
    _o__resetstkoflw();
  *(_DWORD *)(a2 + 104) = *v3;
  return &loc_1800FF99B;
}
