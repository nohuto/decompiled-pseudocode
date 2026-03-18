/*
 * XREFs of ?pxrlStrRead24@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0115EF0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead24(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebp
  _DWORD *v9; // r14
  int v10; // r15d
  int v11; // esi
  unsigned __int8 *v12; // rbx
  char *v13; // r8
  __int64 v14; // r10
  __int64 v15; // r9
  unsigned int v16; // eax
  ULONG *v17; // rdi
  __int64 v18; // rcx
  __int64 v20; // rbp
  unsigned int *v21; // r12
  __int64 v22; // r13
  ULONG v23; // eax
  __int64 v24; // rcx
  ULONG *v25; // rdi
  int v26; // r12d
  int v27; // r13d
  unsigned __int8 *v28; // r10
  char *v29; // r8
  __int64 v30; // r11
  __int64 v31; // r9
  __int16 v32; // ax
  ULONG v33; // eax
  ULONG v34; // ecx
  __int64 v35; // rdx
  ULONG v36; // eax
  ULONG *v37; // rdi
  __int64 v38; // rcx
  int v39; // edx
  __int64 v40; // rdi
  unsigned __int8 *v41; // rax
  unsigned __int8 *v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]
  ULONG iColor; // [rsp+78h] [rbp+10h]
  __int64 iColora; // [rsp+78h] [rbp+10h]
  ULONG v46; // [rsp+80h] [rbp+18h]
  __int64 v47; // [rsp+80h] [rbp+18h]
  char *v48; // [rsp+88h] [rbp+20h]
  int v49; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)a1;
  v11 = 0;
  HIBYTE(iColor) = 0;
  HIBYTE(v46) = 0;
  v12 = &a3[2 * a6 + a6];
  if ( a4 )
  {
    v26 = 0;
    v27 = a8 & 0x1F;
    v28 = &a4[4 * ((__int64)a8 >> 5)];
    v49 = *(_DWORD *)v28;
    v42 = v28;
    if ( v8 < a7 )
    {
      v29 = (char *)a1 + 32;
      iColora = 0LL;
      v48 = (char *)a1 + 32;
      v30 = 0LL;
      v31 = a8 & 0x1F;
      while ( 1 )
      {
        v32 = *(_WORD *)v12;
        v12 += 3;
        LOWORD(v46) = v32;
        BYTE2(v46) = *(v12 - 1);
        v43 = v31;
        if ( pxlo )
        {
          v33 = XLATEOBJ_iXlate(pxlo, v46);
          v29 = v48;
          v34 = v33;
          v31 = v43;
          v28 = v42;
          v30 = iColora;
          HIBYTE(v46) = HIBYTE(v33);
        }
        else
        {
          v34 = v46;
        }
        if ( (dword_1C02DFCB0[v31] & v49) != 0 )
        {
          if ( *(_DWORD *)v29 )
          {
            v35 = *(unsigned int *)v29;
            v36 = v34;
            v37 = &v9[v30 + 2];
            v26 += v35;
            v38 = (unsigned int)v35;
            v30 += v35;
            iColora = v30;
            while ( v38 )
            {
              *v37++ = v36;
              --v38;
            }
          }
        }
        else
        {
          if ( v26 > 0 )
          {
            *v9 = v10;
            v30 = 0LL;
            v9[1] = v26;
            iColora = 0LL;
            v9 += v26 + 2;
            v10 += v26;
            v26 = 0;
          }
          v10 += *(_DWORD *)v29;
        }
        v29 += 4;
        v39 = v27 + 1;
        ++v8;
        v48 = v29;
        v40 = v31 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v39 & 0x20) != 0 )
          v49 = *((_DWORD *)v28 + 1);
        v41 = v28 + 4;
        v27 = 0;
        v31 = 0LL;
        if ( (v39 & 0x20) == 0 )
        {
          v41 = v28;
          v27 = v39;
        }
        v28 = v41;
        v42 = v41;
        if ( (v39 & 0x20) == 0 )
          v31 = v40;
      }
      if ( v26 > 0 )
      {
        *v9 = v10;
        v9[1] = v26;
        v9 += v26 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v10;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( pxlo )
    {
      if ( a6 != a7 )
      {
        v47 = 0LL;
        v20 = (unsigned int)(a7 - a6);
        v21 = (unsigned int *)((char *)a1 + 32);
        do
        {
          v22 = *v21++;
          if ( (_DWORD)v22 )
          {
            LOWORD(iColor) = *(_WORD *)v12;
            BYTE2(iColor) = v12[2];
            v23 = XLATEOBJ_iXlate(pxlo, iColor);
            v11 += v22;
            HIBYTE(iColor) = HIBYTE(v23);
            v24 = (unsigned int)v22;
            v25 = &v9[v47 + 2];
            v47 += v22;
            while ( v24 )
            {
              *v25++ = v23;
              --v24;
            }
          }
          v12 += 3;
          --v20;
        }
        while ( v20 );
      }
    }
    else if ( a6 != a7 )
    {
      v13 = (char *)a1 + 32;
      v14 = (unsigned int)(a7 - a6);
      v15 = 0LL;
      do
      {
        v13 += 4;
        LOWORD(iColor) = *(_WORD *)v12;
        BYTE2(iColor) = v12[2];
        v16 = *((_DWORD *)v13 - 1);
        if ( v16 )
        {
          v17 = (ULONG *)((char *)a2 + 4 * v15 + 16);
          v18 = v16;
          v11 += v16;
          while ( v18 )
          {
            *v17++ = iColor;
            --v18;
          }
          v15 += v16;
        }
        v12 += 3;
        --v14;
      }
      while ( v14 );
    }
    return (struct _XRUNLEN *)&v9[v11 + 2];
  }
}
