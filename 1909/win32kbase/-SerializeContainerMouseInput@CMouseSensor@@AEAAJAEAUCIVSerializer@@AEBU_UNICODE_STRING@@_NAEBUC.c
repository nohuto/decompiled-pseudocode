/*
 * XREFs of ?SerializeContainerMouseInput@CMouseSensor@@AEAAJAEAUCIVSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x1C0185480
 * Callers:
 *     ?SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C0185188 (-SendMouseInputToContainer@CMouseSensor@@AEAAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0187044 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187740 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0187DAC (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 */

__int64 __fastcall CMouseSensor::SerializeContainerMouseInput(
        CMouseSensor *this,
        struct CIVSerializer *a2,
        const struct _UNICODE_STRING *a3,
        bool a4,
        const struct ContainerMouseInput *a5)
{
  struct CIVSerializer *v7; // rdi
  int v8; // eax
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r9d

  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      18,
      (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
  }
  v8 = IVMeasureMouseInputBuffer(a5, a3, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 19;
    goto LABEL_13;
  }
  v8 = CIVSerializer::ExtendByMeasuredExtra(v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 20;
    goto LABEL_13;
  }
  v8 = IVSerializeMouseInputBuffer(a4, a5, a3, v7);
  v10 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v10;
    v11 = 21;
LABEL_13:
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v9, 12, v11, (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids, v8);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      12,
      22,
      (__int64)&WPP_4f37c21e97fd386cd8c91c1406c012ed_Traceguids);
  }
  return v10;
}
