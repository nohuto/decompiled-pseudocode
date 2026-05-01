/*
 * XREFs of ?RmpCpuSetManagerCompareScores@@YAHPEAXPEBX1@Z @ 0x18005C270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCompareScores(_DWORD *a1, _QWORD *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 v4; // rcx
  bool v5; // r9

  v3 = a1[43];
  v4 = a2[1];
  v5 = (v3 & 2) != 0;
  if ( (v4 & 0x80000000) != 0 && (a3[2] & 0x80000000) != 0 )
    return 0LL;
  if ( (a2[1] & 0x80000000LL) != 0 )
  {
    if ( (a3[2] & 0x80000000) == 0 )
      return 0xFFFFFFFFLL;
  }
  else if ( (a3[2] & 0x80000000) != 0 )
  {
    return 1LL;
  }
  if ( *(_DWORD *)a2 >= *a3 )
  {
    if ( *(_DWORD *)a2 > *a3 )
      goto LABEL_15;
    if ( (unsigned int)v4 <= a3[2] )
    {
      if ( (unsigned int)v4 < a3[2] )
        return 1LL;
      if ( *((_DWORD *)a2 + 1) < a3[1] )
        goto LABEL_13;
LABEL_15:
      if ( !v5 )
        return 0xFFFFFFFFLL;
      return 1LL;
    }
    return 0xFFFFFFFFLL;
  }
LABEL_13:
  if ( v5 )
    return 0xFFFFFFFFLL;
  return 1LL;
}
