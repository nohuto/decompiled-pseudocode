/*
 * XREFs of CmpFindLowerBoundInSortedArray @ 0x1401B36BC
 * Callers:
 *     CmpFindSecurityCellCacheIndexNew @ 0x1401B3724 (CmpFindSecurityCellCacheIndexNew.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall CmpFindLowerBoundInSortedArray(unsigned int *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned int *v3; // r9
  unsigned int v4; // r11d
  unsigned int *v5; // rcx
  int v6; // ebx
  unsigned int *v7; // rcx

  v3 = &a2[4 * a3];
  if ( a2 < v3 )
  {
    v4 = *a1;
    do
    {
      v5 = &a2[4 * (a3 >> 1)];
      if ( v4 <= *v5 )
      {
        a3 >>= 1;
        v3 = v5;
        v6 = -(v4 < *v5);
      }
      else
      {
        v6 = 1;
        a3 += -1LL - (a3 >> 1);
      }
      v7 = v5 + 4;
      if ( v6 > 0 )
        a2 = v7;
    }
    while ( a2 < v3 );
  }
  return a2;
}
