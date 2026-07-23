/*
 * XREFs of PipCallDriverAddDevice @ 0x140702D58
 * Callers:
 *     PipProcessDevNodeTree @ 0x14070265C (PipProcessDevNodeTree.c)
 *     PiProcessAddBootDevices @ 0x14077DEF8 (PiProcessAddBootDevices.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140099A40 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x14015B6A8 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x1405BD0C4 (_CmOpenInstallerClassRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1407004D8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140703680 (PnpCallDriverQueryServiceHelper.c)
 *     _CmSetDeviceRegProp @ 0x140703BE0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140706A30 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     IopBootLog @ 0x140709A10 (IopBootLog.c)
 *     IopQueryLegacyBusInformation @ 0x14071CD10 (IopQueryLegacyBusInformation.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x14071D2BC (PiDmaGuardProcessPreAddDevice.c)
 *     PnpUnloadAttachedDriver @ 0x1407306D8 (PnpUnloadAttachedDriver.c)
 *     PnpRequestDeviceRemoval @ 0x1407315D0 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PnpCallAddDevice @ 0x140739044 (PnpCallAddDevice.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14077DBE0 (IopInsertLegacyBusDeviceNode.c)
 *     IopSafebootDriverLoad @ 0x140854720 (IopSafebootDriverLoad.c)
 *     PnpGetStableSystemBootTime @ 0x14086215C (PnpGetStableSystemBootTime.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140873F90 (PipDmgEnforceEnumerationPolicy.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x14087D310 (PiProcessDriversLoadedOnSecureDevice.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // r14
  char v5; // r13
  PDEVICE_OBJECT v6; // r15
  PDEVICE_OBJECT v7; // r12
  __int64 v8; // rax
  int v9; // ebx
  int ObjectProperty; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // ecx
  __int64 *v16; // rsi
  __int64 v17; // rdi
  int v19; // eax
  PVOID *v20; // r14
  int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 AttachedDevice; // r14
  unsigned __int8 i; // bl
  _QWORD *v29; // r15
  _QWORD *j; // rsi
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // r11d
  __int64 v38; // r9
  __int64 v39; // r8
  PVOID PoolWithTag; // rbx
  int DeviceRegProp; // eax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rdx
  const WNF_STATE_NAME *v45; // rbx
  unsigned int v46; // esi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  unsigned int NumberOfBytes; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+64h] [rbp-9Ch] BYREF
  char v52; // [rsp+68h] [rbp-98h]
  int v53; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  int v55; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v56; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  int v58; // [rsp+88h] [rbp-78h] BYREF
  HANDLE v59; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v60; // [rsp+98h] [rbp-68h] BYREF
  PDEVICE_OBJECT v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A8h] [rbp-58h] BYREF
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  struct _DEVICE_OBJECT *v65; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h]
  _QWORD v67[8]; // [rsp+E0h] [rbp-20h] BYREF
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v52 = 0;
  v59 = 0LL;
  v53 = 0;
  v56 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v65 = 0LL;
  memset(v67, 0, sizeof(v67));
  v6 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v7 = 0LL;
  DestinationString.Buffer = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  v8 = 6LL;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  v66 = 6LL;
  P = 0LL;
  v61 = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v9 = -1073741823;
    goto LABEL_30;
  }
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v9 = CmOpenDeviceRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         *(_QWORD *)(BugCheckParameter2 + 48),
         16,
         0,
         131097,
         0,
         (__int64)&Handle,
         0LL);
  if ( v9 < 0 )
    goto LABEL_29;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               1LL,
               (__int64)Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               (__int64)&v58,
               (__int64)&v56,
               4,
               (__int64)&NumberOfBytes_4,
               0) < 0
     || v58 != 7
     || NumberOfBytes_4 != 4
     || !v56) )
  {
    v36 = 53LL;
LABEL_115:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v36, 0LL);
LABEL_118:
    v9 = -1073741106;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(BugCheckParameter2 + 48),
                1LL,
                (__int64)Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                (__int64)&v58,
                (__int64)&v56,
                4,
                (__int64)&NumberOfBytes_4,
                0) >= 0
      && v56 <= 0xFF
      && (int)((__int64 (__fastcall *)(_QWORD, unsigned __int16 *))PnpQueryProximityNode)(v56, &v60) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v60;
    }
    v22 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v22 == -1 )
    {
      v23 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v23 )
      {
        v22 = *(_DWORD *)(v23 + 660);
        *(_DWORD *)(BugCheckParameter2 + 660) = v22;
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        v22 = -2;
      }
    }
    if ( v22 != -2 )
    {
      v56 = v22;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v56,
        4,
        0);
    }
  }
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(BugCheckParameter2 + 48),
                     1LL,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_Device_PreventDriverLoad,
                     (__int64)&v58,
                     (__int64)&v65,
                     8,
                     (__int64)&NumberOfBytes_4,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&AttachedDeviceReferenceWithTag) >= 0 )
  {
    if ( ObjectProperty != -1073741789
      && v58 == 16
      && NumberOfBytes_4 == 8
      && !PnpBootMode
      && AttachedDeviceReferenceWithTag == v65 )
    {
      goto LABEL_28;
    }
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v11 = *(_QWORD *)(BugCheckParameter2 + 48);
  NumberOfBytes = 78;
  v9 = 0;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v11,
              (__int64)Handle,
              9,
              (__int64)&v55,
              (__int64)SourceString,
              (__int64)&NumberOfBytes,
              0) >= 0
    && v55 == 1
    && NumberOfBytes )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
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
                            *(_QWORD *)(BugCheckParameter2 + 48),
                            (__int64)Handle,
                            1,
                            (__int64)&v55,
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
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          }
        }
        IopBootLog(&DestinationString);
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_28;
      }
      v4 = v52;
    }
    CmOpenInstallerClassRegKey(PiPnpRtlCtx, (int)SourceString, v12, v13, 131097, 0, (__int64)&v59, 0LL);
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 48);
  NumberOfBytes = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v14,
              (__int64)Handle,
              11,
              (__int64)&v55,
              (__int64)&v53,
              (__int64)&NumberOfBytes,
              0) < 0
    || v55 != 4
    || NumberOfBytes != 4 )
  {
    v53 = 0;
  }
  v67[1] = a2;
  v67[0] = BugCheckParameter2;
  NumberOfBytes = 512;
  P = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (v53 & 0x80000) != 0 )
    {
      if ( v59 )
      {
        v42 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                0,
                (unsigned int)&DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v59,
                1,
                0,
                v4,
                (__int64)v67);
        v9 = v42;
        if ( v42 == -1073741772 || v42 == -1073741275 )
          v9 = 0;
        if ( v9 < 0 )
          goto LABEL_24;
        while ( 1 )
        {
          v9 = PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)SourceString,
                 2LL,
                 (__int64)v59,
                 0LL,
                 (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                 (__int64)&v62,
                 (__int64)P,
                 NumberOfBytes,
                 (__int64)&NumberOfBytes_4,
                 0);
          if ( v9 != -1073741789 )
            break;
          if ( NumberOfBytes_4 <= NumberOfBytes )
          {
            v9 = -1073741823;
            goto LABEL_24;
          }
          ExFreePoolWithTag(P, 0);
          NumberOfBytes = NumberOfBytes_4;
          P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x6E657050u);
          if ( !P )
          {
            v9 = -1073741670;
            break;
          }
        }
        if ( v9 >= 0 )
        {
          if ( v62 == 4099 && (NumberOfBytes_4 & 7) == 0 && NumberOfBytes_4 )
          {
            v45 = (const WNF_STATE_NAME *)P;
            v46 = NumberOfBytes_4 >> 3;
            do
            {
              ZwUpdateWnfStateData(v45++, 0LL, 0, 0LL, 0LL, 0, 0);
              --v46;
            }
            while ( v46 );
            v36 = 56LL;
            goto LABEL_115;
          }
        }
        else if ( v9 == -1073741772 || v9 == -1073741275 )
        {
          v9 = 0;
        }
        if ( v9 < 0 )
          goto LABEL_24;
      }
      if ( !v67[2] )
      {
        v43 = *(_QWORD *)(BugCheckParameter2 + 48);
        NumberOfBytes_4 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v43,
                    (__int64)Handle,
                    11,
                    (__int64)&v55,
                    (__int64)&v53,
                    (__int64)&NumberOfBytes_4,
                    0) >= 0
          && v55 == 4
          && NumberOfBytes_4 == 4
          && (v53 & 0x80000) != 0 )
        {
          v44 = *(_QWORD *)(BugCheckParameter2 + 48);
          v53 &= ~0x80000u;
          CmSetDeviceRegProp(PiPnpRtlCtx, v44, (_DWORD)Handle, 11, 4, (__int64)&v53, 4, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0 )
    {
      v24 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              19,
              (unsigned int)&DEVPKEY_Device_CompoundLowerFilters,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              1,
              v4,
              (__int64)v67);
      v9 = v24;
      if ( v24 == -1073741275 || v24 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x4000000LL);
        v9 = 0;
      }
    }
    if ( v9 >= 0 )
    {
      if ( v59 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
        {
          v21 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  19,
                  (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
                  (__int64)SourceString,
                  (__int64)v59,
                  1,
                  2,
                  v4,
                  (__int64)v67);
          v9 = v21;
          if ( v21 == -1073741275 || v21 == -1073741772 )
          {
            PipSetDevNodeFlags(BugCheckParameter2, 0x8000000LL);
            v9 = 0;
          }
        }
      }
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
        {
          v9 = -1073741772;
        }
        else
        {
          v19 = PnpCallDriverQueryServiceHelper(
                  (unsigned int)&P,
                  (unsigned int)&NumberOfBytes,
                  5,
                  0,
                  *(_QWORD *)(BugCheckParameter2 + 48),
                  (__int64)Handle,
                  0,
                  3,
                  v4,
                  (__int64)v67);
          v9 = v19;
          if ( v19 == -1073741275 || v19 == -1073741772 )
          {
            v9 = -1073741772;
            PipSetDevNodeFlags(BugCheckParameter2, 0x10000000LL);
          }
        }
      }
    }
  }
  else
  {
    v9 = -1073741670;
  }
LABEL_24:
  v15 = *(_DWORD *)(BugCheckParameter2 + 396);
  if ( (v15 & 0x1000) != 0 )
  {
    v9 = 0;
    goto LABEL_29;
  }
  if ( v9 >= 0 )
  {
    if ( *(_QWORD *)(v67[5] + 8LL) )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
      v9 = -1073741823;
      goto LABEL_29;
    }
    goto LABEL_65;
  }
  if ( v9 == -1073741772 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
    {
LABEL_28:
      v9 = -1073741823;
      goto LABEL_29;
    }
    PipClearDevNodeProblem(BugCheckParameter2);
    v15 = *(_DWORD *)(BugCheckParameter2 + 396);
    v9 = 0;
    v5 = 1;
LABEL_65:
    if ( (v15 & 0x20000000) == 0 )
    {
      v25 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&NumberOfBytes,
              18,
              (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              4,
              v4,
              (__int64)v67);
      v9 = v25;
      if ( v25 == -1073741275 || v25 == -1073741772 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x20000000LL);
        v9 = 0;
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    if ( v59 )
    {
      if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
      {
        v26 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&NumberOfBytes,
                18,
                (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
                (__int64)SourceString,
                (__int64)v59,
                1,
                5,
                v4,
                (__int64)v67);
        v9 = v26;
        if ( v26 == -1073741275 || v26 == -1073741772 )
        {
          PipSetDevNodeFlags(BugCheckParameter2, 0x40000000LL);
          v9 = 0;
        }
      }
    }
    if ( v9 < 0 )
      goto LABEL_29;
    v9 = PiDmaGuardProcessPreAddDevice(v67, Handle);
    if ( v9 < 0 )
      goto LABEL_29;
    AttachedDevice = 0LL;
    AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                       *(PDEVICE_OBJECT *)(BugCheckParameter2 + 32),
                                       0x65706E50u);
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        v61 = IoGetAttachedDeviceReferenceWithTag(*(PDEVICE_OBJECT *)(BugCheckParameter2 + 32), 0x65706E50u);
        if ( v5 )
        {
          if ( !v67[5] )
            PipSetDevNodeState(BugCheckParameter2, 771);
        }
      }
      v29 = (_QWORD *)v67[i + 2];
      for ( j = v29; j; j = (_QWORD *)j[1] )
      {
        v35 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
        *(_DWORD *)(*j + 16LL) |= 0x400u;
        if ( v35 < 0 )
        {
          if ( i == 3 )
          {
            v6 = AttachedDeviceReferenceWithTag;
            IovUtilMarkStack(
              *(_QWORD *)(BugCheckParameter2 + 32),
              (__int64)AttachedDeviceReferenceWithTag->AttachedDevice,
              AttachedDevice,
              0);
            v38 = v37;
            *(_DWORD *)(BugCheckParameter2 + 392) = v37;
            v39 = 31LL;
            goto LABEL_117;
          }
        }
        else
        {
          if ( i == 3 )
            AttachedDevice = (__int64)v61->AttachedDevice;
          PipSetDevNodeState(BugCheckParameter2, 771);
        }
      }
      if ( !i )
      {
        if ( v29 )
        {
          v47 = *(_QWORD *)(BugCheckParameter2 + 48);
          NumberOfBytes_4 = 4;
          v48 = CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v47,
                  (__int64)Handle,
                  11,
                  (__int64)&v55,
                  (__int64)&v53,
                  (__int64)&NumberOfBytes_4,
                  0);
          if ( v48 >= 0 && v55 == 4 && NumberOfBytes_4 == 4 && (v53 & 0x80000) != 0 )
          {
            v49 = *(_QWORD *)(BugCheckParameter2 + 48);
            v53 &= ~0x80000u;
            CmSetDeviceRegProp(PiPnpRtlCtx, v49, (_DWORD)Handle, 11, 4, (__int64)&v53, 4, 0);
          }
        }
      }
    }
    if ( !AttachedDevice || (v31 = 0, v5) )
      v31 = 1;
    v6 = AttachedDeviceReferenceWithTag;
    IovUtilMarkStack(
      *(_QWORD *)(BugCheckParameter2 + 32),
      (__int64)AttachedDeviceReferenceWithTag->AttachedDevice,
      AttachedDevice,
      v31);
    v32 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(BugCheckParameter2 + 32),
            (__int64)Handle,
            SourceString,
            (__int64)v59,
            v5);
    if ( v32 >= 0 )
    {
      if ( (int)IopQueryLegacyBusInformation(
                  *(_QWORD *)(BugCheckParameter2 + 32),
                  v33,
                  BugCheckParameter2 + 448,
                  BugCheckParameter2 + 452) >= 0 )
      {
        IopInsertLegacyBusDeviceNode(
          BugCheckParameter2,
          *(unsigned int *)(BugCheckParameter2 + 448),
          *(unsigned int *)(BugCheckParameter2 + 452));
      }
      else
      {
        *(_DWORD *)(BugCheckParameter2 + 448) = -1;
        *(_DWORD *)(BugCheckParameter2 + 452) = -16;
      }
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v34, *(_QWORD *)(BugCheckParameter2 + 48), 23LL);
      if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) == 0
        || (v9 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2), v9 >= 0) )
      {
        if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
          v9 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2);
        else
          v9 = 0;
      }
      v7 = v61;
      goto LABEL_29;
    }
    v38 = (unsigned int)v32;
    v39 = 50LL;
LABEL_117:
    PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v39, v38);
    v7 = v61;
    goto LABEL_118;
  }
LABEL_29:
  v8 = 6LL;
LABEL_30:
  v16 = &v67[2];
  do
  {
    v17 = *v16;
    if ( *v16 )
    {
      do
      {
        v20 = (PVOID *)v17;
        v17 = *(_QWORD *)(v17 + 8);
        if ( PnPBootDriversInitialized )
          PnpUnloadAttachedDriver(*v20);
        ObfDereferenceObject(*v20);
        ExFreePoolWithTag(v20, 0);
      }
      while ( v17 );
      v8 = v66;
    }
    ++v16;
    v66 = --v8;
  }
  while ( v8 );
  if ( Handle )
    ZwClose(Handle);
  if ( v59 )
    ZwClose(v59);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x65706E50u);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v9;
}
