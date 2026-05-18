/*
 * XREFs of sub_180109FD0 @ 0x180109FD0
 * Callers:
 *     sub_1801097AC @ 0x1801097AC (sub_1801097AC.c)
 * Callees:
 *     sub_1800635DC @ 0x1800635DC (sub_1800635DC.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800E1138 @ 0x1800E1138 (sub_1800E1138.c)
 *     sub_1801093CC @ 0x1801093CC (sub_1801093CC.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_180109FD0(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_1800635DC(a1 + 8);
  sub_1801093CC(a1);
  v3 = 0;
  if ( !sub_1800E1138() )
    v3 = !sub_1800E1138();
  sub_180063668(v2);
  return v3;
}
