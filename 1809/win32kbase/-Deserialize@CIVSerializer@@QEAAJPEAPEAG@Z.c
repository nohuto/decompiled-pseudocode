/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z @ 0x1C0153AA0 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0153CCC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C0153E50 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C0153FAC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z @ 0x1C01540C8 (-Deserialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@@Z.c)
 *     ?IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z @ 0x1C0154228 (-IVDeSerializeIVPnpCreatePacketForRimDev@@YAJPEAU_IVPnpCreatePacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVRawInputPacketForRimDev@@YAJPEAU_IVRawInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C01542F8 (-IVDeSerializeIVRawInputPacketForRimDev@@YAJPEAU_IVRawInputPacket@@AEAUCIVSerializer@@@Z.c)
 *     ?IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z @ 0x1C015439C (-IVDeSerializeIVTouchInputPacket@@YAJPEAU_IVTouchInputPacket@@AEAUCIVSerializer@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, unsigned __int16 **a2)
{
  if ( *a2 )
    *a2 = (unsigned __int16 *)(*(_QWORD *)this + ((unsigned __int64)*a2 & 0xFFFFFFFFFFFFFFFEuLL));
  return 0LL;
}
