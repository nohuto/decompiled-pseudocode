/*
 * XREFs of vCvtToBoldItalicBmp @ 0x1C0227C04
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void *__fastcall vCvtToBoldItalicBmp(_DWORD *a1, __int64 a2, char *a3, int a4, int a5, int a6)
{
  int v6; // r14d
  _DWORD *v7; // rbp
  unsigned int v10; // r13d
  int v11; // eax
  signed int v12; // ebx
  unsigned int v13; // esi
  void *result; // rax
  int v15; // r10d
  __int64 v16; // rdx
  int v17; // edi
  signed int v18; // eax
  int v19; // ecx
  char *v20; // r12
  unsigned __int8 v21; // r8
  char v22; // si
  _BYTE *v23; // r9
  __int64 v24; // rdi
  __int64 v25; // r14
  char v26; // al
  char v27; // si
  char v28; // r8
  __int64 v29; // [rsp+20h] [rbp-58h]
  char v30; // [rsp+80h] [rbp+8h]
  unsigned int v31; // [rsp+88h] [rbp+10h]
  int v32; // [rsp+98h] [rbp+20h]

  v6 = a5;
  v7 = a1 + 4;
  *a1 = 0;
  a1[3] = a5;
  v10 = (unsigned int)(a5 - 1) >> 4;
  v11 = ((unsigned int)(a5 - 1) >> 1) + a4;
  v12 = ((unsigned int)(a5 - 1) >> 1) & 7;
  v30 = ((unsigned int)(a5 - 1) >> 1) + a4;
  a1[2] = v11 + 1;
  v13 = (unsigned int)(v11 + 8) >> 3;
  v31 = (unsigned int)(a4 + 7) >> 3;
  a1[1] = -a6;
  result = memset(a1 + 4, 0, a5 * v13);
  v15 = 0;
  if ( a5 > 0 )
  {
    v16 = v13;
    v17 = -a4 & 7;
    v29 = v13;
    v32 = v17;
    do
    {
      v18 = v10 - 1;
      v19 = v12;
      if ( v12 < 0 )
        v12 = 7;
      v20 = a3;
      if ( v19 >= 0 )
        v18 = v10;
      v21 = 0;
      v10 = v18;
      v22 = 0;
      v23 = (char *)v7 + v18;
      if ( v31 )
      {
        v24 = (unsigned int)v6;
        v25 = v31;
        do
        {
          v26 = v22 | v21 | ((unsigned __int8)*v20 >> v12) | ((unsigned __int8)(v21 | ((unsigned __int8)*v20 >> v12)) >> 1);
          v27 = v21 | ((unsigned __int8)*v20 >> v12);
          *v23++ = v26;
          v28 = *v20;
          v20 += v24;
          v21 = v28 << (8 - v12);
          v22 = v27 << 7;
          --v25;
        }
        while ( v25 );
        v17 = v32;
        v6 = a5;
        v16 = v29;
      }
      if ( v17 < v12 )
      {
        *v23 = v21 | v22 | (v21 >> 1);
        if ( (v30 & 7) == 0 )
          v23[1] = v21 << 7;
      }
      ++a3;
      result = (void *)(v15 & 1);
      v7 = (_DWORD *)((char *)v7 + v16);
      v12 -= (int)result;
      ++v15;
    }
    while ( v15 < v6 );
  }
  return result;
}
