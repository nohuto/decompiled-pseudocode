/*
 * XREFs of NdisIMVBusDeviceAdd @ 0x1C007FDC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z @ 0x1C007F9C8 (-ndisIMVBusIsValidInput@@YAEPEAXPEAU_NDIS_VBUS_DEVICE_CHARACTERISTICS@@@Z.c)
 *     ndisVBusVirtMiniAdd @ 0x1C00BEB7C (ndisVBusVirtMiniAdd.c)
 */

__int64 __fastcall NdisIMVBusDeviceAdd(_BYTE *a1, struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *a2)
{
  struct _NDIS_VBUS_DEVICE_CHARACTERISTICS *v2; // rbx
  unsigned int v4; // edi
  char v6; // [rsp+30h] [rbp-18h]
  char v7[4]; // [rsp+38h] [rbp-10h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      38,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      v6);
  }
  if ( ndisIMVBusIsValidInput(a1, v2) )
    v4 = ndisVBusVirtMiniAdd((char *)v2 + 8, (char *)v2 + 24, (char *)v2 + 72);
  else
    v4 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v4;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x27u,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      (char)a1,
      (char)v2,
      *(_DWORD *)v7);
  }
  return v4;
}
