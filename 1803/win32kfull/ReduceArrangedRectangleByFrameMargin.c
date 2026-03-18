/*
 * XREFs of ReduceArrangedRectangleByFrameMargin @ 0x1C019EEE4
 * Callers:
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z @ 0x1C0105650 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@PEAUtagUPDATEFRAMEMARGINS@@@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01C12D8 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     MigrateRectMonitors @ 0x1C01C57E8 (MigrateRectMonitors.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C0059034 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall ReduceArrangedRectangleByFrameMargin(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 result; // rax
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  __int16 v12; // [rsp+48h] [rbp+20h] BYREF
  __int16 v13; // [rsp+4Ah] [rbp+22h]
  __int16 v14; // [rsp+4Ch] [rbp+24h]
  __int16 v15; // [rsp+4Eh] [rbp+26h]

  result = GetWindowExtendedMargin(a1, (__int64)&v12);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 40);
    v7 = *(_BYTE *)(result + 233);
    if ( (v7 & 1) != 0 && (v8 = *a3 + v12, v8 == *a2) )
    {
      *a3 = v8;
    }
    else
    {
      if ( (v7 & 2) == 0 || (result = (unsigned int)v13, v9 = a3[2] - result, v9 != a2[2]) )
      {
LABEL_13:
        v11 = a3[1] + v14;
        if ( v11 == a2[1] )
          a3[1] = v11;
        return result;
      }
      a3[2] = v9;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 1) != 0 )
      a3[2] -= v13;
    else
      *a3 += v12;
    result = (unsigned int)v15;
    v10 = a3[3] - result;
    if ( v10 == a2[3] )
      a3[3] = v10;
    goto LABEL_13;
  }
  return result;
}
