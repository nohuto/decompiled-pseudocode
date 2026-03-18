/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x1C01783DC
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C016B34C (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ParseModeCap @ 0x1C01782D4 (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwtol(unsigned __int16 *a1)
{
  unsigned int v2; // ecx
  unsigned __int16 v3; // dx

  v2 = 0;
  while ( 1 )
  {
    v3 = *a1;
    if ( (unsigned __int16)(*a1 - 48) > 9u && v3 != 32 )
      break;
    if ( v3 != 32 )
      v2 = v3 + 2 * (5 * v2 - 24);
    ++a1;
  }
  return v2;
}
