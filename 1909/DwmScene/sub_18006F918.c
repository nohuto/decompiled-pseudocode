/*
 * XREFs of sub_18006F918 @ 0x18006F918
 * Callers:
 *     sub_18007EB88 @ 0x18007EB88 (sub_18007EB88.c)
 *     sub_18007F0C0 @ 0x18007F0C0 (sub_18007F0C0.c)
 *     sub_1800AA470 @ 0x1800AA470 (sub_1800AA470.c)
 *     sub_1800B5208 @ 0x1800B5208 (sub_1800B5208.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18006F918(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 *v3; // r10
  __int64 *v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rcx
  unsigned __int64 v7; // r11
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *(_QWORD *)(a3 + 8);
    do
    {
      if ( v6[5] >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < v6[5] )
          v4 = v6;
        v3 = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = (__int64 *)*v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *(_QWORD *)(a3 + 8) >= (unsigned __int64)v5[5] )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
