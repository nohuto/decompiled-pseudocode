/*
 * XREFs of MiGetFreeOrZeroPageAnyColor @ 0x1400EB150
 * Callers:
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 * Callees:
 *     MiDemoteLocalLargePage @ 0x140064050 (MiDemoteLocalLargePage.c)
 *     MiRemovePageAnyColor @ 0x1400EB1FC (MiRemovePageAnyColor.c)
 *     MiGetPageSlist @ 0x14010CD20 (MiGetPageSlist.c)
 */

__int64 __fastcall MiGetFreeOrZeroPageAnyColor(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbp
  int v7; // r14d
  __int64 v8; // rbp
  int v9; // r15d
  __int64 result; // rax
  unsigned int v11; // ebx

  v3 = *(int *)(a1 + 6556);
  if ( v3 >= 0x10 )
    v3 = 16LL;
  v7 = 1;
  v8 = (unsigned int)dword_14043B148 * v3;
  v9 = a3 & 0x10001;
  while ( 1 )
  {
    if ( !v9 )
    {
      result = (__int64)MiDemoteLocalLargePage(a1, a2, a3, v8);
      if ( result )
        return result;
      v7 = 0;
    }
    result = MiRemovePageAnyColor(a1, a2, a3);
    if ( result == 1 )
      return 1LL;
    if ( result )
      return result;
    result = MiGetPageSlist(a1, a2, a3);
    if ( result )
      return result;
    if ( !v7 )
      break;
    if ( (a3 & 1) != 0 )
      return result;
  }
  if ( (a3 & 0x4000) == 0 )
    return result;
  v11 = a3 & 0xFFFFBFFF;
  result = MiRemovePageAnyColor(a1, a2, v11);
  if ( result == 1 )
    return 1LL;
  if ( !result )
    return MiGetPageSlist(a1, a2, v11);
  return result;
}
