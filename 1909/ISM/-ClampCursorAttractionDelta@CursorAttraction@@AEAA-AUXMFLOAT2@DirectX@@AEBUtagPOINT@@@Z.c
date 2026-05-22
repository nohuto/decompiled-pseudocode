/*
 * XREFs of ?ClampCursorAttractionDelta@CursorAttraction@@AEAA?AUXMFLOAT2@DirectX@@AEBUtagPOINT@@@Z @ 0x1800F79B0
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800F7808 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CursorAttraction::ClampCursorAttractionDelta(__int64 a1, __int64 a2, int *a3)
{
  int v3; // r10d
  int v4; // r11d
  float v5; // xmm2_4
  int v6; // r9d
  int v7; // r8d
  int v8; // eax
  int v9; // eax

  v3 = *a3;
  v4 = a3[1];
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 24);
  v5 = *(float *)(a2 + 4);
  v6 = v3 + (int)*(float *)a2;
  v7 = v4 + (int)v5;
  if ( *(float *)a2 < 0.0 && (v8 = *(_DWORD *)(a1 + 16), v6 <= v8)
    || *(float *)a2 > 0.0 && (v8 = *(_DWORD *)(a1 + 16), v6 >= v8) )
  {
    *(float *)a2 = (float)(v8 - v3);
  }
  if ( v5 < 0.0 && (v9 = *(_DWORD *)(a1 + 20), v7 <= v9) || v5 > 0.0 && (v9 = *(_DWORD *)(a1 + 20), v7 >= v9) )
    *(float *)(a2 + 4) = (float)(v9 - v4);
  return a2;
}
