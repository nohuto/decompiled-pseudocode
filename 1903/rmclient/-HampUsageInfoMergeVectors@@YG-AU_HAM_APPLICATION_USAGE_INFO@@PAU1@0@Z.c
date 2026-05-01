/*
 * XREFs of ?HampUsageInfoMergeVectors@@YG?AU_HAM_APPLICATION_USAGE_INFO@@PAU1@0@Z @ 0x10013629
 * Callers:
 *     _HamQueryPackageUsageInfo@12 @ 0x10012BE0 (_HamQueryPackageUsageInfo@12.c)
 * Callees:
 *     ?HampUtilIsOverlappingInterval@@YGK_K000@Z @ 0x1001374E (-HampUtilIsOverlappingInterval@@YGK_K000@Z.c)
 */

unsigned int *__fastcall HampUsageInfoMergeVectors(int *a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int *result; // eax
  unsigned __int64 v16; // [esp-10h] [ebp-3Ch]
  unsigned int v17; // [esp+10h] [ebp-1Ch]
  unsigned int v19; // [esp+18h] [ebp-14h]
  unsigned int v20; // [esp+1Ch] [ebp-10h]
  unsigned int v21; // [esp+20h] [ebp-Ch]
  unsigned int v22; // [esp+24h] [ebp-8h]

  v3 = a1[1];
  v4 = *a1;
  v5 = *(_DWORD *)(a2 + 4);
  if ( HampUtilIsOverlappingInterval(*(_QWORD *)a1, *((_QWORD *)a1 + 1), *(_QWORD *)a2, *(_QWORD *)(a2 + 8)) )
  {
    if ( v3 <= v5 )
    {
      if ( v3 < v5 )
        goto LABEL_12;
      v6 = (unsigned int *)a2;
      if ( v4 < *(_DWORD *)a2 )
        goto LABEL_12;
LABEL_11:
      v4 = *v6;
      v3 = v5;
      goto LABEL_12;
    }
LABEL_10:
    v6 = (unsigned int *)a2;
    goto LABEL_11;
  }
  if ( (int)v3 < (int)v5 )
    goto LABEL_10;
  if ( (int)v3 <= (int)v5 )
  {
    v6 = (unsigned int *)a2;
    if ( v4 <= *(_DWORD *)a2 )
      goto LABEL_11;
  }
LABEL_12:
  *a3 = v4;
  a3[1] = v3;
  v20 = *(_DWORD *)(a2 + 24);
  v22 = *(_DWORD *)(a2 + 16);
  HIDWORD(v16) = *(_DWORD *)(a2 + 20);
  v7 = a1[4];
  v21 = a1[6];
  LODWORD(v16) = v22;
  v17 = a1[7];
  v8 = a1[5];
  v19 = HIDWORD(v16);
  if ( HampUtilIsOverlappingInterval(*((_QWORD *)a1 + 2), __PAIR64__(v17, v21), v16, *(_QWORD *)(a2 + 24)) )
  {
    if ( v8 <= v19 )
    {
      if ( v8 < v19 )
        goto LABEL_23;
      v9 = v22;
      if ( v7 < v22 )
        goto LABEL_23;
LABEL_22:
      v7 = v9;
      v8 = v19;
      goto LABEL_23;
    }
LABEL_21:
    v9 = v22;
    goto LABEL_22;
  }
  if ( (int)v8 < (int)v19 )
    goto LABEL_21;
  if ( (int)v8 <= (int)v19 )
  {
    v9 = v22;
    if ( v7 <= v22 )
      goto LABEL_22;
  }
LABEL_23:
  a3[5] = v8;
  a3[4] = v7;
  v10 = a1[3];
  v11 = a1[2];
  if ( __PAIR64__(v10, v11) <= *(_QWORD *)(a2 + 8) )
  {
    v11 = *(_DWORD *)(a2 + 8);
    v10 = *(_DWORD *)(a2 + 12);
  }
  a3[2] = v11;
  v12 = v17;
  a3[3] = v10;
  v13 = *(_DWORD *)(a2 + 28);
  if ( v17 < v13 || (v14 = v21, v17 <= v13) && v21 <= v20 )
  {
    v14 = v20;
    v12 = *(_DWORD *)(a2 + 28);
  }
  a3[6] = v14;
  result = a3;
  a3[7] = v12;
  return result;
}
