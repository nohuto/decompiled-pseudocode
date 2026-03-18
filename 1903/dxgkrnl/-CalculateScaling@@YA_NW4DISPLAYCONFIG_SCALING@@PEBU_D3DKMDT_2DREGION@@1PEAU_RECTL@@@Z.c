/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C001B3EC
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00D10C0 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CalculateScaling(__int64 a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v7; // r11d
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax

  v4 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        v27 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v27 + 24) = 172LL;
        WdLogEvent5_WdAssertion(v27);
      }
      goto LABEL_19;
    case 2:
      v18 = *a2;
      v19 = *a3;
      if ( v18 < *a3 || (v20 = a2[1], v21 = a3[1], v20 < v21) )
      {
LABEL_5:
        v7 = a3[1];
        v8 = a2[1];
        v9 = *a2;
        v10 = *a3;
        v11 = *a2 * v7;
        v12 = v10 * v8;
        if ( v10 * v8 < v11 )
        {
          v25 = v12 / v7;
          v26 = (v9 - v12 / v7) >> 1;
          v9 = v25 + v26;
          v14 = 0;
          v15 = v26;
        }
        else
        {
          v13 = v11 / v10;
          v14 = (v8 - v13) >> 1;
          v8 = v13 + v14;
          v15 = 0;
        }
        *a4 = v15;
        a4[1] = v14;
        a4[2] = v9;
        goto LABEL_8;
      }
      v22 = (v18 - v19) >> 1;
      v23 = (v20 - v21) >> 1;
      *a4 = v22;
      v24 = v19 + v22;
      v8 = v23 + v21;
      a4[1] = v23;
LABEL_20:
      a4[2] = v24;
LABEL_8:
      a4[3] = v8;
      return 1;
    case 3:
LABEL_19:
      v24 = *a2;
      v8 = a2[1];
      *(_QWORD *)a4 = 0LL;
      goto LABEL_20;
    case 4:
      goto LABEL_5;
  }
  if ( (_DWORD)a1 != 5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v17 + 24) = v4;
    WdLogEvent5_WdAssertion(v17);
  }
  return 0;
}
