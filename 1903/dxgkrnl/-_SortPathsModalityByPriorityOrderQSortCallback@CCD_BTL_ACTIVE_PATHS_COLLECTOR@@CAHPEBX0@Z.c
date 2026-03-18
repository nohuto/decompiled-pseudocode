/*
 * XREFs of ?_SortPathsModalityByPriorityOrderQSortCallback@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@CAHPEBX0@Z @ 0x1C0141000
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C0024E90 (memcmp.c)
 */

int __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  int result; // eax
  unsigned int v8; // eax

  v4 = *(_QWORD *)a1;
  if ( (*(_QWORD *)a2 ^ v4) < 0 )
  {
    if ( v4 < 0 )
      return -1;
    return 1;
  }
  v5 = a1[63];
  if ( v5 > a2[63] )
    return 1;
  if ( v5 < a2[63] )
    return -1;
  v6 = a1[7];
  if ( v6 > a2[7] )
    return 1;
  if ( v6 < a2[7] )
    return -1;
  result = memcmp(a1 + 4, a2 + 4, 8uLL);
  if ( !result )
  {
    v8 = a1[6];
    if ( v8 < a2[6] )
      return -1;
    return v8 > a2[6];
  }
  return result;
}
