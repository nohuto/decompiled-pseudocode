/*
 * XREFs of ?SerializeFullKeyboardStatesForContainer@CKeyboardSensor@@AEAAJAEAUCIVSerializer@@@Z @ 0x1C017E8A4
 * Callers:
 *     ?ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z @ 0x1C017EE94 (-ivRootDeliverFullKeyboardStates@CKeyboardSensor@@AEAAJAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0187044 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C0187590 (-IVMeasureFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z @ 0x1C0187BB8 (-IVSerializeFullKeyboardStates@@YAJAEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CKeyboardSensor::SerializeFullKeyboardStatesForContainer(
        CKeyboardSensor *this,
        struct CIVSerializer *a2)
{
  struct CIVSerializer *v2; // rdi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // ebx
  int v6; // r9d

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      21,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  v3 = IVMeasureFullKeyboardStates(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 22;
    goto LABEL_13;
  }
  v3 = CIVSerializer::ExtendByMeasuredExtra(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 23;
    goto LABEL_13;
  }
  v3 = IVSerializeFullKeyboardStates(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v5;
    v6 = 24;
LABEL_13:
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v4, 12, v6, (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids, v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      25,
      (__int64)&WPP_e0ae19b586f83ba3475131465c1bccd2_Traceguids);
  }
  return v5;
}
