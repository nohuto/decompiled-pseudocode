/*
 * XREFs of ?pxrlStrRead01@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00D88F0
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
  unsigned __int8 *v13; // r14
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rbp
  int v17; // r13d
  int v18; // r15d
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
  _DWORD *v33; // r12
  __int64 v34; // r15
  __int64 v35; // r13
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdx
  int *v39; // rdi
  __int64 v40; // rax
  int v41; // ebx
  unsigned int v42; // edx
  __int64 v43; // rax
  unsigned __int8 *v44; // rax
  int v45; // ecx
  unsigned __int8 *v46; // rax
  unsigned __int8 *v47; // [rsp+0h] [rbp-48h]
  __int64 v48; // [rsp+8h] [rbp-40h]
  char *v49; // [rsp+58h] [rbp+10h]
  int v50; // [rsp+58h] [rbp+10h]
  int v51; // [rsp+60h] [rbp+18h]
  int v52; // [rsp+68h] [rbp+20h]
  ULONG v53; // [rsp+70h] [rbp+28h]
  int v54; // [rsp+78h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v49 = (char *)a2 + 8;
  v10 = a6 & 0x1F;
  v13 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v54 = pulXlate[1];
    v53 = *pulXlate;
  }
  else
  {
    v53 = 0;
    v54 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  v16 = v10;
  if ( a4 )
  {
    v31 = a8 & 0x1F;
    v32 = &a4[4 * ((__int64)a8 >> 5)];
    v51 = *(_DWORD *)v32;
    v47 = v32;
    if ( v8 >= a7 )
      return (struct _XRUNLEN *)v9;
    v33 = (_DWORD *)((char *)a1 + 32);
    v50 = *(_DWORD *)v13;
    v34 = 0LL;
    v35 = a8 & 0x1F;
    while ( 1 )
    {
      if ( (dword_1C02E4440[v35] & v51) != 0 )
      {
        v36 = (unsigned int)*v33;
        if ( (dword_1C02E4440[v16] & v50) != 0 )
        {
          if ( !(_DWORD)v36 )
            goto LABEL_42;
          v37 = v54;
        }
        else
        {
          if ( !(_DWORD)v36 )
            goto LABEL_42;
          v37 = v53;
        }
        v38 = (unsigned int)*v33;
        v39 = &v9[v34 + 2];
        v15 += v36;
        while ( v36 )
        {
          *v39++ = v37;
          --v36;
        }
        v32 = v47;
        v34 += v38;
      }
      else
      {
        if ( v15 > 0 )
        {
          *v9 = v14;
          v14 += v15;
          v9[1] = v15;
          v40 = v15;
          v15 = 0;
          v9 += v40 + 2;
          v34 = 0LL;
        }
        v14 += *v33;
      }
LABEL_42:
      ++v8;
      v41 = v31 + 1;
      v48 = v35 + 1;
      ++v33;
      v52 = v41;
      v42 = v10 + 1;
      v43 = v16 + 1;
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
      if ( (v42 & 0x20) != 0 )
        v50 = *((_DWORD *)v13 + 1);
      v16 = 0LL;
      if ( (v42 & 0x20) == 0 )
        v16 = v43;
      v44 = v13 + 4;
      if ( (v42 & 0x20) == 0 )
        v44 = v13;
      v10 = 0;
      v13 = v44;
      if ( (v42 & 0x20) == 0 )
        v10 = v42;
      v45 = v41 & 0x20;
      if ( (v41 & 0x20) != 0 )
        v51 = *((_DWORD *)v32 + 1);
      v46 = v32 + 4;
      if ( (v41 & 0x20) == 0 )
        v46 = v32;
      v31 = 0;
      v47 = v46;
      v32 = v46;
      if ( !v45 )
        v31 = v52;
      v35 = 0LL;
      if ( !v45 )
        v35 = v48;
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
    if ( (dword_1C02E4440[v16] & v18) != 0 )
    {
      if ( !(_DWORD)v22 )
        goto LABEL_12;
      v23 = v54;
    }
    else
    {
      if ( !(_DWORD)v22 )
        goto LABEL_12;
      v23 = v53;
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
  v9 = v49;
  return (struct _XRUNLEN *)&v9[v15 + 2];
}
