/*
 * XREFs of ?IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187684
 * Callers:
 *     ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C017E9C8 (-SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C0189508 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 */

__int64 __fastcall IVMeasureKeyboardInput(const struct _UNICODE_STRING *a1, struct _UNICODE_STRING **this)
{
  struct _UNICODE_STRING **v2; // rbx
  int v4; // edx
  unsigned int v5; // ebx

  v2 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(this) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)this,
      12,
      127,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v5 = CIVSerializer::Serialize((CIVSerializer *)v2, v2[2], a1, 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      128,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return v5;
}
