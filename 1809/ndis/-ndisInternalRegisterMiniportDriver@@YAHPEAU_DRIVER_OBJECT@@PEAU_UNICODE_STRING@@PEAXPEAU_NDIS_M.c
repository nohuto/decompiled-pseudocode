/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021CD8
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C00CD960 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C00F17A0 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C00F2730 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0064A5C (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00CD9F4 (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisQueryDriverImageName @ 0x1C00CDF48 (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00CE0CC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisMInvokeSetOptions @ 0x1C00CE5B0 (ndisMInvokeSetOptions.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00CE60C (ndisGetServiceNameFromRegPath.c)
 *     ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C00CE6B4 (ndisValidateMiniportDriverCharacteristicsEntryPoints.c)
 *     ndisInitializeNsi @ 0x1C00D0EAC (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *DriverObject,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  unsigned int v9; // r12d
  int v10; // edx
  NTSTATUS v11; // esi
  unsigned __int8 v12; // di
  ULONG v13; // r8d
  __int64 v14; // rdx
  _BYTE *v15; // rcx
  unsigned __int8 v16; // si
  unsigned int Flags; // edx
  unsigned int v18; // r13d
  unsigned int v19; // eax
  LOGICAL IsDriverVerifyingByAddress; // eax
  __int64 v21; // rdx
  void **v22; // rdi
  __int64 v23; // r8
  KIRQL v24; // di
  PVOID v25; // rcx
  int v26; // r8d
  unsigned int v27; // edx
  unsigned int v29; // edi
  PVOID PoolWithTag; // rax
  struct _NDIS_M_DRIVER_BLOCK *v31; // rax
  size_t Size; // [rsp+30h] [rbp-10h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v34; // [rsp+80h] [rbp+40h] BYREF
  void *v35; // [rsp+90h] [rbp+50h]
  unsigned int v36; // [rsp+98h] [rbp+58h] BYREF

  v35 = a3;
  v6 = 0LL;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(101LL, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, DriverObject);
  v9 = a4->Flags & 0x20;
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( !DriverObject && !v9 )
  {
    v11 = -1073741823;
    goto LABEL_32;
  }
  v36 = 0;
  v34 = 0;
  v10 = 0;
  if ( !v9 )
    v10 = (_DWORD)DriverObject + 56;
  v11 = ndisValidateMiniportDriverCharacteristicsHeader(
          (_DWORD)a4,
          v10,
          (unsigned int)&v36,
          (unsigned int)&v34,
          (__int64)&Size);
  if ( !v11 )
  {
    v12 = v34;
    v11 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, DriverObject, v36, v34);
    if ( !v11 )
    {
      v13 = a2->Length + 1194;
      if ( v9 )
      {
        v29 = a2->Length + 1194;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
        DriverObjectExtension = PoolWithTag;
        if ( !PoolWithTag )
          v11 = -1073741670;
        memset(PoolWithTag, 0, v29);
        v12 = v34;
      }
      else
      {
        v14 = 1313425732LL;
        if ( (a4->Flags & 1) == 0 )
          v14 = 1313687876LL;
        v11 = IoAllocateDriverObjectExtension(DriverObject, (PVOID)v14, v13, &DriverObjectExtension);
      }
      if ( v11 < 0 )
      {
        v11 = -1073741670;
        goto LABEL_32;
      }
      v6 = (_NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      v15 = DriverObjectExtension;
      *((_QWORD *)DriverObjectExtension + 44) = 0LL;
      v15[908] = 0;
      memset(v15, 0, 0x4A8uLL);
      v16 = v36;
      v6->MiniportDriverContext = v35;
      v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
      v6->MajorNdisVersion = v16;
      v6->MinorNdisVersion = v12;
      v6->ServiceRegPath.Length = a2->Length;
      v6->ServiceRegPath.MaximumLength = a2->Length + 2;
      memmove(&v6[1], a2->Buffer, a2->Length);
      ndisGetServiceNameFromRegPath(&v6->ServiceRegPath, &v6->ServiceName);
      Flags = a4->Flags;
      if ( (Flags & 1) != 0 )
      {
        v6->Flags |= 1u;
        KeInitializeMutex(&v6->IMStartRemoveMutex, 0xFFFFu);
        Flags = a4->Flags;
      }
      if ( (Flags & 4) != 0 )
        v6->Flags |= 0x20u;
      memmove(&v6->112, a4, (unsigned int)Size);
      v18 = v34;
      v6->MiniportDriverCharacteristics.MinorNdisVersion = v34;
      v6->MiniportDriverCharacteristics.MajorNdisVersion = v16;
      v19 = a4->Flags;
      if ( (v19 & 0x10) != 0 )
      {
        v6->Flags |= 0x40u;
        v19 = a4->Flags;
      }
      if ( (v19 & 0x20) != 0 )
        v6->Flags |= 0x80u;
      v6->DriverVersion = a4->MinorDriverVersion | (a4->MajorDriverVersion << 16);
      if ( v9 )
        IsDriverVerifyingByAddress = MmIsDriverVerifyingByAddress(a4->RestartHandler);
      else
        IsDriverVerifyingByAddress = MmIsDriverVerifying(DriverObject);
      if ( IsDriverVerifyingByAddress )
      {
        v6->Flags |= 2u;
        if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0 )
        {
          v31 = 0LL;
          if ( !ndisDriverTrackAlloc )
            v31 = v6;
          ndisDriverTrackAlloc = v31;
        }
      }
      v6->MiniportQueue = 0LL;
      if ( (a4->Flags & 0x30) == 0 )
      {
        memset64(DriverObject->MajorFunction, (unsigned __int64)&ndisDummyIrpHandler, 0x1CuLL);
        DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))ndisMUnloadEx;
        DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
        DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
        DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
        DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
        DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
        DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&ndisPowerDispatch;
        DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
      }
      KeInitializeEvent(&v6->MiniportsRemovedEvent, NotificationEvent, 0);
      v6->DriverObject = DriverObject;
      v6->DeviceList.Blink = &v6->DeviceList;
      LOBYTE(v21) = 12;
      v6->DeviceList.Flink = &v6->DeviceList;
      ndisInitializeRef(&v6->Ref, v21);
      v22 = a5;
      *a5 = v6;
      v11 = ndisMInvokeSetOptions(v6);
      if ( v11 )
      {
        LOBYTE(v23) = -1;
        ndisDereferenceDriver(v6, 0LL, v23);
        *v22 = 0LL;
      }
      else
      {
        if ( !a4->OidRequestHandler && !v6->CoOidRequestHandler )
        {
          LOBYTE(v23) = -1;
          ndisDereferenceDriver(v6, 0LL, v23);
          *v22 = 0LL;
          v11 = -1073676283;
LABEL_49:
          _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, v27);
          if ( v9 )
            ExFreePoolWithTag(v6, 0);
          goto LABEL_32;
        }
        ndisReferencePackage(&ndisPkgs);
        v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v25 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v25);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v24);
        ndisDereferencePackage(&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        LOBYTE(v26) = 1;
        ndisWriteDriverNDISVersionToServiceKey(
          v36,
          v18,
          v26,
          a4->MajorDriverVersion,
          a4->MinorDriverVersion,
          (__int64)&v6->ServiceName);
        v11 = 0;
      }
      if ( !v11 )
        goto LABEL_32;
      goto LABEL_49;
    }
  }
LABEL_32:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(102LL, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, v6);
  return (unsigned int)v11;
}
