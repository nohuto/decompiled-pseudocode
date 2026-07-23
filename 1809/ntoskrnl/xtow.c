/*
 * XREFs of xtow @ 0x140195270
 * Callers:
 *     _itow @ 0x140195220 (_itow.c)
 *     _ultow @ 0x140195250 (_ultow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xtow(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v5; // r10
  __int16 *v6; // r8
  _WORD *v7; // r11
  __int16 *v8; // r9
  unsigned int v9; // edx
  __int16 v10; // ax
  __int64 result; // rax
  __int16 v12; // cx

  v5 = a2;
  if ( a4 )
  {
    v5 = a2 + 1;
    *a2 = 45;
    a1 = -a1;
  }
  v6 = v5;
  do
  {
    v7 = v5 + 1;
    v8 = v5;
    v9 = a1 % a3;
    a1 /= a3;
    v10 = 87;
    if ( v9 <= 9 )
      v10 = 48;
    *v5++ = v9 + v10;
  }
  while ( a1 );
  *v7 = 0;
  do
  {
    result = (unsigned __int16)*v6;
    v12 = *v8;
    *v8-- = result;
    *v6++ = v12;
  }
  while ( v6 < v8 );
  return result;
}
