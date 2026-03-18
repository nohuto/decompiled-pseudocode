/*
 * XREFs of ?pxrlStrRead08@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0146AB0
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
  int v8; // r11d
  _DWORD *v9; // r10
  int v10; // ebx
  unsigned __int8 *v11; // r8
  int v12; // edx
  __int64 v13; // rbx
  unsigned int *v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rdi
  _DWORD *v17; // r11
  __int64 v19; // rbx
  unsigned int *v20; // r9
  __int64 v21; // r11
  __int64 v22; // rcx
  _DWORD *v23; // rdi
  int v24; // esi
  unsigned __int8 *v25; // r15
  int v26; // r9d
  int v27; // r13d
  __int64 v28; // r12
  __int64 v29; // rbp
  _DWORD *v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // eax
  _DWORD *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rdi
  unsigned __int8 *v39; // rax

  v8 = a6;
  v9 = (_DWORD *)((char *)a2 + 8);
  v10 = *(_DWORD *)a1;
  v11 = &a3[a6];
  if ( a4 )
  {
    v24 = a8 & 0x1F;
    v25 = &a4[4 * ((__int64)a8 >> 5)];
    v26 = 0;
    v27 = *(_DWORD *)v25;
    if ( a6 < a7 )
    {
      v28 = 0LL;
      v29 = a8 & 0x1F;
      v30 = (_DWORD *)((char *)a1 + 32);
      while ( 1 )
      {
        v31 = *v11++;
        if ( a5 )
          LODWORD(v31) = a5->pulXlate[v31];
        if ( (dword_1C02D2C40[v29] & v27) != 0 )
        {
          if ( *v30 )
          {
            v32 = (unsigned int)*v30;
            v33 = v31;
            v34 = &v9[v28 + 2];
            v35 = (unsigned int)v32;
            v26 += v32;
            while ( v35 )
            {
              *v34++ = v33;
              --v35;
            }
            v28 += v32;
          }
        }
        else
        {
          if ( v26 > 0 )
          {
            *v9 = v10;
            v10 += v26;
            v9[1] = v26;
            v36 = v26;
            v26 = 0;
            v9 += v36 + 2;
            v28 = 0LL;
          }
          v10 += *v30;
        }
        ++v8;
        v37 = v24 + 1;
        ++v30;
        v38 = v29 + 1;
        if ( v8 >= a7 )
          break;
        if ( (v37 & 0x20) != 0 )
          v27 = *((_DWORD *)v25 + 1);
        v39 = v25 + 4;
        if ( (v37 & 0x20) == 0 )
          v39 = v25;
        v24 = 0;
        v25 = v39;
        if ( (v37 & 0x20) == 0 )
          v24 = v37;
        v29 = 0LL;
        if ( (v37 & 0x20) == 0 )
          v29 = v38;
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
    v12 = 0;
    if ( a5 )
    {
      if ( a6 != a7 )
      {
        v13 = 0LL;
        v14 = (unsigned int *)((char *)a1 + 32);
        v15 = (unsigned int)(a7 - a6);
        do
        {
          v16 = *v14++;
          if ( (_DWORD)v16 )
          {
            v12 += v16;
            v17 = &v9[v13 + 2];
            v13 += v16;
            do
            {
              *v17++ = a5->pulXlate[*v11];
              LODWORD(v16) = v16 - 1;
            }
            while ( (_DWORD)v16 );
          }
          ++v11;
          --v15;
        }
        while ( v15 );
      }
    }
    else if ( a6 != a7 )
    {
      v19 = 0LL;
      v20 = (unsigned int *)((char *)a1 + 32);
      v21 = (unsigned int)(a7 - a6);
      do
      {
        v22 = *v20++;
        if ( (_DWORD)v22 )
        {
          v12 += v22;
          v23 = &v9[v19 + 2];
          v19 += v22;
          do
          {
            *v23++ = *v11;
            LODWORD(v22) = v22 - 1;
          }
          while ( (_DWORD)v22 );
        }
        ++v11;
        --v21;
      }
      while ( v21 );
    }
    return (struct _XRUNLEN *)&v9[v12 + 2];
  }
}
