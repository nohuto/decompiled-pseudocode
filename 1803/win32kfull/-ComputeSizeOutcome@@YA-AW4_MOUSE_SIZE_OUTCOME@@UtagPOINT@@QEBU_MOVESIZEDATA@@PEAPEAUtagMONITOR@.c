/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C03F8
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01C1760 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C0CAC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeSizeOutcome(struct tagPOINT a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax
  struct tagMONITOR *v8; // r9
  unsigned int v9; // r8d
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx
  int v14; // [rsp+40h] [rbp+18h] BYREF
  struct tagMONITOR *v15; // [rsp+48h] [rbp+20h] BYREF

  v7 = HitTargetAndMonitorFromPoint(
         a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v15,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v14);
  v8 = v15;
  v9 = 0;
  v10 = v14;
  *a3 = v15;
  *a4 = v10;
  if ( !v7 )
  {
    v11 = 1;
    if ( *(_DWORD *)(a2 + 240) != 4 )
      return 4;
    return v11;
  }
  if ( v10 == 3 || !v10 )
  {
    v11 = 1;
    if ( (unsigned int)(*(_DWORD *)(a2 + 176) - 1) <= 1 )
      return v11;
  }
  v12 = *(_DWORD *)(a2 + 240);
  if ( v12 == 4 )
    goto LABEL_12;
  if ( v8 == *(struct tagMONITOR **)(a2 + 232) && v10 == v12 )
    return 2LL;
  if ( v8 != *(struct tagMONITOR **)(a2 + 232) || v10 != v12 )
    return 3LL;
LABEL_12:
  if ( v12 == 4 )
    return 5;
  return v9;
}
