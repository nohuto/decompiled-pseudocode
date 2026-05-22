/*
 * XREFs of ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x1800F7B0C
 * Callers:
 *     ?ApplyCursorAttraction@CursorAttraction@@QEAA?AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z @ 0x1800F7808 (-ApplyCursorAttraction@CursorAttraction@@QEAA-AUtagPOINT@@AEBU2@AEBUtagRECT@@@Z.c)
 * Callees:
 *     operator__ @ 0x1800F77C0 (operator__.c)
 */

char __fastcall CursorAttraction::IsCursorAtRest(CursorAttraction *this)
{
  CursorAttraction *v1; // r11
  unsigned int v2; // ecx
  int v3; // r9d
  unsigned int v4; // r10d

  v1 = this;
  v2 = (*((_DWORD *)this + 12) + 1) % 0xAu;
  while ( !operator__((_DWORD *)v1 + 2 * ((v2 + 1) % 0xA) + 13, (_DWORD *)v1 + 2 * (v2 % 0xA) + 13) )
  {
    v2 = v4;
    if ( v4 - v3 >= 9 )
      return 1;
  }
  return 0;
}
