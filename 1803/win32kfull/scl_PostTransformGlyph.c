/*
 * XREFs of scl_PostTransformGlyph @ 0x1C02B4EE8
 * Callers:
 *     fsg_GridFit @ 0x1C02BD8F4 (fsg_GridFit.c)
 * Callees:
 *     mth_IntelMul @ 0x1C02B36E0 (mth_IntelMul.c)
 */

void __fastcall scl_PostTransformGlyph(_DWORD *a1, __int64 a2, int *a3)
{
  int v3; // r9d
  int v4; // r10d

  if ( a1[118] )
  {
    v3 = a1[94];
    v4 = a1[95];
  }
  else
  {
    v3 = a1[96];
    v4 = a1[97];
  }
  mth_IntelMul(
    (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a2 + 64) + 2LL * (*(__int16 *)(a2 + 80) - 1)) + 9),
    *(char **)a2,
    *(int **)(a2 + 8),
    a3,
    v3,
    v4);
}
