/*
 * XREFs of HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x140709B0C
 * Callers:
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x140709AB4 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x140705220 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 */

__int64 __fastcall HvpMappedViewConvertLockedPagesToCOWByPolicy(SIZE_T a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 result; // rax

  if ( !a2[8] )
    return 0LL;
  v4 = a2[5];
  v5 = v4;
  v6 = v4;
  if ( v4 < a2[6] )
  {
    while ( a2[8] )
    {
      if ( (*((_BYTE *)a2 + ((unsigned __int64)(v6 - a2[3]) >> 12) + 72) & 0x10) == 0 )
      {
        if ( v4 != v5 )
        {
          result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2, v4, v5);
          if ( (int)result < 0 )
            return result;
        }
        v4 = v6 + 4096;
        v5 = v6;
      }
      v5 += 4096LL;
      v6 += 4096LL;
      if ( v6 >= a2[6] )
        goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  if ( v4 == v5 )
    return 0LL;
  result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2, v4, v5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
