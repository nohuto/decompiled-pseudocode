/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@@Z @ 0x1C018906C
 * Callers:
 *     ?IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01896B0 (-IVDeSerializeMouseInputBuffer@@YAJPEAU_IVMouseInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C0189050 (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IVMouseInputData **a2)
{
  unsigned __int16 **v2; // rbx
  int v4; // edx
  unsigned int v5; // ebx

  v2 = (unsigned __int16 **)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      100,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v5 = CIVSerializer::Deserialize(this, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      12,
      101,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return v5;
}
