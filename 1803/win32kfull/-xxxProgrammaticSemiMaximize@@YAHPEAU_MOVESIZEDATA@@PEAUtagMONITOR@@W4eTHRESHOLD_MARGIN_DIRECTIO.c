/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01C3FB4
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01C2948 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01C2FEC (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

__int64 __fastcall xxxProgrammaticSemiMaximize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  struct tagWND **v5; // rdi
  struct tagCHECKPOINT *Prop; // r9
  struct tagWND *v7; // r8
  unsigned int v8; // r8d
  int v9; // r8d
  unsigned int v10; // [rsp+30h] [rbp-38h] BYREF
  struct tagCHECKPOINT *v11; // [rsp+38h] [rbp-30h] BYREF
  __int64 v12[2]; // [rsp+40h] [rbp-28h] BYREF

  v10 = 0;
  v11 = 0LL;
  result = xxxForceSizeRecToDockTarget(a1, a3, a2, &v10, (struct tagRECT *)v12, &v11);
  if ( (_DWORD)result )
  {
    v5 = (struct tagWND **)(a1 + 16);
    if ( (v10 & 1) != 0 )
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
      *(_OWORD *)v12 = *(_OWORD *)(a1 + 40);
      Prop = (struct tagCHECKPOINT *)RealGetProp(*((_QWORD *)v7 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
      *((_DWORD *)Prop + 12) &= ~2u;
    }
    v8 = *((_DWORD *)Prop + 12) & 0xFFFFFFF7 | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 1));
    *((_DWORD *)Prop + 12) = v8;
    *((_DWORD *)Prop + 12) = v8 & 0xFFFFFFEF | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 2));
    v9 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x64;
    if ( (*(_DWORD *)(a1 + 340) & 0x20) == 0 )
      v9 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x24;
    xxxMinMaximizeEx(*v5, 9u, v9, 0LL, v12, 0LL);
    v7 = *v5;
    goto LABEL_9;
  }
  return result;
}
