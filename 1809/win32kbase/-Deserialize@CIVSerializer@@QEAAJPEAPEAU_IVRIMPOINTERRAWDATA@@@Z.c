/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01540C8
 * Callers:
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C015439C (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IVRIMPOINTERRAWDATA **a2)
{
  int v4; // ebx
  unsigned __int16 *i; // r8
  CIVSerializer *v6; // rcx
  __int64 v7; // r8
  unsigned __int16 **v8; // rdx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Eu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = CIVSerializer::Deserialize(this, (unsigned __int16 **)a2);
  if ( v4 >= 0 )
  {
    for ( i = (unsigned __int16 *)*a2; i; i = *v8 )
    {
      v4 = CIVSerializer::Deserialize(this, (unsigned __int16 **)i + 1);
      if ( v4 < 0 )
        break;
      v4 = CIVSerializer::Deserialize(v6, (unsigned __int16 **)(v7 + 16));
      if ( v4 < 0 )
        break;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x3Fu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v4;
}
