/*
 * XREFs of ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C015439C
 * Callers:
 *     ?ivCallback@CHidInput@@MEAAJPEAX@Z @ 0x1C014D340 (-ivCallback@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01540C8 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z.c)
 */

__int64 __fastcall IVDeSerializeIVTouchInputPacket(struct _IVTouchInputPacket *a1, struct CIVSerializer *a2)
{
  int v4; // ebx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x50u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  *((_QWORD *)a1 + 3) = *(_QWORD *)a2 + (*((_QWORD *)a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL);
  v4 = CIVSerializer::Deserialize(a2, (struct _IVRIMPOINTERRAWDATA **)a1 + 11);
  if ( v4 >= 0 )
    v4 = CIVSerializer::Deserialize(a2, (unsigned __int16 **)a1 + 12);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x51u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v4;
}
