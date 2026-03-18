/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0096964
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r8d

  v2 = *(_DWORD **)(a2 + 8);
  v3 = 0;
  if ( a1[784] == v2[13] && a1[785] == v2[14] )
  {
    if ( a1[786] != v2[15] || a1[787] != v2[16] )
      return 1;
  }
  else
  {
    return 2;
  }
  return v3;
}
