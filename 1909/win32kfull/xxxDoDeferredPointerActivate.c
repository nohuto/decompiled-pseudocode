/*
 * XREFs of xxxDoDeferredPointerActivate @ 0x1C01F3688
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 */

__int64 __fastcall xxxDoDeferredPointerActivate(__int64 a1)
{
  __int64 result; // rax
  _DWORD *v3; // rax
  __int64 v4; // r8
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v11[7]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v12; // [rsp+90h] [rbp-98h]
  _DWORD v13[34]; // [rsp+A0h] [rbp-88h] BYREF

  result = ValidateHwnd(*(_QWORD *)(a1 + 16));
  if ( result )
  {
    v3 = INPUTDEST_FROM_PWND(v13, result);
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *((_OWORD *)v3 + 1);
    v11[0] = *(_OWORD *)v3;
    v6 = *((_OWORD *)v3 + 2);
    v11[1] = v5;
    v7 = *((_OWORD *)v3 + 3);
    v11[2] = v6;
    v8 = *((_OWORD *)v3 + 4);
    v11[3] = v7;
    v9 = *((_OWORD *)v3 + 5);
    v11[4] = v8;
    v10 = *((_OWORD *)v3 + 6);
    v11[5] = v9;
    *(_QWORD *)&v9 = *((_QWORD *)v3 + 14);
    v11[6] = v10;
    v12 = v9;
    return CTouchProcessor::DoDeferredPointerActivate(gpTouchProcessor, v11, v4);
  }
  return result;
}
