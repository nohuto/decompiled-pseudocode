/*
 * XREFs of ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01FB354
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01FF9E4 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F9FA4 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01FB51C (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 */

__int64 __fastcall SizeRect(struct _MOVESIZEDATA *a1, int a2, struct tagMONITOR *a3, unsigned int *a4)
{
  struct tagCHECKPOINT *v4; // r10
  int v5; // edi
  __int16 v8; // esi^2
  int v10; // edx
  int v11; // ecx
  __int64 v13; // r8
  __int64 v14; // rbp
  int v15; // r8d
  int v16; // r11d
  signed int v17; // r9d
  int v18; // r8d
  signed int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdi
  int v24; // r8d
  int v25; // r11d
  signed int v26; // r9d
  int v27; // r8d
  signed int v28; // eax
  int v29; // ecx
  unsigned __int64 v30; // [rsp+50h] [rbp+8h]

  v4 = 0LL;
  v5 = (__int16)a2;
  v8 = HIWORD(a2);
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
  {
    v10 = (__int16)a2 - *((_DWORD *)a1 + 42);
    v11 = v8 - *((_DWORD *)a1 + 43);
    v30 = __PAIR64__(v11, v10);
    if ( v10 == *((_DWORD *)a1 + 75) && v11 == *((_DWORD *)a1 + 76) )
      return 0LL;
    v4 = GetOrUpdateCheckPointIfNotPresent(a1);
    if ( !v4 )
      return 0LL;
    *(_QWORD *)((char *)a1 + 300) = v30;
  }
  v13 = dword_1C02EB6B8[*((int *)a1 + 44)];
  if ( (int)v13 >= 0 )
  {
    *((_DWORD *)a1 + v13 + 10) = v5;
    v14 = v13;
    v15 = v13 ^ 2;
    v16 = *((_DWORD *)a1 + v15 + 10);
    v17 = v16 - v5;
    v18 = v15 & 2;
    if ( !v18 )
      v17 = v5 - v16;
    v19 = *((_DWORD *)a1 + 26);
    if ( v17 < v19
      || (v19 = *((_DWORD *)a1 + 28), v17 > v19)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v19 = abs32(*((_DWORD *)a1 + v14 + 22) - v16), v17 > v19) )
    {
      v20 = -v19;
      if ( !v18 )
        v20 = v19;
      *((_DWORD *)a1 + v14 + 10) = v16 + v20;
    }
  }
  v21 = *((int *)a1 + 44);
  v22 = dword_1C02EB688[v21];
  if ( (int)v22 >= 0 )
  {
    v23 = dword_1C02EB688[v21];
    *((_DWORD *)a1 + v22 + 10) = v8;
    v24 = v22 ^ 2;
    v25 = *((_DWORD *)a1 + v24 + 10);
    v26 = v25 - v8;
    v27 = v24 & 2;
    if ( !v27 )
      v26 = v8 - v25;
    v28 = *((_DWORD *)a1 + 27);
    if ( v26 < v28
      || (v28 = *((_DWORD *)a1 + 29), v26 > v28)
      || (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 0x40) != 0
      && (v28 = abs32(*((_DWORD *)a1 + v23 + 22) - v25), v26 > v28) )
    {
      v29 = -v28;
      if ( !v27 )
        v29 = v28;
      *((_DWORD *)a1 + v23 + 10) = v25 + v29;
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x400) != 0 )
    SnapSizeRect(a1, v4, a3, a4);
  return 1LL;
}
