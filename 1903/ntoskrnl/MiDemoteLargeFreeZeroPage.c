/*
 * XREFs of MiDemoteLargeFreeZeroPage @ 0x14015B960
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400A3C88 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiGetFreeZeroLargePage @ 0x1400A4498 (MiGetFreeZeroLargePage.c)
 */

__int64 __fastcall MiDemoteLargeFreeZeroPage(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 FreeZeroLargePage; // rax
  __int64 v12; // rax

  v8 = a3;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v9 = v8--;
    FreeZeroLargePage = MiGetFreeZeroLargePage(a1, v8, a4, a2, 0, 4u);
    if ( FreeZeroLargePage )
      break;
    if ( !v8 )
      return 0LL;
  }
  MiInsertLargePageInFreeOrZeroList(FreeZeroLargePage, v8, 0, 0, 0);
  while ( v9 != a3 )
  {
    v12 = MiGetFreeZeroLargePage(a1, v9, a4, a2, 0, 4u);
    if ( !v12 )
      break;
    MiInsertLargePageInFreeOrZeroList(v12, v9++, 0, 0, 0);
  }
  return 1LL;
}
