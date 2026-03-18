/*
 * XREFs of InputAABFDATAToAA24 @ 0x1C00F2340
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
 */

_BYTE *__fastcall InputAABFDATAToAA24(char *a1, _BYTE *a2)
{
  size_t v2; // r8
  _BYTE *v3; // r10
  char *v4; // rbx
  unsigned __int8 *v5; // rdi
  unsigned __int8 *v6; // rax
  unsigned int v7; // edx
  unsigned __int8 *v8; // r9
  char v9; // dl
  int v10; // ecx
  int v11; // ecx
  __int64 v13; // r11
  unsigned __int8 *v14; // rdx
  unsigned __int8 v15; // cl
  __int64 v16; // r11
  unsigned __int8 *v17; // rsi
  int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // r10d
  unsigned int v21; // r10d
  unsigned int v22; // r8d
  unsigned int v23; // r8d
  __int64 v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+28h] [rbp-30h]

  v2 = *((int *)a1 + 14);
  v3 = a2;
  v4 = a1;
  v5 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v6 = a2;
  v25 = *((_DWORD *)a1 + 18);
  v7 = HIBYTE(v25);
  v8 = &v6[v2];
  v24 = *((_QWORD *)a1 + 8);
  if ( (*a1 & 4) == 0 )
  {
    if ( (v24 & 1) != 0 )
    {
      if ( (v24 & 2) != 0 )
      {
        memmove(v6, v5, v2);
      }
      else
      {
        v13 = v7;
        v14 = &v5[BYTE3(v24)];
        do
        {
          v6[2] = v14[BYTE2(v24) - (unsigned __int64)BYTE3(v24)];
          v6[1] = *v14;
          v15 = v14[BYTE4(v24) - (unsigned __int64)BYTE3(v24)];
          v14 += v13;
          *v6 = v15;
          v6 += 3;
        }
        while ( v6 < v8 );
      }
    }
    else if ( v7 == 4 )
    {
      do
      {
        v22 = *(_DWORD *)v5;
        v5 += 4;
        v6[2] = BYTE2(v24) & ((unsigned __int8)(v22 >> v25) << SBYTE5(v24));
        *v6 = BYTE4(v24) & ((unsigned __int8)(v22 >> SBYTE2(v25)) << SHIBYTE(v24));
        v6[1] = BYTE3(v24) & ((unsigned __int8)(v22 >> SBYTE1(v25)) << SBYTE6(v24));
        v6 += 3;
      }
      while ( v6 < v8 );
    }
    else
    {
      do
      {
        v23 = *(unsigned __int16 *)v5;
        v5 += 2;
        v6[2] = BYTE2(v24) & ((unsigned __int8)(v23 >> v25) << SBYTE5(v24));
        *v6 = BYTE4(v24) & ((unsigned __int8)(v23 >> SBYTE2(v25)) << SHIBYTE(v24));
        v6[1] = BYTE3(v24) & ((unsigned __int8)(v23 >> SBYTE1(v25)) << SBYTE6(v24));
        v6 += 3;
      }
      while ( v6 < v8 );
    }
LABEL_5:
    v3 = a2;
    goto LABEL_6;
  }
  v16 = *((_QWORD *)a1 + 1);
  v17 = &v6[*((int *)a1 + 12)];
  if ( (v24 & 1) == 0 )
  {
    if ( v7 == 4 )
    {
      do
      {
        v20 = *(_DWORD *)v5;
        v5 += 4;
        *v6++ = (unsigned __int16)(*(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE4(v24) & ((unsigned __int8)(v20 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE2(v24) & ((unsigned __int8)(v20 >> v25) << SBYTE5(v24)))
                                            + 2048)
                                 + *(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE3(v24) & ((unsigned __int8)(v20 >> SBYTE1(v25)) << SBYTE6(v24)))
                                            + 1024)) >> 8;
      }
      while ( v6 < v17 );
      v4 = a1;
    }
    else
    {
      do
      {
        v21 = *(unsigned __int16 *)v5;
        v5 += 2;
        *v6++ = (unsigned __int16)(*(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE4(v24) & ((unsigned __int8)(v21 >> SBYTE2(v25)) << SHIBYTE(v24))))
                                 + *(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE2(v24) & ((unsigned __int8)(v21 >> v25) << SBYTE5(v24)))
                                            + 2048)
                                 + *(_WORD *)(v16
                                            + 4LL
                                            * (unsigned __int8)(BYTE3(v24) & ((unsigned __int8)(v21 >> SBYTE1(v25)) << SBYTE6(v24)))
                                            + 1024)) >> 8;
      }
      while ( v6 < v17 );
      v4 = a1;
    }
    goto LABEL_5;
  }
  do
  {
    v18 = *(_DWORD *)(v16 + 4LL * v5[1] + 1024) + *(_DWORD *)(v16 + 4LL * v5[2] + 2048);
    v19 = *v5;
    v5 += v7;
    *v6++ = (unsigned __int16)(*(_WORD *)(v16 + 4 * v19) + v18) >> 8;
  }
  while ( v6 < v17 );
LABEL_6:
  v9 = *v4;
  if ( (*v4 & 2) != 0 )
  {
    v10 = *((_DWORD *)v4 + 13);
    if ( v10 && (v11 = v10 - 1, (*((_DWORD *)v4 + 13) = v11) != 0) )
    {
      *((_QWORD *)v4 + 5) += *((int *)v4 + 15);
    }
    else if ( (v9 & 1) != 0 )
    {
      *((_QWORD *)v4 + 5) = *((_QWORD *)v4 + 3);
      *((_DWORD *)v4 + 13) = *((_DWORD *)v4 + 8);
    }
    else
    {
      *v4 = v9 & 0xFD;
    }
  }
  return v3;
}
