/*
 * XREFs of UsbhSetupDevice @ 0x1C0020B00
 * Callers:
 *     UsbhReset2Complete @ 0x1C0012680 (UsbhReset2Complete.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C0012320 (UsbhSyncSendCommandToDevice.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001C6C8 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetProductIdString @ 0x1C001D030 (UsbhGetProductIdString.c)
 *     UsbhGetSerialNumber @ 0x1C00207C4 (UsbhGetSerialNumber.c)
 *     UsbhGetMsOsContainerID @ 0x1C0020938 (UsbhGetMsOsContainerID.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     UsbhGetLanguageIdString @ 0x1C0020FCC (UsbhGetLanguageIdString.c)
 *     UsbhBuildCompatibleID @ 0x1C0021150 (UsbhBuildCompatibleID.c)
 *     UsbhGetMSOS_Descriptor @ 0x1C00211E4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhUpdateUxdSettings @ 0x1C002139C (UsbhUpdateUxdSettings.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0021920 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhBuildDeviceID @ 0x1C0023DF0 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x1C0024050 (UsbhBuildHardwareID.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0025230 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetDeviceInformation @ 0x1C0025384 (UsbhGetDeviceInformation.c)
 *     __security_check_cookie @ 0x1C002B380 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x1C0043814 (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C0043974 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x1C00440F8 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x1C0047418 (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x1C0047598 (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x1C0049AD4 (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1C00549A4 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x1C0054AB0 (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x1C00579E8 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x1C0057DB8 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x1C0058E08 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x1C0058FC4 (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x1C00590A0 (UsbhGetQualifierDescriptorFromDevice.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x1C005DB08 (UsbDualRoleFeaturesQueryLocalMachine.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v6; // rbx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  int *v14; // r15
  __int64 result; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  _DWORD *v18; // rax
  int (__fastcall *v19)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *); // r10
  __int64 v20; // rcx
  int BosDescriptor; // r14d
  int v22; // edx
  int v23; // r8d
  PDEVICE_OBJECT v24; // rcx
  __int64 v25; // rax
  signed int v26; // r14d
  int v27; // eax
  unsigned int v28; // r10d
  int v29; // r8d
  char AlternateUsbDescriptors; // r13
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // r8
  __int64 v34; // r8
  int v35; // ecx
  __int64 v36; // r9
  __int64 v37; // rcx
  int v38; // eax
  char v39; // cl
  char v40; // al
  __int128 v41; // xmm0
  const EVENT_DESCRIPTOR *v42; // r9
  _QWORD *PoolWithTag; // rax
  int v44; // r8d
  void *v45; // r14
  int QualifierDescriptorFromDevice; // eax
  int v47; // [rsp+48h] [rbp-51h]
  _BYTE v48[4]; // [rsp+50h] [rbp-49h] BYREF
  int v49; // [rsp+54h] [rbp-45h] BYREF
  int v50; // [rsp+58h] [rbp-41h] BYREF
  int v51; // [rsp+5Ch] [rbp-3Dh] BYREF
  int v52; // [rsp+60h] [rbp-39h] BYREF
  _DWORD *v53; // [rsp+68h] [rbp-31h]
  _BYTE v54[8]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v55; // [rsp+78h] [rbp-21h]
  __int64 v56; // [rsp+80h] [rbp-19h]
  __int64 *v57; // [rsp+88h] [rbp-11h]
  __int64 v58; // [rsp+90h] [rbp-9h]
  __int64 v59; // [rsp+98h] [rbp-1h]
  char v60; // [rsp+A0h] [rbp+7h]
  __int64 v61; // [rsp+A8h] [rbp+Fh] BYREF
  char v62; // [rsp+B0h] [rbp+17h]
  int v63; // [rsp+B1h] [rbp+18h]

  v49 = 0;
  v48[0] = 0;
  v53 = FdoExt(a1);
  v6 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *((unsigned __int16 *)v6 + 714));
  v7 = (void *)*((_QWORD *)v6 + 299);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)v6 + 299) = 0LL;
  }
  v8 = (void *)*((_QWORD *)v6 + 142);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *((_QWORD *)v6 + 142) = 0LL;
  }
  v9 = (void *)*((_QWORD *)v6 + 143);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)v6 + 143) = 0LL;
  }
  v10 = (void *)*((_QWORD *)v6 + 280);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)v6 + 280) = 0LL;
  }
  v11 = (void *)*((_QWORD *)v6 + 300);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)v6 + 300) = 0LL;
  }
  v12 = (void *)*((_QWORD *)v6 + 355);
  *((_QWORD *)v6 + 301) = 0LL;
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)v6 + 355) = 0LL;
  }
  UsbhFreeID(v6 + 532);
  v6[355] &= ~0x200u;
  UsbhFreeID(v6 + 544);
  UsbhFreeID(v6 + 548);
  v13 = (void *)*((_QWORD *)v6 + 316);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)v6 + 316) = 0LL;
  }
  v14 = v6 + 706;
  memset(v6 + 706, 0, 0x40uLL);
  result = UsbhQueryPortState(a1, *((_WORD *)v6 + 714), (__int64)&v50, &v49);
  if ( a3 )
    *a3 = v49;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    v6[705] = 1073807368;
    return result;
  }
  if ( (v50 & 0x200) != 0 )
  {
    v6[292] = 0;
    v16 = 0LL;
  }
  else
  {
    if ( (v50 & 0x400) != 0 )
      v16 = 2LL;
    else
      v16 = 1LL;
    v6[292] = v16;
  }
  Log(a1, 4, 1936999473, a2, v16);
  v52 = 18;
  v51 = 0;
  v17 = *((_QWORD *)v6 + 145);
  v18 = FdoExt(a1);
  v19 = (int (__fastcall *)(_QWORD, __int64, _DWORD *, int *, _QWORD, int *))*((_QWORD *)v18 + 534);
  if ( !v19 || v19(*((_QWORD *)v18 + 529), v17, v6 + 350, &v52, 0LL, &v51) < 0 )
    goto LABEL_119;
  UsbhGetInitRegUsbDeviceFlags(v20, a2);
  if ( !*((_BYTE *)v6 + 2895) )
    goto LABEL_25;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v6 + 722) < 0 )
    goto LABEL_72;
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_119:
    v6[705] = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v6 + 1400, v29, 0, 0LL) )
  {
    v6[705] = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), v6 + 350, 0LL);
LABEL_25:
  result = UsbhGetDeviceInformation(a1);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *((_WORD *)v6 + 701) <= 0x200u || (v6[358] & 0x20000) != 0 )
    goto LABEL_27;
  BosDescriptor = UsbhGetBosDescriptor(*((_QWORD *)v6 + 148), a2, &v50);
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, *((_QWORD *)v6 + 300), (int)v6 + 1400, v50, v54);
  if ( AlternateUsbDescriptors == 1 )
    v6[701] |= 0x20u;
  v31 = v57;
  if ( v57 )
  {
    if ( !*((_BYTE *)v57 + 7) || (v6[355] & 0x40000000) != 0 )
    {
LABEL_68:
      if ( v31 )
      {
        *v14 |= 1u;
        v6[358] &= 0xFFFFF9FF;
        if ( *((_WORD *)v31 + 2) )
        {
          UsbhBusIf_SetMsOs20Support(a1, *((_QWORD *)v6 + 145), 0LL, *((unsigned __int8 *)v31 + 6));
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, v57);
          if ( BosDescriptor < 0 )
          {
            v6[705] = 1073807388;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, v57);
          if ( !AlternateUsbDescriptors )
          {
            v6[705] = 1073807389;
            UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE);
            return 3221225485LL;
          }
          v35 = *v14;
          if ( (*v14 & 0x200) != 0 )
            v6[355] |= 0x20u;
          if ( (v6[295] & 0x10) != 0 && (v6[355] & 4) == 0 && (v35 & 0x80u) != 0 )
          {
            LOBYTE(v34) = 1;
            v36 = *(unsigned __int8 *)(*((_QWORD *)v6 + 357) + 5LL);
            if ( (v53[640] & 1) == 0 )
              v36 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v6 + 145), v34, v36);
            v6[355] |= 0x20000000u;
          }
        }
      }
      goto LABEL_83;
    }
    v32 = *v57;
    v33 = v57;
    *v14 |= 4u;
    *((_QWORD *)v6 + 361) = v32;
    BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v33);
    if ( BosDescriptor >= 0 )
    {
      AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, v54);
      if ( AlternateUsbDescriptors )
      {
        RtlWriteRegistryValue(0, *((PCWSTR *)v6 + 143), L"MsOs20DescriptorSetInfo", 3u, v6 + 722, 8u);
        v31 = v57;
        goto LABEL_68;
      }
      return 3221225485LL;
    }
LABEL_72:
    v6[705] = 1073807390;
    return 3221225485LL;
  }
LABEL_83:
  v37 = v58;
  if ( v58 )
  {
    v6[358] |= 0x40000u;
    v6[762] = *(_DWORD *)(v37 + 22);
    v61 = *((_QWORD *)v6 + 382);
    v38 = *(_DWORD *)(v37 + 22);
    v62 = 1;
    v63 = v38;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v61, 13LL, 0LL, 0LL, 0, 0);
    UsbDualRoleFeaturesQueryLocalMachine(&v50);
    LOBYTE(v61) = 64;
    HIWORD(v61) = 0;
    LOWORD(v49) = 0;
    v39 = *(_BYTE *)(v58 + 21);
    *(_DWORD *)((char *)&v61 + 2) = v50;
    BYTE1(v61) = v39;
    BosDescriptor = UsbhSyncSendCommandToDevice(*((_QWORD *)v6 + 148), a2, &v61, 0LL, &v49);
    if ( BosDescriptor < 0 )
      Log(a1, 4, 1399075121, 0LL, 0LL);
  }
  if ( v59 )
  {
    result = UsbhGetBillboardInfo(*((_QWORD *)v6 + 148));
    BosDescriptor = result;
    if ( (int)result < 0 )
      return result;
    *((_QWORD *)v6 + 301) = v59;
  }
  if ( *(_BYTE *)(*((_QWORD *)v6 + 299) + 4LL) > 1u && v60 == 1 )
  {
    v40 = *((_BYTE *)v6 + 1404);
    if ( !v40 || v40 == -17 && *((_BYTE *)v6 + 1405) == 2 && *((_BYTE *)v6 + 1406) == 1 )
      v6[355] |= 0x20u;
  }
  if ( !*((_BYTE *)v6 + 2732) && AlternateUsbDescriptors == 1 && v56 )
  {
    v41 = *(_OWORD *)(v56 + 4);
    *((_BYTE *)v6 + 2732) = 1;
    *(_OWORD *)(v6 + 679) = v41;
  }
  if ( v55 )
  {
    v6[355] |= 0x80000u;
    v6[701] |= 0x200u;
  }
LABEL_27:
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v14 & 2) == 0 )
  {
    BosDescriptor = UsbhGetMSOS_Descriptor(a1);
    if ( BosDescriptor != -1073741637 && (BosDescriptor & 0xC0000000) == 0xC0000000 )
    {
      v42 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_105:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v42);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, v48);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    BosDescriptor = UsbhGetSerialNumber(a1, a2, (__int64)(v6 + 532));
    v24 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
    if ( (_DWORD)v24 == -1073741824 )
    {
      v42 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
      goto LABEL_105;
    }
    v25 = *((_QWORD *)v6 + 267);
    if ( v25 )
    {
      v6[355] |= 0x200u;
      v24 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          v23,
          40,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          v25);
    }
    if ( (v6[358] & 0x400) != 0 && (v6[355] & 0x20) == 0 )
      *((_QWORD *)v6 + 316) = UsbhGetMsOsExtendedConfigDesc(v24, a2);
    if ( (v6[295] & 0x10) == 0 )
      BosDescriptor = UsbhGetMsOsContainerID(a1, a2);
    if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
      return (unsigned int)BosDescriptor;
    UsbhFreeID(v6 + 524);
    UsbhFreeID(v6 + 520);
    UsbhFreeID(v6 + 528);
    v26 = UsbhBuildDeviceID(a1, a2, v6 + 520);
    if ( v26 < 0 )
      goto LABEL_40;
    v26 = UsbhBuildHardwareID(a1, a2, v6 + 524);
    if ( v26 >= 0 )
    {
      v26 = UsbhBuildCompatibleID(a1, a2, v6 + 528);
      if ( (v26 & 0xC0000000) != 0xC0000000 )
        goto LABEL_40;
      UsbhFreeID(v6 + 524);
    }
    UsbhFreeID(v6 + 520);
LABEL_40:
    UsbhGetLanguageIdString(a1);
    if ( *((_BYTE *)v6 + 1415) && (v6[358] & 0x800) == 0 )
      UsbhGetProductIdString(*((_QWORD *)v6 + 148), a2, 1033, (__int64)(v6 + 540));
    if ( v26 >= 0 && v53[634] == 1 && v6[292] == 1 && *((_WORD *)v6 + 701) >= 0x200u )
    {
      PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
      v45 = PoolWithTag;
      if ( PoolWithTag )
      {
        LOWORD(v49) = 10;
        *PoolWithTag = 0LL;
        *((_WORD *)PoolWithTag + 4) = 0;
        QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(
                                          a1,
                                          a2,
                                          v44,
                                          (_DWORD)PoolWithTag,
                                          (__int64)&v49);
        if ( QualifierDescriptorFromDevice >= 0 )
        {
          LOBYTE(v47) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v6 + 714),
            100,
            (int)v45,
            10,
            QualifierDescriptorFromDevice,
            0,
            usbfile_bus_c,
            4558,
            v47);
          v6[355] |= 1u;
        }
        ExFreePoolWithTag(v45, 0);
      }
      v26 = 0;
    }
    v27 = Usbh__TestPoint__Ulong(a1, 6u, v26, *((unsigned __int16 *)v6 + 714));
    Log(a1, 4, 1936999486, a2, v27);
    return v28;
  }
  return result;
}
