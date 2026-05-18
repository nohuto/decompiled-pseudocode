/*
 * XREFs of sub_18006F808 @ 0x18006F808
 * Callers:
 *     sub_18007EA78 @ 0x18007EA78 (sub_18007EA78.c)
 *     sub_18007EFB0 @ 0x18007EFB0 (sub_18007EFB0.c)
 *     sub_1800AA360 @ 0x1800AA360 (sub_1800AA360.c)
 *     sub_1800B50F8 @ 0x1800B50F8 (sub_1800B50F8.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18006F808(__int64 *a1, _QWORD *a2, __int64 a3)
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
