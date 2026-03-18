/*
 * XREFs of ?SerializeKeyboardInputForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C017E9C8
 * Callers:
 *     ?ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017F010 (-ivRootDeliverKeyboardInput@CKeyboardSensor@@MEAAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PE.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0187044 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187684 (-IVMeasureKeyboardInput@@YAJAEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187CAC (-IVSerializeKeyboardInput@@YAJAEBU_KEYBOARD_INPUT_DATA@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 */

__int64 __fastcall CKeyboardSensor::SerializeKeyboardInputForContainer(
        CKeyboardSensor *this,
        struct CIVSerializer *a2,
        const struct _UNICODE_STRING *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  struct CIVSerializer *v6; // rdi
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ebx
  int v10; // r9d

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      16,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  v7 = IVMeasureKeyboardInput(a3, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 17;
    goto LABEL_13;
  }
  v7 = CIVSerializer::ExtendByMeasuredExtra(v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 18;
    goto LABEL_13;
  }
  v7 = IVSerializeKeyboardInput(a4, a3, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v9;
    v10 = 19;
LABEL_13:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v8, 12, v10, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      20,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  return v9;
}
