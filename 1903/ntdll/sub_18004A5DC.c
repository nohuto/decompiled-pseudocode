/*
 * XREFs of sub_18004A5DC @ 0x18004A5DC
 * Callers:
 *     sub_180049F08 @ 0x180049F08 (sub_180049F08.c)
 * Callees:
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

unsigned __int64 __fastcall sub_18004A5DC(char *a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  int v8; // ebx
  unsigned int v10; // edi
  int v11; // r15d
  unsigned int v12; // r12d
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int16 HeapData_high; // bx
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 result; // rax
  int v30; // [rsp+68h] [rbp+10h]

  v8 = a2 / a3;
  v10 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  v11 = (2 * (a2 / a3 + 4 * (((unsigned __int64)(2 * v10) + 63) >> 6)) + 63) & 0xFFFFFFF0;
  v12 = (a2 - v11) / a4;
  if ( v10 < v12 )
    v12 = (8 * (a2 - 2 * (a2 / a3)) - 384) / (8 * a4 + 2);
  memset(a1, 0, 0x30uLL);
  v13 = (unsigned __int8)v8;
  HIWORD(v30) = v11;
  LOWORD(v30) = a4;
  *((_DWORD *)a1 + 10) = v30 ^ qword_180163548 ^ ((unsigned int)a1 >> 12);
  _BitScanForward(&v14, a3);
  a1[45] = v8;
  a1[44] = v14;
  v15 = 2 * v12;
  *((_WORD *)a1 + 16) = v12;
  v16 = (unsigned __int16)(8 * (((v15 + 63) >> 6) + 6));
  *((_WORD *)a1 + 23) = v16;
  v17 = &a1[v16];
  *((_WORD *)a1 + 17) = v12;
  a1[38] = 2;
  v18 = &v17[2 * v13];
  *(_WORD *)v17 = 1;
  v19 = v17 + 2;
  v20 = (unsigned __int64)(2 * v13 - 2 + 1) >> 1;
  if ( v19 > v18 )
    v20 = 0LL;
  if ( v20 )
  {
    while ( v20 )
    {
      *(_WORD *)v19 = -1;
      v19 += 2;
      --v20;
    }
  }
  memset(a1 + 48, 0, (v15 + 7) >> 3);
  v23 = (2 * (_BYTE)v12) & 0x3F;
  if ( ((2 * (_BYTE)v12) & 0x3F) != 0 )
    *(_QWORD *)&a1[8 * (v15 >> 6) + 48] |= ~((1LL << v23) - 1);
  if ( a2 > 0x1000 && (*(_BYTE *)(a5 + 62) & 1) != 0 )
  {
    v21 = a4 - 1;
    if ( ((unsigned int)v21 & a4) != 0 )
    {
      LODWORD(v22) = 4096;
      do
      {
        v21 = ((int)v22 - v11) % a4;
        if ( (_DWORD)v21 )
        {
          v23 = 2 * (((int)v22 - v11) / a4);
          _bittestandset64((signed __int64 *)a1 + 6, v23);
          --*((_WORD *)a1 + 16);
          --*((_WORD *)a1 + 17);
          ++a1[39];
        }
        v22 = (unsigned int)(v22 + 4096);
      }
      while ( (unsigned int)v22 < a2 );
    }
    else
    {
      v23 = (unsigned __int16)v11 - ((unsigned int)v21 & ((unsigned __int16)v11 + a4 - 1));
      if ( (_DWORD)v23 + a4 - 1 + a4 * v12 != a2 )
        __int2c();
      HIWORD(v30) = v11 - ((a4 - 1) & (v11 + a4 - 1)) + a4 - 1;
      *((_DWORD *)a1 + 10) = v30 ^ qword_180163548 ^ ((unsigned int)a1 >> 12);
    }
  }
  HeapData_high = HIWORD(NtCurrentTeb()->HeapData);
  v25 = (unsigned __int64)(unsigned int)sub_18004A7A0(v23, v21, v22) << 32;
  result = (v25 | (unsigned int)sub_18004A7A0(v27, v26, v28)) & 0x7F7F7F7F7F7F7F7FLL;
  *(_QWORD *)&byte_180163580[8 * ((unsigned __int8)HeapData_high >> 3)] = result;
  return result;
}
