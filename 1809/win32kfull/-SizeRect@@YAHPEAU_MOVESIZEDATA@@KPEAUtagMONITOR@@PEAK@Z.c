/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01E5D24
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01EA210 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01E49BC (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01E5EF4 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  int v4; // edi
  struct tagCHECKPOINT *v5; // r10
  __int16 v8; // esi^2
  int v10; // edx
  __int64 v12; // r8
  __int64 v13; // rbp
  int v14; // r8d
  int v15; // r11d
  signed int v16; // r9d
  int v17; // r8d
  signed int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // r8d
  int v24; // r11d
  signed int v25; // r9d
  int v26; // r8d
  signed int v27; // eax
  int v28; // ecx
  __int64 v29; // [rsp+50h] [rbp+8h]

  v4 = (__int16)a2;
  v5 = 0LL;
  v8 = HIWORD(a2);
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
  {
    v10 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
    LODWORD(v29) = v4 - *((_DWORD *)a1 + 42);
    HIDWORD(v29) = v10;
    if ( (_DWORD)v29 == *((_DWORD *)a1 + 75) && v10 == *((_DWORD *)a1 + 76) )
      return 0LL;
    v5 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v5 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 300) = v29;
  }
  v12 = dword_1C02D9978[*((int *)a1 + 44)];
  if ( (int)v12 >= 0 )
  {
    *((_DWORD *)a1 + v12 + 10) = v4;
    v13 = v12;
    v14 = v12 ^ 2;
    v15 = *((_DWORD *)a1 + v14 + 10);
    v16 = v15 - v4;
    v17 = v14 & 2;
    if ( !v17 )
      v16 = v4 - v15;
    v18 = *((_DWORD *)a1 + 26);
    if ( v16 < v18
      || (v18 = *((_DWORD *)a1 + 28), v16 > v18)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v18 = abs32(*((_DWORD *)a1 + v13 + 22) - v15), v16 > v18) )
    {
      v19 = -v18;
      if ( !v17 )
        v19 = v18;
      *((_DWORD *)a1 + v13 + 10) = v15 + v19;
    }
  }
  v20 = *((int *)a1 + 44);
  v21 = dword_1C02D9948[v20];
  if ( (int)v21 >= 0 )
  {
    v22 = dword_1C02D9948[v20];
    *((_DWORD *)a1 + v21 + 10) = v8;
    v23 = v21 ^ 2;
    v24 = *((_DWORD *)a1 + v23 + 10);
    v25 = v24 - v8;
    v26 = v23 & 2;
    if ( !v26 )
      v25 = v8 - v24;
    v27 = *((_DWORD *)a1 + 27);
    if ( v25 < v27
      || (v27 = *((_DWORD *)a1 + 29), v25 > v27)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v27 = abs32(*((_DWORD *)a1 + v22 + 22) - v24), v25 > v27) )
    {
      v28 = -v27;
      if ( !v26 )
        v28 = v27;
      *((_DWORD *)a1 + v22 + 10) = v24 + v28;
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
    SnapSizeRect(a1, v5, a3, a4);
  return 1LL;
}
