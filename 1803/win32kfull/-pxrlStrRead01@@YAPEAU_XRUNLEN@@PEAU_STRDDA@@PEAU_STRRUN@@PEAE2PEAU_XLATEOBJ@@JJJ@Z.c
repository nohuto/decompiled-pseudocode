/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00A1460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01(
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
  unsigned int v10; // esi
  unsigned __int8 *v13; // r15
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rbp
  int v17; // r13d
  int v18; // r14d
  unsigned int *v19; // r12
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rcx
  int v23; // eax
  int *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned __int8 *v28; // rax
  ULONG *pulXlate; // rax
  int v31; // ebx
  unsigned __int8 *v32; // rdi
  int v33; // edx
  _DWORD *v34; // r12
  __int64 v35; // r14
  __int64 v36; // r13
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  int *v40; // rdi
  __int64 v41; // rax
  int v42; // ebx
  unsigned int v43; // edx
  __int64 v44; // rax
  unsigned __int8 *v45; // rax
  int v46; // ecx
  unsigned __int8 *v47; // rax
  unsigned __int8 *v48; // [rsp+0h] [rbp-48h]
  __int64 v49; // [rsp+8h] [rbp-40h]
  char *v50; // [rsp+58h] [rbp+10h]
  int v51; // [rsp+58h] [rbp+10h]
  int v52; // [rsp+60h] [rbp+18h]
  int v53; // [rsp+68h] [rbp+20h]
  ULONG v54; // [rsp+70h] [rbp+28h]
  int v55; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v50 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v13 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v55 = pulXlate[1];
    v54 = *pulXlate;
  }
  else
  {
    v54 = 0;
    v55 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  v16 = v10;
  if ( a4 )
  {
    v31 = a8 & 0x1F;
    v32 = &a4[4 * ((__int64)a8 >> 5)];
    v33 = *(_DWORD *)v32;
    v52 = *(_DWORD *)v32;
    v48 = v32;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v34 = (_DWORD *)((char *)a1 + 32);
    v51 = *(_DWORD *)v13;
    v35 = 0LL;
    v36 = a8 & 0x1F;
    while ( 1 )
    {
      if ( (dword_1C02DFCB0[v36] & v33) != 0 )
      {
        v37 = (unsigned int)*v34;
        if ( (dword_1C02DFCB0[v16] & v51) != 0 )
        {
          if ( !(_DWORD)v37 )
            goto LABEL_42;
          v38 = v55;
        }
        else
        {
          if ( !(_DWORD)v37 )
            goto LABEL_42;
          v38 = v54;
        }
        v39 = (unsigned int)*v34;
        v40 = &v9[v35 + 2];
        v15 += v37;
        while ( v37 )
        {
          *v40++ = v38;
          --v37;
        }
        v32 = v48;
        v35 += v39;
      }
      else
      {
        if ( v15 > 0 )
        {
          *v9 = v14;
          v14 += v15;
          v9[1] = v15;
          v41 = v15;
          v15 = 0;
          v9 += v41 + 2;
          v35 = 0LL;
        }
        v14 += *v34;
      }
LABEL_42:
      ++v8;
      v42 = v31 + 1;
      v49 = v36 + 1;
      ++v34;
      v53 = v42;
      v43 = v10 + 1;
      v44 = v16 + 1;
      if ( v8 >= a7 )
      {
        if ( v15 > 0 )
        {
          *v9 = v14;
          v9[1] = v15;
          v9 += v15 + 2;
        }
        return (struct _XRUNLEN *)v9;
      }
      if ( (v43 & 0x20) != 0 )
        v51 = *((_DWORD *)v13 + 1);
      v16 = 0LL;
      if ( (v43 & 0x20) == 0 )
        v16 = v44;
      v45 = v13 + 4;
      if ( (v43 & 0x20) == 0 )
        v45 = v13;
      v10 = 0;
      v13 = v45;
      if ( (v43 & 0x20) == 0 )
        v10 = v43;
      v46 = v42 & 0x20;
      if ( (v42 & 0x20) != 0 )
      {
        v33 = *((_DWORD *)v32 + 1);
        v52 = v33;
      }
      else
      {
        v33 = v52;
      }
      v47 = v32 + 4;
      if ( (v42 & 0x20) == 0 )
        v47 = v32;
      v31 = 0;
      v48 = v47;
      v32 = v47;
      if ( !v46 )
        v31 = v53;
      v36 = 0LL;
      if ( !v46 )
        v36 = v49;
    }
  }
  *v9 = v14;
  v17 = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( v8 >= a7 )
    return (struct _XRUNLEN *)&v9[v15 + 2];
  v18 = *(_DWORD *)v13;
  v19 = (unsigned int *)((char *)a1 + 32);
  v20 = 0LL;
  v21 = 0LL;
  while ( 1 )
  {
    v22 = *v19;
    ++v17;
    ++v21;
    if ( (dword_1C02DFCB0[v16] & v18) != 0 )
    {
      if ( !(_DWORD)v22 )
        goto LABEL_12;
      v23 = v55;
    }
    else
    {
      if ( !(_DWORD)v22 )
        goto LABEL_12;
      v23 = v54;
    }
    v24 = (int *)((char *)a2 + 4 * v20 + 16);
    v15 += v22;
    v20 += v22;
    while ( v22 )
    {
      *v24++ = v23;
      --v22;
    }
LABEL_12:
    ++v8;
    v25 = v10 + 1;
    v26 = v16 + 1;
    if ( v8 >= a7 )
      break;
    v27 = v25 & 0x20;
    if ( (v25 & 0x20) != 0 )
      v18 = *((_DWORD *)v13 + 1);
    v10 = 0;
    ++v19;
    if ( (v25 & 0x20) == 0 )
      v10 = v25;
    v28 = v13 + 4;
    if ( !v27 )
      v28 = v13;
    v16 = 0LL;
    v13 = v28;
    if ( !v27 )
      v16 = v26;
  }
  v9 = v50;
  return (struct _XRUNLEN *)&v9[v15 + 2];
}
