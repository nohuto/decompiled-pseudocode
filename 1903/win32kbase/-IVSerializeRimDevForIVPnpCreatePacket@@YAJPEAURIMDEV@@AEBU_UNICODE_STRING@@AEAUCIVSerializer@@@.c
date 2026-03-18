/*
 * XREFs of ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C018A340
 * Callers:
 *     ?ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C018F12C (-ivRootPnpCreated@CBaseInput@@AEAAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C018AB3C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_KEYBOARD_DEVICE_INFO@@AEAUtagKEYBOARD_DEVICE_INFO@@_N@Z @ 0x1C018B668 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_KEYBOARD_DEVICE_INFO@@AEAUtagKEYBOARD_DEVICE_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C018B6F8 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C018BD14 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall IVSerializeRimDevForIVPnpCreatePacket(
        struct RIMDEV *a1,
        const struct _UNICODE_STRING *a2,
        struct CIVSerializer *a3)
{
  const struct _UNICODE_STRING *v4; // r14
  __int64 v6; // rbx
  int v7; // edx
  int v8; // esi
  bool v9; // r9
  int v10; // eax

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      104,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  v6 = *((_QWORD *)a3 + 2);
  *(_DWORD *)v6 = 1;
  v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v6 + 8), (const struct _UNICODE_STRING *)a1 + 13, 0);
  if ( v8 >= 0 )
  {
    *(_DWORD *)(v6 + 24) = *((unsigned __int8 *)a1 + 48);
    *(_DWORD *)(v6 + 28) = -__CFSHR__(*((_DWORD *)a1 + 46), 14);
    *(_DWORD *)(v6 + 32) = -__CFSHR__(*((_DWORD *)a1 + 46), 12);
    *(_DWORD *)(v6 + 36) = -__CFSHR__(*((_DWORD *)a1 + 46), 13);
    *(_DWORD *)(v6 + 40) = -__CFSHR__(*((_DWORD *)a1 + 46), 15);
    *(_DWORD *)(v6 + 48) = -__CFSHR__(*((_DWORD *)a1 + 46), 26);
    *(_DWORD *)(v6 + 52) = (*((_DWORD *)a1 + 50) & 0x40u) >> 6;
    *(_DWORD *)(v6 + 56) = (*((_DWORD *)a1 + 50) & 0x80u) >> 7;
    *(_DWORD *)(v6 + 60) = (*((_DWORD *)a1 + 50) & 0x200u) >> 9;
    v8 = CIVSerializer::Serialize(a3, (void **)(v6 + 64), *((void **)a1 + 40), *((unsigned int *)a1 + 82), 0);
    if ( v8 >= 0 )
    {
      *(_DWORD *)(v6 + 72) = *((_DWORD *)a1 + 114);
      *(_DWORD *)(v6 + 1292) = *((_DWORD *)a1 + 327);
      *(_DWORD *)(v6 + 1280) = *((_DWORD *)a1 + 98);
      *(_DWORD *)(v6 + 1284) = *((_DWORD *)a1 + 99);
      *(_DWORD *)(v6 + 1288) = *((_DWORD *)a1 + 100);
      if ( *((_BYTE *)a1 + 48) )
      {
        if ( *((_BYTE *)a1 + 48) == 1 )
        {
          v10 = CIVSerializer::Serialize(
                  (CIVSerializer *)((unsigned int)*((unsigned __int8 *)a1 + 48) - 1),
                  (struct _IV_KEYBOARD_DEVICE_INFO *)(v6 + 80),
                  (struct RIMDEV *)((char *)a1 + 464),
                  v9);
        }
        else
        {
          if ( *((_BYTE *)a1 + 48) != 2 )
            goto LABEL_13;
          v10 = CIVSerializer::Serialize(
                  a3,
                  (struct _IV_HID_DEVICE_INFO *)(v6 + 80),
                  (struct RIMDEV *)((char *)a1 + 464),
                  0);
        }
        v8 = v10;
      }
      else
      {
        v8 = 0;
        *(_WORD *)(v6 + 80) = *((_WORD *)a1 + 232);
        *(_WORD *)(v6 + 84) = *((_WORD *)a1 + 233);
        *(_WORD *)(v6 + 88) = *((_WORD *)a1 + 234);
        *(_DWORD *)(v6 + 92) = *((_DWORD *)a1 + 118);
        *(_WORD *)(v6 + 96) = *((_WORD *)a1 + 442);
        *(_WORD *)(v6 + 100) = *((_WORD *)a1 + 443);
        *(_WORD *)(v6 + 104) = *((_WORD *)a1 + 444);
      }
LABEL_13:
      if ( v8 >= 0 )
        v8 = CIVSerializer::Serialize(a3, (struct _UNICODE_STRING *)(v6 + 1296), v4, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      12,
      105,
      (__int64)&WPP_ead607961d3c3e051bc3eba132247bd1_Traceguids);
  }
  return (unsigned int)v8;
}
