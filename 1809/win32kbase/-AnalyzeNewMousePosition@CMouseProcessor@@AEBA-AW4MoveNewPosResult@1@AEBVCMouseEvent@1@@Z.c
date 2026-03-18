/*
 * XREFs of ?AnalyzeNewMousePosition@CMouseProcessor@@AEBA?AW4MoveNewPosResult@1@AEBVCMouseEvent@1@@Z @ 0x1C00834A4
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::AnalyzeNewMousePosition(_DWORD *a1, __int64 a2)
{
  _DWORD *v2; // r8
  unsigned int v3; // edx

  v2 = *(_DWORD **)a2;
  if ( a1[607] == *(_DWORD *)(*(_QWORD *)a2 + 48LL) && a1[608] == v2[13] )
    v3 = 0;
  else
    v3 = 2;
  if ( !v3 && (a1[609] != v2[14] || a1[610] != v2[15]) )
    return 1;
  return v3;
}
