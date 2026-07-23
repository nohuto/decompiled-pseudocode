/*
 * XREFs of LZNT1FindMatchStandard @ 0x140566A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall LZNT1FindMatchStandard(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  unsigned int v4; // r9d
  int v6; // ebp
  int v7; // r12d
  unsigned __int64 v8; // r13
  int v9; // r15d
  __int64 v10; // rax
  _BYTE **v11; // rcx
  _BYTE *v12; // rdi
  __int64 result; // rax
  unsigned int v14; // r10d
  _BYTE *v15; // rsi
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  _BYTE **v18; // [rsp+48h] [rbp+10h]

  v2 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 16);
  v6 = *a1;
  v7 = a1[2];
  v8 = *(_QWORD *)a2;
  v9 = a1[1];
  v10 = ((-24993 * (v7 ^ (16 * (v9 ^ (16 * v6))))) >> 4) & 0xFFF;
  v18 = (_BYTE **)(a2 + 16 * (v10 + 2));
  v11 = (_BYTE **)(a2 + 16LL * (unsigned int)v10 + 40);
  v12 = *v18;
  result = 0LL;
  v14 = 0;
  v15 = *v11;
  if ( (unsigned __int64)*v18 >= *(_QWORD *)a2
    && v12 < a1
    && *v12 == (_BYTE)v6
    && v12[1] == (_BYTE)v9
    && v12[2] == (_BYTE)v7 )
  {
    result = 3LL;
    if ( v4 > 3 )
    {
      v16 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[(unsigned int)result] >= v2 )
          break;
        if ( *v16 != v16[v12 - a1] )
          break;
        result = (unsigned int)(result + 1);
        ++v16;
      }
      while ( (unsigned int)result < v4 );
    }
  }
  if ( (unsigned __int64)v15 >= v8 && v15 < a1 && *v15 == (_BYTE)v6 && v15[1] == (_BYTE)v9 && v15[2] == (_BYTE)v7 )
  {
    v14 = 3;
    if ( v4 > 3 )
    {
      v17 = a1 + 3;
      do
      {
        if ( (unsigned __int64)&a1[v14] >= v2 )
          break;
        if ( *v17 != v17[v15 - a1] )
          break;
        ++v14;
        ++v17;
      }
      while ( v14 < v4 );
    }
  }
  *v11 = v12;
  *v18 = a1;
  if ( (unsigned int)result < v14 )
  {
    *(_QWORD *)(a2 + 24) = v15;
    return v14;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v12;
  }
  return result;
}
