/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_POINTER_DEVICE_INFO@@AEAUtagHID_POINTER_DEVICE_INFO@@_N@Z @ 0x1C0154FE8
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z @ 0x1C0154F0C (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HID_DEVICE_INFO@@AEAUtagHID_DEVICE_INFO@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z @ 0x1C0154B00 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_DEVICE_OUTPUT_CONFIG@@AEAUDEVICE_OUTPUT_CONFIG@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@AEAUtagFRAME_BUTTON_INFO@@_N@Z @ 0x1C0154BB4 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_FRAME_BUTTON_INFO@@AEAUtagFRAME_BUTTON_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z @ 0x1C0155544 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_CALIBRATION_INFO@@AEAUtagHPD_CALIBRATION_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z @ 0x1C01556F8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_FRAME_SCAN_TIME@@AEAUtagHPD_FRAME_SCAN_TIME@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z @ 0x1C01557C4 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PARALLEL_INFO@@AEAUtagHPD_PARALLEL_INFO@@_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PTP_CUSTOM_SETTINGS@@UtagHPD_PTP_CUSTOM_SETTINGS@@_N@Z @ 0x1C01558C8 (-Serialize@CIVSerializer@@QEAAJAEAU_IV_HPD_PTP_CUSTOM_SETTINGS@@UtagHPD_PTP_CUSTOM_SETTINGS@@_N@.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0155D88 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IV_HID_POINTER_DEVICE_INFO *a2,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        bool a4)
{
  CIVSerializer *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // r8
  __int16 *v11; // rdx
  __int16 v12; // ax
  __int64 v13; // rcx
  int v14; // esi
  int v15; // eax
  __int64 v16; // xmm1_8
  struct tagHPD_CALIBRATION_INFO *v17; // r8
  _DWORD *v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  struct tagHPD_PARALLEL_INFO *v21; // r8
  CIVSerializer *v22; // rcx
  bool v23; // r9
  CIVSerializer *v24; // rcx
  unsigned int v25; // r9d
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  __int64 v28; // [rsp+40h] [rbp-28h]
  int v29; // [rsp+48h] [rbp-20h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Eu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  v8 = (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 8);
  v9 = 6LL;
  *(_DWORD *)a2 = *((_DWORD *)a3 + 6);
  v10 = 6LL;
  v11 = (__int16 *)((char *)a3 + 30);
  do
  {
    *((_WORD *)v8 - 2) = *(v11 - 1);
    v12 = *v11;
    v11 += 8;
    *(_WORD *)v8 = v12;
    v8 = (CIVSerializer *)((char *)v8 + 20);
    *((_DWORD *)v8 - 4) = *(_DWORD *)(v11 - 7);
    *((_DWORD *)v8 - 3) = *(_DWORD *)(v11 - 5);
    *((_DWORD *)v8 - 2) = *(_DWORD *)(v11 - 3);
    --v10;
  }
  while ( v10 );
  *(_OWORD *)((char *)a2 + 124) = *(_OWORD *)((char *)a3 + 124);
  *(_OWORD *)((char *)a2 + 140) = *(_OWORD *)((char *)a3 + 140);
  v14 = CIVSerializer::Serialize(
          v8,
          (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 156),
          (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 156));
  if ( v14 >= 0 )
  {
    *((_DWORD *)a2 + 59) = *((_DWORD *)a3 + 67);
    *((_DWORD *)a2 + 61) = *((_DWORD *)a3 + 69);
    v15 = *((_DWORD *)a3 + 76);
    v16 = *((_QWORD *)a3 + 37);
    v27 = *(_OWORD *)((char *)a3 + 280);
    v28 = v16;
    v29 = v15;
    v14 = CIVSerializer::Serialize(v13, (char *)a2 + 248, &v27);
    if ( v14 >= 0 )
    {
      *((_DWORD *)a2 + 69) = *((_DWORD *)a3 + 77) & 1;
      *((_DWORD *)a2 + 70) = (*((_DWORD *)a3 + 77) & 2u) >> 1;
      *((_DWORD *)a2 + 71) = (*((_DWORD *)a3 + 77) & 4u) >> 2;
      *((_DWORD *)a2 + 72) = (*((_DWORD *)a3 + 77) & 8u) >> 3;
      *((_DWORD *)a2 + 73) = (*((_DWORD *)a3 + 77) & 0x10u) >> 4;
      *((_DWORD *)a2 + 74) = (*((_DWORD *)a3 + 77) & 0x20u) >> 5;
      *((_DWORD *)a2 + 75) = (*((_DWORD *)a3 + 77) & 0x40u) >> 6;
      *((_DWORD *)a2 + 76) = (*((_DWORD *)a3 + 77) & 0x80u) >> 7;
      *((_DWORD *)a2 + 77) = (*((_DWORD *)a3 + 77) & 0x100u) >> 8;
      *((_DWORD *)a2 + 78) = (*((_DWORD *)a3 + 77) & 0x200u) >> 9;
      *((_DWORD *)a2 + 79) = (*((_DWORD *)a3 + 77) & 0x400u) >> 10;
      *((_DWORD *)a2 + 80) = (*((_DWORD *)a3 + 77) & 0x800u) >> 11;
      *((_DWORD *)a2 + 81) = (*((_DWORD *)a3 + 77) & 0x1000u) >> 12;
      *((_DWORD *)a2 + 82) = (*((_DWORD *)a3 + 77) & 0x2000u) >> 13;
      *((_DWORD *)a2 + 83) = (*((_DWORD *)a3 + 77) & 0x4000u) >> 14;
      *((_DWORD *)a2 + 84) = (*((_DWORD *)a3 + 77) & 0x8000u) >> 15;
      *((_DWORD *)a2 + 85) = (*((_DWORD *)a3 + 77) & 0x10000u) >> 16;
      *((_DWORD *)a2 + 86) = (*((_DWORD *)a3 + 77) & 0x20000u) >> 17;
      v14 = CIVSerializer::Serialize(
              this,
              (struct _UNICODE_STRING *)a2 + 22,
              (struct _UNICODE_STRING *)((char *)a3 + 312),
              a4);
      if ( v14 >= 0 )
      {
        *((_QWORD *)a2 + 46) = *((unsigned int *)a3 + 82);
        v17 = (struct tagHPD_CALIBRATION_INFO *)*((_QWORD *)a3 + 42);
        if ( v17 )
        {
          v14 = CIVSerializer::Serialize(this, (void **)a2 + 47, v17, a4);
          if ( v14 < 0 )
            goto LABEL_25;
          *((_DWORD *)a2 + 93) = 1;
        }
        v18 = (_DWORD *)((char *)a2 + 468);
        v19 = (_DWORD *)((char *)a3 + 348);
        do
        {
          *((_WORD *)v18 - 2) = *((_WORD *)v19 - 2);
          v20 = *v19;
          v19 += 15;
          *v18 = v20;
          v18 += 16;
          *((_WORD *)v18 - 30) = *((_WORD *)v19 - 28);
          *((_WORD *)v18 - 28) = *((_WORD *)v19 - 27);
          *((_WORD *)v18 - 26) = *((_WORD *)v19 - 26);
          *(v18 - 12) = *(v19 - 12);
          *((_WORD *)v18 - 22) = *((_WORD *)v19 - 22);
          *(v18 - 10) = *(v19 - 10);
          *(v18 - 9) = *(v19 - 9);
          *(v18 - 8) = *(v19 - 8);
          *(v18 - 7) = *(v19 - 7);
          *(v18 - 6) = *(v19 - 6);
          *(v18 - 5) = *(v19 - 5);
          *(v18 - 4) = *(v19 - 4);
          *(v18 - 3) = *(v19 - 3);
          *((_WORD *)v18 - 4) = *((_WORD *)v19 - 4);
          --v9;
        }
        while ( v9 );
        *((_DWORD *)a2 + 212) = 0;
        v21 = (struct tagHPD_PARALLEL_INFO *)*((_QWORD *)a3 + 88);
        if ( v21 )
        {
          v14 = CIVSerializer::Serialize(this, (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 856), v21, a4);
          if ( v14 < 0 )
            goto LABEL_25;
          *((_DWORD *)a2 + 212) = 1;
        }
        *((_DWORD *)a2 + 224) = *((_DWORD *)a3 + 178);
        *((_DWORD *)a2 + 225) = *((_DWORD *)a3 + 179);
        *((_WORD *)a2 + 452) = *((_WORD *)a3 + 360);
        *((_DWORD *)a2 + 227) = *((_DWORD *)a3 + 184);
        *((_QWORD *)a2 + 114) = *((_QWORD *)a3 + 93);
        *((_DWORD *)a2 + 230) = *((_DWORD *)a3 + 188);
        v14 = CIVSerializer::Serialize(
                this,
                (void **)a2 + 116,
                *((void **)a3 + 95),
                2LL * *((unsigned int *)a3 + 244),
                a4);
        if ( v14 >= 0 )
        {
          *((_BYTE *)a2 + 936) = *((_BYTE *)a3 + 768);
          v14 = CIVSerializer::Serialize(
                  v22,
                  (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 944),
                  (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 776),
                  v23);
          if ( v14 >= 0 )
          {
            *((_DWORD *)a2 + 250) = *((_DWORD *)a3 + 208);
            v14 = CIVSerializer::Serialize(
                    this,
                    (struct _UNICODE_STRING *)a2 + 63,
                    (struct _UNICODE_STRING *)((char *)a3 + 840),
                    a4);
            if ( v14 >= 0 )
            {
              v14 = CIVSerializer::Serialize(
                      v24,
                      (struct _IV_HID_POINTER_DEVICE_INFO *)((char *)a2 + 1032),
                      (struct tagHID_POINTER_DEVICE_INFO *)((char *)a3 + 880));
              if ( v14 >= 0 )
              {
                *((_QWORD *)a2 + 130) = *((_QWORD *)a3 + 111);
                *((_DWORD *)a2 + 262) = *((_DWORD *)a3 + 224);
                v25 = (unsigned int)(*((_DWORD *)a3 + 6) - 5) <= 1 ? *((_DWORD *)a3 + 244) : *((_DWORD *)a3 + 178);
                v14 = CIVSerializer::Serialize(
                        this,
                        (struct _IV_HPD_CURSOR **)a2 + 132,
                        *((struct tagHPD_CURSOR **)a3 + 120),
                        v25,
                        12LL * v25,
                        a4);
                if ( v14 >= 0 )
                  *((_DWORD *)a2 + 267) = *((_DWORD *)a3 + 244);
              }
            }
          }
        }
      }
    }
  }
LABEL_25:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Fu,
      (__int64)&WPP_b138f43e013f30a363c7800c3f92de43_Traceguids);
  return (unsigned int)v14;
}
