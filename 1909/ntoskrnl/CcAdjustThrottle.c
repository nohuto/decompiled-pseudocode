/*
 * XREFs of CcAdjustThrottle @ 0x14012927C
 * Callers:
 *     CcLazyWriteScan @ 0x14007F194 (CcLazyWriteScan.c)
 * Callees:
 *     CcAdjustCurrentThresholdWrtTop @ 0x140129424 (CcAdjustCurrentThresholdWrtTop.c)
 */

unsigned __int64 __fastcall CcAdjustThrottle(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r10
  unsigned int v6; // r11d
  unsigned __int64 v7; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r15
  unsigned int v14; // r8d
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_QWORD *)a3;
  v6 = *(_DWORD *)(a2 + 16) - a4;
  v7 = a1[89];
  v9 = *(unsigned int *)(a3 + 24);
  v10 = *(_QWORD *)(a3 + 8);
  v11 = *(_QWORD *)(a3 + 16);
  v12 = *(_QWORD *)a2;
  v13 = *(_QWORD *)(a2 + 8);
  v22 = *(_QWORD *)a3;
  if ( v7 )
  {
    if ( v7 > 0xFFFFFFFF || v6 <= v7 )
      v6 = 0;
    else
      v6 -= v7;
    a1[89] = 0LL;
  }
  v14 = v6;
  if ( v6 < 0x200 )
    v14 = 512;
  v15 = v14 >> 2;
  if ( (unsigned int)v15 > v5 )
    v15 = (unsigned int)v5;
  if ( v12 >= v9 + ((3 * (v5 - v9)) >> 2) )
  {
    v5 -= (unsigned int)v15;
    if ( v5 <= v11 )
      v5 = v11;
  }
  else
  {
    if ( v10 < v5 )
    {
      LOBYTE(a4) = v6 < 0x200;
      CcAdjustCurrentThresholdWrtTop(&v22, v10, v15, a4);
      v5 = v22;
      goto LABEL_9;
    }
    if ( v12 < v5 - (unsigned int)v15 && v13 <= v5 )
    {
      v20 = v10 - v5;
      v21 = (v5 - v12) >> 3;
      if ( v21 <= (unsigned int)v15 )
      {
        if ( v20 <= (unsigned int)v15 )
          goto LABEL_20;
        v5 += (unsigned int)v15;
      }
      else
      {
        if ( v20 <= v21 )
        {
LABEL_20:
          v5 = v10;
          goto LABEL_9;
        }
        v5 += v21;
      }
    }
  }
LABEL_9:
  *(_QWORD *)(a3 + 8) = v10;
  v16 = (v5 >> 1) + (v5 >> 2);
  *(_QWORD *)(a3 + 16) = v11;
  *(_QWORD *)a3 = v5;
  if ( v16 > 0xFFFFFFFF )
    LODWORD(v16) = -1;
  *(_DWORD *)(a3 + 24) = v16;
  v17 = (unsigned __int8)dword_1405711AC;
  v18 = (a1[87] + a1[88]) >> 1;
  *(_QWORD *)(a3 + 8) = v18;
  result = v18 >> 2;
  *(_QWORD *)(a3 + 16) = v18 >> 2;
  if ( v18 >> 2 < 0x200 )
  {
    *(_QWORD *)(a3 + 16) = 512LL;
    result = 512LL;
  }
  if ( v18 < result || !v17 )
    *(_QWORD *)(a3 + 8) = result;
  return result;
}
