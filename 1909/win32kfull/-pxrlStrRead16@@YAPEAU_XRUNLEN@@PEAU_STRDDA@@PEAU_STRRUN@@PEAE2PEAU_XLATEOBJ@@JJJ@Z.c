/*
 * XREFs of ?pxrlStrRead16@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BB110
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead16(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        XLATEOBJ *pxlo,
        int a6,
        int a7,
        int a8)
{
  int v8; // r15d
  _DWORD *v9; // rbx
  int v10; // esi
  int v11; // r12d
  unsigned __int8 *v12; // r14
  __int64 v13; // r8
  unsigned int *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // r13
  unsigned int *v19; // r12
  __int64 v20; // rbp
  __int64 v21; // r15
  ULONG v22; // eax
  ULONG *v23; // rdi
  __int64 v24; // rcx
  int v26; // r13d
  unsigned __int8 *v27; // r10
  __int64 v28; // r11
  __int64 v29; // r9
  char *v30; // r8
  ULONG v31; // ecx
  ULONG v32; // eax
  __int64 v33; // rdx
  ULONG v34; // eax
  ULONG *v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rdi
  unsigned __int8 *v40; // rax
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+78h] [rbp+10h]
  char *v43; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v44; // [rsp+88h] [rbp+20h]
  int v45; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = 0;
  v11 = *(_DWORD *)a1;
  v12 = &a3[2 * a6];
  if ( a4 )
  {
    v26 = a8 & 0x1F;
    v27 = &a4[4 * ((__int64)a8 >> 5)];
    v45 = *(_DWORD *)v27;
    v44 = v27;
    if ( v8 < a7 )
    {
      v28 = 0LL;
      v29 = a8 & 0x1F;
      v30 = (char *)a1 + 32;
      v42 = 0LL;
      v43 = (char *)a1 + 32;
      while ( 1 )
      {
        v31 = *(unsigned __int16 *)v12;
        v12 += 2;
        v41 = v29;
        if ( pxlo )
        {
          v32 = XLATEOBJ_iXlate(pxlo, v31);
          v30 = v43;
          v31 = v32;
          v29 = v41;
          v27 = v44;
          v28 = v42;
        }
        if ( (dword_1C02E4440[v29] & v45) != 0 )
        {
          if ( *(_DWORD *)v30 )
          {
            v33 = *(unsigned int *)v30;
            v34 = v31;
            v35 = &v9[v28 + 2];
            v10 += v33;
            v36 = (unsigned int)v33;
            v28 += v33;
            v42 = v28;
            while ( v36 )
            {
              *v35++ = v34;
              --v36;
            }
          }
        }
        else
        {
          if ( v10 > 0 )
          {
            *v9 = v11;
            v11 += v10;
            v9[1] = v10;
            v37 = v10;
            v10 = 0;
            v9 += v37 + 2;
            v28 = 0LL;
            v42 = 0LL;
          }
          v11 += *(_DWORD *)v30;
        }
        v30 += 4;
        v38 = v26 + 1;
        ++v8;
        v43 = v30;
        v39 = v29 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v38 & 0x20) != 0 )
          v45 = *((_DWORD *)v27 + 1);
        v40 = v27 + 4;
        if ( (v38 & 0x20) == 0 )
          v40 = v27;
        v26 = 0;
        v44 = v40;
        v27 = v40;
        if ( (v38 & 0x20) == 0 )
          v26 = v38;
        v29 = 0LL;
        if ( (v38 & 0x20) == 0 )
          v29 = v39;
      }
      if ( v10 > 0 )
      {
        *v9 = v11;
        v9[1] = v10;
        v9 += v10 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( a6 != a7 )
    {
      if ( pxlo )
      {
        v18 = 0LL;
        v19 = (unsigned int *)((char *)a1 + 32);
        v20 = (unsigned int)(a7 - a6);
        do
        {
          v21 = *v19++;
          if ( (_DWORD)v21 )
          {
            v22 = XLATEOBJ_iXlate(pxlo, *(unsigned __int16 *)v12);
            v23 = &v9[v18 + 2];
            v24 = (unsigned int)v21;
            v10 += v21;
            while ( v24 )
            {
              *v23++ = v22;
              --v24;
            }
            v18 += v21;
          }
          v12 += 2;
          --v20;
        }
        while ( v20 );
      }
      else
      {
        v13 = 0LL;
        v14 = (unsigned int *)((char *)a1 + 32);
        v15 = (unsigned int)(a7 - a6);
        do
        {
          v16 = *v14++;
          if ( (_DWORD)v16 )
          {
            v10 += v16;
            v17 = &v9[v13 + 2];
            v13 += v16;
            do
            {
              *v17++ = *(unsigned __int16 *)v12;
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          v12 += 2;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct _XRUNLEN *)&v9[v10 + 2];
  }
}
