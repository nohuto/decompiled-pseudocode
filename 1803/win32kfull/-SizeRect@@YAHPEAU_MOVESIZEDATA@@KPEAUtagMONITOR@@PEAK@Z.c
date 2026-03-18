/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01C1598
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01C4E74 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C0758 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01C1760 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, unsigned int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v4; // edi
  struct tagCHECKPOINT *v5; // r10
  int v10; // edx
  __int64 v12; // r8
  __int64 v13; // r11
  int v14; // r8d
  int v15; // ebp
  int v16; // edi
  signed int v17; // eax
  int v18; // r9d
  int v19; // r8d
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // esi
  __int64 v24; // r11
  int v25; // r8d
  int v26; // edi
  signed int v27; // eax
  signed int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // [rsp+50h] [rbp+8h]

  v4 = (__int16)a2;
  v5 = 0LL;
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
  {
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
    LODWORD(v31) = v4 - *((_DWORD *)a1 + 42);
    HIDWORD(v31) = v10;
    if ( (_DWORD)v31 == *((_DWORD *)a1 + 75) && v10 == *((_DWORD *)a1 + 76) )
      return 0LL;
    v5 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v5 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 300) = v31;
  }
  v12 = dword_1C02E6338[*((int *)a1 + 44)];
  if ( (int)v12 >= 0 )
  {
    *((_DWORD *)a1 + v12 + 10) = v4;
    v13 = v12;
    v14 = v12 ^ 2;
    v15 = *((_DWORD *)a1 + v14 + 10);
    v16 = v4 - v15;
    v17 = *((_DWORD *)a1 + 26);
    v18 = -v16;
    v19 = v14 & 2;
    if ( !v19 )
      v18 = v16;
    if ( v18 < v17
      || (v17 = *((_DWORD *)a1 + 28), v18 > v17)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v17 = abs32(*((_DWORD *)a1 + v13 + 22) - v15), v18 > v17) )
    {
      v20 = -v17;
      if ( !v19 )
        v20 = v17;
      *((_DWORD *)a1 + v13 + 10) = v15 + v20;
    }
  }
  v21 = *((int *)a1 + 44);
  v22 = dword_1C02E6308[v21];
  if ( (int)v22 >= 0 )
  {
    v23 = HIWORD(a2);
    v24 = dword_1C02E6308[v21];
    *((_DWORD *)a1 + v22 + 10) = (__int16)v23;
    v25 = v22 ^ 2;
    v26 = *((_DWORD *)a1 + v25 + 10);
    v27 = *((_DWORD *)a1 + 27);
    v28 = v26 - (__int16)v23;
    v29 = v25 & 2;
    if ( !v29 )
      v28 = (__int16)v23 - v26;
    if ( v28 < v27
      || (v27 = *((_DWORD *)a1 + 29), v28 > v27)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v27 = abs32(*((_DWORD *)a1 + v24 + 22) - v26), v28 > v27) )
    {
      v30 = -v27;
      if ( !v29 )
        v30 = v27;
      *((_DWORD *)a1 + v24 + 10) = v26 + v30;
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
    SnapSizeRect(a1, v5, a3, a4);
  return 1LL;
}
