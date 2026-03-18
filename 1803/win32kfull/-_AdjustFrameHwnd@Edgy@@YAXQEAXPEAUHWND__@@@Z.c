/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01BE18C
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01BED00 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, void *const a2, HWND a3)
{
  __int64 v4; // rax
  _OWORD *v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _OWORD v15[11]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v16[46]; // [rsp+D0h] [rbp-B8h] BYREF

  if ( this )
  {
    v4 = ValidateHwnd(a2);
    v5 = INPUTDEST_FROM_PWND(v16, v4);
    v6 = v5[1];
    v15[0] = *v5;
    v7 = v5[2];
    v15[1] = v6;
    v8 = v5[3];
    v15[2] = v7;
    v9 = v5[4];
    v15[3] = v8;
    v10 = v5[5];
    v15[4] = v9;
    v11 = v5[6];
    v15[5] = v10;
    v12 = v5[8];
    v15[6] = v11;
    v15[7] = v5[7];
    v13 = v5[9];
    v15[8] = v12;
    v14 = v5[10];
    v15[9] = v13;
    v15[10] = v14;
    CTouchProcessor::AdjustEdgyFrameInputDest(gpTouchProcessor, this, v15);
  }
}
