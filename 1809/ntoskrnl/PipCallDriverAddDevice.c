/*
 * XREFs of PipCallDriverAddDevice @ 0x1406E7EEC
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x14075AAB8 (PiProcessAddBootDevices.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x140160430 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x14059FB8C (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     IopBootLog @ 0x1406D04D4 (IopBootLog.c)
 *     _CmSetDeviceRegProp @ 0x1406E3CC4 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1406E6D10 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipClearDevNodeProblem @ 0x1406F7F78 (PipClearDevNodeProblem.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x1406FFA44 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x1406FFB04 (PipDmgGetDeviceDmarPolicy.c)
 *     IopQueryLegacyBusInformation @ 0x1407027B8 (IopQueryLegacyBusInformation.c)
 *     PiDmaGuardAddDevice @ 0x1407035D8 (PiDmaGuardAddDevice.c)
 *     PnpUnloadAttachedDriver @ 0x140709BB4 (PnpUnloadAttachedDriver.c)
 *     PnpCallAddDevice @ 0x14070DEB0 (PnpCallAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14075948C (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x140828F80 (PnpGetStableSystemBootTime.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140842B54 (PiProcessDriversLoadedOnSecureDevice.c)
 */

__int64 __fastcall PipCallDriverAddDevice(__int64 a1, __int64 a2)
{
  char v4; // r15
  char v5; // r13
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  int ObjectProperty; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  __int64 *v19; // rsi
  __int64 v20; // rdi
  PVOID *v21; // r14
  PVOID v22; // r12
  __int64 v24; // rdx
  unsigned int DeviceDmarPolicy; // r14d
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  const WNF_STATE_NAME *v32; // rbx
  unsigned int v33; // esi
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  HANDLE v37; // rbx
  __int64 v38; // r14
  unsigned __int8 i; // bl
  _QWORD *v40; // r15
  _QWORD *j; // rsi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  BOOL v45; // r9d
  int v46; // r11d
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  char v51; // [rsp+68h] [rbp-98h]
  int v52; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v58; // [rsp+90h] [rbp-70h] BYREF
  _WORD v59[2]; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v60; // [rsp+9Ch] [rbp-64h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h]
  PVOID AttachedDeviceReferenceWithTag; // [rsp+A8h] [rbp-58h]
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  _QWORD v65[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v66; // [rsp+110h] [rbp+10h] BYREF
  WCHAR SourceString[40]; // [rsp+120h] [rbp+20h] BYREF

  v51 = 0;
  v58 = 0LL;
  v52 = 0;
  v55 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  memset(v65, 0, sizeof(v65));
  v6 = 6LL;
  SourceString[0] = 0;
  v64 = 6LL;
  P = 0LL;
  Object = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  if ( !*(_BYTE *)(a1 + 688) || *(_BYTE *)(a2 + 4) )
  {
    v8 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 688) = 0;
    v7 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v8, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
    if ( v7 < 0 )
    {
LABEL_46:
      v6 = 6LL;
      goto LABEL_47;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x2000000) != 0
      && ((int)PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 *(_QWORD *)(a1 + 48),
                 1u,
                 (__int64)Handle,
                 0LL,
                 (__int64)&DEVPKEY_Device_DebuggerSafe,
                 (__int64)&v57,
                 (__int64)&v55,
                 4,
                 (__int64)&NumberOfBytes_4,
                 0) < 0
       || v57 != 7
       || NumberOfBytes_4 != 4
       || !v55) )
    {
      v9 = 53LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 660) == -1 )
    {
      if ( PnpQueryProximityNode
        && (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 48),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                  (__int64)&v57,
                  (__int64)&v55,
                  4,
                  (__int64)&NumberOfBytes_4,
                  0) >= 0
        && v55 <= 0xFF
        && (int)((__int64 (__fastcall *)(_QWORD, _WORD *))PnpQueryProximityNode)(v55, v59) >= 0 )
      {
        *(_DWORD *)(a1 + 660) = v59[0];
      }
      v10 = *(_DWORD *)(a1 + 660);
      if ( v10 == -1 )
      {
        v11 = *(_QWORD *)(a1 + 16);
        if ( v11 )
        {
          v10 = *(_DWORD *)(v11 + 660);
          *(_DWORD *)(a1 + 660) = v10;
        }
        else
        {
          *(_DWORD *)(a1 + 660) = -2;
          v10 = -2;
        }
      }
      if ( v10 != -2 )
      {
        v12 = *(_QWORD *)(a1 + 48);
        v55 = v10;
        PnpSetObjectProperty(
          *(__int64 *)&PiPnpRtlCtx,
          v12,
          1u,
          (__int64)Handle,
          0LL,
          (__int64)&DEVPKEY_Device_Numa_Node,
          7,
          (__int64)&v55,
          4u,
          0);
      }
    }
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 48),
                       1u,
                       (__int64)Handle,
                       0LL,
                       (__int64)&DEVPKEY_Device_PreventDriverLoad,
                       (__int64)&v57,
                       (__int64)&v66,
                       8,
                       (__int64)&NumberOfBytes_4,
                       0);
    if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
      && (int)PnpGetStableSystemBootTime(&DestinationString) >= 0 )
    {
      if ( ObjectProperty != -1073741789
        && v57 == 16
        && NumberOfBytes_4 == 8
        && !PnpBootMode
        && *(_QWORD *)&DestinationString.Length == v66 )
      {
        goto LABEL_45;
      }
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_PreventDriverLoad,
        0,
        0LL,
        0,
        0);
    }
    v14 = *(_QWORD *)(a1 + 48);
    NumberOfBytes = 78;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v14,
                (__int64)Handle,
                9,
                (__int64)&v54,
                (__int64)SourceString,
                (__int64)&NumberOfBytes,
                0) >= 0
      && v54 == 1
      && NumberOfBytes )
    {
      RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( InitSafeBootMode )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
        {
          NumberOfBytes = 256;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x6E657050u);
          if ( PoolWithTag )
          {
            DeviceRegProp = CmGetDeviceRegProp(
                              *(__int64 *)&PiPnpRtlCtx,
                              *(_QWORD *)(a1 + 48),
                              (__int64)Handle,
                              1,
                              (__int64)&v54,
                              (__int64)PoolWithTag,
                              (__int64)&NumberOfBytes,
                              0);
            if ( DeviceRegProp == -1073741789 )
            {
              ExFreePoolWithTag(PoolWithTag, 0);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E657050u);
            }
            else if ( DeviceRegProp >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
            }
          }
          IopBootLog(&DestinationString, 0);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          goto LABEL_45;
        }
        v4 = v51;
      }
      CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v15, v16, 131097, 0, (__int64)&v58, 0LL);
    }
    v24 = *(_QWORD *)(a1 + 48);
    NumberOfBytes = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v24,
                (__int64)Handle,
                11,
                (__int64)&v54,
                (__int64)&v52,
                (__int64)&NumberOfBytes,
                0) < 0
      || v54 != 4
      || NumberOfBytes != 4 )
    {
      v52 = 0;
    }
    v65[1] = a2;
    v65[0] = a1;
    NumberOfBytes = 512;
    v7 = 0;
    P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
    DeviceDmarPolicy = 2;
    if ( P )
    {
      if ( (v52 & 0x80000) == 0 )
        goto LABEL_96;
      if ( v58 )
      {
        v26 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                0,
                (unsigned int)&DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v58,
                1,
                0,
                v4,
                (__int64)v65);
        v7 = v26;
        if ( v26 == -1073741772 || v26 == -1073741275 )
          v7 = 0;
        if ( v7 >= 0 )
        {
          while ( 1 )
          {
            v7 = PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)SourceString,
                   2u,
                   (__int64)v58,
                   0LL,
                   (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                   (__int64)&v60,
                   (__int64)P,
                   NumberOfBytes,
                   (__int64)&NumberOfBytes_4,
                   0);
            if ( v7 != -1073741789 )
              break;
            if ( NumberOfBytes_4 <= NumberOfBytes )
            {
              v7 = -1073741823;
              goto LABEL_87;
            }
            ExFreePoolWithTag(P, 0);
            NumberOfBytes = NumberOfBytes_4;
            P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x6E657050u);
            if ( !P )
            {
              v7 = -1073741670;
              break;
            }
          }
          if ( v7 >= 0 )
          {
            if ( v60 == 4099 && (NumberOfBytes_4 & 7) == 0 && NumberOfBytes_4 )
            {
              v32 = (const WNF_STATE_NAME *)P;
              v33 = NumberOfBytes_4 >> 3;
              do
              {
                ZwUpdateWnfStateData(v32++, 0LL, 0, 0LL, 0LL, 0, 0);
                --v33;
              }
              while ( v33 );
              v9 = 56LL;
LABEL_11:
              PnpRequestDeviceRemoval(a1, 0LL, v9);
              v7 = -1073741106;
              goto LABEL_46;
            }
          }
          else if ( v7 == -1073741772 || v7 == -1073741275 )
          {
            v7 = 0;
          }
        }
      }
