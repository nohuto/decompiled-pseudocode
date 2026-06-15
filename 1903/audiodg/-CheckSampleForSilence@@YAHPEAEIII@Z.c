/*
 * XREFs of ?CheckSampleForSilence@@YAHPEAEIII@Z @ 0x140002C5C
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002920 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckSampleForSilence(unsigned __int8 *a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  unsigned int v7; // r9d
  int v8; // r8d
  unsigned __int8 *i; // r9
  int v10; // r8d
  int v11; // r8d

  v4 = 1;
  switch ( a3 )
  {
    case 8u:
      v11 = 0;
      if ( !a2 )
        return v4;
      while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(char)(*a1 + 0x80) * 0.0078125)) & _xmm) <= 0.004999999888241291 )
      {
        ++a1;
        if ( ++v11 >= a2 )
          return v4;
      }
      return 0;
    case 0x10u:
      v10 = 0;
      if ( !a2 )
        return v4;
      while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(__int16 *)a1 * 0.000030517578)) & _xmm) < 0.004999999888241291 )
      {
        a1 += 2;
        if ( ++v10 >= a2 )
          return v4;
      }
      return 0;
    case 0x18u:
      v8 = 0;
      if ( !a2 )
        return v4;
      for ( i = a1 + 1;
            COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((*(i - 1) | (*(unsigned __int16 *)i << 8)) << 8 >> 8)
                                                      * 0.00000011920929)) & _xmm) < 0.004999999888241291;
            i += 3 )
      {
        if ( ++v8 >= a2 )
          return v4;
      }
      return 0;
  }
  if ( a4 != 3 )
  {
    v7 = 0;
    if ( !a2 )
      return v4;
    while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(int *)a1 * 4.6566129e-10)) & _xmm) < 0.004999999888241291 )
    {
      ++v7;
      a1 += (unsigned __int64)a3 >> 3;
      if ( v7 >= a2 )
        return v4;
    }
    return 0;
  }
  v5 = 0;
  if ( a2 )
  {
    while ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1) & _xmm) < 0.004999999888241291 )
    {
      ++v5;
      a1 += (unsigned __int64)a3 >> 3;
      if ( v5 >= a2 )
        return v4;
    }
    return 0;
  }
  return v4;
}
