/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0155544
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(CIVSerializer *this, void **a2, void **a3, bool a4)
{
  int v8; // esi
  void *v9; // rax
  void *v10; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x16u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v8 = CIVSerializer::Serialize(this, a2, *a3, *((unsigned int *)a3 + 2), a4);
  if ( v8 >= 0 )
  {
    *((_DWORD *)a2 + 2) = *((_DWORD *)a3 + 2);
    v8 = CIVSerializer::Serialize(this, a2 + 2, a3[2], *((unsigned int *)a3 + 6), a4);
    if ( v8 >= 0 )
    {
      *((_DWORD *)a2 + 6) = *((_DWORD *)a3 + 6);
      v8 = CIVSerializer::Serialize(this, a2 + 4, a3[4], *((unsigned int *)a3 + 10), a4);
      if ( v8 >= 0 )
      {
        *((_DWORD *)a2 + 10) = *((_DWORD *)a3 + 10);
        v8 = CIVSerializer::Serialize(this, a2 + 6, a3[6], *((unsigned int *)a3 + 14), a4);
        if ( v8 >= 0 )
        {
          *((_DWORD *)a2 + 14) = *((_DWORD *)a3 + 14);
          v8 = CIVSerializer::Serialize(this, a2 + 8, a3[8], *((unsigned int *)a3 + 18), a4);
          if ( v8 >= 0 )
          {
            *((_DWORD *)a2 + 18) = *((_DWORD *)a3 + 18);
            *((_DWORD *)a2 + 19) = *((_DWORD *)a3 + 19);
            v9 = a3[10];
            if ( v9 == a3[2] )
            {
              v10 = a2[2];
LABEL_10:
              a2[10] = v10;
              goto LABEL_11;
            }
            if ( v9 == a3[4] )
            {
              v10 = a2[4];
              goto LABEL_10;
            }
            if ( v9 == a3[6] )
            {
              v10 = a2[6];
              goto LABEL_10;
            }
            if ( v9 == a3[8] )
              a2[10] = a2[8];
          }
        }
      }
    }
  }
LABEL_11:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x17u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v8;
}
