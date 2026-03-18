/*
 * XREFs of ApiSetInputTransformOnInput @ 0x1C019D8BC
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016C9CC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetInputTransformOnInput(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v6; // edi
  int v7; // edx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v15[7]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v16; // [rsp+A0h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      232,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  v6 = 0;
  if ( (int)IsInputTransformOnInputSupported() >= 0 )
  {
    v8 = *(_OWORD *)(a1 + 16);
    v15[0] = *(_OWORD *)a1;
    v9 = *(_OWORD *)(a1 + 32);
    v15[1] = v8;
    v10 = *(_OWORD *)(a1 + 48);
    v15[2] = v9;
    v11 = *(_OWORD *)(a1 + 64);
    v15[3] = v10;
    v12 = *(_OWORD *)(a1 + 80);
    v15[4] = v11;
    v13 = *(_OWORD *)(a1 + 96);
    v15[5] = v12;
    *(_QWORD *)&v12 = *(_QWORD *)(a1 + 112);
    v15[6] = v13;
    v16 = v12;
    v6 = InputTransformOnInput(v15, v4, a3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      10,
      233,
      (__int64)&WPP_a5ebb53a70223fffc2665dca357d30fc_Traceguids);
  }
  return v6;
}
