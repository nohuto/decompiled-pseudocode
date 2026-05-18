/*
 * XREFs of sub_1800A4044 @ 0x1800A4044
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 * Callees:
 *     sub_1800A8EB4 @ 0x1800A8EB4 (sub_1800A8EB4.c)
 */

void __fastcall sub_1800A4044(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *j; // rbx
  __int64 **v3; // rax
  __int64 i; // rax
  __int64 *v5; // rcx

  v1 = *(_QWORD **)(a1 + 18560);
  j = (_QWORD *)*v1;
  while ( j != v1 )
  {
    sub_1800A8EB4(j[8]);
    v3 = (__int64 **)j[2];
    if ( *((_BYTE *)v3 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v5 = *v3;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v5 + 25); v5 = (__int64 *)*v5 )
        j = v5;
    }
  }
}
