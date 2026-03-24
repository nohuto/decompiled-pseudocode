/*
 * XREFs of MiInitializePagefileBitmapsCache @ 0x140188224
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x14018806C (MiRescanPagefileBitmaps.c)
 *     MiModifiedPageWriter @ 0x140188740 (MiModifiedPageWriter.c)
 *     MiCreatePagefile @ 0x14074CB20 (MiCreatePagefile.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

char __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  bool v1; // bl
  unsigned __int64 *v2; // r14
  unsigned __int64 *v3; // r15
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  bool v11; // r8
  int v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned __int64 v17; // rax
  char result; // al

  v1 = 0;
  v2 = (unsigned __int64 *)(a1 + 144);
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = (unsigned __int64 *)(a1 + 160);
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = a1 + 176;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v6 = *(_QWORD **)(a1 + 192);
  v7 = v6 + 3577;
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      __fastfail(3u);
    *v6 = v4;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(v4 + 8) = v6;
    v6 += 7;
  }
  *((_DWORD *)v6 + 13) = -1;
  *((_DWORD *)v6 + 12) = -1;
  v9 = v2[1];
  v10 = *v2;
  if ( (v9 & 1) != 0 )
  {
    if ( v10 )
      v10 ^= (unsigned __int64)v2;
    else
      v10 = 0LL;
  }
  v11 = 0;
  v12 = v9 & 1;
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v10 + 8);
      if ( v12 )
      {
        if ( !v13 )
          break;
        v13 ^= v10;
      }
      if ( !v13 )
        break;
      v10 = v13;
    }
    v11 = 1;
  }
  RtlRbInsertNodeEx((unsigned __int64)v2, v10, v11, v6);
  v14 = v3[1];
  v15 = *v3;
  if ( (v14 & 1) != 0 )
  {
    if ( v15 )
      v15 ^= (unsigned __int64)v3;
    else
      v15 = 0LL;
  }
  v16 = v14 & 1;
  if ( v15 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v6 + 12) < *(_DWORD *)(v15 + 24) )
      {
        v17 = *(_QWORD *)v15;
        if ( v16 )
        {
          if ( !v17 )
            break;
          v17 ^= v15;
        }
        if ( !v17 )
          break;
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          if ( !v17 )
            goto LABEL_27;
          v17 ^= v15;
        }
        if ( !v17 )
        {
LABEL_27:
          v1 = 1;
          break;
        }
      }
      v15 = v17;
    }
  }
  result = RtlRbInsertNodeEx((unsigned __int64)v3, v15, v1, v6 + 3);
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
