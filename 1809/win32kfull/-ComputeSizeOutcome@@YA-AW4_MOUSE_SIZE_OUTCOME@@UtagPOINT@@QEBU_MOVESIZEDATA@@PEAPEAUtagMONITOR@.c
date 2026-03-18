/*
 * XREFs of ?ComputeSizeOutcome@@YA?AW4_MOUSE_SIZE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E45EC
 * Callers:
 *     ?SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z @ 0x1C01E5EF4 (-SnapSizeRect@@YAXPEAU_MOVESIZEDATA@@PEAUtagCHECKPOINT@@PEAUtagMONITOR@@PEAK@Z.c)
 * Callees:
 *     ?HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01E4EFC (-HitTargetAndMonitorFromPoint@@YAHUtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHO.c)
 */

__int64 __fastcall ComputeSizeOutcome(struct tagPOINT a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v7; // eax
  struct tagMONITOR *v8; // r8
  unsigned int v9; // ecx
  int v10; // edx
  int v11; // eax
  __int64 result; // rax
  int v13; // [rsp+40h] [rbp+18h] BYREF
  struct tagMONITOR *v14; // [rsp+48h] [rbp+20h] BYREF

  v7 = HitTargetAndMonitorFromPoint(
         a1,
         (const struct _MOVESIZEDATA *const)a2,
         &v14,
         (enum eTHRESHOLD_MARGIN_DIRECTION *)&v13);
  v8 = v14;
  v9 = 0;
  v10 = v13;
  *a3 = v14;
  *a4 = v10;
  if ( !v7 )
  {
    result = 4LL;
    if ( *(_DWORD *)(a2 + 240) != 4 )
      return result;
    return 1LL;
  }
  if ( (v10 == 3 || !v10) && (unsigned int)(*(_DWORD *)(a2 + 176) - 1) <= 1 )
    return 1LL;
  v11 = *(_DWORD *)(a2 + 240);
  if ( v11 == 4 )
    goto LABEL_12;
  if ( v8 == *(struct tagMONITOR **)(a2 + 232) && v10 == v11 )
    return 2LL;
  if ( v8 != *(struct tagMONITOR **)(a2 + 232) || v10 != v11 )
    return 3LL;
LABEL_12:
  if ( v11 == 4 )
    return 5;
  return v9;
}
