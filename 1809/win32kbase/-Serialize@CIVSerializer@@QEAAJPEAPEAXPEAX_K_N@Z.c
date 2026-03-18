/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C0154464 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C015455C (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154654 (-IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154878 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154A0C (-IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z @ 0x1C0154C44 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HIDDESC@@AEAUtagHIDDESC@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0155544 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z @ 0x1C0155B58 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z.c)
 * Callees:
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, void **a2, void *a3, __int64 a4, bool a5)
{
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rcx
  size_t v9; // r9
  __int64 v10; // r10
  const void *v11; // r11
  void *v12; // rcx

  v7 = (a4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a5 )
  {
    *((_QWORD *)this + 2) += v7;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, v7) )
  {
    v12 = (void *)(v10 + *v8);
    *a2 = v12;
    memmove(v12, v11, v9);
    *a2 = (void *)(((__int64)*a2 - *(_QWORD *)this) | 1);
    return 0LL;
  }
  return 3221225495LL;
}
