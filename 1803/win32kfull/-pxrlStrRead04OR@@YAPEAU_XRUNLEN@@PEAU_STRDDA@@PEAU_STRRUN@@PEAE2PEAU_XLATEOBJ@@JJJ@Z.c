/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C0290A00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead04OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r9d
  int v8; // ebp
  int v9; // esi
  unsigned __int8 *v11; // r11
  int v12; // r8d
  int v13; // r14d
  unsigned int *v14; // r15
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned int v18; // ebx
  _DWORD *v19; // rcx
  char v20; // dl
  __int64 v21; // rbx
  int v22; // eax
  unsigned __int8 *v23; // rax
  int v24; // r14d
  unsigned int *v25; // r13
  __int64 v26; // r8
  __int64 v27; // rbx
  ULONG v28; // edi
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  char v31; // dl
  __int64 v32; // rdi
  int v33; // eax
  unsigned __int8 *v34; // rax

  v7 = a6;
  v8 = 0;
  v9 = a6 & 7;
  v11 = &a3[4 * ((__int64)a6 >> 3)];
  v12 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = *(_DWORD *)a1;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v12;
  if ( a5 )
  {
    if ( a6 < a7 )
    {
      v24 = *(_DWORD *)v11;
      v25 = (unsigned int *)((char *)a1 + 32);
      v26 = 0LL;
      v27 = a6 & 7;
      while ( 1 )
      {
        v28 = a5->pulXlate[(unsigned __int64)(v24 & (unsigned int)dword_1C02DF058[v27]) >> LOBYTE(dword_1C02DF078[v27])];
        v29 = *v25++;
        if ( (_DWORD)v29 )
        {
          v8 += v29;
          v30 = (_DWORD *)((char *)a2 + 4 * v26 + 16);
          v26 += v29;
          do
          {
            *v30++ |= v28;
            LODWORD(v29) = v29 - 1;
          }
          while ( (_DWORD)v29 );
        }
        else
        {
          *((_DWORD *)a2 + v26 + 4) |= v28;
        }
        ++v7;
        v31 = v9 + 1;
        v32 = v27 + 1;
        if ( v7 >= a7 )
          break;
        if ( (v31 & 8) != 0 )
          v24 = *((_DWORD *)v11 + 1);
        v33 = 0;
        if ( (v31 & 8) == 0 )
          v33 = v9 + 1;
        v9 = v33;
        v34 = v11 + 4;
        if ( (v31 & 8) == 0 )
          v34 = v11;
        v27 = 0LL;
        v11 = v34;
        if ( (v31 & 8) == 0 )
          v27 = v32;
      }
    }
  }
  else if ( a6 < a7 )
  {
    v13 = *(_DWORD *)v11;
    v14 = (unsigned int *)((char *)a1 + 32);
    v15 = 0LL;
    v16 = a6 & 7;
    while ( 1 )
    {
      v17 = *v14++;
      v18 = (v13 & (unsigned int)dword_1C02DF058[v16]) >> dword_1C02DF078[v16];
      if ( (_DWORD)v17 )
      {
        v8 += v17;
        v19 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
        v15 += v17;
        do
        {
          *v19++ |= v18;
          LODWORD(v17) = v17 - 1;
        }
        while ( (_DWORD)v17 );
      }
      else
      {
        *((_DWORD *)a2 + v15 + 4) |= v18;
      }
      ++v7;
      v20 = v9 + 1;
      v21 = v16 + 1;
      if ( v7 >= a7 )
        break;
      if ( (v20 & 8) != 0 )
        v13 = *((_DWORD *)v11 + 1);
      v22 = 0;
      if ( (v20 & 8) == 0 )
        v22 = v9 + 1;
      v9 = v22;
      v23 = v11 + 4;
      if ( (v20 & 8) == 0 )
        v23 = v11;
      v16 = 0LL;
      v11 = v23;
      if ( (v20 & 8) == 0 )
        v16 = v21;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v8 + 16);
}
