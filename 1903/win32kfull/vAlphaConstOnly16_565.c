/*
 * XREFs of vAlphaConstOnly16_565 @ 0x1C02BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vAlphaConstOnly16_565(_WORD *a1, unsigned __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r9d
  _WORD *v6; // rdi
  unsigned __int64 v7; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v9; // r10
  int v10; // esi
  unsigned __int64 v11; // r11
  unsigned int v12; // ecx
  unsigned int v13; // r9d
  unsigned int v14; // ecx

  v4 = 0LL;
  v5 = HIWORD(a4);
  v6 = a1;
  v7 = 2LL * a3;
  result = v7 + a2;
  v9 = v7 >> 1;
  if ( a2 > result )
    v9 = 0LL;
  if ( v9 )
  {
    v10 = (unsigned __int8)v5;
    v11 = a2 - (_QWORD)a1;
    do
    {
      ++v4;
      v12 = *(unsigned __int16 *)((char *)v6 + v11);
      v13 = v10 * ((v12 & 0xF81F) - (*v6 & 0xF81F)) + 32784 + 31 * (*v6 & 0xF81F);
      v14 = 63 * (((unsigned __int16)*v6 >> 5) & 0x3F)
          + 2 * (v10 * (((v12 >> 5) & 0x3F) - (((unsigned __int16)*v6 >> 5) & 0x3F)) + 16);
      result = (v13 + ((v13 >> 5) & 0xF81F)) >> 5;
      *v6++ = result ^ (((v14 + ((v14 >> 6) & 0x3F)) >> 1) ^ ((v13 + ((v13 >> 5) & 0xF81F)) >> 5)) & 0x7E0;
    }
    while ( v4 != v9 );
  }
  return result;
}
