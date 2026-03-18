/*
 * XREFs of ?pxrlStrRead04@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00F8D70
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
  int v11; // ebx
  __int64 v12; // rsi
  unsigned __int8 *v13; // r9
  int v14; // ebp
  struct _XLATEOBJ *v15; // rdi
  unsigned int *v16; // r12
  int v17; // r14d
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned int v20; // eax
  __int64 v21; // rdx
  ULONG v22; // eax
  ULONG *v23; // rdi
  __int64 v24; // rcx
  char v25; // dl
  __int64 v26; // rdi
  int v27; // eax
  unsigned __int8 *v28; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int *v32; // rdi
  char v33; // dl
  __int64 v34; // rdi
  int v35; // eax
  unsigned __int8 *v36; // rax
  int v37; // r8d
  int v38; // ebp
  unsigned __int8 *v39; // rdi
  int v40; // eax
  unsigned int *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // r14
  __int64 v44; // r13
  __int64 v45; // r14
  unsigned int v46; // eax
  _DWORD *v47; // rdi
  __int64 i; // rcx
  __int64 v49; // rax
  int v50; // edx
  char v51; // si
  unsigned __int8 *v52; // rax
  int v53; // eax
  int v54; // ecx
  unsigned __int8 *v55; // rax
  __int64 v56; // [rsp+0h] [rbp-58h]
  unsigned __int8 *v57; // [rsp+8h] [rbp-50h]
  __int64 v58; // [rsp+10h] [rbp-48h]
  int v59; // [rsp+68h] [rbp+10h]
  int v60; // [rsp+70h] [rbp+18h]
  __int64 v61; // [rsp+78h] [rbp+20h]
  int v62; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v11 = *(_DWORD *)a1;
  v12 = a6 & 7;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  if ( a4 )
  {
    v37 = 0;
    v38 = a8 & 0x1F;
    v39 = &a4[4 * ((__int64)a8 >> 5)];
    v62 = *(_DWORD *)v39;
    v57 = v39;
    if ( v8 < a7 )
    {
      v40 = *(_DWORD *)v13;
      v41 = (unsigned int *)((char *)a1 + 32);
      v42 = 0LL;
      v59 = *(_DWORD *)v13;
      v61 = 0LL;
      v43 = v12;
      v56 = v12;
      v44 = a8 & 0x1F;
      while ( 1 )
      {
        v45 = (v40 & (unsigned int)dword_1C02E37F8[v43]) >> dword_1C02E37D8[v56];
        if ( a5 )
          LODWORD(v45) = a5->pulXlate[v45];
        if ( (dword_1C02E4440[v44] & v62) != 0 )
        {
          v46 = *v41;
          if ( *v41 )
          {
            v47 = &v9[v42 + 2];
            for ( i = v46; i; --i )
              *v47++ = v45;
            v39 = v57;
            v37 += v46;
            v61 += v46;
          }
        }
        else
        {
          if ( v37 > 0 )
          {
            v49 = v37;
            *v9 = v11;
            v11 += v37;
            v9[1] = v37;
            v37 = 0;
            v9 += v49 + 2;
            v61 = 0LL;
          }
          v11 += *v41;
        }
        v50 = v12 + 1;
        ++v8;
        v51 = v38 + 1;
        v60 = v38 + 1;
        ++v41;
        v58 = v44 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v50 & 8) != 0 )
          v59 = *((_DWORD *)v13 + 1);
        v43 = 0LL;
        if ( (v50 & 8) == 0 )
          v43 = v56 + 1;
        v52 = v13 + 4;
        if ( (v50 & 8) == 0 )
          v52 = v13;
        v56 = v43;
        v13 = v52;
        v53 = 0;
        if ( (v50 & 8) == 0 )
          v53 = v50;
        v54 = v51 & 0x20;
        if ( (v51 & 0x20) != 0 )
          v62 = *((_DWORD *)v39 + 1);
        v42 = v61;
        LODWORD(v12) = v53;
        v55 = v39 + 4;
        if ( !v54 )
          v55 = v39;
        v38 = 0;
        v57 = v55;
        v39 = v55;
        v40 = v59;
        if ( !v54 )
          v38 = v60;
        v44 = 0LL;
        if ( !v54 )
          v44 = v58;
      }
      if ( v37 > 0 )
      {
        *v9 = v11;
        v9[1] = v37;
        v9 += v37 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    v14 = 0;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v11;
    if ( a6 < a7 )
    {
      v15 = a5;
      v16 = (unsigned int *)((char *)a1 + 32);
      v17 = *(_DWORD *)v13;
      v18 = 0LL;
      v19 = a6 & 7;
      if ( a5 )
      {
        while ( 1 )
        {
          v20 = *v16++;
          if ( v20 )
          {
            v21 = v20;
            v22 = v15->pulXlate[(unsigned __int64)(v17 & (unsigned int)dword_1C02E37F8[v19]) >> LOBYTE(dword_1C02E37D8[v19])];
            v23 = &v9[v18 + 2];
            v24 = (unsigned int)v21;
            v14 += v21;
            while ( v24 )
            {
              *v23++ = v22;
              --v24;
            }
            v18 += v21;
          }
          ++v8;
          v25 = v12 + 1;
          v26 = v19 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v25 & 8) != 0 )
            v17 = *((_DWORD *)v13 + 1);
          v27 = 0;
          if ( (v25 & 8) == 0 )
            v27 = v12 + 1;
          LODWORD(v12) = v27;
          v28 = v13 + 4;
          if ( (v25 & 8) == 0 )
            v28 = v13;
          v19 = 0LL;
          v13 = v28;
          if ( (v25 & 8) == 0 )
            v19 = v26;
          v15 = a5;
        }
      }
      else
      {
        while ( 1 )
        {
          v30 = (v17 & (unsigned int)dword_1C02E37F8[v19]) >> dword_1C02E37D8[v19];
          v31 = *v16++;
          if ( (_DWORD)v31 )
          {
            v14 += v31;
            v32 = &v9[v18 + 2];
            v18 += (unsigned int)v31;
            while ( v31 )
            {
              *v32++ = v30;
              --v31;
            }
          }
          ++v8;
          v33 = v12 + 1;
          v34 = v19 + 1;
          if ( v8 >= a7 )
            break;
          if ( (v33 & 8) != 0 )
            v17 = *((_DWORD *)v13 + 1);
          v35 = 0;
          if ( (v33 & 8) == 0 )
            v35 = v12 + 1;
          LODWORD(v12) = v35;
          v36 = v13 + 4;
          if ( (v33 & 8) == 0 )
            v36 = v13;
          v19 = 0LL;
          v13 = v36;
          if ( (v33 & 8) == 0 )
            v19 = v34;
        }
      }
    }
    return (struct _XRUNLEN *)&v9[v14 + 2];
  }
}
