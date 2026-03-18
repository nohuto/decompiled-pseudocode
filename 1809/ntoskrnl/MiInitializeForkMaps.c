/*
 * XREFs of MiInitializeForkMaps @ 0x1402CA778
 * Callers:
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 * Callees:
 *     MiMapSinglePage @ 0x14012185C (MiMapSinglePage.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

_BOOL8 __fastcall MiInitializeForkMaps(__int64 a1, _QWORD *a2)
{
  ULONG_PTR v4; // rax

  memset(a2, 0, 0x48uLL);
  a2[1] = -1LL;
  a2[2] = -1LL;
  a2[3] = -1LL;
  *a2 = a1;
  v4 = MiMapSinglePage(0LL, 0LL, 1073741856, 2);
  a2[7] = v4;
  return v4 != 0;
}
