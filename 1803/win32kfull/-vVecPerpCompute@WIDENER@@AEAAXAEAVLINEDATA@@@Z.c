/*
 * XREFs of ?vVecPerpCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C0121644
 * Callers:
 *     ?vecOutPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C01218CC (-vecOutPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 *     ?vecInPerp@WIDENER@@IEAA?AVEVECTORFX@@XZ @ 0x1C0121910 (-vecInPerp@WIDENER@@IEAA-AVEVECTORFX@@XZ.c)
 * Callees:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C01217E4 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 */

void __fastcall WIDENER::vVecPerpCompute(WIDENER *this, struct LINEDATA *a2)
{
  int *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // esi
  int v7; // ebp
  int v8; // r11d
  int v9; // edi
  __int64 v10; // r10
  int v11; // esi
  int v12; // ebp
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r15d
  unsigned __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned int v19; // r10d
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx

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
  if ( v5 + v4 )
  {
    if ( v10 >= 0xFFFFFFFFLL )
    {
      v16 = 0;
      v18 = 0;
      v14 /= v10;
      v13 /= v10;
    }
    else
    {
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
      if ( v13 < 0 )
      {
        v17 = -v13 % (unsigned __int64)(unsigned int)v10;
        v13 = -(__int64)(-v13 / (unsigned __int64)(unsigned int)v10);
      }
      else
      {
        v17 = v13 % (unsigned __int64)(unsigned int)v10;
        v13 /= (unsigned __int64)(unsigned int)v10;
      }
      v18 = v17;
    }
  }
  else
  {
    v16 = 0;
    v18 = 0;
  }
  v19 = (unsigned int)v10 >> 1;
  if ( v16 >= v19 )
    LODWORD(v14) = v14 + 1;
  if ( v18 >= v19 )
    LODWORD(v13) = v13 + 1;
  v20 = *(_DWORD *)a2;
  v21 = -(int)v14;
  if ( v8 >= 0 )
    v21 = v14;
  v22 = -(int)v13;
  v23 = v11 + v21;
  *((_DWORD *)a2 + 16) = v23;
  if ( v9 >= 0 )
    v22 = v13;
  v24 = v23;
  v25 = v12 + v22;
  *((_DWORD *)a2 + 17) = v25;
  if ( (v20 & 1) != 0 )
  {
    v23 = -v23;
    *((_DWORD *)a2 + 16) = v23;
    *((_DWORD *)a2 + 17) = -v25;
    v24 = v23;
  }
  *(_DWORD *)a2 = v20 | 4;
  *((_DWORD *)a2 + 16) = (v24 + ((v23 >> 31) & 1) + 3) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 17) = ((*((int *)a2 + 17) >> 31) + *((_DWORD *)a2 + 17) + 4) & 0xFFFFFFF8;
}
