/*
 * XREFs of ?vStripStyledDiagonal24@@YAXPEAU_STRIP@@PEAU_BMINFO@@PEAU_LINESTATE@@@Z @ 0x1C02B65C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vStripStyledDiagonal24(struct _STRIP *a1, struct _BMINFO *a2, struct _LINESTATE *a3)
{
  int *v3; // rbx
  int v4; // r14d
  int v5; // r15d
  int v6; // r10d
  __int64 v7; // r9
  char *v8; // rbp
  int v9; // esi
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // rax
  _DWORD *v13; // rax

  v3 = (int *)((char *)a1 + 28);
  v4 = *((_DWORD *)a3 + 1);
  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 20);
  v7 = *((_QWORD *)a1 + 2);
  v8 = (char *)a1 + 4 * *(int *)a1 + 28;
  v9 = -4 * *((_DWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 1) & 8) == 0 )
    v9 = 4 * *((_DWORD *)a1 + 2);
  v10 = *((_DWORD *)a3 + 5);
  do
  {
    v11 = *v3;
    while ( 1 )
    {
      if ( !v6 )
      {
        *(_WORD *)v7 = v4 ^ v5 & *(_WORD *)v7;
        *(_BYTE *)(v7 + 2) = BYTE2(v4) ^ *(_BYTE *)(v7 + 2) & BYTE2(v5);
      }
      v7 += 3LL;
      if ( !--v11 )
        break;
      v10 -= *((_DWORD *)a3 + 4);
      v7 += v9;
      if ( v10 <= 0 )
      {
        v12 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
        *((_QWORD *)a3 + 7) = v12;
        if ( (unsigned __int64)v12 > *((_QWORD *)a3 + 6) )
        {
          v12 = (_DWORD *)*((_QWORD *)a3 + 5);
          *((_QWORD *)a3 + 7) = v12;
        }
        v10 += *v12;
        v6 = v6 == 0;
      }
    }
    v10 -= *((_DWORD *)a3 + 2);
    if ( v10 <= 0 )
    {
      v13 = (_DWORD *)(*((_QWORD *)a3 + 7) + 4LL);
      *((_QWORD *)a3 + 7) = v13;
      if ( (unsigned __int64)v13 > *((_QWORD *)a3 + 6) )
      {
        v13 = (_DWORD *)*((_QWORD *)a3 + 5);
        *((_QWORD *)a3 + 7) = v13;
      }
      v10 += *v13;
      v6 = v6 == 0;
    }
    if ( (*((_DWORD *)a1 + 1) & 5) != 0 )
      v7 += v9 - 3;
    ++v3;
  }
  while ( v3 < (int *)v8 );
  *((_QWORD *)a1 + 2) = v7;
  *((_DWORD *)a3 + 20) = v6;
  *((_DWORD *)a3 + 5) = v10;
}
