/*
 * XREFs of ?pxrlStrRead01OR@@YAPEAU_XRUNLEN@@PEAU_STRDDA@@PEAU_STRRUN@@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02A43A0
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
  struct _XLATEOBJ *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r12
  __int64 v21; // rbp
  __int64 iUniq; // rcx
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
    v18 = (struct _XLATEOBJ *)((char *)a1 + 32);
    v19 = 0LL;
    v30 = (struct _XLATEOBJ *)((char *)a1 + 32);
    v20 = 0LL;
    v21 = a6 & 0x1F;
    while ( 1 )
    {
      iUniq = v18->iUniq;
      ++v15;
      ++v20;
      if ( (dword_1C02D2C40[v21] & v17) != 0 )
      {
        if ( (_DWORD)iUniq )
        {
          v16 += iUniq;
          v24 = (_DWORD *)((char *)a2 + 4 * v19 + 16);
          v19 += iUniq;
          do
          {
            *v24++ |= v12;
            LODWORD(iUniq) = iUniq - 1;
          }
          while ( (_DWORD)iUniq );
        }
        else
        {
          *((_DWORD *)a2 + v19 + 4) |= v12;
        }
      }
      else if ( (_DWORD)iUniq )
      {
        v16 += iUniq;
        v23 = (_DWORD *)((char *)a2 + 4 * v19 + 16);
        v19 += iUniq;
        do
        {
          *v23++ |= v11;
          LODWORD(iUniq) = iUniq - 1;
        }
        while ( (_DWORD)iUniq );
      }
      else
      {
        *((_DWORD *)a2 + v19 + 4) |= v11;
      }
      ++v7;
      v25 = v9 + 1;
      v26 = v21 + 1;
      if ( v7 >= a7 )
        break;
      v27 = v25 & 0x20;
      if ( (v25 & 0x20) != 0 )
        v17 = *((_DWORD *)v10 + 1);
      v30 = (struct _XLATEOBJ *)((char *)v30 + 4);
      v9 = 0;
      if ( (v25 & 0x20) == 0 )
        v9 = v25;
      v28 = v10 + 4;
      if ( !v27 )
        v28 = v10;
      v21 = 0LL;
      v10 = v28;
      v18 = v30;
      if ( !v27 )
        v21 = v26;
    }
  }
  return (struct _STRRUN *)((char *)a2 + 4 * v16 + 16);
}
