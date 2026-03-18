/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0143850
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int iColor,
        int a7,
        int a8)
{
  __int64 v8; // r15
  _DWORD *v9; // r14
  int v10; // esi
  XLATEOBJ *v11; // r12
  int v12; // r13d
  unsigned __int8 *v13; // rbx
  unsigned __int8 *v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r9
  __int64 v17; // r10
  char *v18; // r8
  unsigned int v19; // eax
  int *v20; // rdi
  __int64 v21; // rcx
  unsigned int *v23; // r13
  __int64 v24; // r15
  ULONG v25; // eax
  __int64 v26; // rcx
  ULONG *v27; // rdi
  int v28; // r8d
  __int64 v29; // rax
  unsigned int v30; // r10d
  unsigned __int8 *v31; // rdi
  char *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r11
  __int16 v35; // ax
  ULONG v36; // eax
  ULONG v37; // ecx
  ULONG *v38; // rdi
  __int64 v39; // rdx
  ULONG v40; // eax
  __int64 i; // rcx
  unsigned int v42; // edx
  unsigned __int8 *v43; // rax
  unsigned __int8 *v44; // [rsp+20h] [rbp-58h]
  char *v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+30h] [rbp-48h]
  ULONG v48; // [rsp+88h] [rbp+10h]
  __int64 v49; // [rsp+88h] [rbp+10h]
  int v50; // [rsp+90h] [rbp+18h]
  __int64 v51; // [rsp+98h] [rbp+20h]
  ULONG iColora; // [rsp+A8h] [rbp+30h]
  int v53; // [rsp+B8h] [rbp+40h]

  v8 = iColor;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = pxlo;
  v12 = *(_DWORD *)a1;
  v13 = &a3[2 * iColor];
  HIBYTE(iColor) = 0;
  v14 = &v13[v8];
  HIBYTE(v48) = 0;
  if ( a4 )
  {
    v28 = 0;
    iColora = 0;
    v29 = (__int64)a8 >> 5;
    v30 = a8 & 0x1F;
    v53 = v30;
    v44 = &a4[4 * v29];
    v50 = *(_DWORD *)v44;
    if ( (int)v8 < a7 )
    {
      v31 = &a4[4 * v29];
      v32 = (char *)a1 + 32;
      v33 = 0LL;
      v45 = (char *)a1 + 32;
      v51 = 0LL;
      v34 = v30;
      while ( 1 )
      {
        v35 = *(_WORD *)v14;
        v14 += 3;
        LOWORD(v48) = v35;
        BYTE2(v48) = *(v14 - 1);
        v46 = v34;
        if ( v11 )
        {
          v36 = XLATEOBJ_iXlate(v11, v48);
          v28 = iColora;
          v37 = v36;
          v30 = v53;
          v32 = v45;
          v34 = v46;
          v33 = v51;
          HIBYTE(v48) = HIBYTE(v36);
        }
        else
        {
          v37 = v48;
        }
        v11 = pxlo;
        if ( (dword_1C02E4440[v34] & v50) != 0 )
        {
          if ( *(_DWORD *)v32 )
          {
            v38 = &v9[v33 + 2];
            v39 = *(unsigned int *)v32;
            v40 = v37;
            v28 += v39;
            v51 += v39;
            for ( i = (unsigned int)v39; i; --i )
              *v38++ = v40;
            v31 = v44;
            iColora = v28;
          }
        }
        else
        {
          if ( v28 > 0 )
          {
            *v9 = v12;
            v9[1] = v28;
            iColora = 0;
            v51 = 0LL;
            v9 += v28 + 2;
            v12 += v28;
            v28 = 0;
          }
          v12 += *(_DWORD *)v32;
        }
        v32 += 4;
        LODWORD(v8) = v8 + 1;
        v47 = v34 + 1;
        v45 = v32;
        v42 = v30 + 1;
        if ( (int)v8 >= a7 )
          break;
        if ( (v42 & 0x20) != 0 )
          v50 = *((_DWORD *)v31 + 1);
        v43 = v31 + 4;
        v30 = 0;
        v34 = 0LL;
        if ( (v42 & 0x20) == 0 )
        {
          v34 = v47;
          v43 = v31;
          v30 = v42;
        }
        v44 = v43;
        v33 = v51;
        v31 = v43;
        v53 = v30;
      }
      if ( v28 > 0 )
      {
        *v9 = v12;
        v9[1] = v28;
        v9 += v28 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v12;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( (_DWORD)v8 != a7 )
    {
      v15 = (unsigned int)(a7 - v8);
      if ( pxlo )
      {
        v49 = 0LL;
        v23 = (unsigned int *)((char *)a1 + 32);
        do
        {
          v24 = *v23++;
          if ( (_DWORD)v24 )
          {
            LOWORD(iColor) = *(_WORD *)v14;
            BYTE2(iColor) = v14[2];
            v25 = XLATEOBJ_iXlate(pxlo, iColor);
            v10 += v24;
            HIBYTE(iColor) = HIBYTE(v25);
            v26 = (unsigned int)v24;
            v27 = &v9[v49 + 2];
            v49 += v24;
            while ( v26 )
            {
              *v27++ = v25;
              --v26;
            }
          }
          v14 += 3;
          --v15;
        }
        while ( v15 );
      }
      else
      {
        v16 = 0LL;
        v17 = (unsigned int)v15;
        v18 = (char *)a1 + 32;
        do
        {
          v18 += 4;
          LOWORD(iColor) = *(_WORD *)v14;
          BYTE2(iColor) = v14[2];
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 )
          {
            v20 = (int *)((char *)a2 + 4 * v16 + 16);
            v21 = v19;
            v10 += v19;
            while ( v21 )
            {
              *v20++ = iColor;
              --v21;
            }
            v16 += v19;
          }
          v14 += 3;
          --v17;
        }
        while ( v17 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
