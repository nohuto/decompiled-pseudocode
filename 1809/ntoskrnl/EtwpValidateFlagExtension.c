/*
 * XREFs of EtwpValidateFlagExtension @ 0x14065C72C
 * Callers:
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x140726D7C (EtwpUpdateTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpValidateFlagExtension(unsigned int *a1)
{
  int v1; // r8d
  unsigned __int64 v3; // r9
  unsigned __int16 *v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r9
  unsigned __int16 *v7; // rcx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // ax

  v1 = a1[18];
  if ( v1 >= 0 )
    return 0LL;
  if ( BYTE2(v1) != 0xFF )
    return 3221225485LL;
  if ( (unsigned __int16)v1 < 0xB0u )
    return 3221225485LL;
  v3 = *a1;
  if ( v3 < (unsigned __int64)(unsigned __int16)v1 + 4 )
    return 3221225485LL;
  v4 = (unsigned __int16 *)((char *)a1 + (unsigned __int16)v1);
  if ( (((_BYTE)v1 + (_BYTE)a1) & 1) == 0 )
  {
    v5 = *v4;
    if ( *v4 && 4 * (unsigned __int64)v5 <= (unsigned int)v3 - (unsigned __int16)v1 )
    {
      v6 = v4[1];
      v7 = v4 + 2;
      v8 = v5 - 1;
      v9 = 0;
      if ( v6 )
      {
        while ( ((unsigned __int8)v7 & 1) == 0 )
        {
          if ( !v8 )
            return 3221225485LL;
          v10 = *v7;
          if ( v8 < *v7 )
            return 3221225485LL;
          v8 -= v10;
          ++v9;
          v7 += 2 * v10;
          if ( v9 >= v6 )
            goto LABEL_14;
        }
        return 3221226181LL;
      }
LABEL_14:
      if ( !v8 )
        return 0LL;
    }
    return 3221225485LL;
  }
  return 3221226181LL;
}