LABEL_87:
      if ( !v65[2] )
      {
        v27 = *(_QWORD *)(a1 + 48);
        NumberOfBytes_4 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v27,
                    (__int64)Handle,
                    11,
                    (__int64)&v54,
                    (__int64)&v52,
                    (__int64)&NumberOfBytes_4,
                    0) >= 0
          && v54 == 4
          && NumberOfBytes_4 == 4
          && (v52 & 0x80000) != 0 )
        {
          v28 = *(_QWORD *)(a1 + 48);
          v52 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v28, (__int64)Handle, 0xBu, 4u, (__int64)&v52, 4u, 0);
        }
      }
      if ( v7 >= 0 )
      {
LABEL_96:
        if ( (*(_DWORD *)(a1 + 396) & 0x4000000) == 0 )
        {
          v29 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  0,
                  *(_QWORD *)(a1 + 48),
                  (__int64)Handle,
                  0,
                  1,
                  v4,
                  (__int64)v65);
          v7 = v29;
          if ( v29 == -1073741772 || v29 == -1073741275 )
          {
            PipSetDevNodeFlags(a1, 0x4000000);
            v7 = 0;
          }
        }
        if ( v7 >= 0 )
        {
          if ( v58 )
          {
            if ( (*(_DWORD *)(a1 + 396) & 0x8000000) == 0 )
            {
              v30 = PnpCallDriverQueryServiceHelper(
                      (unsigned int)&P,
                      (unsigned int)&NumberOfBytes,
                      19,
                      (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
                      (__int64)SourceString,
                      (__int64)v58,
                      1,
                      2,
                      v4,
                      (__int64)v65);
              v7 = v30;
              if ( v30 == -1073741772 || v30 == -1073741275 )
              {
                PipSetDevNodeFlags(a1, 0x8000000);
                v7 = 0;
              }
            }
          }
          if ( v7 >= 0 )
          {
            if ( (*(_DWORD *)(a1 + 396) & 0x10000000) != 0 )
            {
              v7 = -1073741772;
            }
            else
            {
              v31 = PnpCallDriverQueryServiceHelper(
                      (unsigned int)&P,
                      (unsigned int)&NumberOfBytes,
                      5,
                      0,
                      *(_QWORD *)(a1 + 48),
                      (__int64)Handle,
                      0,
                      3,
                      v4,
                      (__int64)v65);
              v7 = v31;
              if ( v31 == -1073741772 || v31 == -1073741275 )
              {
                v7 = -1073741772;
                PipSetDevNodeFlags(a1, 0x10000000);
              }
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741670;
    }
    v34 = *(_DWORD *)(a1 + 396);
    if ( (v34 & 0x1000) != 0 )
    {
      v7 = 0;
      goto LABEL_46;
    }
    if ( v7 < 0 )
    {
      if ( v7 != -1073741772 )
        goto LABEL_46;
      if ( (*(_DWORD *)(a1 + 560) & 0x100) == 0 )
        goto LABEL_45;
      PipClearDevNodeProblem(a1);
      v34 = *(_DWORD *)(a1 + 396);
      v7 = 0;
      v5 = 1;
    }
    else if ( *(_QWORD *)(v65[5] + 8LL) )
    {
      PipSetDevNodeProblem(a1, 19LL, 3221225858LL);
LABEL_45:
      v7 = -1073741823;
      goto LABEL_46;
    }
    if ( (v34 & 0x20000000) == 0 )
    {
      v35 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              0,
              *(_QWORD *)(a1 + 48),
              (__int64)Handle,
              0,
              4,
              v4,
              (__int64)v65);
      v7 = v35;
      if ( v35 == -1073741772 || v35 == -1073741275 )
      {
        PipSetDevNodeFlags(a1, 0x20000000);
        v7 = 0;
      }
    }
    if ( v7 < 0 )
      goto LABEL_46;
    if ( v58 && (*(_DWORD *)(a1 + 396) & 0x40000000) == 0 )
    {
      v36 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
              (__int64)SourceString,
              (__int64)v58,
              1,
              5,
              v4,
              (__int64)v65);
      v7 = v36;
      if ( v36 == -1073741772 || v36 == -1073741275 )
      {
        PipSetDevNodeFlags(a1, 0x40000000);
        v7 = 0;
      }
      else if ( v36 >= 0 )
      {
LABEL_139:
        v37 = Handle;
        if ( (*(_DWORD *)(v65[0] + 560LL) & 0x100000) == 0 )
          DeviceDmarPolicy = PipDmgGetDeviceDmarPolicy(v65);
        v7 = PipDmgSaveDeviceDmarPolicy(v65[0], v37, DeviceDmarPolicy);
        if ( v7 < 0 )
          goto LABEL_46;
        v38 = 0LL;
        Object = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(a1 + 32), 0x65706E50u);
        for ( i = 0; i < 6u; ++i )
        {
          if ( i == 3 )
          {
            AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                               *(PDEVICE_OBJECT *)(a1 + 32),
                                               0x65706E50u);
            if ( v5 )
            {
              if ( !v65[5] )
                PipSetDevNodeState(a1, 771);
            }
          }
          v40 = (_QWORD *)v65[i + 2];
          for ( j = v40; j; j = (_QWORD *)j[1] )
          {
            v42 = PnpCallAddDevice(a1, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
            *(_DWORD *)(*j + 16LL) |= 0x400u;
            if ( v42 < 0 )
            {
              if ( i == 3 )
              {
                IovUtilMarkStack(*(_QWORD *)(a1 + 32), *((_QWORD *)Object + 3), v38, 0);
                *(_DWORD *)(a1 + 392) = v46;
                v9 = 31LL;
                goto LABEL_11;
              }
            }
            else
            {
              if ( i == 3 )
                v38 = *((_QWORD *)AttachedDeviceReferenceWithTag + 3);
              PipSetDevNodeState(a1, 771);
            }
          }
          if ( !i )
          {
            if ( v40 )
            {
              v43 = *(_QWORD *)(a1 + 48);
              NumberOfBytes_4 = 4;
              if ( (int)CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v43,
                          (__int64)Handle,
                          11,
                          (__int64)&v54,
                          (__int64)&v52,
                          (__int64)&NumberOfBytes_4,
                          0) >= 0
                && v54 == 4
                && NumberOfBytes_4 == 4
                && (v52 & 0x80000) != 0 )
              {
                v44 = *(_QWORD *)(a1 + 48);
                v52 &= ~0x80000u;
                CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v44, (__int64)Handle, 0xBu, 4u, (__int64)&v52, 4u, 0);
              }
            }
          }
        }
        v45 = !v38 || v5;
        IovUtilMarkStack(*(_QWORD *)(a1 + 32), *((_QWORD *)Object + 3), v38, v45);
        if ( (int)PipChangeDeviceObjectFromRegistryProperties(
                    *(_QWORD *)(a1 + 32),
                    (_DWORD)Handle,
                    (unsigned int)SourceString,
                    (_DWORD)v58,
                    v5) >= 0 )
        {
          if ( (int)IopQueryLegacyBusInformation(*(_QWORD *)(a1 + 32), v47, a1 + 448, a1 + 452) < 0 )
          {
            *(_DWORD *)(a1 + 448) = -1;
            *(_DWORD *)(a1 + 452) = -16;
          }
          else
          {
            IopInsertLegacyBusDeviceNode(a1, *(unsigned int *)(a1 + 448), *(unsigned int *)(a1 + 452));
          }
          PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v48, *(_QWORD *)(a1 + 48), 23);
          if ( (*(_DWORD *)(a1 + 560) & 0x100000) == 0 || (v7 = PiProcessDriversLoadedOnSecureDevice(a1), v7 >= 0) )
            v7 = PiDmaGuardAddDevice(a1);
          goto LABEL_46;
        }
        v9 = 50LL;
        goto LABEL_11;
      }
    }
    if ( v7 < 0 )
      goto LABEL_46;
    goto LABEL_139;
  }
  v7 = -1073741823;
LABEL_47:
  v19 = &v65[2];
  do
  {
    v20 = *v19;
    if ( *v19 )
    {
      do
      {
        v21 = (PVOID *)v20;
        v20 = *(_QWORD *)(v20 + 8);
        if ( BYTE2(PnpShutdownEvent.Limit) )
          PnpUnloadAttachedDriver(*v21);
        ObfDereferenceObject(*v21);
        ExFreePoolWithTag(v21, 0);
      }
      while ( v20 );
      v6 = v64;
    }
    ++v19;
    v64 = --v6;
  }
  while ( v6 );
  v22 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v58 )
    ZwClose(v58);
  if ( v22 )
    ObfDereferenceObjectWithTag(v22, 0x65706E50u);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
