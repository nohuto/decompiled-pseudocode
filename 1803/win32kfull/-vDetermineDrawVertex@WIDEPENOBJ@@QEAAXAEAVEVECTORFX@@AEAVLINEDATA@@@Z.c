/*
 * XREFs of ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C0120A80
 * Callers:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C01217E4 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPENOBJ::vDetermineDrawVertex(WIDEPENOBJ *this, struct EVECTORFX *a2, struct LINEDATA *a3)
{
  _DWORD *v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r11
  int v7; // eax
  unsigned int v8; // eax
  char *v9; // rdi
  char *j; // rbx
  char *v11; // r8
  unsigned __int64 v12; // r9
  _DWORD *i; // rbx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8

  v4 = *(_DWORD **)(*((_QWORD *)this + 1) + 32LL);
  *((_QWORD *)a3 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) )
  {
    v5 = *(int *)a2 * (__int64)(v4[9] - v4[7]) - *((int *)a2 + 1) * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a3 + 3) = v5;
    *((_QWORD *)a3 + 4) = -(__int64)v5;
    v6 = v5 >> 63;
  }
  else
  {
    for ( i = v4; ; v4 = i )
    {
      v14 = *(int *)a2 * (__int64)(i[9] - i[7]) - *((int *)a2 + 1) * (__int64)(i[8] - i[6]);
      *((_QWORD *)a3 + 3) = v14;
      LODWORD(v6) = v14 >> 63;
      v15 = *(int *)a2 * (__int64)(i[2 * (i[5] - 2) + 9] - i[2 * (i[5] - 2) + 7])
          - *((int *)a2 + 1) * (__int64)(i[2 * (i[5] - 2) + 8] - i[2 * (i[5] - 2) + 6]);
      *((_QWORD *)a3 + 4) = v15;
      if ( (unsigned int)v6 != v15 >> 63 )
        break;
      i = *(_DWORD **)i;
      if ( !i )
        break;
      *((_QWORD *)a3 + 1) = i;
    }
  }
  v7 = *(_DWORD *)a3;
  if ( (_DWORD)v6 )
    v8 = v7 | 1;
  else
    v8 = v7 & 0xFFFFFFFE;
  *(_DWORD *)a3 = v8;
  v9 = (char *)(v4 + 6);
  for ( j = (char *)&v4[2 * (v4[5] - 2) + 6]; ; v9 += 8 * ((j - v9) >> 4) )
  {
    while ( 1 )
    {
      v11 = &v9[8 * ((j - v9) >> 4)];
      v12 = *(int *)a2 * (__int64)(*((_DWORD *)v11 + 3) - *((_DWORD *)v11 + 1))
          - *((int *)a2 + 1) * (__int64)(*((_DWORD *)v11 + 2) - *(_DWORD *)v11);
      if ( v12 >> 63 == (_DWORD)v6 )
        break;
      *((_QWORD *)a3 + 4) = v12;
      if ( v11 == v9 + 8 )
        goto LABEL_8;
      j = &v9[8 * ((j - v9) >> 4)];
    }
    *((_QWORD *)a3 + 3) = v12;
    if ( j == v11 + 8 )
      break;
  }
  v11 = j;
LABEL_8:
  *((_QWORD *)a3 + 2) = v11;
  *((_QWORD *)a3 + 3) = abs64(*((_QWORD *)a3 + 3));
  *((_QWORD *)a3 + 4) = abs64(*((_QWORD *)a3 + 4));
}
