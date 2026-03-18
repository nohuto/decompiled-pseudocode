/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00F7BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // r11d
  _DWORD *v9; // r10
  int v11; // r9d
  __int64 v12; // rsi
  unsigned __int8 *v13; // rbx
  int v14; // ebp
  int v15; // r12d
  unsigned int *v16; // r13
  __int64 v17; // r9
  __int64 v18; // r8
  unsigned int v19; // eax
  __int64 v20; // rdx
  ULONG v21; // eax
  ULONG *v22; // rdi
  __int64 v23; // rcx
  char v24; // dl
  __int64 v25; // rdi
  int v26; // eax
  unsigned __int8 *v27; // rax
  int v29; // r14d
  unsigned int *v30; // r12
  __int64 v31; // r9
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int *v35; // rdi
  char v36; // dl
  __int64 v37; // rdi
  int v38; // eax
  unsigned __int8 *v39; // rax
  int v40; // r8d
  int v41; // ebp
  unsigned __int8 *v42; // rdi
  int v43; // eax
  unsigned int *v44; // r12
  __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // r14
  unsigned int v49; // eax
  _DWORD *v50; // rdi
  __int64 i; // rcx
  __int64 v52; // rax
  int v53; // edx
  char v54; // si
  unsigned __int8 *v55; // rax
  int v56; // eax
  int v57; // ecx
  unsigned __int8 *v58; // rax
  __int64 v59; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+10h] [rbp-48h]
  int v62; // [rsp+68h] [rbp+10h]
  int v63; // [rsp+70h] [rbp+18h]
  __int64 v64; // [rsp+78h] [rbp+20h]
  int v65; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v11 = *(_DWORD *)a1;
  v12 = a6 & 7;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v40 = 0;
    v41 = a8 & 0x1F;
    v42 = &a4[4 * ((__int64)a8 >> 5)];
    v65 = *(_DWORD *)v42;
    v60 = v42;
    if ( v8 < a7 )
    {
      v43 = *(_DWORD *)v13;
      v44 = (unsigned int *)((char *)a1 + 32);
      v45 = 0LL;
      v62 = *(_DWORD *)v13;
      v64 = 0LL;
      v46 = v12;
      v59 = v12;
      v47 = a8 & 0x1F;
      while ( 1 )
      {
        v48 = (v43 & (unsigned int)dword_1C02DF058[v46]) >> dword_1C02DF078[v59];
        if ( a5 )
          LODWORD(v48) = a5->pulXlate[v48];
        if ( (dword_1C02DFCB0[v47] & v65) != 0 )
        {
          v49 = *v44;
          if ( *v44 )
          {
            v50 = &v9[v45 + 2];
            for ( i = v49; i; --i )
              *v50++ = v48;
            v42 = v60;
            v40 += v49;
            v64 += v49;
          }
        }
        else
        {
          if ( v40 > 0 )
          {
            v52 = v40;
            *v9 = v11;
            v11 += v40;
            v9[1] = v40;
            v40 = 0;
            v9 += v52 + 2;
            v64 = 0LL;
          }
          v11 += *v44;
        }
        v53 = v12 + 1;
        ++v8;
        v54 = v41 + 1;
        v63 = v41 + 1;
        ++v44;
        v61 = v47 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v53 & 8) != 0 )
          v62 = *((_DWORD *)v13 + 1);
        v46 = 0LL;
        if ( (v53 & 8) == 0 )
          v46 = v59 + 1;
        v55 = v13 + 4;
        if ( (v53 & 8) == 0 )
          v55 = v13;
        v59 = v46;
        v13 = v55;
        v56 = 0;
        if ( (v53 & 8) == 0 )
          v56 = v53;
        v57 = v54 & 0x20;
        if ( (v54 & 0x20) != 0 )
          v65 = *((_DWORD *)v42 + 1);
        v45 = v64;
        LODWORD(v12) = v56;
        v58 = v42 + 4;
        if ( !v57 )
          v58 = v42;
        v41 = 0;
        v60 = v58;
        v42 = v58;
        v43 = v62;
        if ( !v57 )
          v41 = v63;
        v47 = 0LL;
        if ( !v57 )
          v47 = v61;
      }
      if ( v40 > 0 )
      {
        *v9 = v11;
        v9[1] = v40;
        v9 += v40 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    v14 = 0;
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v11;
    if ( a5 )
    {
      if ( a6 < a7 )
      {
        v15 = *(_DWORD *)v13;
        v16 = (unsigned int *)((char *)a1 + 32);
        v17 = 0LL;
        v18 = a6 & 7;
        while ( 1 )
        {
          v19 = *v16++;
          if ( v19 )
          {
            v20 = v19;
            v21 = a5->pulXlate[(unsigned __int64)(v15 & (unsigned int)dword_1C02DF058[v18]) >> LOBYTE(dword_1C02DF078[v18])];
            v22 = &v9[v17 + 2];
            v23 = (unsigned int)v20;
            v14 += v20;
            while ( v23 )
            {
              *v22++ = v21;
              --v23;
            }
            v17 += v20;
          }
          ++v8;
          v24 = v12 + 1;
          v25 = v18 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v24 & 8) != 0 )
            v15 = *((_DWORD *)v13 + 1);
          v26 = 0;
          if ( (v24 & 8) == 0 )
            v26 = v12 + 1;
          LODWORD(v12) = v26;
          v27 = v13 + 4;
          if ( (v24 & 8) == 0 )
            v27 = v13;
          v18 = 0LL;
          v13 = v27;
          if ( (v24 & 8) == 0 )
            v18 = v25;
        }
      }
    }
    else if ( a6 < a7 )
    {
      v29 = *(_DWORD *)v13;
      v30 = (unsigned int *)((char *)a1 + 32);
      v31 = 0LL;
      v32 = a6 & 7;
      while ( 1 )
      {
        v33 = (v29 & (unsigned int)dword_1C02DF058[v32]) >> dword_1C02DF078[v32];
        v34 = *v30++;
        if ( (_DWORD)v34 )
        {
          v14 += v34;
          v35 = &v9[v31 + 2];
          v31 += (unsigned int)v34;
          while ( v34 )
          {
            *v35++ = v33;
            --v34;
          }
        }
        ++v8;
        v36 = v12 + 1;
        v37 = v32 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v36 & 8) != 0 )
          v29 = *((_DWORD *)v13 + 1);
        v38 = 0;
        if ( (v36 & 8) == 0 )
          v38 = v12 + 1;
        LODWORD(v12) = v38;
        v39 = v13 + 4;
        if ( (v36 & 8) == 0 )
          v39 = v13;
        v32 = 0LL;
        v13 = v39;
        if ( (v36 & 8) == 0 )
          v32 = v37;
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
