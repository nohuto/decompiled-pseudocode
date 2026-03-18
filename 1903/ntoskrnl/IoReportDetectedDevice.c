/*
 * XREFs of IoReportDetectedDevice @ 0x140750EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     PipIsDevNodeDNStarted @ 0x1400EE53C (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoaded @ 0x1400EE568 (PipAreDriversLoaded.c)
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x14015DACC (PpDevNodeInsertIntoTree.c)
 *     PpDevNodeRemoveFromTree @ 0x140172920 (PpDevNodeRemoveFromTree.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405BDA40 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405BF440 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceRegKey @ 0x1405C2B40 (_CmOpenDeviceRegKey.c)
 *     RtlUpcaseUnicodeString @ 0x140657A70 (RtlUpcaseUnicodeString.c)
 *     PpDevNodeUnlockTree @ 0x1406A2B0C (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A2B68 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PpDevNodeLockTree @ 0x1406A2C34 (PpDevNodeLockTree.c)
 *     PipClearDevNodeProblem @ 0x1406F8FDC (PipClearDevNodeProblem.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140702314 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegProp @ 0x140703BE0 (_CmSetDeviceRegProp.c)
 *     PipSetDevNodeFlags @ 0x14070618C (PipSetDevNodeFlags.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     IopDoDeferredSetInterfaceState @ 0x140718434 (IopDoDeferredSetInterfaceState.c)
 *     _CmCreateDevice @ 0x1407195D0 (_CmCreateDevice.c)
 *     PnpDetermineResourceListSize @ 0x14072281C (PnpDetermineResourceListSize.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140722ABC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x140722B18 (PpDeviceRegistration.c)
 *     PipAllocateDeviceNode @ 0x140723244 (PipAllocateDeviceNode.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14073042C (PnpCleanupDeviceRegistryValues.c)
 *     PipSetDevNodeProblem @ 0x140731754 (PipSetDevNodeProblem.c)
 *     PnpSetRegistryDword @ 0x140750E4C (PnpSetRegistryDword.c)
 *     IopIsReportedAlready @ 0x140751358 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x1407515B0 (IopDuplicateDetection.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140751E7C (IopWriteAllocatedResourcesToRegistry.c)
 *     PnpAllocateDeviceInstancePath @ 0x140754A84 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140780104 (IopCreateRootEnumeratedDeviceObject.c)
 *     IoReportResourceUsageInternal @ 0x140860918 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryRequirementsList @ 0x140861BE0 (PnpSetRegistryRequirementsList.c)
 *     PnpSetRegistryResourceList @ 0x140861C4C (PnpSetRegistryResourceList.c)
 *     IopCreateLegacyDeviceIds @ 0x1408755E4 (IopCreateLegacyDeviceIds.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  char *DeviceNode; // rbx
  PDRIVER_EXTENSION DriverExtension; // r15
  UNICODE_STRING *p_ServiceKeyName; // r15
  PDEVICE_OBJECT v14; // rax
  NTSTATUS result; // eax
  const UNICODE_STRING *v16; // rdx
  int appended; // edi
  int v18; // eax
  int v19; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char *v21; // rbx
  unsigned __int16 Length; // cx
  size_t v23; // r12
  wchar_t *v24; // rax
  signed __int64 v25; // rcx
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v28; // r8
  PIO_RESOURCE_REQUIREMENTS_LIST v29; // r15
  unsigned int v30; // eax
  char v31; // r13
  wchar_t *Buffer; // rdx
  wchar_t *i; // rcx
  struct _DEVICE_OBJECT *v34; // r12
  PVOID v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  NTSTATUS DeviceInstancePath; // eax
  int v39; // eax
  int v40; // eax
  wchar_t *v41; // r13
  int v42; // r8d
  int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  PDRIVER_OBJECT v46; // rdi
  ULONG Flags; // eax
  bool v48; // zf
  unsigned int *p_Length; // rdx
  int LegacyDeviceIds; // eax
  unsigned int v51; // eax
  int v52; // ecx
  SIZE_T v53; // rdi
  PVOID PoolWithTag; // rax
  void *v55; // rsi
  __int64 v56; // r8
  int v57; // edx
  __int64 v58; // rcx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+38h] [rbp-C8h]
  int v63; // [rsp+40h] [rbp-C0h]
  char v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh] BYREF
  char v66; // [rsp+52h] [rbp-AEh] BYREF
  char v67[5]; // [rsp+53h] [rbp-ADh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v69; // [rsp+60h] [rbp-A0h] BYREF
  char *v70; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  ULONG v72; // [rsp+80h] [rbp-80h]
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v75; // [rsp+98h] [rbp-68h] BYREF
  int v76; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int cbMax[3]; // [rsp+A4h] [rbp-5Ch] BYREF
  _WORD *v78; // [rsp+B0h] [rbp-50h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp-48h] BYREF
  PDRIVER_OBJECT v80; // [rsp+C0h] [rbp-40h]
  PIO_RESOURCE_REQUIREMENTS_LIST v81; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t *j; // [rsp+D8h] [rbp-28h]
  STRSAFE_PCNZWCH psz; // [rsp+E0h] [rbp-20h] BYREF
  size_t pcbLength; // [rsp+E8h] [rbp-18h] BYREF
  PDEVICE_OBJECT *v86; // [rsp+F0h] [rbp-10h]
  wchar_t pszDest[200]; // [rsp+100h] [rbp+0h] BYREF

  v81 = ResourceRequirements;
  DeviceNode = 0LL;
  v80 = DriverObject;
  DriverExtension = DriverObject->DriverExtension;
  v86 = DeviceObject;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  v14 = *DeviceObject;
  *(_QWORD *)&cbMax[1] = 0LL;
  v78 = 0LL;
  v72 = SlotNumber;
  *(_QWORD *)&Destination.Length = 26214400LL;
  v75 = 0LL;
  v65 = 0;
  v70 = 0LL;
  v69 = 0;
  Handle = 0LL;
  Destination.Buffer = pszDest;
  KeyHandle = 0LL;
  v64 = 0;
  Object = 0LL;
  P = 0LL;
  if ( v14 )
  {
    DeviceNode = (char *)v14->DeviceObjectExtension->DeviceNode;
    v70 = DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
    goto LABEL_7;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        v78 = i + 1;
        LOWORD(cbMax[1]) = p_ServiceKeyName->Length
                         - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        HIWORD(cbMax[1]) = cbMax[1];
        goto LABEL_3;
      }
    }
    return -1073741585;
  }
  else
  {
LABEL_3:
    result = RtlAppendUnicodeToString(&Destination, L"ROOT\\");
    if ( result >= 0 )
    {
      v16 = (const UNICODE_STRING *)&cbMax[1];
      if ( (DriverObject->Flags & 4) == 0 )
        v16 = p_ServiceKeyName;
      result = RtlAppendUnicodeStringToString(&Destination, v16);
      if ( result >= 0 )
      {
LABEL_7:
        appended = PiPnpRtlBeginOperation(&P);
        if ( appended < 0 )
          goto LABEL_40;
        PpDevNodeLockTree(1);
        if ( DeviceNode || (DriverObject->Flags & 4) != 0 )
        {
          v19 = 0;
        }
        else
        {
          v18 = IopDuplicateDetection((unsigned int)LegacyBusType, BusNumber, v72, &v70);
          v19 = 0;
          appended = v18;
          if ( v18 >= 0 )
            v69 = v70 != 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        v21 = v70;
        if ( v70 )
        {
LABEL_25:
          if ( v69 )
          {
            if ( (unsigned int)PipAreDriversLoaded((__int64)v21)
              || (*((_DWORD *)v21 + 99) & 0x6000) != 0
              && ((v51 = *((_DWORD *)v21 + 101), v51 > 0x1C) || (v52 = 268697602, !_bittest(&v52, v51))) )
            {
              ObfDereferenceObject(*((PVOID *)v21 + 4));
              appended = -1073741810;
              goto LABEL_71;
            }
            if ( !v28 )
              PipClearDevNodeProblem((__int64)v21);
          }
          if ( !Handle )
          {
            appended = PnpDeviceObjectToDeviceInstance(*((_QWORD *)v21 + 4), (__int64)&Handle, 983103);
            if ( appended < 0 )
            {
LABEL_71:
              if ( v65 )
              {
                if ( KeyHandle )
                  ZwDeleteKey(KeyHandle);
                if ( v75 )
                  ZwDeleteKey(v75);
                if ( Handle )
                  ZwDeleteKey(Handle);
                PnpCleanupDeviceRegistryValues((__int64)(v21 + 40));
                PpDevNodeRemoveFromTree(v21);
                IoDeleteDevice(*((PDEVICE_OBJECT *)v21 + 4));
                ObfDereferenceObject(*((PVOID *)v21 + 4));
              }
              goto LABEL_40;
            }
          }
LABEL_31:
          v29 = v81;
          if ( !ResourceList && !v81
            || (v40 = CmOpenDeviceRegKey(
                        *(__int64 *)&PiPnpRtlCtx,
                        *((_QWORD *)v21 + 6),
                        20,
                        0,
                        983103,
                        1,
                        (__int64)&KeyHandle,
                        0LL),
                appended = v40,
                v40 >= 0)
            && (!ResourceList || (v40 = PnpSetRegistryResourceList(KeyHandle), appended = v40, v40 >= 0))
            && (!v29 || (v40 = PnpSetRegistryRequirementsList(KeyHandle), appended = v40, v40 >= 0)) )
          {
            if ( ResourceAssigned )
            {
              PipSetDevNodeFlags((__int64)v21, 256);
              PnpSetRegistryDword(Handle, L"NoResourceAtInitTime");
              v30 = PnpDetermineResourceListSize(ResourceList);
              IopWriteAllocatedResourcesToRegistry(v21, ResourceList, v30);
            }
            else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
            {
              v53 = (unsigned int)PnpDetermineResourceListSize(ResourceList);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v53, 0x47706E50u);
              v55 = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_70:
                appended = -1073741670;
                PipSetDevNodeProblem((__int64)v21, 3, -1073741670);
                goto LABEL_71;
              }
              memmove(PoolWithTag, ResourceList, v53);
              pszFormat = (NTSTRSAFE_PCWSTR)*((_QWORD *)v21 + 4);
              v56 = *((_QWORD *)pszFormat + 1);
              v66 = 0;
              appended = IoReportResourceUsageInternal(
                           0,
                           v57,
                           v56,
                           0,
                           dwFlags,
                           (__int64)pszFormat,
                           (__int64)v55,
                           v62,
                           v63,
                           (__int64)&v66);
              ExFreePoolWithTag(v55, 0x47706E50u);
              if ( appended < 0 || v66 )
              {
                if ( !PipIsDevNodeDNStarted((__int64)v21) )
                  PipSetDevNodeProblem(v58, 12, appended);
                appended = -1073741800;
              }
            }
            else
            {
              PipSetDevNodeFlags((__int64)v21, 256);
            }
LABEL_35:
            v31 = v64;
LABEL_36:
            if ( appended >= 0 )
            {
              *((_DWORD *)v21 + 165) = *(_DWORD *)(*((_QWORD *)v21 + 2) + 660LL);
              IopDoDeferredSetInterfaceState((__int64)v21);
              PipSetDevNodeState((__int64)v21, 775);
              if ( v31 )
                PipSetDevNodeFlags((__int64)v21, 0x80000000);
              *v86 = (PDEVICE_OBJECT)*((_QWORD *)v21 + 4);
              goto LABEL_40;
            }
            goto LABEL_71;
          }
          goto LABEL_90;
        }
        appended = RtlAppendUnicodeToString(&Destination, L"\\");
        if ( appended < 0 )
        {
LABEL_40:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KeLeaveCriticalRegion();
          PpDevNodeUnlockTree(1);
          if ( KeyHandle )
            ZwClose(KeyHandle);
          if ( v75 )
            ZwClose(v75);
          if ( Handle )
            ZwClose(Handle);
          if ( P )
            PiPnpRtlEndOperation((PVOID **)P);
          return appended;
        }
        Length = Destination.Length;
        v72 = Destination.Length;
        v23 = (400 - (unsigned __int64)Destination.Length) >> 1;
        v24 = &pszDest[(unsigned __int64)Destination.Length >> 1];
        for ( j = v24; ; v24 = j )
        {
          Destination.Length = Length;
          LODWORD(v61) = v19;
          ppszDestEnd = v24;
          RtlStringCchPrintfExW(v24, v23, &ppszDestEnd, 0LL, 0, L"%04u", v61);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - pszDest;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Destination.Buffer, 983103, &Handle, &v65, 0);
          if ( appended < 0 )
            goto LABEL_71;
          if ( v65 )
            goto LABEL_23;
          v69 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  (_DWORD)Handle,
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v69) )
            break;
          ZwClose(Handle);
          Length = v72;
          ++v19;
        }
        v27 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&Destination, 0x746C6644u);
        Object = v27;
        if ( v27 )
        {
          v21 = *(char **)(v27[39] + 40LL);
        }
        else
        {
          appended = -1073741823;
          v21 = 0LL;
        }
        v70 = v21;
LABEL_23:
        if ( appended < 0 )
          goto LABEL_71;
        if ( v21 )
          goto LABEL_25;
        appended = IopCreateRootEnumeratedDeviceObject(&Object);
        if ( appended < 0 )
          goto LABEL_71;
        v34 = (struct _DEVICE_OBJECT *)Object;
        v35 = Object;
        v31 = 1;
        v64 = 1;
        *((_DWORD *)Object + 12) |= 0x1000u;
        v36 = PipAllocateDeviceNode((__int64)v35, (void **)&v70);
        v21 = v70;
        if ( v36 == -1073740946 || !v70 )
        {
          IoDeleteDevice(v34);
          appended = -1073741670;
          goto LABEL_71;
        }
        if ( (v80->Flags & 4) == 0 )
        {
          v37 = ExAllocatePoolWithTag(PagedPool, p_ServiceKeyName->Length, 0x48706E50u);
          *((_QWORD *)v21 + 8) = v37;
          if ( !v37 )
            goto LABEL_70;
          *((_WORD *)v21 + 29) = p_ServiceKeyName->Length;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 56), p_ServiceKeyName, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_80;
        }
        DeviceInstancePath = PnpAllocateDeviceInstancePath(v21, (unsigned int)Destination.Length + 2);
        appended = DeviceInstancePath;
        if ( DeviceInstancePath < 0 )
        {
LABEL_80:
          PipSetDevNodeProblem((__int64)v21, 3, DeviceInstancePath);
          goto LABEL_36;
        }
        v39 = RtlUpcaseUnicodeString((PUNICODE_STRING)(v21 + 40), &Destination, 0);
        appended = v39;
        if ( v39 >= 0 )
        {
          *(_WORD *)(*((_QWORD *)v21 + 6) + 2 * ((unsigned __int64)*((unsigned __int16 *)v21 + 20) >> 1)) = 0;
          v76 = 32;
          v40 = CmSetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  (__int64)Handle,
                  0xBu,
                  4u,
                  (__int64)&v76,
                  4u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v67[0] = -1;
          v40 = PnpSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *((_QWORD *)v21 + 6),
                  1u,
                  (__int64)Handle,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)v67,
                  1u,
                  0);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v40 = PnpUnicodeStringToWstr((__int16 **)&psz, cbMax, &p_ServiceKeyName->Length);
          appended = v40;
          if ( v40 < 0 )
            goto LABEL_90;
          v41 = (wchar_t *)psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
LABEL_88:
            v42 = appended;
            goto LABEL_91;
          }
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       *((_QWORD *)v21 + 6),
                       (__int64)Handle,
                       5u,
                       1u,
                       (__int64)v41,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v41, (__int64)p_ServiceKeyName);
          if ( appended < 0 )
            goto LABEL_88;
          v75 = 0LL;
          v40 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *((_QWORD *)v21 + 6), 19, 0, 983103, 1, (__int64)&v75, 0LL);
          appended = v40;
          if ( v40 < 0 || (v40 = PnpSetRegistryDword(v75, L"DeviceReported"), appended = v40, v40 < 0) )
          {
LABEL_90:
            v42 = v40;
LABEL_91:
            v43 = 19;
            goto LABEL_92;
          }
          v46 = v80;
          Flags = v80->Flags;
          v48 = (Flags & 4) == 0;
          if ( (Flags & 4) == 0 )
          {
            LOBYTE(v45) = 1;
            PpDeviceRegistration((__int64)&Destination, v45, (__int64)(v21 + 56), 1);
            v48 = (v46->Flags & 4) == 0;
          }
          p_Length = &cbMax[1];
          if ( v48 )
            p_Length = (unsigned int *)&p_ServiceKeyName->Length;
          LegacyDeviceIds = IopCreateLegacyDeviceIds(v34, p_Length, ResourceList);
          appended = LegacyDeviceIds;
          v44 = (__int64)v21;
          if ( LegacyDeviceIds < 0 )
          {
            v42 = LegacyDeviceIds;
            v43 = 19;
            goto LABEL_94;
          }
          PipSetDevNodeFlags((__int64)v21, 17);
          *((_DWORD *)v21 + 165) = *((_DWORD *)IopRootDeviceNode + 165);
          PipSetDevNodeState((__int64)v21, 770);
          PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v21);
          v39 = PnpMapDeviceObjectToDeviceInstance((__int64)v34, (__int64)(v21 + 40));
          appended = v39;
          if ( v39 >= 0 )
          {
            ObfReferenceObject(v34);
            goto LABEL_31;
          }
        }
        v42 = v39;
        v43 = 3;
LABEL_92:
        v44 = (__int64)v21;
LABEL_94:
        PipSetDevNodeProblem(v44, v43, v42);
        goto LABEL_35;
      }
    }
  }
  return result;
}
