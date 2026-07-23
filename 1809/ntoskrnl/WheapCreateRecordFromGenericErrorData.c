/*
 * XREFs of WheapCreateRecordFromGenericErrorData @ 0x140320C44
 * Callers:
 *     WheapDefaultErrSrcCreateRecord @ 0x140320E60 (WheapDefaultErrSrcCreateRecord.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     WheaInitializeRecordHeader @ 0x140320940 (WheaInitializeRecordHeader.c)
 *     WheapAddRecoveryPacketToErrorRecord @ 0x140320A14 (WheapAddRecoveryPacketToErrorRecord.c)
 *     WheapAddSectionFromGenericErrorData @ 0x140320B30 (WheapAddSectionFromGenericErrorData.c)
 *     WheapSqmDwordCommon @ 0x140321D88 (WheapSqmDwordCommon.c)
 */

__int64 __fastcall WheapCreateRecordFromGenericErrorData(_DWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _DWORD *v5; // rdi
  unsigned int v7; // edx
  unsigned int v8; // ebx
  int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  bool v16; // cc
  int v17; // eax
  char v18; // cl
  __int64 v19; // r9
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // eax
  bool v23; // cf
  unsigned int v24; // r15d
  __int64 v25; // rcx
  unsigned int v26; // eax
  int v28; // [rsp+68h] [rbp+10h]

  v5 = (_DWORD *)(a2 + *(unsigned int *)(a2 + 64));
  v7 = *(_DWORD *)(a2 + 68);
  v8 = 20;
  if ( v7 < 0x14 || (unsigned int)(v5[3] + 20) < 0x14 )
    goto LABEL_2;
  v12 = v5[3] + 20;
  v13 = v5[1];
  if ( v13 && (v14 = v5[2]) != 0 )
  {
    if ( v12 > v13 )
      goto LABEL_2;
    v15 = v13 + v14;
    if ( v15 < v13 )
      goto LABEL_2;
    v16 = v15 <= v7;
  }
  else
  {
    v16 = v12 <= v7;
  }
  if ( !v16 || a4 < 0x80 )
  {
LABEL_2:
    v11 = -1073741811;
LABEL_28:
    WheapSqmDwordCommon(6LL, &WHEA_SQM_EVENT_INCREMENTDWORD, 7203LL);
    return (unsigned int)v11;
  }
  memset((void *)a3, 0, a4);
  WheaInitializeRecordHeader((_DWORD *)a3);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(a2 + 20);
  *(_OWORD *)(a3 + 80) = *(_OWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 104) ^= (*(_DWORD *)(a3 + 104) ^ (2 * *(_DWORD *)(a2 + 12))) & 2;
  v17 = *(_DWORD *)(a3 + 104);
  v18 = v17 ^ (*(_DWORD *)(a2 + 12) >> 1);
  *(_DWORD *)(a3 + 20) = a4;
  *(_DWORD *)(a3 + 104) = v17 ^ v18 & 4;
  v28 = (*v5 >> 4) & 0x3FF;
  if ( v28 )
  {
    while ( v8 + 64 >= v8 && v8 + 64 <= v12 )
    {
      v19 = (__int64)v5 + v8;
      v20 = -1;
      v21 = *(_DWORD *)(v19 + 24);
      if ( *(_WORD *)(v19 + 20) == 768 )
      {
        v22 = v21 + 72;
        v23 = v22 < 0x48;
      }
      else
      {
        v22 = v21 + 64;
        v23 = v22 < 0x40;
      }
      if ( !v23 )
        v20 = v22;
      if ( v23 )
        break;
      if ( v20 + v8 < v8 )
        break;
      v24 = v20 + v8;
      if ( v20 + v8 > v12 )
        break;
      v11 = WheapAddSectionFromGenericErrorData((__int64)a1, a3, a4, v19, v20, 1);
      if ( v11 < 0 )
        goto LABEL_28;
      v8 = v24;
      if ( !--v28 )
        goto LABEL_25;
    }
    goto LABEL_2;
  }
LABEL_25:
  v25 = (unsigned int)v5[1];
  if ( (_DWORD)v25 )
  {
    v26 = v5[2];
    if ( v26 )
    {
      v11 = WheapAddSectionFromGenericErrorData((__int64)a1, a3, a4, (__int64)v5 + v25, v26, 0);
      if ( v11 < 0 )
        goto LABEL_28;
    }
  }
  if ( !*(_DWORD *)(a2 + 20) )
    WheapAddRecoveryPacketToErrorRecord(a1, a3, a4);
  return 0;
}
