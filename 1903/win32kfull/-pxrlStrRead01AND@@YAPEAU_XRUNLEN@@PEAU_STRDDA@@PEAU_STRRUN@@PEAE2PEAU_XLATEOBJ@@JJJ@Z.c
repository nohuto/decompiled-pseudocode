/*
 * XREFs of ?pxrlStrRead01AND@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C00FD560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _XRUNLEN *__fastcall pxrlStrRead01AND(
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
  int v13; // ecx
  int v14; // r13d
  int v15; // r11d
  int v16; // r15d
  unsigned int *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rbp
  struct _XLATEOBJ *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // r9
  int v23; // eax
  __int64 v24; // r9
  int v25; // ecx
  unsigned __int8 *v26; // rax
  _DWORD *v27; // r9
  ULONG *pulXlate; // rax
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
  v13 = *(_DWORD *)a1;
  v14 = 0;
  *((_DWORD *)a2 + 2) = v13;
  v15 = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)a1 + 2) - v13;
  if ( a6 < a7 )
  {
    v16 = *(_DWORD *)v10;
    v17 = (unsigned int *)((char *)a1 + 32);
    v18 = 0LL;
    v19 = a6 & 0x1F;
    v20 = 0LL;
    while ( 1 )
    {
      v21 = *v17;
      ++v14;
      v30 = (struct _XLATEOBJ *)((char *)&v20->iUniq + 1);
      if ( (dword_1C02E4E80[v19] & v16) != 0 )
      {
        if ( (_DWORD)v21 )
        {
          v15 += v21;
          v27 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
          v18 += v21;
          do
          {
            *v27++ &= v12;
            LODWORD(v21) = v21 - 1;
          }
          while ( (_DWORD)v21 );
        }
        else
        {
          *((_DWORD *)a2 + v18 + 4) &= v12;
        }
      }
      else if ( (_DWORD)v21 )
      {
        v15 += v21;
        v22 = (_DWORD *)((char *)a2 + 4 * v18 + 16);
        v18 += v21;
        do
        {
          *v22++ &= v11;
          LODWORD(v21) = v21 - 1;
        }
        while ( (_DWORD)v21 );
      }
      else
      {
        *((_DWORD *)a2 + v18 + 4) &= v11;
      }
      ++v7;
      v23 = v9 + 1;
      v24 = v19 + 1;
      if ( v7 >= a7 )
        break;
      v25 = v23 & 0x20;
      if ( (v23 & 0x20) != 0 )
        v16 = *((_DWORD *)v10 + 1);
      v9 = 0;
      ++v17;
      if ( (v23 & 0x20) == 0 )
        v9 = v23;
      v26 = v10 + 4;
      if ( !v25 )
        v26 = v10;
      v19 = 0LL;
      v10 = v26;
      v20 = v30;
      if ( !v25 )
        v19 = v24;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v15 + 16);
}
