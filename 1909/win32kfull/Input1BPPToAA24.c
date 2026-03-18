/*
 * XREFs of Input1BPPToAA24 @ 0x1C00F9170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall Input1BPPToAA24(char *a1, _BYTE *a2)
{
  char v2; // al
  unsigned __int8 *v3; // rdi
  unsigned int v5; // r10d
  _BYTE *v6; // r9
  __int16 *v7; // rcx
  __int64 v9; // rdx
  char *v10; // rcx
  char v11; // al
  int v12; // edx
  unsigned int i; // edx
  unsigned int v14; // ecx
  int v15; // r10d
  char v16; // cl
  int v17; // eax
  int v18; // eax
  char v20; // al
  int v21; // ecx
  unsigned int v22; // esi
  _WORD *v23; // r15
  unsigned int v24; // r8d
  unsigned __int64 v25; // rdx
  char v26; // al
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rdx
  char v34; // al
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  unsigned __int16 v39; // ax
  __int64 v40; // r8
  unsigned __int16 v41; // ax
  unsigned int v42; // ecx
  unsigned int v43; // edx
  unsigned __int16 v44; // ax
  unsigned int v45; // esi
  unsigned __int16 v46; // ax
  __int64 v47; // r8
  __int16 v48; // [rsp+20h] [rbp+20h] BYREF
  char v49; // [rsp+22h] [rbp+22h]
  __int16 v50; // [rsp+23h] [rbp+23h]
  char v51; // [rsp+25h] [rbp+25h]

  v2 = *a1;
  v3 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v5 = *((_DWORD *)a1 + 12);
  v6 = a2;
  v7 = (__int16 *)*((_QWORD *)a1 + 10);
  if ( (v2 & 4) != 0 )
  {
    v9 = 0LL;
    v10 = (char *)v7 + 3;
    do
    {
      v11 = *v10;
      v10 += 4;
      *((_BYTE *)&v48 + v9++) = v11;
    }
    while ( v9 < 2 );
    v12 = (unsigned __int8)a1[1];
    if ( a1[1] )
    {
      v41 = *v3++ << v12;
      v42 = 8 - v12;
      v43 = v5;
      if ( v42 <= v5 )
        v43 = v42;
      for ( v5 -= v43; v43; --v43 )
      {
        v41 *= 2;
        *v6++ = *((_BYTE *)&v48 + (HIBYTE(v41) & 1));
      }
    }
    for ( i = v5 >> 3; i; --i )
    {
      v14 = *v3++;
      *v6 = *((_BYTE *)&v48 + ((unsigned __int64)v14 >> 7));
      v6[1] = *((_BYTE *)&v48 + ((v14 >> 6) & 1));
      v6[2] = *((_BYTE *)&v48 + ((v14 >> 5) & 1));
      v6[3] = *((_BYTE *)&v48 + ((v14 >> 4) & 1));
      v6[4] = *((_BYTE *)&v48 + ((v14 >> 3) & 1));
      v6[5] = *((_BYTE *)&v48 + ((v14 >> 2) & 1));
      v6[6] = *((_BYTE *)&v48 + ((v14 >> 1) & 1));
      v6[7] = *((_BYTE *)&v48 + (v14 & 1));
      v6 += 8;
    }
    v15 = v5 & 7;
    if ( v15 )
    {
      v44 = *v3;
      do
      {
        v44 *= 2;
        *v6++ = *((_BYTE *)&v48 + (HIBYTE(v44) & 1));
        --v15;
      }
      while ( v15 );
    }
  }
  else
  {
    v48 = *v7;
    v49 = *((_BYTE *)v7 + 2);
    v50 = v7[2];
    v20 = *((_BYTE *)v7 + 6);
    v21 = (unsigned __int8)a1[1];
    v51 = v20;
    if ( v21 )
    {
      v45 = v5;
      v46 = *v3++ << v21;
      if ( 8 - v21 <= v5 )
        v45 = 8 - v21;
      for ( v5 -= v45; v45; --v45 )
      {
        v46 *= 2;
        v47 = HIBYTE(v46) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v47 + v47);
        v6[2] = *((_BYTE *)&v48 + 2 * v47 + v47 + 2);
        v6 += 3;
      }
    }
    v22 = v5 >> 3;
    if ( v5 >> 3 )
    {
      v23 = v6 + 6;
      do
      {
        v24 = *v3;
        v25 = *v3++;
        v25 >>= 7;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v25 + v25);
        v26 = *((_BYTE *)&v48 + 2 * v25 + v25 + 2);
        v27 = (v24 >> 6) & 1;
        v6[2] = v26;
        v6 += 24;
        *(_WORD *)((char *)v23 - 3) = *(__int16 *)((char *)&v48 + 2 * v27 + v27);
        v28 = *((_BYTE *)&v48 + 2 * v27 + v27 + 2);
        v29 = (v24 >> 5) & 1;
        *((_BYTE *)v23 - 1) = v28;
        *v23 = *(__int16 *)((char *)&v48 + 2 * v29 + v29);
        v23 += 12;
        v30 = *((_BYTE *)&v48 + 2 * v29 + v29 + 2);
        v31 = (v24 >> 4) & 1;
        *((_BYTE *)v23 - 22) = v30;
        *(_WORD *)((char *)v23 - 21) = *(__int16 *)((char *)&v48 + 2 * v31 + v31);
        v32 = *((_BYTE *)&v48 + 2 * v31 + v31 + 2);
        v33 = (v24 >> 3) & 1;
        *((_BYTE *)v23 - 19) = v32;
        *(v23 - 9) = *(__int16 *)((char *)&v48 + 2 * v33 + v33);
        v34 = *((_BYTE *)&v48 + 2 * v33 + v33 + 2);
        v35 = (v24 >> 2) & 1;
        *((_BYTE *)v23 - 16) = v34;
        *(_WORD *)((char *)v23 - 15) = *(__int16 *)((char *)&v48 + 2 * v35 + v35);
        *((_BYTE *)v23 - 13) = *((_BYTE *)&v48 + 2 * v35 + v35 + 2);
        v36 = (v24 >> 1) & 1;
        v37 = v24 & 1;
        *(v23 - 6) = *(__int16 *)((char *)&v48 + 2 * v36 + v36);
        *((_BYTE *)v23 - 10) = *((_BYTE *)&v48 + 2 * v36 + v36 + 2);
        *(_WORD *)((char *)v23 - 9) = *(__int16 *)((char *)&v48 + 2 * v37 + v37);
        *((_BYTE *)v23 - 7) = *((_BYTE *)&v48 + 2 * v37 + v37 + 2);
        --v22;
      }
      while ( v22 );
    }
    v38 = v5 & 7;
    if ( v38 )
    {
      v39 = *v3;
      do
      {
        v39 *= 2;
        v40 = HIBYTE(v39) & 1;
        *(_WORD *)v6 = *(__int16 *)((char *)&v48 + 2 * v40 + v40);
        v6 += 3;
        *(v6 - 1) = *((_BYTE *)&v48 + 2 * v40 + v40 + 2);
        --v38;
      }
      while ( v38 );
    }
  }
  v16 = *a1;
  if ( (*a1 & 2) != 0 )
  {
    v17 = *((_DWORD *)a1 + 13);
    if ( v17 && (v18 = v17 - 1, (*((_DWORD *)a1 + 13) = v18) != 0) )
    {
      *((_QWORD *)a1 + 5) += *((int *)a1 + 15);
    }
    else if ( (v16 & 1) != 0 )
    {
      *((_QWORD *)a1 + 5) = *((_QWORD *)a1 + 3);
      *((_DWORD *)a1 + 13) = *((_DWORD *)a1 + 8);
    }
    else
    {
      *a1 = v16 & 0xFD;
    }
  }
  return a2;
}
