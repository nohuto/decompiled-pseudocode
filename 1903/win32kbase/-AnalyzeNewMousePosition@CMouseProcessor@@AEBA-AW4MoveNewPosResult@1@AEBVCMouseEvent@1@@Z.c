/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C0098134
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C00312BC (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r9
  unsigned int v3; // r8d

  v2 = *(_DWORD **)(a2 + 8);
  v3 = 0;
  if ( a1[794] == v2[13] && a1[795] == v2[14] )
  {
    if ( a1[796] != v2[15] || a1[797] != v2[16] )
      return 1;
  }
  else
  {
    return 2;
  }
  return v3;
}
