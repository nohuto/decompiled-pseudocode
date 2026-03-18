/*
 * XREFs of ?xwtol@@YAKPEBG@Z @ 0x1C021C250
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C0150138 (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 *     ParseModeCap @ 0x1C02946E4 (ParseModeCap.c)
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
    if ( *a1 == 32 )
      goto LABEL_5;
    if ( (unsigned __int16)(v3 - 48) > 9u )
      return v2;
    v2 = v3 + 2 * (5 * v2 - 24);
LABEL_5:
    ++a1;
  }
}
