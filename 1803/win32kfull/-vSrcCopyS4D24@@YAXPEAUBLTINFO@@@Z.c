/*
 * XREFs of ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02998E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D24(struct BLTINFO *a1)
{
  unsigned int v2; // r12d
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // r13d
  int v10; // r12d
  unsigned int v11; // r13d
  int v12; // r9d
  __int64 v13; // r8
  char *v14; // rdx
  unsigned int i; // r11d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // ecx
  unsigned int v19; // r14d
  unsigned __int64 v20; // rcx
  _BYTE *v21; // rbx
  char v22; // al
  __int64 v23; // rax
  int v24; // esi
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  unsigned int v27; // r11d
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // r11d
  _BYTE *v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  int v34; // ecx
  bool v35; // zf
  int v36; // [rsp+38h] [rbp+8h]
  unsigned int v37; // [rsp+40h] [rbp+10h]

  v2 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v4 = *(_QWORD *)a1;
  v5 = *((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1);
  v6 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v7 = v2;
  v8 = *(_QWORD *)(v4 + 16);
  v36 = v3;
  if ( ((unsigned __int8)v6 & 3u) <= v2 )
    v7 = v6 & 3;
  v37 = v7;
  v9 = v2 - v7;
  v10 = (v2 - v7) & 3;
  v11 = v9 >> 2;
  while ( 1 )
  {
    v12 = *((_DWORD *)a1 + 12);
    v13 = v6;
    v14 = (char *)v5;
    for ( i = v7; i; --i )
    {
      v16 = (unsigned __int8)*v14;
      if ( (v12 & 1) != 0 )
      {
        v17 = v16 & 0xF;
        ++v14;
      }
      else
      {
        v17 = v16 >> 4;
      }
      v18 = *(_DWORD *)(v8 + 4 * v17);
      LOBYTE(v12) = v12 + 1;
      *(_WORD *)v13 = v18;
      *(_BYTE *)(v13 + 2) = BYTE2(v18);
      v13 += 3LL;
    }
    v19 = v11;
    if ( v11 )
    {
      do
      {
        v20 = (unsigned __int8)*v14;
        v21 = v14 + 1;
        v22 = *v14;
        v14 += 2;
        v23 = v22 & 0xF;
        if ( (v12 & 1) != 0 )
        {
          v24 = *(_DWORD *)(v8 + 4 * v23);
          v25 = (unsigned __int8)*v21;
          v26 = *(_DWORD *)(v8 + 4 * (v25 & 0xF));
          v27 = *(_DWORD *)(v8 + 4 * (v25 >> 4));
          v28 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)(unsigned __int8)*v14 >> 4));
        }
        else
        {
          v27 = *(_DWORD *)(v8 + 4 * v23);
          v24 = *(_DWORD *)(v8 + 4 * (v20 >> 4));
          v29 = *v21 & 0xF;
          v26 = *(_DWORD *)(v8 + 4 * ((unsigned __int64)(unsigned __int8)*v21 >> 4));
          v28 = *(_DWORD *)(v8 + 4 * v29);
        }
        LOBYTE(v12) = v12 + 4;
        *(_DWORD *)v13 = v24 | (v27 << 24);
        *(_DWORD *)(v13 + 8) = HIWORD(v26) | (v28 << 8);
        *(_DWORD *)(v13 + 4) = (v27 >> 8) | (v26 << 16);
        v13 += 12LL;
        --v19;
      }
      while ( v19 );
      v3 = v36;
    }
    v30 = v10;
    if ( v10 )
    {
      v31 = (_BYTE *)(v13 + 2);
      do
      {
        v32 = (unsigned __int8)*v14;
        if ( (v12 & 1) != 0 )
        {
          v33 = v32 & 0xF;
          ++v14;
        }
        else
        {
          v33 = v32 >> 4;
        }
        v34 = *(_DWORD *)(v8 + 4 * v33);
        LOBYTE(v12) = v12 + 1;
        *((_WORD *)v31 - 1) = v34;
        *v31 = BYTE2(v34);
        v31 += 3;
        --v30;
      }
      while ( v30 );
    }
    v35 = v3-- == 1;
    v36 = v3;
    if ( v35 )
      break;
    v7 = v37;
    v5 += *((int *)a1 + 10);
    v6 += *((int *)a1 + 11);
  }
}
