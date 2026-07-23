/*
 * XREFs of PipSortDeviceObjectList @ 0x1406EDE00
 * Callers:
 *     IopSortRelationListForRemove @ 0x1406F039C (IopSortRelationListForRemove.c)
 * Callees:
 *     qsort @ 0x140196420 (qsort.c)
 *     PipVisitDeviceObjectListEntry @ 0x1406ED854 (PipVisitDeviceObjectListEntry.c)
 */

__int64 __fastcall PipSortDeviceObjectList(unsigned int **a1)
{
  __int64 v1; // r11
  size_t v3; // rbx
  _DWORD *v4; // rsi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = **a1;
  v4 = *a1 + 4;
  if ( (_DWORD)v3 )
  {
    v5 = *a1 + 8;
    v6 = (unsigned int)v3;
    do
    {
      *v5 &= ~2u;
      v5 += 6;
      --v6;
    }
    while ( v6 );
  }
  v9 = 1;
  if ( (_DWORD)v3 )
  {
    v7 = v4 + 4;
    do
    {
      if ( (*v7 & 4) != 0 )
        PipVisitDeviceObjectListEntry((__int64)&v4[6 * v1], *a1, &v9);
      v1 = (unsigned int)(v1 + 1);
      v7 += 6;
    }
    while ( (unsigned int)v1 < (unsigned int)v3 );
  }
  qsort(v4, v3, 0x18uLL, (int (__cdecl *)(const void *, const void *))PipSortDevicesByOrdinal);
  return 0LL;
}
