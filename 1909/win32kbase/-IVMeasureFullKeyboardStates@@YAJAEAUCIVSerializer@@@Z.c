/*
 * XREFs of ?IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C0187590
 * Callers:
 *     ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C017E8A4 (-SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0189B24 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVMeasureFullKeyboardStates(struct CIVSerializer *this)
{
  void **v2; // rsi
  int v3; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      133,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  v2 = (void **)*((_QWORD *)this + 2);
  v3 = CIVSerializer::Serialize(this, v2, gafRawKeyState, 0x40uLL, 1);
  if ( v3 >= 0 )
    v3 = CIVSerializer::Serialize(this, v2 + 1, &gafAsyncKeyState, 0x40uLL, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      134,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  return (unsigned int)v3;
}
