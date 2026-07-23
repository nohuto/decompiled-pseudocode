/*
 * XREFs of ?StRegionFindCompact@?$ST_STORE@USM_TRAITS@@@@SAPEAT_ST_REGION_STATE@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1401562A0
 * Callers:
 *     ?StDmpSinglePageFindSpace@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z @ 0x14014A770 (-StDmpSinglePageFindSpace@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KKPEAPEADPEAK@Z.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     ?SmStIsRegionBusy@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z @ 0x140145660 (-SmStIsRegionBusy@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@K@Z.c)
 */

unsigned __int16 *__fastcall ST_STORE<SM_TRAITS>::StRegionFindCompact(__int64 a1, int a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r8d
  __int64 v6; // r12
  unsigned __int16 *v7; // rdi
  unsigned __int16 *v8; // r14
  unsigned int v9; // r10d
  unsigned __int16 *v10; // r9
  int v11; // r11d
  unsigned __int16 v12; // cx
  unsigned int v13; // edx
  unsigned __int16 v14; // cx
  unsigned __int16 *result; // rax
  int v16; // ecx
  unsigned int v17; // r10d
  int NextForwardRunClearCapped; // eax
  unsigned int v19; // ebp
  int v20; // r11d
  int v21; // eax
  _WORD v22[28]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6552LL) )
  {
    v5 = 0;
    v4 = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 1092);
    v5 = (unsigned int)(*(_DWORD *)(a1 + 808) + 1) >> 1;
  }
  v6 = *(unsigned int *)(a1 + 856);
  v7 = v22;
  v8 = *(unsigned __int16 **)(a1 + 1032);
  v22[0] ^= (v22[0] ^ (*(_WORD *)(a1 + 816) - *(_WORD *)(a1 + 820) + 1)) & 0x1FFF;
  if ( *(_DWORD *)(a1 + 1088) && v5 )
  {
    v17 = 0;
    v23 = 0;
LABEL_25:
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(a1 + 1072, v17, 0xFFFFFFFF, &v23);
      if ( !NextForwardRunClearCapped )
        break;
      v17 = v23;
      v19 = NextForwardRunClearCapped + v23;
      v10 = &v8[v23];
      if ( v23 < NextForwardRunClearCapped + v23 )
      {
        v20 = *(_DWORD *)(a1 + 776);
        while ( 1 )
        {
          if ( (v20 & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v17) )
          {
            v21 = (_BYTE)v20 ? 0 : *v10 >> 13;
            if ( v21 == a2 )
              break;
          }
          ++v17;
          ++v10;
          v23 = v17;
          if ( v17 >= v19 )
            goto LABEL_25;
        }
LABEL_16:
        v7 = v10;
        goto LABEL_17;
      }
    }
  }
  v9 = 0;
  v10 = &v8[v4];
  if ( !(_DWORD)v6 )
    return 0LL;
  v11 = *(_DWORD *)(a1 + 776);
  do
  {
    if ( v10 >= &v8[v6] )
    {
      v10 = v8;
      v4 = 0;
    }
    if ( (v11 & 0x40000) == 0 || !SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v4) )
    {
      v12 = *v10;
      v13 = (_BYTE)v11 ? 0 : v12 >> 13;
      v14 = v12 & 0x1FFF;
      if ( v14 < (unsigned __int16)(*v7 & 0x1FFF) )
      {
        if ( v13 == a2 )
        {
          v7 = v10;
          if ( !v14 )
            goto LABEL_17;
        }
        else if ( !v14 && v10 != &v8[*(unsigned int *)(a1 + 16 * (v13 + 78LL))] )
        {
          goto LABEL_16;
        }
      }
    }
    ++v10;
    ++v9;
    ++v4;
  }
  while ( v9 < (unsigned int)v6 );
  if ( v7 == v22 )
    return 0LL;
LABEL_17:
  result = v7;
  v16 = v7 - v8 + 1;
  if ( v16 == *(_DWORD *)(a1 + 856) )
    v16 = 0;
  *(_DWORD *)(a1 + 1092) = v16;
  return result;
}
