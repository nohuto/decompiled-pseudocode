/*
 * XREFs of OutputAATo4BPP @ 0x1C0232720
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
  char v15; // r8d^2
  unsigned int v16; // edx
  unsigned __int16 *v17; // rsi
  unsigned __int8 *v18; // r14
  char v19; // edi^2
  char v20; // r11d^2
  char v21; // ebx^2
  char v22; // bl
  char v23; // r10
  char v24; // r11
  char v25; // r9
  int v26; // edx
  int v27; // ecx
  int v28; // edx
  int v29; // edx
  int v30; // ecx
  bool v31; // zf
  int v32; // edx
  char v33; // r10
  char v34; // cl
  unsigned int v36; // [rsp+0h] [rbp-30h]
  __int128 v37; // [rsp+18h] [rbp-18h]
  __int64 v38; // [rsp+28h] [rbp-8h]
  int v39; // [rsp+70h] [rbp+40h]
  char v40; // [rsp+90h] [rbp+60h]

  LOBYTE(v10) = 0;
  v39 = 0;
  v40 = 0;
  v12 = 0;
  v13 = a4;
  v38 = *(_QWORD *)(a5 - 8);
  v37 = *(_OWORD *)(a5 - 24);
  if ( BYTE1(a9) )
  {
    LOBYTE(v10) = 119;
    v40 = 119;
    v39 = 2003830647;
    v12 = 7;
  }
  v15 = BYTE6(*(_QWORD *)(a5 - 8));
  v16 = HIDWORD(*(_OWORD *)(a5 - 24));
  v17 = a6;
  if ( (_BYTE)a9 )
  {
    a2 += 4;
    if ( a2[3] )
    {
      v16 = HIDWORD(*(_OWORD *)(a5 - 24));
      v15 = BYTE6(*(_QWORD *)(a5 - 8));
      *a4 = *a4 & 0xF0 | v12 ^ (BYTE14(v37) & ((*(_DWORD *)(a5 + 4LL * *a2) - (unsigned int)*a6) >> 16) | BYTE2(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)a2[1] + 256)) - (unsigned int)a6[1]) >> 16) | BYTE6(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)a2[2] + 512)) - (unsigned int)a6[2]) >> 16));
    }
    v13 = a4 + 1;
    v17 = a6 + 3;
    if ( (unsigned __int64)(a6 + 3) >= a7 )
      v17 = (unsigned __int16 *)((char *)v17 + a8);
  }
  v18 = a2 + 4;
  v19 = BYTE10(v37);
  v20 = BYTE6(v37);
  v21 = BYTE2(v37);
  if ( (*a1 & 0x80u) != 0 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v18 >= a3 )
        goto LABEL_14;
      v28 = v18[3] & 2 | v18[7] & 1;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v30 = v17[2];
          v31 = v29 == 1;
          v32 = v18[2];
          if ( !v31 )
          {
            v21 = BYTE2(v37);
            v20 = BYTE6(v37);
            *v13 = v10 ^ (BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v17) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[1] + 256)) - (unsigned int)v17[1]) >> 16) | BYTE10(v37) & ((unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v32 + 512)) - v30) >> 16) | BYTE14(v37) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)v17[3]) >> 16) | BYTE2(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[5] + 256)) - (unsigned int)v17[4]) >> 16) | BYTE6(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[6] + 512)) - (unsigned int)v17[5]) >> 16));
            v19 = BYTE10(v37);
            goto LABEL_25;
          }
          v33 = BYTE2(v39) ^ (v21 & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v17) >> 16) | v20 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[1] + 256)) - (unsigned int)v17[1]) >> 16) | v19 & ((unsigned int)(*(_DWORD *)(a5 + 4LL * (unsigned int)(v32 + 512)) - v30) >> 16));
          v34 = *v13 & 0xF;
        }
        else
        {
          v33 = BYTE1(v39) ^ (BYTE14(v37) & ((*(_DWORD *)(a5 + 4LL * v18[4]) - (unsigned int)*v17) >> 16) | BYTE2(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[5] + 256)) - (unsigned int)v17[1]) >> 16) | BYTE6(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[6] + 512)) - (unsigned int)v17[2]) >> 16));
          v34 = *v13 & 0xF0;
        }
        *v13 = v34 | v33;
      }
LABEL_25:
      ++v13;
      v17 += 6;
      if ( (unsigned __int64)v17 >= a7 )
        v17 = (unsigned __int16 *)((char *)v17 + a8);
      v18 += 8;
    }
  }
  if ( (unsigned __int64)v18 < a3 )
  {
    v36 = HIWORD(v16);
    do
    {
      v22 = v15 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[6] + 512)) - (unsigned int)v17[5]) >> 16);
      v23 = BYTE2(v38) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[5] + 256)) - (unsigned int)v17[4]) >> 16);
      v24 = BYTE10(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[2] + 512)) - (unsigned int)v17[2]) >> 16);
      v25 = BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[1] + 256)) - (unsigned int)v17[1]) >> 16);
      v10 = *v18;
      v26 = *(_DWORD *)(a5 + 4LL * v18[4]) - v17[3];
      v27 = *v17;
      v17 += 6;
      *v13++ = v40 ^ (v24 | v25 | BYTE2(v37) & ((unsigned int)(*(_DWORD *)(a5 + 4 * v10) - v27) >> 16) | v23 | v36 & BYTE2(v26) | v22);
      if ( (unsigned __int64)v17 >= a7 )
      {
        LOBYTE(v10) = a8;
        v17 = (unsigned __int16 *)((char *)v17 + a8);
      }
      v18 += 8;
    }
    while ( (unsigned __int64)v18 < a3 );
  }
LABEL_14:
  if ( BYTE3(a9) && v18[3] )
  {
    LOBYTE(v10) = *v13 & 0xF;
    *v13 = v10 | BYTE2(v39) ^ (BYTE2(v37) & ((*(_DWORD *)(a5 + 4LL * *v18) - (unsigned int)*v17) >> 16) | BYTE6(v37) & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[1] + 256)) - (unsigned int)v17[1]) >> 16) | v19 & ((*(_DWORD *)(a5 + 4LL * ((unsigned int)v18[2] + 512)) - (unsigned int)v17[2]) >> 16));
  }
  return v10;
}
