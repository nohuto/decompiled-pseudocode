/*
 * XREFs of GraySharpenInput @ 0x1C02389C0
 * Callers:
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0237F20 (GrayExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall GraySharpenInput(
        __int16 a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        __int64 a5,
        int a6)
{
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // rbx
  unsigned __int8 *v8; // r11
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 *v11; // rbp
  int v12; // edx
  int v13; // eax
  unsigned __int8 v14; // cl
  unsigned __int8 *result; // rax
  unsigned __int8 v16; // cl

  v6 = a2;
  v7 = &a2[a6];
  v8 = &a4[a6];
  if ( (a1 & 0x200) != 0 )
  {
    v6 = a4;
    v7 = &a4[a6];
  }
  else
  {
    *(a4 - 1) = *a4;
    *v8 = *(v8 - 1);
    if ( a4 < v8 )
    {
      v9 = a2 - a3;
      v10 = a5 - (_QWORD)a4;
      do
      {
        v11 = a4 + 1;
        v12 = 12 * *a4 - a4[v10] - *(a4 - 1) - a4[1] - *a3;
        v13 = v12 >> 3;
        if ( (v12 & 0x7F800) != 0 )
          LOBYTE(v13) = ~HIBYTE(v13);
        a3[v9] = v13;
        ++a4;
        ++a3;
      }
      while ( v11 < v8 );
    }
  }
  v14 = *v6;
  result = v6;
  *(v6 - 1) = *v6;
  *(v6 - 2) = v14;
  *(v6 - 3) = v14;
  v16 = *(v7 - 1);
  v7[1] = v16;
  *v7 = v16;
  return result;
}
