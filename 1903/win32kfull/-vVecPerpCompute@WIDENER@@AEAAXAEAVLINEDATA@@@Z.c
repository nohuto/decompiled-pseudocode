/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0119ED0
 * Callers:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E00 (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0119E44 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C011A04C (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rcx
  int v6; // edi
  int v7; // esi
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // r9
  int v11; // edi
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned int v16; // r14d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned int v19; // r9d
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // r8d

  if ( (*(_DWORD *)a2 & 8) == 0 )
    WIDENER::vVecDrawCompute(this, a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)a2 + 3);
  v5 = *((_QWORD *)a2 + 4);
  v6 = *v3;
  v7 = v3[1];
  if ( v4 > v5 )
  {
    v8 = v3[2] - v6;
    v9 = v3[3] - v7;
  }
  else
  {
    v8 = v6 - *(v3 - 2);
    v9 = v7 - *(v3 - 1);
  }
  v10 = v5 + v4;
  v11 = v6 - (v8 >> 1);
  v12 = v7 - (v9 >> 1);
  v13 = v4 * (int)abs32(v9);
  v14 = v4 * (int)abs32(v8);
  if ( v10 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      v16 = 0;
      LODWORD(v18) = 0;
      v14 /= v10;
      v17 = v13 / v10;
      goto LABEL_11;
    }
    if ( v14 < 0 )
    {
      v15 = -v14 % (unsigned __int64)(unsigned int)v10;
      v14 = -(__int64)(-v14 / (unsigned __int64)(unsigned int)v10);
    }
    else
    {
      v15 = v14 % (unsigned __int64)(unsigned int)v10;
      v14 /= (unsigned __int64)(unsigned int)v10;
    }
    v16 = v15;
    if ( v13 >= 0 )
    {
      v17 = v13 / (unsigned __int64)(unsigned int)v10;
      v18 = v13 % (unsigned __int64)(unsigned int)v10;
LABEL_11:
      LODWORD(v13) = v17;
      goto LABEL_12;
    }
    v18 = -v13 % (unsigned __int64)(unsigned int)v10;
    v13 = -(__int64)(-v13 / (unsigned __int64)(unsigned int)v10);
  }
  else
  {
    v16 = 0;
    LODWORD(v18) = 0;
  }
LABEL_12:
  v19 = (unsigned int)v10 >> 1;
  if ( v16 >= v19 )
    LODWORD(v14) = v14 + 1;
  if ( (unsigned int)v18 >= v19 )
    LODWORD(v13) = v13 + 1;
  v20 = -(int)v14;
  if ( v8 >= 0 )
    v20 = v14;
  v21 = -(int)v13;
  if ( v9 >= 0 )
    v21 = v13;
  v22 = v12 + v21;
  v23 = v20 + v11;
  v24 = *(_DWORD *)a2;
  v25 = v23;
  *((_DWORD *)a2 + 17) = v22;
  if ( (v24 & 1) != 0 )
  {
    v23 = -v23;
    v25 = v23;
    *((_DWORD *)a2 + 17) = -v22;
  }
  *(_DWORD *)a2 = v24 | 4;
  *((_DWORD *)a2 + 16) = (v25 + ((v23 >> 31) & 1) + 3) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 17) = ((*((int *)a2 + 17) >> 31) + *((_DWORD *)a2 + 17) + 4) & 0xFFFFFFF8;
}
