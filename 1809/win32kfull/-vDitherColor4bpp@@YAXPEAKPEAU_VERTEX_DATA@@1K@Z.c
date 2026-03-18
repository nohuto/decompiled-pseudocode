/*
 * XREFs of ?vDitherColor4bpp@@YAXPEAKPEAU_VERTEX_DATA@@1K@Z @ 0x1C026C2D8
 * Callers:
 *     EngDitherColor @ 0x1C026C890 (EngDitherColor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

void __fastcall vDitherColor4bpp(unsigned int *a1, struct _VERTEX_DATA *a2, struct _VERTEX_DATA *a3, unsigned int a4)
{
  struct _VERTEX_DATA *v6; // r10
  struct _VERTEX_DATA *v8; // r9
  unsigned int v9; // eax
  unsigned int v10; // r11d
  struct _VERTEX_DATA *v11; // r8
  bool v12; // cc
  unsigned int v13; // edx
  struct _VERTEX_DATA *v14; // rcx
  __int64 v15; // rax
  unsigned int *v16; // rcx
  int v17; // r8d
  __int64 v18; // rdx
  unsigned int i; // edx
  __int64 v20; // rax
  unsigned int *v21; // r9
  unsigned int v22; // ecx
  char *v23; // r10
  unsigned int v24; // r8d
  int v25; // edx
  unsigned int *v26; // rcx
  __int64 v27; // rax
  char v28; // r9
  unsigned int v29; // r8d
  unsigned int *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // r8d
  int v36; // r9d
  int v37; // r10d
  int v38; // r11d
  int v39; // edi
  int v40; // [rsp+0h] [rbp-50h]
  int v41; // [rsp+4h] [rbp-4Ch]
  int v42; // [rsp+8h] [rbp-48h]
  int v43; // [rsp+Ch] [rbp-44h]
  int v44; // [rsp+10h] [rbp-40h]
  int v45; // [rsp+14h] [rbp-3Ch]
  int v46; // [rsp+18h] [rbp-38h]
  int v47; // [rsp+1Ch] [rbp-34h]
  int v48; // [rsp+20h] [rbp-30h]
  int v49; // [rsp+24h] [rbp-2Ch]
  int v50; // [rsp+28h] [rbp-28h]
  int v51; // [rsp+2Ch] [rbp-24h]
  int v52; // [rsp+30h] [rbp-20h]
  int v53; // [rsp+34h] [rbp-1Ch]
  int v54; // [rsp+38h] [rbp-18h]
  int v55; // [rsp+3Ch] [rbp-14h]

  v6 = a2;
  if ( a4 > 2 )
  {
    v8 = (struct _VERTEX_DATA *)((char *)a2 + 16);
    if ( a4 == 3 )
    {
      v9 = *(_DWORD *)v8;
      v10 = *((_DWORD *)a2 + 2);
      v8 = (struct _VERTEX_DATA *)((char *)a2 + (v10 < *(_DWORD *)v8 ? 16LL : 8LL));
      if ( v10 < v9 )
        v10 = v9;
    }
    else
    {
      v10 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 < *((_DWORD *)a2 + 6) )
      {
        v8 = (struct _VERTEX_DATA *)((char *)a2 + 24);
        v10 = *((_DWORD *)a2 + 6);
      }
    }
    v11 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    v12 = *((_DWORD *)a2 + 2) <= v10;
    v13 = *((_DWORD *)a2 + 2);
    v14 = v6;
    if ( v12 )
    {
      v13 = v10;
      v11 = v8;
    }
    if ( *(_DWORD *)v6 <= v13 )
      v14 = v11;
    v15 = *((unsigned int *)v14 + 1);
    *((_DWORD *)v14 + 1) = 255;
    v16 = (unsigned int *)&aulDither4bppOrder;
    v40 = ulNibbleTo4bppDword[v15];
    v41 = v40;
    v42 = v40;
    v43 = v40;
    v44 = v40;
    v45 = v40;
    v46 = v40;
    v47 = v40;
    v48 = v40;
    v49 = v40;
    v50 = v40;
    v51 = v40;
    v52 = v40;
    v53 = v40;
    v54 = v40;
    v55 = v40;
    while ( 1 )
    {
      v17 = *((_DWORD *)v6 + 1);
      v18 = *(unsigned int *)v6;
      if ( v17 != 255 )
        break;
      v16 += v18;
LABEL_23:
      v6 = (struct _VERTEX_DATA *)((char *)v6 + 8);
      if ( v6 >= a3 )
        goto LABEL_38;
    }
    if ( (*(_DWORD *)v6 & 3) != 1 )
    {
      if ( (*(_DWORD *)v6 & 3) != 2 )
      {
        if ( (*(_DWORD *)v6 & 3) != 3 )
          goto LABEL_21;
        *((_BYTE *)&v40 + v16[2]) = v17;
      }
      *((_BYTE *)&v40 + v16[1]) = v17;
    }
    *((_BYTE *)&v40 + *v16) = v17;
    v16 += v18 & 3;
LABEL_21:
    for ( i = (unsigned int)v18 >> 2; i; --i )
    {
      *((_BYTE *)&v40 + *v16) = v17;
      *((_BYTE *)&v40 + v16[1]) = v17;
      *((_BYTE *)&v40 + v16[2]) = v17;
      v20 = v16[3];
      v16 += 4;
      *((_BYTE *)&v40 + v20) = v17;
    }
    goto LABEL_23;
  }
  v21 = (unsigned int *)((char *)a2 + 4);
  if ( a4 != 2 )
  {
    v32 = ulNibbleTo4bppDword[*v21] | (16 * ulNibbleTo4bppDword[*v21]);
    v33 = v32;
    v34 = v32;
    v35 = v32;
    v36 = v32;
    v37 = v32;
    v38 = v32;
    v39 = v32;
    goto LABEL_40;
  }
  v22 = *(_DWORD *)a2;
  v23 = (char *)a2 + 12;
  v24 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 < v24 )
  {
    v27 = *(unsigned int *)v23;
    v24 = *(_DWORD *)a2;
    v26 = (unsigned int *)&aulDither4bppOrder;
    v23 = (char *)a2 + 4;
    v25 = ulNibbleTo4bppDword[v27];
  }
  else
  {
    v25 = ulNibbleTo4bppDword[*v21];
    v26 = (unsigned int *)((char *)&aulDither4bppOrder + 4 * v22);
  }
  v28 = *v23;
  v40 = v25;
  v41 = v25;
  v42 = v25;
  v43 = v25;
  v44 = v25;
  v45 = v25;
  v46 = v25;
  v47 = v25;
  v48 = v25;
  v49 = v25;
  v50 = v25;
  v51 = v25;
  v52 = v25;
  v53 = v25;
  v54 = v25;
  v55 = v25;
  switch ( v24 & 3 )
  {
    case 1u:
      goto LABEL_34;
    case 2u:
LABEL_33:
      *((_BYTE *)&v40 + v26[1]) = v28;
LABEL_34:
      *((_BYTE *)&v40 + *v26) = v28;
      v26 += v24 & 3;
      break;
    case 3u:
      *((_BYTE *)&v40 + v26[2]) = v28;
      goto LABEL_33;
  }
  v29 = v24 >> 2;
  if ( v29 )
  {
    v30 = v26 + 2;
    do
    {
      *((_BYTE *)&v40 + *(v30 - 2)) = v28;
      *((_BYTE *)&v40 + *(v30 - 1)) = v28;
      v31 = *v30;
      v30 += 4;
      *((_BYTE *)&v40 + v31) = v28;
      *((_BYTE *)&v40 + *(v30 - 3)) = v28;
      --v29;
    }
    while ( v29 );
  }
LABEL_38:
  v32 = v55 | (16 * v54);
  v33 = v53 | (16 * v52);
  v34 = v51 | (16 * v50);
  v35 = v49 | (16 * v48);
  v36 = v47 | (16 * v46);
  v37 = v45 | (16 * v44);
  v38 = v43 | (16 * v42);
  v39 = v41 | (16 * v40);
LABEL_40:
  *a1 = v39;
  a1[1] = v38;
  a1[2] = v37;
  a1[3] = v36;
  a1[4] = v35;
  a1[5] = v34;
  a1[6] = v33;
  a1[7] = v32;
}
