/*
 * XREFs of ?pxrlStrRead01OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02BAA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01OR(
        struct _STRDDA *a1,
        struct _STRRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7)
{
  int v7; // r10d
  int v9; // ebx
  unsigned __int8 *v10; // r14
  ULONG v11; // edi
  int v12; // esi
  ULONG *pulXlate; // rax
  int v14; // ecx
  int v15; // r13d
  int v16; // r11d
  int v17; // r15d
  unsigned int *v18; // r12
  __int64 v19; // r8
  __int64 v20; // rbp
  struct _XLATEOBJ *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // r9
  _DWORD *v24; // r9
  int v25; // eax
  __int64 v26; // r9
  int v27; // ecx
  unsigned __int8 *v28; // rax
  struct _XLATEOBJ *v30; // [rsp+48h] [rbp+28h]

  v7 = a6;
  v9 = a6 & 0x1F;
  v10 = &a3[4 * ((__int64)a6 >> 5)];
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v11 = *pulXlate;
    v12 = pulXlate[1];
  }
  else
  {
    v11 = 0;
    v12 = 1;
  }
  v14 = *(_DWORD *)a1;
  v15 = 0;
  *((_DWORD *)a2 + 2) = v14;
  v16 = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v14;
  if ( a6 < a7 )
  {
    v17 = *(_DWORD *)v10;
    v18 = (unsigned int *)((char *)a1 + 32);
    v19 = 0LL;
    v20 = a6 & 0x1F;
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *v18;
      ++v15;
      v30 = (struct _XLATEOBJ *)((char *)&v21->iUniq + 1);
      if ( (dword_1C02E4440[v20] & v17) != 0 )
      {
        if ( (_DWORD)v22 )
        {
          v16 += v22;
          v24 = (_DWORD *)((char *)a2 + 4 * v19 + 16);
          v19 += v22;
          do
          {
            *v24++ |= v12;
            LODWORD(v22) = v22 - 1;
          }
          while ( (_DWORD)v22 );
        }
        else
        {
          *((_DWORD *)a2 + v19 + 4) |= v12;
        }
      }
      else if ( (_DWORD)v22 )
      {
        v16 += v22;
        v23 = (_DWORD *)((char *)a2 + 4 * v19 + 16);
        v19 += v22;
        do
        {
          *v23++ |= v11;
          LODWORD(v22) = v22 - 1;
        }
        while ( (_DWORD)v22 );
      }
      else
      {
        *((_DWORD *)a2 + v19 + 4) |= v11;
      }
      ++v7;
      v25 = v9 + 1;
      v26 = v20 + 1;
      if ( v7 >= a7 )
        break;
      v27 = v25 & 0x20;
      if ( (v25 & 0x20) != 0 )
        v17 = *((_DWORD *)v10 + 1);
      v9 = 0;
      ++v18;
      if ( (v25 & 0x20) == 0 )
        v9 = v25;
      v28 = v10 + 4;
      if ( !v27 )
        v28 = v10;
      v20 = 0LL;
      v10 = v28;
      v21 = v30;
      if ( !v27 )
        v20 = v26;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v16 + 16);
}
