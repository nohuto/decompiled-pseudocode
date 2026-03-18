/*
 * XREFs of ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1C0153CCC
 * Callers:
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z @ 0x1C0153C0C (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@@Z @ 0x1C0153A34 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z @ 0x1C0153E50 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@@Z @ 0x1C0153F40 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z @ 0x1C0153FAC (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PTP_CUSTOM_SETTINGS@@@Z @ 0x1C0154040 (-Deserialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PTP_CUSTOM_SETTINGS@@@Z.c)
 *     ?Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z @ 0x1C01540AC (-Deserialize@CIVSerializer@@QEAAJPEAPEAG@Z.c)
 */

__int64 __fastcall CIVSerializer::Deserialize(CIVSerializer *this, struct _IV_HID_POINTER_DEVICE_INFO *a2)
{
  CIVSerializer *v4; // rcx
  int v5; // ebx
  struct _IV_HPD_FRAME_SCAN_TIME *v6; // rdx
  CIVSerializer *v7; // rcx
  struct _IV_FRAME_BUTTON_INFO *v8; // rdx
  CIVSerializer *v9; // rcx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x34u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x28u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = (CIVSerializer *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x29u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v5 = CIVSerializer::Deserialize(v4, a2);
  if ( v5 >= 0 )
  {
    *((_QWORD *)a2 + 45) = *(_QWORD *)this + (*((_QWORD *)a2 + 45) & 0xFFFFFFFFFFFFFFFEuLL);
    v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)a2 + 47);
    if ( v5 >= 0 )
    {
      v5 = CIVSerializer::Deserialize(this, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 856));
      if ( v5 >= 0 )
      {
        v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)a2 + 116);
        if ( v5 >= 0 )
        {
          v5 = CIVSerializer::Deserialize(v7, v6);
          if ( v5 >= 0 )
          {
            *((_QWORD *)a2 + 127) = *(_QWORD *)this + (*((_QWORD *)a2 + 127) & 0xFFFFFFFFFFFFFFFEuLL);
            v5 = CIVSerializer::Deserialize(v9, v8);
            if ( v5 >= 0 )
              v5 = CIVSerializer::Deserialize(this, (unsigned __int16 **)a2 + 132);
          }
        }
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x35u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v5;
}
