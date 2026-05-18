/*
 * XREFs of sub_1800AC298 @ 0x1800AC298
 * Callers:
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_1800AC298(__int128 *a1, __int128 *a2)
{
  char v2; // al
  __int128 v3; // xmm1

  v2 = *((_BYTE *)a1 + 16);
  if ( *((_BYTE *)a2 + 16) )
  {
    if ( v2 )
    {
      v3 = *a2;
      *a2 = *a1;
      *a1 = v3;
    }
    else
    {
      *a1 = *a2;
      *((_BYTE *)a1 + 16) = 1;
      if ( !*((_BYTE *)a2 + 16) )
        return a1;
      *((_BYTE *)a2 + 16) = 0;
    }
  }
  else if ( v2 )
  {
    *a2 = *a1;
    *((_BYTE *)a2 + 16) = 1;
    if ( *((_BYTE *)a1 + 16) )
      *((_BYTE *)a1 + 16) = 0;
  }
  if ( *((_BYTE *)a2 + 16) )
    *((_BYTE *)a2 + 16) = 0;
  return a1;
}
