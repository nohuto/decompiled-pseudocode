/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01BAE44
 * Callers:
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 */

__int64 __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  __int64 result; // rax
  _OWORD *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v14[11]; // [rsp+20h] [rbp-168h] BYREF
  _DWORD v15[46]; // [rsp+D0h] [rbp-B8h] BYREF

  result = ValidateHwnd(*(_QWORD *)(a1 + 16));
  if ( result )
  {
    v3 = INPUTDEST_FROM_PWND(v15, result);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = v3[1];
    v14[0] = *v3;
    v6 = v3[2];
    v14[1] = v5;
    v7 = v3[3];
    v14[2] = v6;
    v8 = v3[4];
    v14[3] = v7;
    v9 = v3[5];
    v14[4] = v8;
    v10 = v3[6];
    v14[5] = v9;
    v11 = v3[8];
    v14[6] = v10;
    v14[7] = v3[7];
    v12 = v3[9];
    v14[8] = v11;
    v13 = v3[10];
    v14[9] = v12;
    v14[10] = v13;
    return CTouchProcessor::DoDeferredPointerActivate(gpTouchProcessor, v14, v4);
  }
  return result;
}
