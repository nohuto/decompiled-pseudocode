/*
 * XREFs of RaUnitCheckRemoveState @ 0x1C0007A94
 * Callers:
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaUnitStartResetIo @ 0x1C0046E0C (RaUnitStartResetIo.c)
 * Callees:
 *     RaUnitCheckRemoveStateForDisabled @ 0x1C00456E4 (RaUnitCheckRemoveStateForDisabled.c)
 */

__int64 __fastcall RaUnitCheckRemoveState(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 48) != 5 )
  {
    if ( *(_DWORD *)(a1 + 48) != 6 )
    {
      if ( *(_DWORD *)(a1 + 48) == 7 )
        return RaUnitCheckRemoveStateForDisabled();
      else
        return 0LL;
    }
    return 3221225558LL;
  }
  result = 0LL;
  if ( !a2 )
    return 3221225558LL;
  v3 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v3 != 27 && (*(_BYTE *)v3 != 14 || *(_DWORD *)(v3 + 24) != 266276) )
    return 3221225558LL;
  return result;
}
