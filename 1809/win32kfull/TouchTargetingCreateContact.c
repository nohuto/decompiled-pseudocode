/*
 * XREFs of TouchTargetingCreateContact @ 0x1C0243080
 * Callers:
 *     xxxPerformTargetingWithinPwnd @ 0x1C01F031C (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 *     xxxPointerWindowHitTest @ 0x1C01F0930 (xxxPointerWindowHitTest.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C02427EC (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 */

__int64 __fastcall TouchTargetingCreateContact(__int64 a1, int *a2, __int64 a3, int *a4)
{
  int *v4; // r15
  int v8; // r9d
  int *v9; // r12
  int *v10; // r13
  int *v11; // rdi
  int *v12; // r8
  BOOL v13; // eax
  bool v14; // zf
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // esi
  int v19; // ebp
  unsigned int v20; // edi
  int v21; // edi
  int v22; // ebx
  int v23; // r11d
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // r8d
  int v28; // edx
  __int64 result; // rax

  v4 = a4 + 4;
  a4[8] = *(_DWORD *)(a1 + 4);
  a4[9] = *(_DWORD *)(a1 + 8);
  a4[45] = 1;
  a4[10] = *(_DWORD *)(a1 + 44);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(a1 + 12);
  *(_OWORD *)a4 = *(_OWORD *)(a1 + 28);
  v8 = a4[46];
  if ( !v8 )
  {
    a4[47] = 26458;
    v8 = 26458;
    a4[46] = 26458;
  }
  v9 = a4 + 6;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), v4, a4 + 6, v8);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 4), a4, a4 + 2, a4[46]);
  v10 = a4 + 7;
  v11 = a4 + 5;
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 5, a4 + 7, a4[47]);
  _TTAdjustContactSide(*(_DWORD *)(a1 + 8), a4 + 1, a4 + 3, a4[47]);
  if ( a2 )
  {
    if ( (unsigned int)IntersectRect(v4, v4, a2) )
      IntersectRect(a4, a4, v12);
    else
      a4[45] = 0;
  }
  v13 = PtInRect(a4, *(_QWORD *)(a1 + 4));
  v14 = a4[46] == 0;
  a4[44] = v13;
  if ( v14 )
  {
    a4[47] = 26458;
    a4[46] = 26458;
  }
  v15 = *v4;
  v16 = *v9 - *v4;
  a4[11] = 12;
  if ( v16 < 4 || *v10 - *v11 < 4 )
  {
    a4[11] = 4;
    a4[12] = v15;
    a4[13] = *v11;
    a4[14] = *v4;
    a4[15] = *v10;
    a4[16] = *v9;
    a4[17] = *v10;
    a4[18] = *v9;
    result = (unsigned int)*v11;
    a4[19] = result;
  }
  else
  {
    a4[12] = v15;
    v17 = (*v11 + *v10) / 2;
    a4[13] = v17;
    v18 = v17;
    v19 = *v4 + 7 * (*v9 - *v4) / 100;
    a4[14] = v19;
    v20 = (int)((unsigned __int64)(34359738375LL * (*v11 - *v10)) >> 32) >> 5;
    v21 = *v10 + (v20 >> 31) + v20;
    a4[15] = v21;
    v22 = *v4 + 25 * (*v9 - *v4) / 100;
    a4[16] = v22;
    v23 = *v10 + 7 * (a4[5] - *v10) / 100;
    a4[17] = v23;
    v24 = (*v4 + *v9) / 2;
    a4[18] = v24;
    a4[19] = *v10;
    v25 = *v4 + *v9 - v22;
    a4[20] = v25;
    a4[21] = v23;
    v26 = *v4 + *v9 - v19;
    a4[22] = v26;
    a4[23] = v21;
    a4[24] = *v9;
    a4[26] = v26;
    a4[25] = v18;
    v27 = a4[5] + *v10 - v21;
    a4[27] = v27;
    a4[28] = v25;
    v28 = a4[5] + *v10 - v23;
    a4[29] = v28;
    a4[30] = v24;
    result = (unsigned int)a4[5];
    a4[31] = result;
    a4[32] = v22;
    a4[33] = v28;
    a4[34] = v19;
    a4[35] = v27;
  }
  return result;
}
