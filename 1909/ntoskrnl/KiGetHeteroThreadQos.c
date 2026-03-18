/*
 * XREFs of KiGetHeteroThreadQos @ 0x1402AF148
 * Callers:
 *     KiConvertDynamicHeteroPolicy @ 0x1402AEFC0 (KiConvertDynamicHeteroPolicy.c)
 * Callees:
 *     KiIsThreadRankBiased @ 0x1402B28E8 (KiIsThreadRankBiased.c)
 */

__int64 __fastcall KiGetHeteroThreadQos(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v6; // r9
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // edx
  char v13; // r9
  __int64 v14; // rdx
  char v15; // r8
  __int64 v16; // r10
  unsigned int v17; // ecx
  int v18; // ecx

  v3 = *(_DWORD *)(a1 + 120);
  v6 = a1;
  v7 = 1;
  if ( (v3 & 0x400000) == 0 )
  {
    v9 = *(_QWORD *)(a1 + 1928);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 120);
      v11 = *(_DWORD *)(a1 + 120) & 3;
      v12 = v10 & 3;
      v13 = 0;
      if ( v12 != v11 && (v12 == 3 || v11 == 3 || v12 < v11) )
        v13 = 1;
      if ( !v13 )
        LOBYTE(v10) = v3;
      LOBYTE(v3) = v10;
      goto LABEL_2;
    }
    if ( *(_BYTE *)(a1 + 124) == 1 )
    {
      result = 3LL;
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(a1 + 1508) & 3) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 1508) & 3) != 1 )
      {
        if ( (*(_DWORD *)(a1 + 1508) & 3) == 2 )
        {
          result = 1LL;
          goto LABEL_41;
        }
LABEL_33:
        result = 0LL;
        goto LABEL_41;
      }
LABEL_40:
      result = 2LL;
      goto LABEL_41;
    }
    v14 = *(_QWORD *)(a1 + 544);
    v15 = KiDynamicHeteroCpuPolicyMask;
    v16 = (*(_DWORD *)(v14 + 440) >> 7) & 7;
    if ( (KiDynamicHeteroCpuPolicyMask & 4) != 0 )
    {
      if ( (_DWORD)v16 == 3 )
      {
LABEL_31:
        result = KiProcessPolicyToQosMappingTable[v16];
        if ( (_DWORD)result != 4 )
          goto LABEL_41;
        if ( *(char *)(v6 + 195) >= 15 || (v15 & 1) != 0 && *(_BYTE *)(v14 + 1466) == 2 )
          goto LABEL_33;
        if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 )
        {
          v18 = *(char *)(v6 + 195);
          if ( v18 >= KiDynamicHeteroCpuPolicyImportantPriority
            || (*(_DWORD *)(v6 + 116) & 0x400) != 0 && (char)v18 >= 8 )
          {
            goto LABEL_33;
          }
        }
        goto LABEL_40;
      }
      v17 = *(_DWORD *)(a1 + 80);
      if ( v17 <= *(_DWORD *)(v6 + 84) )
        v17 = *(_DWORD *)(v6 + 84);
      if ( v17 < KiDynamicHeteroCpuPolicyExpectedCycles )
      {
        v7 = 0;
        if ( KeHeteroSystemQos )
        {
          if ( (KiDynamicHeteroCpuPolicyMask & 8) != 0 )
            goto LABEL_40;
        }
      }
    }
    if ( (_DWORD)v16 != 3 && (KiDynamicHeteroCpuPolicyMask & 0x20) == 0 )
    {
      if ( (unsigned __int8)KiIsThreadRankBiased(v6, a2) )
        goto LABEL_40;
      v14 = *(_QWORD *)(v6 + 544);
      if ( *(_BYTE *)(v14 + 1119) == 1 )
        goto LABEL_40;
      v15 = KiDynamicHeteroCpuPolicyMask;
      if ( (KiDynamicHeteroCpuPolicyMask & 2) != 0 && *(char *)(v6 + 195) < 8 )
        goto LABEL_40;
    }
    goto LABEL_31;
  }
LABEL_2:
  result = v3 & 3;
LABEL_41:
  *a3 = v7;
  return result;
}
