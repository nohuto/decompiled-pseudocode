/*
 * XREFs of ?vHorizontalLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@PEAU_TRIDDA@@@Z @ 0x1C0146244
 * Callers:
 *     ?vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z @ 0x1C0145E1C (-vCalculateLine@@YAXPEAU_TRIVERTEX@@0PEAU_TRIANGLEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vHorizontalLine(
        struct _TRIVERTEX *a1,
        struct _TRIVERTEX *a2,
        struct _TRIANGLEDATA *a3,
        struct _TRIDDA *a4)
{
  int v4; // eax
  LONG x; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // r9
  __int64 v11; // rdx
  COLOR16 *v12; // r10
  __int64 v13; // rax
  LONG v14; // eax
  COLOR16 *p_Red; // r10
  __int64 v16; // rdx
  _QWORD *v17; // r9
  __int64 v18; // rax

  v4 = *((_DWORD *)a4 + 1);
  if ( v4 >= *((_DWORD *)a3 + 1) && v4 < *((_DWORD *)a3 + 3) )
  {
    x = a1->x;
    v8 = v4 - *((_DWORD *)a3 + 28);
    v9 = 5 * v8;
    if ( x > a2->x )
    {
      *((_DWORD *)a3 + 10 * v8 + 42) = a2->x;
      p_Red = &a2->Red;
      v16 = 4LL;
      v17 = (_QWORD *)((char *)a3 + 40 * v8 + 176);
      do
      {
        v18 = *p_Red++;
        *v17++ = v18 << 48;
        --v16;
      }
      while ( v16 );
      v14 = a1->x;
    }
    else
    {
      *((_DWORD *)a3 + 10 * v8 + 42) = x;
      v10 = (_QWORD *)((char *)a3 + 40 * v8 + 176);
      v11 = 4LL;
      v12 = &a1->Red;
      do
      {
        v13 = *v12++;
        *v10++ = v13 << 48;
        --v11;
      }
      while ( v11 );
      v14 = a2->x;
    }
    *((_DWORD *)a3 + 2 * v9 + 43) = v14;
  }
}
