/*
 * XREFs of ApiSetEditionPointerActivate @ 0x1C013F23C
 * Callers:
 *     ?DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z @ 0x1C01111E0 (-DoDeferredPointerActivate@CTouchProcessor@@QEAAXUtagINPUTDEST@@_K@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0116C0C (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C011BCA0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPointerActivate(
        _OWORD *a1,
        unsigned int a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v19[11]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x24u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  result = IsEditionPointerActivateSupported();
  if ( (int)result >= 0 )
  {
    v10 = a1[1];
    v19[0] = *a1;
    v11 = a1[2];
    v19[1] = v10;
    v12 = a1[3];
    v19[2] = v11;
    v13 = a1[4];
    v19[3] = v12;
    v14 = a1[5];
    v19[4] = v13;
    v15 = a1[6];
    v19[5] = v14;
    v16 = a1[8];
    v19[6] = v15;
    v19[7] = a1[7];
    v17 = a1[9];
    v19[8] = v16;
    v18 = a1[10];
    v19[9] = v17;
    v19[10] = v18;
    result = ((__int64 (__fastcall *)(_OWORD *, _QWORD, _QWORD, __int64, __int64, _DWORD))EditionPointerActivate)(
               v19,
               a2,
               a3,
               a4,
               a5,
               0);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             5u,
             0xFu,
             0x25u,
             (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  return result;
}
