/*
 * XREFs of ?get_Value@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJPEAW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180082500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::get_Value(
        __int64 a1,
        _DWORD *a2)
{
  if ( !a2 )
    return 2147942487LL;
  *a2 = *(_DWORD *)(a1 + 64);
  return 0LL;
}
