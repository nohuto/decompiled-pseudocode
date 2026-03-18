/*
 * XREFs of ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154878
 * Callers:
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0154F0C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimDevForIVPnpCreatePacket(struct RIMDEV *a1, struct CIVSerializer *a2)
{
  __int64 v4; // rbx
  struct _UNICODE_STRING *v5; // rdx
  int v6; // esi

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x42u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v4 = *(_QWORD *)a2;
  v5 = (struct _UNICODE_STRING *)(*(_QWORD *)a2 + 24LL);
  *(_DWORD *)(v4 + 4) = 1;
  *(_QWORD *)(v4 + 8) = 4LL;
  *(_DWORD *)(v4 + 16) = 1;
  v6 = CIVSerializer::Serialize(a2, v5, (struct _UNICODE_STRING *)a1 + 13, 0);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v4 + 40) = *((unsigned __int8 *)a1 + 48);
    *(_DWORD *)(v4 + 44) = -__CFSHR__(*((_DWORD *)a1 + 46), 14);
    *(_DWORD *)(v4 + 48) = -__CFSHR__(*((_DWORD *)a1 + 46), 12);
    *(_DWORD *)(v4 + 52) = -__CFSHR__(*((_DWORD *)a1 + 46), 13);
    *(_DWORD *)(v4 + 56) = -__CFSHR__(*((_DWORD *)a1 + 46), 15);
    *(_DWORD *)(v4 + 64) = -__CFSHR__(*((_DWORD *)a1 + 46), 26);
    *(_DWORD *)(v4 + 68) = (*((_DWORD *)a1 + 50) & 0x40u) >> 6;
    *(_DWORD *)(v4 + 72) = (*((_DWORD *)a1 + 50) & 0x80u) >> 7;
    *(_DWORD *)(v4 + 76) = (*((_DWORD *)a1 + 50) & 0x200u) >> 9;
    v6 = CIVSerializer::Serialize(a2, (void **)(v4 + 80), *((void **)a1 + 40), *((unsigned int *)a1 + 82), 0);
    if ( v6 >= 0 )
    {
      *(_DWORD *)(v4 + 88) = *((_DWORD *)a1 + 114);
      if ( *((_BYTE *)a1 + 48) == 2 )
        v6 = CIVSerializer::Serialize(
               a2,
               (struct _IV_HID_DEVICE_INFO *)(v4 + 96),
               (struct RIMDEV *)((char *)a1 + 464),
               0);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x43u,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v6;
}
