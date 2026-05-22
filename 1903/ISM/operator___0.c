/*
 * XREFs of operator___0 @ 0x1800F7A0C
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800F7A38 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator___0(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[2] != a2[2] || a1[1] != a2[1] || a1[3] != a2[3];
}
