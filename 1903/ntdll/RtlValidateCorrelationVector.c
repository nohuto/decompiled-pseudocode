/*
 * XREFs of RtlValidateCorrelationVector @ 0x1800F5CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800725B4 @ 0x1800725B4 (sub_1800725B4.c)
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 *     strncmp @ 0x180091590 (strncmp.c)
 *     sub_1800F5DC0 @ 0x1800F5DC0 (sub_1800F5DC0.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int v2; // esi
  __int64 v3; // rdx
  int v4; // eax
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // rdx

  if ( !Vector || (int)sub_180072FCC(Vector) < 0 )
    return -1073741811;
  v2 = sub_1800F5DC0();
  v4 = sub_1800725B4((__int64)Vector, v3);
  if ( Vector->Version == 1 )
  {
    if ( v2 != 15 )
      return -1073741811;
  }
  else if ( Vector->Version == 2 && v2 != 21 )
  {
    return -1073741811;
  }
  v6 = v2 + 1;
  v7 = v6;
  if ( Vector->Vector[v6] != 46 )
    return -1073741811;
  v8 = v4;
  while ( v7 < v8 )
  {
    if ( Vector->Vector[v7] == 46 )
    {
      ++v6;
      ++v7;
      v9 = 0;
      v10 = v6;
      if ( v7 < v8 )
      {
        do
        {
          if ( (unsigned __int8)(Vector->Vector[v7] - 48) > 9u )
            break;
          ++v6;
          ++v7;
          ++v9;
        }
        while ( v7 < v8 );
        if ( v9 && v9 <= 10 && (v9 != 10 || strncmp(&Vector->Vector[v10], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
