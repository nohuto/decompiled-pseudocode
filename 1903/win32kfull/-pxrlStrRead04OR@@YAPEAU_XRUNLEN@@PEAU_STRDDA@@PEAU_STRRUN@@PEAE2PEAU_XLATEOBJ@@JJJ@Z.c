/*
 * XREFs of ?pxrlStrRead04OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BB1F0
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
  int v7; // r10d
  int v10; // ecx
  int v11; // esi
  int v12; // ebp
  unsigned __int8 *v13; // r11
  int v14; // r14d
  __int64 v15; // r8
  __int64 v16; // rdi
  unsigned int *v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // ebx
  _DWORD *v20; // rcx
  char v21; // dl
  __int64 v22; // rbx
  int v23; // eax
  unsigned __int8 *v24; // rax
  __int64 v25; // rbx
  unsigned int *v26; // r13
  ULONG v27; // edi
  __int64 v28; // rdx
  _DWORD *v29; // rcx
  char v30; // dl
  __int64 v31; // rdi
  int v32; // eax
  unsigned __int8 *v33; // rax

  v7 = a6;
  v10 = *(_DWORD *)a1;
  *((_DWORD *)a2 + 2) = v10;
  v11 = a6 & 7;
  v12 = 0;
  v13 = &a3[4 * ((__int64)a6 >> 3)];
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v10;
  if ( a6 < a7 )
  {
    v14 = *(_DWORD *)v13;
    v15 = 0LL;
    if ( a5 )
    {
      v25 = a6 & 7;
      v26 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v27 = a5->pulXlate[(unsigned __int64)(v14 & (unsigned int)dword_1C02E4238[v25]) >> LOBYTE(dword_1C02E4218[v25])];
        v28 = *v26++;
        if ( (_DWORD)v28 )
        {
          v12 += v28;
          v29 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v28;
          do
          {
            *v29++ |= v27;
            LODWORD(v28) = v28 - 1;
          }
          while ( (_DWORD)v28 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) |= v27;
        }
        ++v7;
        v30 = v11 + 1;
        v31 = v25 + 1;
        if ( v7 >= a7 )
          break;
        if ( (v30 & 8) != 0 )
          v14 = *((_DWORD *)v13 + 1);
        v32 = 0;
        if ( (v30 & 8) == 0 )
          v32 = v11 + 1;
        v11 = v32;
        v33 = v13 + 4;
        if ( (v30 & 8) == 0 )
          v33 = v13;
        v25 = 0LL;
        v13 = v33;
        if ( (v30 & 8) == 0 )
          v25 = v31;
      }
    }
    else
    {
      v16 = a6 & 7;
      v17 = (unsigned int *)((char *)a1 + 32);
      while ( 1 )
      {
        v18 = *v17++;
        v19 = (v14 & (unsigned int)dword_1C02E4238[v16]) >> dword_1C02E4218[v16];
        if ( (_DWORD)v18 )
        {
          v12 += v18;
          v20 = (_DWORD *)((char *)a2 + 4 * v15 + 16);
          v15 += v18;
          do
          {
            *v20++ |= v19;
            LODWORD(v18) = v18 - 1;
          }
          while ( (_DWORD)v18 );
        }
        else
        {
          *((_DWORD *)a2 + v15 + 4) |= v19;
        }
        ++v7;
        v21 = v11 + 1;
        v22 = v16 + 1;
        if ( v7 >= a7 )
          break;
        if ( (v21 & 8) != 0 )
          v14 = *((_DWORD *)v13 + 1);
        v23 = 0;
        if ( (v21 & 8) == 0 )
          v23 = v11 + 1;
        v11 = v23;
        v24 = v13 + 4;
        if ( (v21 & 8) == 0 )
          v24 = v13;
        v16 = 0LL;
        v13 = v24;
        if ( (v21 & 8) == 0 )
          v16 = v22;
      }
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v12 + 16);
}
