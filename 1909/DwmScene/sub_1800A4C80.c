/*
 * XREFs of sub_1800A4C80 @ 0x1800A4C80
 * Callers:
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 * Callees:
 *     sub_18006DEEC @ 0x18006DEEC (sub_18006DEEC.c)
 *     sub_1800A1B54 @ 0x1800A1B54 (sub_1800A1B54.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A4C80(__int64 a1, _QWORD *a2)
{
  const void ***v4; // rdi
  const void **v5; // rbx
  const void ***v6; // rax
  const void **i; // rax
  const void **j; // rcx
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = sub_18006DEEC();
  v4 = *(const void ****)(a1 + 18560);
  v5 = *v4;
  while ( v5 != (const void **)v4 )
  {
    sub_1800A1B54(a2, (__int64)v10, 0, v5 + 4);
    v6 = (const void ***)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (const void **)v5[1]; !*((_BYTE *)i + 25) && v5 == i[2]; i = (const void **)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (const void **)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (const void **)*j )
        v5 = j;
    }
  }
  return a2;
}
