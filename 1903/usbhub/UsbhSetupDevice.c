/*
 * XREFs of UsbhSetupDevice @ 0x1C0021740
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012CC0 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012960 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001D1AC (Usbh__TestPoint__Ulong.c)
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     UsbhFreeID @ 0x1C001DC1C (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     UsbhGetMsOsContainerID @ 0x1C00216C8 (UsbhGetMsOsContainerID.c)
 *     UsbhGetLanguageIdString @ 0x1C0021C54 (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0021DFC (UsbhBuildCompatibleID.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C0021E80 (UsbhGetMSOS_Descriptor.c)
 *     UsbhUpdateUxdSettings @ 0x1C002203C (UsbhUpdateUxdSettings.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0022354 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildDeviceID @ 0x1C0024990 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024C14 (UsbhBuildHardwareID.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0026154 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C00262B8 (UsbhGetDeviceInformation.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0044EB0 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0045010 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C00457E8 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0048CD0 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0048E50 (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C0056B94 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C0056CA0 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C0059D4C (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C005A138 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C005B198 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C005B364 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C005B440 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C006035C (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // r13
  _DWORD *v7; // rbx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  int *v18; // r15
  __int64 result; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  _DWORD *v22; // rax
  int (__fastcall *v23)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *); // r10
  __int64 v24; // rcx
  int BosDescriptor; // r14d
  int v26; // edx
  int v27; // r8d
  PDEVICE_OBJECT v28; // rcx
  __int64 v29; // rax
  void *v30; // rcx
  void *v31; // rcx
  void *v32; // rcx
  signed int v33; // r14d
  int v34; // eax
  unsigned int v35; // r10d
  int v36; // r8d
  char AlternateUsbDescriptors; // r12
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  int v41; // ecx
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // eax
  char v45; // cl
  char v46; // al
  __int128 v47; // xmm0
  const EVENT_DESCRIPTOR *v48; // r9
  _QWORD *PoolWithTag; // rax
  int v50; // r8d
  void *v51; // r14
  int QualifierDescriptorFromDevice; // eax
  int v53; // [rsp+48h] [rbp-51h]
  int v54; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v55[4]; // [rsp+54h] [rbp-45h] BYREF
  int v56; // [rsp+58h] [rbp-41h] BYREF
  int v57; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v58; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v59; // [rsp+68h] [rbp-31h]
  _QWORD v60[7]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v61; // [rsp+A8h] [rbp+Fh] BYREF
  char v62; // [rsp+B0h] [rbp+17h]
  int v63; // [rsp+B1h] [rbp+18h]

  v54 = 0;
  v56 = 0;
  v55[0] = 0;
  v59 = FdoExt(a1);
  v6 = v59;
  v7 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *((unsigned __int16 *)v7 + 714));
  v8 = (void *)*((_QWORD *)v7 + 299);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v7 + 299) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v7 + 142);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v7 + 142) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v7 + 143);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v7 + 143) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v7 + 280);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v7 + 280) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v7 + 300);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v7 + 300) = 0LL;
  }
  v13 = (void *)*((_QWORD *)v7 + 355);
  *((_QWORD *)v7 + 301) = 0LL;
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v7 + 355) = 0LL;
  }
  v14 = (void *)*((_QWORD *)v7 + 267);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)v7 + 267) = 0LL;
    v7[533] = 0;
  }
  v7[355] &= ~0x200u;
  v15 = (void *)*((_QWORD *)v7 + 273);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)v7 + 273) = 0LL;
    v7[545] = 0;
  }
  v16 = (void *)*((_QWORD *)v7 + 275);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)v7 + 275) = 0LL;
    v7[549] = 0;
  }
  v17 = (void *)*((_QWORD *)v7 + 316);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)v7 + 316) = 0LL;
  }
  v18 = v7 + 706;
  memset(v7 + 706, 0, 0x40uLL);
  result = UsbhQueryPortState(a1, *((_WORD *)v7 + 714), (__int64)&v54, &v56);
  if ( a3 )
    *a3 = v56;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v7[705] = 1073807368;
    return result;
  }
  if ( (v54 & 0x200) != 0 )
  {
    v7[292] = 0;
    v20 = 0LL;
  }
  else
  {
    if ( (v54 & 0x400) != 0 )
      v20 = 2LL;
    else
      v20 = 1LL;
    v7[292] = v20;
  }
  Log(a1, 4, 1936999473, a2, v20);
  v58 = 18;
  v57 = 0;
  v21 = *((_QWORD *)v7 + 145);
  v22 = FdoExt(a1);
  v23 = (int (__fastcall *)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *))*((_QWORD *)v22 + 534);
  if ( !v23 || v23(*((_QWORD *)v22 + 529), v21, v7 + 350, &v58, 0LL, &v57) < 0 )
    goto LABEL_133;
  UsbhGetInitRegUsbDeviceFlags(v24, a2);
  if ( !*((_BYTE *)v7 + 2895) )
    goto LABEL_31;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v7 + 722) < 0 )
    goto LABEL_85;
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_133:
    v7[705] = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v7 + 1400, v36, 0, 0LL) )
  {
    v7[705] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v7 + 145), v7 + 350, 0LL);
LABEL_31:
  result = UsbhGetDeviceInformation(a1);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v7 + 701) <= 0x200u || (v7[358] & 0x20000) != 0 )
    goto LABEL_33;
  BosDescriptor = UsbhGetBosDescriptor(*((_QWORD *)v7 + 148), a2, &v54);
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  memset(v60, 0, sizeof(v60));
  AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, *((_QWORD *)v7 + 300), (int)v7 + 1400, v54, v60);
  if ( AlternateUsbDescriptors == 1 )
    v7[701] |= 0x20u;
  v38 = v60[3];
  if ( v60[3] )
  {
    if ( !*(_BYTE *)(v60[3] + 7LL) || (v7[355] & 0x40000000) != 0 )
    {
LABEL_81:
      if ( v38 )
      {
        *v18 |= 1u;
        v7[358] &= 0xFFFFF9FF;
        if ( *(_WORD *)(v38 + 4) )
        {
          UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v7 + 145), 0LL, *(unsigned __int8 *)(v38 + 6));
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, v60[3]);
          if ( BosDescriptor < 0 )
          {
            v7[705] = 1073807388;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, v60[3]);
          if ( !AlternateUsbDescriptors )
          {
            v7[705] = 1073807389;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE);
            return 3221225485LL;
          }
          v41 = *v18;
          if ( (*v18 & 0x200) != 0 )
            v7[355] |= 0x20u;
          if ( (v7[295] & 0x10) != 0 && (v7[355] & 4) == 0 && (v41 & 0x80u) != 0 )
          {
            LOBYTE(v40) = 1;
            v42 = *(unsigned __int8 *)(*((_QWORD *)v7 + 357) + 5LL);
            if ( (v6[640] & 1) == 0 )
              v42 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v7 + 145), v40, v42);
            v7[355] |= 0x20000000u;
          }
        }
      }
      goto LABEL_96;
    }
    v39 = *(_QWORD *)v60[3];
    *v18 |= 4u;
    *((_QWORD *)v7 + 361) = v39;
    BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v38);
    if ( BosDescriptor >= 0 )
    {
      AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, v60);
      if ( AlternateUsbDescriptors )
      {
        RtlWriteRegistryValue(0, *((PCWSTR *)v7 + 143), L"MsOs20DescriptorSetInfo", 3u, v7 + 722, 8u);
        v38 = v60[3];
        v6 = v59;
        goto LABEL_81;
      }
      return 3221225485LL;
    }
LABEL_85:
    v7[705] = 1073807390;
    return 3221225485LL;
  }
LABEL_96:
  v43 = v60[4];
  if ( v60[4] )
  {
    v7[358] |= 0x40000u;
    v7[762] = *(_DWORD *)(v43 + 22);
    v61 = *((_QWORD *)v7 + 382);
    v44 = *(_DWORD *)(v43 + 22);
    v54 = 0;
    v62 = 1;
    v63 = v44;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v61, 13LL, 0LL, 0LL, 0, 0);
    UsbDualRoleFeaturesQueryLocalMachine(&v54);
    LOBYTE(v61) = 64;
    HIWORD(v61) = 0;
    LOWORD(v56) = 0;
    v45 = *(_BYTE *)(v60[4] + 21LL);
    *(_DWORD *)((char *)&v61 + 2) = v54;
    BYTE1(v61) = v45;
    BosDescriptor = UsbhSyncSendCommandToDevice(*((_QWORD *)v7 + 148), a2, &v61, 0LL, &v56);
    if ( BosDescriptor < 0 )
      Log(a1, 4, 1399075121, 0LL, 0LL);
  }
  if ( v60[5] )
  {
    result = UsbhGetBillboardInfo(*((_QWORD *)v7 + 148));
    BosDescriptor = result;
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)v7 + 301) = v60[5];
  }
  if ( *(_BYTE *)(*((_QWORD *)v7 + 299) + 4LL) > 1u && LOBYTE(v60[6]) == 1 )
  {
    v46 = *((_BYTE *)v7 + 1404);
    if ( !v46 || v46 == -17 && *((_BYTE *)v7 + 1405) == 2 && *((_BYTE *)v7 + 1406) == 1 )
      v7[355] |= 0x20u;
  }
  if ( !*((_BYTE *)v7 + 2732) && AlternateUsbDescriptors == 1 && v60[2] )
  {
    v47 = *(_OWORD *)(v60[2] + 4LL);
    *((_BYTE *)v7 + 2732) = 1;
    *(_OWORD *)(v7 + 679) = v47;
  }
  if ( v60[1] )
  {
    v7[355] |= 0x80000u;
    v7[701] |= 0x200u;
  }
LABEL_33:
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v18 & 2) == 0 )
  {
    BosDescriptor = UsbhGetMSOS_Descriptor(a1);
    if ( BosDescriptor != -1073741637 && (BosDescriptor & 0xC0000000) == 0xC0000000 )
    {
      v48 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_118:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v48);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, v55);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    BosDescriptor = UsbhGetSerialNumber(a1, a2, (__int64)(v7 + 532));
    v28 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
    if ( (_DWORD)v28 == -1073741824 )
    {
      v48 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
      goto LABEL_118;
    }
    v29 = *((_QWORD *)v7 + 267);
    if ( v29 )
    {
      v7[355] |= 0x200u;
      v28 = (PDEVICE_OBJECT)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v28 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            v26,
            v27,
            40,
            (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
            v29);
      }
    }
    if ( (v7[358] & 0x400) != 0 && (v7[355] & 0x20) == 0 )
      *((_QWORD *)v7 + 316) = UsbhGetMsOsExtendedConfigDesc(v28, a2);
    if ( (v7[295] & 0x10) == 0 )
      BosDescriptor = UsbhGetMsOsContainerID(a1, a2);
    if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
      return (unsigned int)BosDescriptor;
    v30 = (void *)*((_QWORD *)v7 + 263);
    if ( v30 )
    {
      ExFreePoolWithTag(v30, 0);
      *((_QWORD *)v7 + 263) = 0LL;
      v7[525] = 0;
    }
    v31 = (void *)*((_QWORD *)v7 + 261);
    if ( v31 )
    {
      ExFreePoolWithTag(v31, 0);
      *((_QWORD *)v7 + 261) = 0LL;
      v7[521] = 0;
    }
    v32 = (void *)*((_QWORD *)v7 + 265);
    if ( v32 )
    {
      ExFreePoolWithTag(v32, 0);
      *((_QWORD *)v7 + 265) = 0LL;
      v7[529] = 0;
    }
    v33 = UsbhBuildDeviceID(a1, a2, v7 + 520);
    if ( v33 < 0 )
      goto LABEL_52;
    v33 = UsbhBuildHardwareID(a1, a2, v7 + 524);
    if ( v33 >= 0 )
    {
      v33 = UsbhBuildCompatibleID(a1, a2, v7 + 528);
      if ( (v33 & 0xC0000000) != 0xC0000000 )
        goto LABEL_52;
      UsbhFreeID((__int64)(v7 + 524));
    }
    UsbhFreeID((__int64)(v7 + 520));
LABEL_52:
    UsbhGetLanguageIdString(a1);
    if ( *((_BYTE *)v7 + 1415) && (v7[358] & 0x800) == 0 )
      UsbhGetProductIdString(*((_QWORD *)v7 + 148), a2, 0x409u, (__int64)(v7 + 540));
    if ( v33 >= 0 && v59[634] == 1 && v7[292] == 1 && *((_WORD *)v7 + 701) >= 0x200u )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
      v51 = PoolWithTag;
      if ( PoolWithTag )
      {
        LOWORD(v56) = 10;
        *PoolWithTag = 0LL;
        *((_WORD *)PoolWithTag + 4) = 0;
        QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(
                                          a1,
                                          a2,
                                          v50,
                                          (_DWORD)PoolWithTag,
                                          (__int64)&v56);
        if ( QualifierDescriptorFromDevice >= 0 )
        {
          LOBYTE(v53) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v7 + 714),
            100,
            (int)v51,
            10,
            QualifierDescriptorFromDevice,
            0,
            usbfile_bus_c,
            4558,
            v53);
          v7[355] |= 1u;
        }
        ExFreePoolWithTag(v51, 0);
      }
      v33 = 0;
    }
    v34 = Usbh__TestPoint__Ulong(a1, 6u, v33, *((unsigned __int16 *)v7 + 714));
    Log(a1, 4, 1936999486, a2, v34);
    return v35;
  }
  return result;
}
