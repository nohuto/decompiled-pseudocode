/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01FEE04
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01FCC84 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01FDDC8 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

__int64 __fastcall xxxProgrammaticSemiMaximize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  struct tagWND **v5; // rdi
  struct tagCHECKPOINT *Prop; // r9
  struct tagWND *v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // r8d
  int v10; // r8d
  struct tagCHECKPOINT *v11; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0;
  v11 = 0LL;
  *(_QWORD *)&v12.left = 0LL;
  *(_QWORD *)&v12.right = 0LL;
  result = xxxForceSizeRecToDockTarget(a1, a3, a2, &v13, &v12, &v11);
  if ( (_DWORD)result )
  {
    v5 = (struct tagWND **)(a1 + 16);
    if ( (v13 & 1) != 0 )
    {
      Prop = v11;
    }
    else
    {
      v7 = *v5;
      if ( (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 31LL) & 0x20) == 0 )
      {
LABEL_9:
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a1 + 40);
        xxxCommitMoveSize(v7, (struct _MOVESIZEDATA *)a1);
        return 1LL;
      }
      v8 = (__int64)*v5;
      v12 = *(struct tagRECT *)(a1 + 40);
      Prop = (struct tagCHECKPOINT *)GetProp(v8, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      *((_DWORD *)Prop + 12) &= ~2u;
    }
    v9 = *((_DWORD *)Prop + 12) & 0xFFFFFFF7 | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 1));
    *((_DWORD *)Prop + 12) = v9;
    *((_DWORD *)Prop + 12) = v9 & 0xFFFFFFEF | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 2));
    v10 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x64;
    if ( (*(_DWORD *)(a1 + 340) & 0x20) == 0 )
      v10 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x24;
    xxxMinMaximizeEx(*v5, 9u, v10, 0LL, &v12, 0LL);
    v7 = *v5;
    goto LABEL_9;
  }
  return result;
}
