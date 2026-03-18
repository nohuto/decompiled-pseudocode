/*
 * XREFs of ReduceArrangedRectangleByFrameMargin @ 0x1C01C0450
 * Callers:
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C01E53B0 (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01E5A14 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 */

char __fastcall ReduceArrangedRectangleByFrameMargin(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 v6; // rax
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  __int16 v13; // [rsp+48h] [rbp+20h] BYREF
  __int16 v14; // [rsp+4Ah] [rbp+22h]
  __int16 v15; // [rsp+4Ch] [rbp+24h]
  __int16 v16; // [rsp+4Eh] [rbp+26h]

  LOBYTE(v6) = GetWindowExtendedMargin((const struct tagWND *)a1, (struct FRAME_MARGIN *)&v13);
  if ( !(_BYTE)v6 )
    return v6;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_BYTE *)(v6 + 233);
  if ( (v7 & 1) != 0 )
  {
    v8 = *a3 + v13;
    if ( v8 == *a2 )
    {
      *a3 = v8;
      goto LABEL_8;
    }
  }
  if ( (v7 & 2) != 0 )
  {
    LOBYTE(v6) = v14;
    v9 = a3[2] - v14;
    if ( v9 == a2[2] )
    {
      a3[2] = v9;
LABEL_8:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 233LL) & 1) != 0 )
        a3[2] -= v14;
      else
        *a3 += v13;
      LOBYTE(v6) = v16;
      v10 = a3[3] - v16;
      if ( v10 == a2[3] )
        a3[3] = v10;
    }
  }
  v11 = a3[1] + v15;
  if ( v11 == a2[1] )
    a3[1] = v11;
  return v6;
}
