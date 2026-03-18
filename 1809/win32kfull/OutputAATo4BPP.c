/*
 * XREFs of OutputAATo4BPP @ 0x1C0248310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall OutputAATo4BPP(
        _DWORD *a1,
        unsigned __int8 *a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // rax
  char v12; // r11
  _BYTE *v13; // r12
  char v14; // ebx^2
  unsigned int v15; // edx
  unsigned __int16 *v16; // rsi
  unsigned __int8 *v17; // r14
  char v18; // r13d^2
  char v19; // edi^2
  char v20; // r11d^2
  char v21; // bl
  char v22; // r9
  char v23; // r11
  char v24; // r10
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  __int64 v29; // rcx
  bool v30; // zf
  int v31; // edx
  char v32; // r10
  char v33; // cl
  unsigned int v35; // [rsp+0h] [rbp-30h]
  __int128 v36; // [rsp+18h] [rbp-18h]
  __int64 v37; // [rsp+28h] [rbp-8h]
  int v38; // [rsp+70h] [rbp+40h]
  unsigned __int64 v39; // [rsp+80h] [rbp+50h]
  char v40; // [rsp+90h] [rbp+60h]

  v39 = a3;
  LOBYTE(v10) = 0;
  v38 = 0;
  v40 = 0;
  v12 = 0;
  v13 = a4;
  v37 = *(_QWORD *)(a5 - 8);
  v36 = *(_OWORD *)(a5 - 24);
  if ( BYTE1(a9) )
  {
    LOBYTE(v10) = 119;
    v40 = 119;
    v38 = 2003830647;
    v12 = 7;
  }
  v14 = BYTE6(*(_QWORD *)(a5 - 8));
  v15 = HIDWORD(*(_OWORD *)(a5 - 24));
  v16 = a6;
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v15 = HIDWORD(*(_OWORD *)(a5 - 24));
      *a4 = *a4 & 0xF0 | v12 ^ (BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * a2[1] + 1024) - (unsigned int)a6[1]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * a2[2] + 2048) - (unsigned int)a6[2]) >> 16));
    }
    v13 = a4 + 1;
    v16 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v16 = (unsigned __int16 *)((char *)v16 + a8);
  }
  v17 = a2 + 4;
  v18 = BYTE10(v36);
  v19 = BYTE6(v36);
  v20 = BYTE2(v36);
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v17 >= a3 )
        goto LABEL_15;
      v27 = v17[3] & 2 | v17[7] & 1;
      if ( v27 )
        break;
LABEL_27:
      ++v13;
      v16 += 6;
      if ( (unsigned __int64)v16 >= a7 )
        v16 = (unsigned __int16 *)((char *)v16 + a8);
      v17 += 8;
    }
    v28 = v27 - 1;
    if ( v28 )
    {
      v29 = v17[2];
      v30 = v28 == 1;
      v31 = v16[2];
      if ( !v30 )
      {
        v14 = BYTE6(v37);
        v20 = BYTE2(v36);
        *v13 = v10 ^ (BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v16) >> 16) | BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v16[1]) >> 16) | BYTE10(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v29 + 2048) - v31) >> 16) | BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)v16[3]) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v16[4]) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v16[5]) >> 16));
        v19 = BYTE6(v36);
LABEL_26:
        a3 = v39;
        goto LABEL_27;
      }
      v32 = BYTE2(v38) ^ (v20 & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v16) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v16[1]) >> 16) | BYTE10(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v29 + 2048) - v31) >> 16));
      v33 = *v13 & 0xF;
    }
    else
    {
      v32 = BYTE1(v38) ^ (BYTE14(v36) & ((*(_DWORD *)(a5 + 4LL * v17[4]) - (unsigned int)*v16) >> 16) | BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v16[1]) >> 16) | v14 & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v16[2]) >> 16));
      v33 = *v13 & 0xF0;
    }
    *v13 = v33 | v32;
    goto LABEL_26;
  }
  if ( (unsigned __int64)v17 < a3 )
  {
    v35 = HIWORD(v15);
    do
    {
      v21 = BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * v17[6] + 2048) - (unsigned int)v16[5]) >> 16);
      v22 = BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * v17[5] + 1024) - (unsigned int)v16[4]) >> 16);
      v23 = BYTE10(v36) & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v16[2]) >> 16);
      v24 = BYTE6(v36) & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v16[1]) >> 16);
      v10 = *v17;
      v25 = *(_DWORD *)(a5 + 4LL * v17[4]) - v16[3];
      v26 = *v16;
      v16 += 6;
      *v13++ = v40 ^ (v23 | v24 | BYTE2(v36) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v10) - v26) >> 16) | v22 | v35 & BYTE2(v25) | v21);
      if ( (unsigned __int64)v16 >= a7 )
      {
        LOBYTE(v10) = a8;
        v16 = (unsigned __int16 *)((char *)v16 + a8);
      }
      v17 += 8;
    }
    while ( (unsigned __int64)v17 < a3 );
    v18 = BYTE10(v36);
  }
LABEL_15:
  if ( BYTE3(a9) && v17[3] )
  {
    LOBYTE(v10) = *v13 & 0xF;
    *v13 = v10 | BYTE2(v38) ^ (BYTE2(v36) & ((*(_DWORD *)(a5 + 4LL * *v17) - (unsigned int)*v16) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * v17[1] + 1024) - (unsigned int)v16[1]) >> 16) | v18 & ((*(_DWORD *)(a5 + 4LL * v17[2] + 2048) - (unsigned int)v16[2]) >> 16));
  }
  return v10;
}
