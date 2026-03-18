/*
 * XREFs of ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C02ACB10
 * Callers:
 *     <none>
 * Callees:
 *     ?BltLnkReadPat1@@YAXPEAEK0KKKK@Z @ 0x1C02AC610 (-BltLnkReadPat1@@YAXPEAEK0KKKK@Z.c)
 */

void __fastcall BltLnkSrcCopyMsk1(
        struct BLTINFO *a1,
        struct _BLTLNK_MASKINFO *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  int v4; // eax
  __int64 v6; // rdx
  unsigned __int8 *v7; // r10
  __int64 v8; // r8
  unsigned __int8 *v9; // r11
  int v11; // ebp
  unsigned __int8 *v12; // rsi
  int v13; // r13d
  unsigned int v14; // ecx
  unsigned __int8 *v15; // r15
  char v16; // dl
  unsigned __int8 *v17; // rbx
  int v18; // r12d
  signed int v19; // r9d
  signed __int64 v20; // rdx
  signed __int64 v21; // r15
  unsigned __int8 v22; // cl
  unsigned __int8 v23; // al
  int v24; // eax
  signed int v25; // eax
  signed int v26; // r9d
  signed __int64 v27; // r8
  unsigned __int8 v28; // dl
  int v29; // eax
  signed int v30; // eax
  int v31; // [rsp+40h] [rbp-68h]
  __int64 v32; // [rsp+48h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  signed int v34; // [rsp+B0h] [rbp+8h]
  unsigned int v35; // [rsp+B8h] [rbp+10h]

  v4 = *((_DWORD *)a1 + 8);
  v6 = *((_QWORD *)a1 + 1);
  v7 = a3;
  v8 = *((_QWORD *)a1 + 2);
  v9 = a4;
  v33 = v6;
  v11 = *((_DWORD *)a2 + 5);
  v12 = *(unsigned __int8 **)a2;
  v32 = v8;
  while ( v4 )
  {
    v13 = *((_DWORD *)a1 + 7);
    v31 = v4 - 1;
    v14 = *((_DWORD *)a1 + 12) & 7;
    v15 = (unsigned __int8 *)(v6 + ((__int64)*((int *)a1 + 12) >> 3));
    v35 = *((_DWORD *)a2 + 7);
    v34 = *((_DWORD *)a1 + 14);
    v16 = v34;
    v17 = (unsigned __int8 *)(v8 + ((__int64)v34 >> 3));
    v18 = v34 & 7;
    if ( v14 != v18 )
    {
      BltLnkReadPat1(v9, v34 & 7, v15, v13, v14, v13);
      v16 = v34;
      v7 = a3;
      v15 = a4;
    }
    BltLnkReadPat1(v7, v16, v12, *((_DWORD *)a2 + 6), v35, v13);
    v7 = a3;
    if ( *((_BYTE *)a2 + 36) )
    {
      v26 = v34;
      *a3 |= -1 << (8 - v18);
      a3[(unsigned __int64)(unsigned int)(v18 + v13) >> 3] |= 255 >> ((v34 + v13) & 7);
      if ( v13 > 0 )
      {
        v27 = a3 - v17;
        do
        {
          v28 = v17[v27];
          if ( v28 )
          {
            if ( v28 != 0xFF )
              *v17 = v28 & *v17 | *v15 & ~v28;
          }
          else
          {
            *v17 = *v15;
          }
          ++v15;
          v29 = v13 - 8;
          ++v17;
          v13 = v13 - 8 + (v26 & 7);
          if ( (v26 & 7) == 0 )
            v13 = v29;
          v30 = 0;
          if ( (v26 & 7) == 0 )
            v30 = v26;
          v26 = v30;
        }
        while ( v13 > 0 );
      }
    }
    else if ( v13 > 0 )
    {
      v19 = v34;
      v20 = a3 - v17;
      v21 = v15 - v17;
      while ( 1 )
      {
        v22 = v17[v20];
        if ( v22 == 0xFF )
          break;
        if ( v22 )
        {
          v23 = *v17 & ~v22 | v22 & v17[v21];
          goto LABEL_11;
        }
LABEL_12:
        ++v17;
        v24 = v13 - 8;
        v13 = v13 - 8 + (v19 & 7);
        if ( (v19 & 7) == 0 )
          v13 = v24;
        v25 = 0;
        if ( (v19 & 7) == 0 )
          v25 = v19;
        v19 = v25;
        if ( v13 <= 0 )
          goto LABEL_29;
      }
      v23 = v17[v21];
LABEL_11:
      *v17 = v23;
      goto LABEL_12;
    }
LABEL_29:
    v8 = *((int *)a1 + 11) + v32;
    v6 = *((int *)a1 + 10) + v33;
    v32 = v8;
    v33 = v6;
    if ( *((int *)a1 + 9) <= 0 )
    {
      if ( v11 )
      {
        --v11;
        v12 += *((int *)a2 + 8);
      }
      else
      {
        v11 = *((_DWORD *)a2 + 4) - 1;
        v12 = (unsigned __int8 *)(*((_QWORD *)a2 + 1) + *((_DWORD *)a2 + 8) * v11);
      }
    }
    else
    {
      ++v11;
      v12 += *((int *)a2 + 8);
      if ( v11 >= *((_DWORD *)a2 + 4) )
      {
        v12 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
        v11 = 0;
      }
    }
    v4 = v31;
    v9 = a4;
  }
}
