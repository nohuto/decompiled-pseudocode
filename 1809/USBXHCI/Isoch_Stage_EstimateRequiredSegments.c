/*
 * XREFs of Isoch_Stage_EstimateRequiredSegments @ 0x1C002BF3C
 * Callers:
 *     Isoch_PrepareStage @ 0x1C002A0E4 (Isoch_PrepareStage.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqDDD @ 0x1C002E378 (WPP_RECORDER_SF_DDqDDD.c)
 */

__int64 __fastcall Isoch_Stage_EstimateRequiredSegments(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v4; // r8
  __int64 v5; // r14
  int v6; // r9d
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  unsigned int v10; // r9d
  unsigned __int16 v11; // ax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx

  v2 = *(_QWORD *)(a1 + 56);
  v4 = 1;
  v5 = *(_QWORD *)(a1 + 40);
  v6 = (((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12) + 1;
  if ( (*(_QWORD *)(v5 + 272) & 0x800000000000LL) == 0
    || (v7 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v7 + 20) != 1)
    || (v8 = *(_DWORD *)(v7 + 40) == 0, v9 = 1, v8) )
  {
    v9 = 0;
  }
  if ( !v9 )
    v6 = ((unsigned __int64)*(unsigned int *)(v2 + 152) + 8190) >> 12;
  v10 = v6 + 1;
  v11 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 2LL);
  if ( (v11 <= 0x38u || v11 > 0x3Au) && *(_DWORD *)(*(_QWORD *)(a2 + 64) + 40LL) < *(_DWORD *)(a2 + 52) )
    v10 += 2;
  v12 = *(_DWORD *)(a1 + 196);
  v13 = v12 - *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = v10;
  v14 = *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 40) + 1;
  v15 = v13 - v13 % v10;
  if ( v10 * v14 > v15 )
    v16 = (v10 * v14 + v12 - v12 % v10 - v15 - 1) / (v12 - v12 % v10);
  else
    v16 = 0;
  if ( (*(_QWORD *)(v5 + 272) & 0x800000000000LL) == 0
    || (v17 = *(_QWORD *)(a1 + 48), *(_DWORD *)(v17 + 20) != 1)
    || !*(_DWORD *)(v17 + 40) )
  {
    v4 = 0;
  }
  v18 = v16 + 1;
  if ( !v4 )
    v18 = v16;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_DDqDDD(
      *(_QWORD *)(v2 + 80),
      *(_DWORD *)(v2 + 144),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v10);
  return v18;
}
