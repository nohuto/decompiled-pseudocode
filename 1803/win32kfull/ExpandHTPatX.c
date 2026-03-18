/*
 * XREFs of ExpandHTPatX @ 0x1C00D50F0
 * Callers:
 *     Generate_HTSC_WORD @ 0x1C00D4C78 (Generate_HTSC_WORD.c)
 *     GenerateWORDPat @ 0x1C00D4EE0 (GenerateWORDPat.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall ExpandHTPatX(char *Src, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v8; // r13
  unsigned int v9; // r14d
  __int64 v10; // rcx
  char *v11; // r12
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // [rsp+20h] [rbp-38h]

  v4 = a3;
  v5 = 6 * a2;
  result = (unsigned int)(6 * a4);
  if ( (unsigned int)result > 6 * a2 && a3 )
  {
    v8 = (unsigned int)result;
    v9 = result - v5;
    v15 = (unsigned int)result;
    v10 = v5;
    do
    {
      --v4;
      v11 = &Src[v10];
      v12 = v9;
      if ( v9 )
      {
        do
        {
          v13 = v5;
          if ( v12 <= v5 )
            v13 = v12;
          v14 = v13;
          result = (__int64)memmove(v11, Src, v13);
          v11 += v14;
          v12 -= v14;
        }
        while ( v12 );
        v8 = v15;
        v10 = v5;
      }
      Src += v8;
    }
    while ( v4 );
  }
  return result;
}
