/*
 * XREFs of ExpYDIB_ExpCX @ 0x1C024B19C
 * Callers:
 *     ExpandDIB_CY_ExpCX @ 0x1C024C0F0 (ExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpYDIB_ExpCX(unsigned __int64 *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int64 v7; // rdi
  int v8; // ecx
  int v9; // edx
  int v10; // r8d
  int v11; // eax
  __int64 result; // rax

  do
  {
    v7 = *a1++;
    a2 += 2 * ((unsigned __int64)(unsigned __int16)v7 >> 15) + ((unsigned __int64)(unsigned __int16)v7 >> 15);
    v8 = HIWORD(v7) * a2[2];
    v9 = HIWORD(v7) * a2[1];
    v10 = HIWORD(v7) * *a2;
    if ( WORD2(v7) )
    {
      v8 += WORD2(v7) * *(a2 - 1);
      v9 += WORD2(v7) * *(a2 - 2);
      v10 += WORD2(v7) * *(a2 - 3);
      if ( WORD1(v7) )
      {
        v8 += WORD1(v7) * *(a2 - 4);
        v9 += WORD1(v7) * *(a2 - 5);
        v10 += WORD1(v7) * *(a2 - 6);
        v11 = v7 & 0x3FFF;
        if ( v11 )
        {
          v8 += v11 * *(a2 - 7);
          v9 += v11 * *(a2 - 8);
          v10 += v11 * *(a2 - 9);
        }
      }
    }
    a3[2] = (unsigned int)(v8 + 4096) >> 13;
    a3[1] = (unsigned int)(v9 + 4096) >> 13;
    result = (unsigned int)(v10 + 4096) >> 13;
    *a3 = result;
    a3 += 3;
  }
  while ( a3 != a4 );
  return result;
}
