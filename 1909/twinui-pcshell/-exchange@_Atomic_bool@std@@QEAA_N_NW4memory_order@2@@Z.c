/*
 * XREFs of ?exchange@_Atomic_bool@std@@QEAA_N_NW4memory_order@2@@Z @ 0x180197CC8
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z @ 0x18033152C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@_N11@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::_Atomic_bool::exchange(char *a1, char a2)
{
  char v2; // dl

  v2 = *a1;
  *a1 = a2;
  return v2 != 0;
}
