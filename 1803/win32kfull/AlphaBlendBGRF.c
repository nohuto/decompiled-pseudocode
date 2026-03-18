/*
 * XREFs of AlphaBlendBGRF @ 0x1C0234D70
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     RepDIB_CY @ 0x1C0114DE0 (RepDIB_CY.c)
 *     FastExpAA_CY @ 0x1C0115180 (FastExpAA_CY.c)
 *     BltDIB_CY @ 0x1C0117710 (BltDIB_CY.c)
 *     ExpandDIB_CY @ 0x1C0236110 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0236AC0 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0237770 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0237F20 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0238C40 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C02396D0 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0239ED0 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C023A140 (TileDIB_CY.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AlphaBlendBGRF(int *a1)
{
  unsigned __int8 *v1; // rdi
  int v3; // r13d
  int v4; // r12d
  unsigned __int16 *v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int8 *v9; // rdi
  unsigned __int8 *v10; // rbx
  __int64 v11; // rax
  int v12; // edx
  _BYTE *v13; // rbx
  unsigned __int8 *v14; // rdi
  __int16 v15; // dx
  unsigned __int8 *v16; // r10
  unsigned __int16 v17; // cx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned __int16 v20; // cx
  int v21; // edx
  unsigned int v22; // ecx
  _BYTE *v23; // r15
  unsigned __int8 *v24; // rbx
  unsigned __int8 v25; // dl
  int v26; // r8d
  __int64 v27; // rax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  _BYTE *v33; // rbx
  int v34; // edx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // cl
  __int64 v41; // rax
  unsigned __int8 *v42; // rbx
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // dl
  int v45; // r8d
  __int64 v46; // rax
  unsigned __int8 v47; // cl
  __int64 v48; // rax
  unsigned __int8 v49; // cl
  __int64 v50; // rax
  _BYTE *v51; // rbx
  unsigned __int8 v52; // cl
  unsigned __int8 v53; // dl
  int v54; // r8d
  __int64 v55; // rax
  char v56; // cl
  __int64 v57; // rax
  char v58; // cl
  __int64 v59; // rax

  v1 = (unsigned __int8 *)*((_QWORD *)a1 + 67);
  v3 = *a1;
  v4 = a1[2] & 4;
  v5 = (unsigned __int16 *)*((_QWORD *)a1 + 68);
  v6 = *((_QWORD *)a1 + 69);
  v7 = *((_QWORD *)a1 + 42);
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *, unsigned __int8 *))a1 + 14))(a1 + 24, v1);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      if ( v4 )
      {
        do
        {
          if ( *((_BYTE *)v5 + 3) )
          {
            LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1))
                       + *(_WORD *)(v7 + 2LL * ((unsigned int)*v1 + 768));
            *v5 = v8;
          }
          ++v1;
          v5 += 2;
        }
        while ( (unsigned __int64)v5 < v6 );
      }
      else
      {
        v9 = v1 + 2;
        v10 = (unsigned __int8 *)v5 + 1;
        do
        {
          if ( v10[2] )
          {
            *(v10 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * *(v10 - 1))
                                          + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v9 - 2) + 768))) >> 8;
            v11 = (unsigned int)v10[1] + 512;
            *v10 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)*v10 + 256))
                                    + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v9 - 1) + 768))) >> 8;
            v10[1] = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)*v9 + 768)) + *(_WORD *)(v7 + 2 * v11)) >> 8;
          }
          v10 += 4;
          v9 += 3;
          LOBYTE(v8) = (_BYTE)v10 - 1;
        }
        while ( (unsigned __int64)(v10 - 1) < v6 );
      }
    }
    else if ( v4 )
    {
      do
      {
        v12 = *v1++;
        LOWORD(v8) = *(_WORD *)(v7 + 2LL * *((unsigned __int8 *)v5 + 1))
                   + *(_WORD *)(v7 + 2LL * (unsigned int)(v12 + 768));
        *v5 = v8;
        v5 += 2;
      }
      while ( (unsigned __int64)v5 < v6 );
    }
    else
    {
      v13 = v5 + 1;
      v14 = v1 + 2;
      do
      {
        *(v13 - 2) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned __int8)*(v13 - 2))
                                      + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v14 - 2) + 768))) >> 8;
        v8 = (unsigned int)(unsigned __int8)*v13 + 512;
        *(v13 - 1) = (unsigned __int16)(*(_WORD *)(v7 + 2LL * ((unsigned int)(unsigned __int8)*(v13 - 1) + 256))
                                      + *(_WORD *)(v7 + 2LL * ((unsigned int)*(v14 - 1) + 768))) >> 8;
        v15 = *(_WORD *)(v7 + 2 * v8);
        LODWORD(v8) = *v14;
        v14 += 3;
        *v13 = (unsigned __int16)(*(_WORD *)(v7 + 2LL * (unsigned int)(v8 + 768)) + v15) >> 8;
        v13 += 4;
        LOBYTE(v8) = (_BYTE)v13 - 2;
      }
      while ( (unsigned __int64)(v13 - 2) < v6 );
    }
    return v8;
  }
  LOBYTE(v8) = (*((__int64 (__fastcall **)(int *))a1 + 30))(a1);
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 43);
  if ( v4 )
  {
    if ( (v3 & 0x80) != 0 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v5 + 3) )
        {
          v17 = GrayIdxWORD[*v1];
          LOBYTE(v8) = *v16;
          if ( !*v16 )
            goto LABEL_25;
          if ( (_BYTE)v8 != 0xFF )
            break;
        }
LABEL_26:
        ++v16;
        ++v1;
        v5 += 2;
        if ( (unsigned __int64)v5 >= v6 )
          return v8;
      }
      v18 = v17;
      v19 = (unsigned __int16)GrayIdxWORD[(unsigned __int8)v8];
      LODWORD(v8) = *v5 - v18;
      v17 = v18 + ((int)(v8 * (v19 >> 4) + 2048) >> 12);
LABEL_25:
      *v5 = v17;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v8 = *v1++;
      v20 = GrayIdxWORD[v8];
      LOBYTE(v8) = *v16;
      if ( !*v16 )
        goto LABEL_31;
      if ( (_BYTE)v8 != 0xFF )
        break;
LABEL_32:
      ++v16;
      v5 += 2;
      if ( (unsigned __int64)v5 >= v6 )
        return v8;
    }
    v21 = v20;
    v22 = (unsigned __int16)GrayIdxWORD[(unsigned __int8)v8];
    LODWORD(v8) = *v5 - v21;
    v20 = v21 + ((int)(v8 * (v22 >> 4) + 2048) >> 12);
LABEL_31:
    *v5 = v20;
    goto LABEL_32;
  }
  if ( (v3 & 0x100000) != 0 )
  {
    v23 = (_BYTE *)(*((_QWORD *)a1 + 17) + 3LL);
    if ( (v3 & 0x80) != 0 )
    {
      v24 = (unsigned __int8 *)v5 + 1;
      do
      {
        if ( v24[2] )
        {
          v25 = *v16;
          if ( *v16 )
          {
            if ( v25 == 0xFF )
            {
              v30 = *v24;
              *(v24 - 1) = *(_BYTE *)(*(v24 - 1) + v7);
              v31 = *(_BYTE *)(v30 + v7);
              v32 = v24[1];
              *v24 = v31;
              v24[1] = *(_BYTE *)(v32 + v7);
              *v23 = -1;
            }
            else
            {
              v26 = (unsigned __int16)GrayIdxWORD[v25];
              *v23 = v25 + *v23 - ((v26 * (unsigned int)(unsigned __int8)*v23 + 0x8000) >> 16);
              v27 = (unsigned int)*v24 + 256;
              *(v24 - 1) = *v1 + ((v26 * (*(unsigned __int8 *)(*(v24 - 1) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
              v28 = *(unsigned __int8 *)(v27 + v7);
              v29 = (unsigned int)v24[1] + 512;
              *v24 = v1[1] + ((v26 * (v28 - (unsigned int)v1[1]) + 0x8000) >> 16);
              v24[1] = v1[2] + ((v26 * (*(unsigned __int8 *)(v29 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
            }
          }
          else
          {
            *(_WORD *)(v24 - 1) = *(_WORD *)v1;
            v24[1] = v1[2];
          }
        }
        v24 += 4;
        ++v16;
        v23 += 4;
        v1 += 3;
        LOBYTE(v8) = (_BYTE)v24 - 1;
      }
      while ( (unsigned __int64)(v24 - 1) < v6 );
    }
    else
    {
      v33 = v5 + 1;
      do
      {
        v34 = *v16++;
        if ( (_BYTE)v34 )
        {
          if ( v34 == 255 )
          {
            v39 = (unsigned __int8)*(v33 - 1);
            *(v33 - 2) = *(_BYTE *)((unsigned __int8)*(v33 - 2) + v7);
            v40 = *(_BYTE *)(v39 + v7);
            v41 = (unsigned __int8)*v33;
            *(v33 - 1) = v40;
            *v33 = *(_BYTE *)(v41 + v7);
            *v23 = -1;
          }
          else
          {
            v35 = (unsigned __int16)GrayIdxWORD[(unsigned __int8)v34];
            *v23 = v34 + *v23 - ((v35 * (unsigned int)(unsigned __int8)*v23 + 0x8000) >> 16);
            v36 = (unsigned int)(unsigned __int8)*(v33 - 1) + 256;
            *(v33 - 2) = *v1
                       + ((v35 * (*(unsigned __int8 *)((unsigned __int8)*(v33 - 2) + v7) - (unsigned int)*v1) + 0x8000) >> 16);
            v37 = *(unsigned __int8 *)(v36 + v7);
            v38 = (unsigned int)(unsigned __int8)*v33 + 512;
            *(v33 - 1) = v1[1] + ((v35 * (v37 - (unsigned int)v1[1]) + 0x8000) >> 16);
            *v33 = v1[2] + ((v35 * (*(unsigned __int8 *)(v38 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
        }
        else
        {
          *((_WORD *)v33 - 1) = *(_WORD *)v1;
          *v33 = v1[2];
        }
        v33 += 4;
        v23 += 4;
        v1 += 3;
        LOBYTE(v8) = (_BYTE)v33 - 2;
      }
      while ( (unsigned __int64)(v33 - 2) < v6 );
    }
  }
  else if ( (v3 & 0x80) != 0 )
  {
    v42 = (unsigned __int8 *)v5 + 1;
    do
    {
      if ( v42[2] )
      {
        v43 = *v16;
        if ( *v16 )
        {
          v44 = *(_BYTE *)(*(v42 - 1) + v7);
          if ( v43 == 0xFF )
          {
            v48 = *v42;
            *(v42 - 1) = v44;
            v49 = *(_BYTE *)(v48 + v7);
            v50 = v42[1];
            *v42 = v49;
            v47 = *(_BYTE *)(v50 + v7);
          }
          else
          {
            v45 = (unsigned __int16)GrayIdxWORD[v43];
            *(v42 - 1) = *v1 + ((v45 * (v44 - (unsigned int)*v1) + 0x8000) >> 16);
            v46 = (unsigned int)v42[1] + 512;
            *v42 = v1[1]
                 + ((v45 * (*(unsigned __int8 *)((unsigned int)*v42 + 256 + v7) - (unsigned int)v1[1]) + 0x8000) >> 16);
            v47 = v1[2] + ((v45 * (*(unsigned __int8 *)(v46 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
          }
          v42[1] = v47;
        }
        else
        {
          *(_WORD *)(v42 - 1) = *(_WORD *)v1;
          v42[1] = v1[2];
        }
      }
      v42 += 4;
      ++v16;
      v1 += 3;
      LOBYTE(v8) = (_BYTE)v42 - 1;
    }
    while ( (unsigned __int64)(v42 - 1) < v6 );
  }
  else
  {
    v51 = v5 + 1;
    do
    {
      v52 = *v16;
      if ( *v16 )
      {
        v53 = *(_BYTE *)((unsigned __int8)*(v51 - 2) + v7);
        if ( v52 == 0xFF )
        {
          v57 = (unsigned __int8)*(v51 - 1);
          *(v51 - 2) = v53;
          v58 = *(_BYTE *)(v57 + v7);
          v59 = (unsigned __int8)*v51;
          *(v51 - 1) = v58;
          v56 = *(_BYTE *)(v59 + v7);
        }
        else
        {
          v54 = (unsigned __int16)GrayIdxWORD[v52];
          *(v51 - 2) = *v1 + ((v54 * (v53 - (unsigned int)*v1) + 0x8000) >> 16);
          v55 = (unsigned int)(unsigned __int8)*v51 + 512;
          *(v51 - 1) = v1[1]
                     + ((v54
                       * (*(unsigned __int8 *)((unsigned int)(unsigned __int8)*(v51 - 1) + 256 + v7)
                        - (unsigned int)v1[1])
                       + 0x8000) >> 16);
          v56 = v1[2] + ((v54 * (*(unsigned __int8 *)(v55 + v7) - (unsigned int)v1[2]) + 0x8000) >> 16);
        }
        *v51 = v56;
      }
      else
      {
        *((_WORD *)v51 - 1) = *(_WORD *)v1;
        *v51 = v1[2];
      }
      v51 += 4;
      ++v16;
      v1 += 3;
      LOBYTE(v8) = (_BYTE)v51 - 2;
    }
    while ( (unsigned __int64)(v51 - 2) < v6 );
  }
  return v8;
}
