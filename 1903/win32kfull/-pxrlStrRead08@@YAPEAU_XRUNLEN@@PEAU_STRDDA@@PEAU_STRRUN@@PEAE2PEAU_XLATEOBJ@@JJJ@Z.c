/*
 * XREFs of ?pxrlStrRead08@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C01483D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead08(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  _DWORD *v9; // r10
  unsigned __int8 *v10; // r8
  int v11; // esi
  int v12; // edx
  __int64 v13; // rsi
  unsigned int *v14; // r9
  __int64 v15; // r11
  __int64 v16; // rbx
  __int64 v17; // rdi
  _DWORD *v18; // r11
  __int64 v20; // rcx
  _DWORD *v21; // rdi
  int v22; // ebp
  unsigned __int8 *v23; // r12
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // r13
  _DWORD *v27; // r14
  __int64 v28; // rcx
  _DWORD *v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 i; // rcx
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rdi
  int v36; // ecx
  unsigned __int8 *v37; // rax
  __int64 v38; // [rsp+38h] [rbp+10h]
  int v39; // [rsp+58h] [rbp+30h]

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = &a3[a6];
  v11 = *(_DWORD *)a1;
  if ( a4 )
  {
    v22 = a8 & 0x1F;
    v23 = &a4[4 * ((__int64)a8 >> 5)];
    v24 = 0;
    v39 = *(_DWORD *)v23;
    if ( v8 < a7 )
    {
      v25 = 0LL;
      v26 = a8 & 0x1F;
      v38 = 0LL;
      v27 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v28 = *v10++;
        if ( a5 )
          LODWORD(v28) = a5->pulXlate[v28];
        if ( (dword_1C02E4E80[v26] & v39) != 0 )
        {
          if ( *v27 )
          {
            v29 = &v9[v25 + 2];
            v30 = (unsigned int)*v27;
            v31 = v28;
            v24 += v30;
            v38 += v30;
            for ( i = (unsigned int)v30; i; --i )
              *v29++ = v31;
          }
        }
        else
        {
          if ( v24 > 0 )
          {
            v33 = v24;
            *v9 = v11;
            v11 += v24;
            v9[1] = v24;
            v24 = 0;
            v9 += v33 + 2;
            v38 = 0LL;
          }
          v11 += *v27;
        }
        ++v8;
        v34 = v22 + 1;
        ++v27;
        v35 = v26 + 1;
        if ( v8 >= a7 )
          break;
        v36 = v34 & 0x20;
        if ( (v34 & 0x20) != 0 )
          v39 = *((_DWORD *)v23 + 1);
        v37 = v23 + 4;
        if ( (v34 & 0x20) == 0 )
          v37 = v23;
        v22 = 0;
        v23 = v37;
        if ( (v34 & 0x20) == 0 )
          v22 = v34;
        v25 = v38;
        v26 = 0LL;
        if ( !v36 )
          v26 = v35;
      }
      if ( v24 > 0 )
      {
        *v9 = v11;
        v9[1] = v24;
        v9 += v24 + 2;
      }
    }
    return (struct _XRUNLEN *)v9;
  }
  else
  {
    *v9 = v11;
    v12 = 0;
    v9[1] = *((_DWORD *)a1 + 2) - *(_DWORD *)a1;
    if ( a6 != a7 )
    {
      v13 = 0LL;
      v14 = (unsigned int *)((char *)a1 + 32);
      v15 = (unsigned int)(a7 - a6);
      if ( a5 )
      {
        v16 = (unsigned int)v15;
        do
        {
          v17 = *v14++;
          if ( (_DWORD)v17 )
          {
            v12 += v17;
            v18 = &v9[v13 + 2];
            v13 += v17;
            do
            {
              *v18++ = a5->pulXlate[*v10];
              LODWORD(v17) = v17 - 1;
            }
            while ( (_DWORD)v17 );
          }
          ++v10;
          --v16;
        }
        while ( v16 );
      }
      else
      {
        do
        {
          v20 = *v14++;
          if ( (_DWORD)v20 )
          {
            v12 += v20;
            v21 = &v9[v13 + 2];
            v13 += v20;
            do
            {
              *v21++ = *v10;
              LODWORD(v20) = v20 - 1;
            }
            while ( (_DWORD)v20 );
          }
          ++v10;
          --v15;
        }
        while ( v15 );
      }
    }
    return (struct _XRUNLEN *)&v9[v12 + 2];
  }
}
