/*
 * XREFs of x64tow @ 0x180090AB0
 * Callers:
 *     _i64tow @ 0x180090A00 (_i64tow.c)
 *     _ui64tow @ 0x180090A70 (_ui64tow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall x64tow(unsigned __int64 a1, __int16 *a2, unsigned int a3, int a4)
{
  unsigned __int64 v4; // rax
  __int16 *v5; // r10
  __int16 *v6; // r8
  unsigned __int64 v7; // rbx
  _WORD *v8; // r11
  __int16 *v9; // r9
  unsigned __int64 v10; // rdx
  __int16 v11; // ax
  __int64 result; // rax
  __int16 v13; // cx

  v4 = a3;
  v5 = a2;
  if ( a4 )
  {
    *a2 = 45;
    v5 = a2 + 1;
    a1 = -(__int64)a1;
  }
  v6 = v5;
  v7 = v4;
  do
  {
    v8 = v5 + 1;
    v9 = v5;
    v10 = a1 % v7;
    a1 /= v7;
    v11 = 87;
    if ( (unsigned int)v10 <= 9 )
      v11 = 48;
    *v5++ = v10 + v11;
  }
  while ( a1 );
  *v8 = 0;
  do
  {
    result = (unsigned __int16)*v6;
    v13 = *v9;
    *v9-- = result;
    *v6++ = v13;
  }
  while ( v6 < v9 );
  return result;
}
