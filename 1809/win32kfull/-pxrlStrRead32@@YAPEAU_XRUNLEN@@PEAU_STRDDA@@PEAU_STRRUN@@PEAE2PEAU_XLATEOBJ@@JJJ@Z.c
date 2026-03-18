/*
 * XREFs of ?pxrlStrRead32@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A5200
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C0094450 (XLATEOBJ_iXlate.c)
 */

struct _XRUNLEN *__fastcall pxrlStrRead32(
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
  _DWORD *v9; // rbx
  int v10; // r15d
  int v11; // esi
  ULONG *v12; // r14
  __int64 v13; // r8
  unsigned int *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rcx
  ULONG *v17; // rdx
  __int64 v18; // rdi
  unsigned int *v19; // r15
  __int64 v20; // rbp
  __int64 v21; // r12
  ULONG v22; // eax
  __int64 v23; // rcx
  ULONG *v24; // rdi
  int v26; // r13d
  unsigned __int8 *v27; // r8
  int v28; // r11d
  __int64 v29; // r9
  __int64 v30; // rdi
  _DWORD *v31; // r12
  ULONG v32; // ecx
  ULONG v33; // eax
  __int64 v34; // rdx
  ULONG v35; // eax
  ULONG *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // r10
  unsigned __int8 *v41; // rax
  __int64 v42; // [rsp+68h] [rbp+10h]
  __int64 v43; // [rsp+68h] [rbp+10h]
  unsigned __int8 *v44; // [rsp+70h] [rbp+18h]
  __int64 v45; // [rsp+78h] [rbp+20h]
  int v46; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)a1;
  v11 = 0;
  v12 = (ULONG *)&a3[4 * a6];
  if ( a4 )
  {
    v26 = a8 & 0x1F;
    v27 = &a4[4 * ((__int64)a8 >> 5)];
    v28 = *(_DWORD *)v27;
    v46 = *(_DWORD *)v27;
    v44 = v27;
    if ( v8 < a7 )
    {
      v29 = 0LL;
      v30 = a8 & 0x1F;
      v43 = 0LL;
      v31 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v32 = *v12++;
        v45 = v30;
        if ( pxlo )
        {
          v33 = XLATEOBJ_iXlate(pxlo, v32);
          v27 = v44;
          v32 = v33;
          v29 = v43;
          v28 = v46;
        }
        if ( (dword_1C02D2C40[v30] & v28) != 0 )
        {
          if ( *v31 )
          {
            v34 = (unsigned int)*v31;
            v35 = v32;
            v36 = &v9[v29 + 2];
            v37 = (unsigned int)v34;
            v11 += v34;
            while ( v37 )
            {
              *v36++ = v35;
              --v37;
            }
            v30 = v45;
            v29 += v34;
            v43 = v29;
          }
        }
        else
        {
          if ( v11 > 0 )
          {
            *v9 = v10;
            v10 += v11;
            v9[1] = v11;
            v38 = v11;
            v11 = 0;
            v9 += v38 + 2;
            v29 = 0LL;
            v43 = 0LL;
          }
          v10 += *v31;
        }
        ++v8;
        v39 = v26 + 1;
        ++v31;
        v40 = v30 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v39 & 0x20) != 0 )
        {
          v28 = *((_DWORD *)v27 + 1);
          v46 = v28;
        }
        v41 = v27 + 4;
        if ( (v39 & 0x20) == 0 )
          v41 = v27;
        v26 = 0;
        v44 = v41;
        v27 = v41;
        if ( (v39 & 0x20) == 0 )
          v26 = v39;
        v30 = 0LL;
        if ( (v39 & 0x20) == 0 )
          v30 = v40;
      }
      if ( v11 > 0 )
      {
        *v9 = v10;
        v9[1] = v11;
        v9 += v11 + 2;
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
        v18 = 0LL;
        v19 = (unsigned int *)((char *)a1 + 32);
        v42 = 0LL;
        v20 = (unsigned int)(a7 - a6);
        do
        {
          v21 = *v19++;
          if ( (_DWORD)v21 )
          {
            v22 = XLATEOBJ_iXlate(pxlo, *v12);
            v23 = (unsigned int)v21;
            v11 += v21;
            v24 = &v9[v18 + 2];
            while ( v23 )
            {
              *v24++ = v22;
              --v23;
            }
            v18 = v21 + v42;
            v42 += v21;
          }
          ++v12;
          --v20;
        }
        while ( v20 );
      }
    }
    else if ( a6 != a7 )
    {
      v13 = 0LL;
      v14 = (unsigned int *)((char *)a1 + 32);
      v15 = (unsigned int)(a7 - a6);
      do
      {
        v16 = *v14++;
        if ( (_DWORD)v16 )
        {
          v11 += v16;
          v17 = &v9[v13 + 2];
          v13 += v16;
          do
          {
            *v17++ = *v12;
            LODWORD(v16) = v16 - 1;
          }
          while ( (_DWORD)v16 );
        }
        ++v12;
        --v15;
      }
      while ( v15 );
    }
    return (struct _XRUNLEN *)&v9[v11 + 2];
  }
}
