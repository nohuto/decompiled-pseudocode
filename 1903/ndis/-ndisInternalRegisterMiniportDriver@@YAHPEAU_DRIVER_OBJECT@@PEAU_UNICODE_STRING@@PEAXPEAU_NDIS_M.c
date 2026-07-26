/*
 * XREFs of ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0036F70
 * Callers:
 *     NdisMRegisterMiniportDriver @ 0x1C0036F50 (NdisMRegisterMiniportDriver.c)
 *     NdisLWMRegisterMiniportDriver @ 0x1C009D810 (NdisLWMRegisterMiniportDriver.c)
 *     NdisWdfRegisterMiniportDriver @ 0x1C009F180 (NdisWdfRegisterMiniportDriver.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisQueryDriverImageName @ 0x1C0037E3C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FBC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ?ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z @ 0x1C00384F4 (-ndisGetServiceNameFromRegPath@@YAXPEAU_UNICODE_STRING@@0@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C009CBA8 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C010945C (ndisValidateMiniportDriverCharacteristicsHeader.c)
 *     ndisMInvokeSetOptions @ 0x1C01096B4 (ndisMInvokeSetOptions.c)
 *     ndisValidateMiniportDriverCharacteristicsEntryPoints @ 0x1C0109780 (ndisValidateMiniportDriverCharacteristicsEntryPoints.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 */

__int64 __fastcall ndisInternalRegisterMiniportDriver(
        struct _DRIVER_OBJECT *DriverObject,
        struct _UNICODE_STRING *a2,
        void *a3,
        struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a4,
        void **a5)
{
  _NDIS_M_DRIVER_BLOCK *v6; // rbx
  const struct _GUID *v8; // rcx
  unsigned int v9; // r12d
  int v10; // edx
  NTSTATUS v11; // esi
  unsigned __int8 v12; // r13
  unsigned __int8 v13; // di
  ULONG v14; // r8d
  __int64 v15; // rdx
  PVOID v16; // rcx
  struct _UNICODE_STRING *v17; // rdx
  unsigned int Flags; // edx
  unsigned int v19; // eax
  LOGICAL IsDriverVerifyingByAddress; // eax
  __int64 v21; // rdx
  void **v22; // rdi
  KIRQL v23; // di
  PVOID v24; // rcx
  unsigned int v26; // edi
  PVOID PoolWithTag; // rax
  struct _NDIS_M_DRIVER_BLOCK *v28; // rax
  size_t Size; // [rsp+30h] [rbp-18h] BYREF
  PVOID DriverObjectExtension; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+48h] BYREF
  struct _UNICODE_STRING *v32; // [rsp+98h] [rbp+50h]
  void *v33; // [rsp+A0h] [rbp+58h]
  unsigned int v34; // [rsp+A8h] [rbp+60h] BYREF

  v33 = a3;
  v32 = a2;
  LOBYTE(v6) = 0;
  DriverObjectExtension = 0LL;
  LODWORD(Size) = 0;
  v8 = &WPP_3bdda7144e74370204adec44604355d7_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      104,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)DriverObject);
  }
  v9 = a4->Flags & 0x20;
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(v8);
  if ( !DriverObject && !v9 )
  {
    v11 = -1073741823;
    goto LABEL_32;
  }
  v31 = 0;
  v34 = 0;
  v10 = 0;
  if ( !v9 )
    v10 = (_DWORD)DriverObject + 56;
  v11 = ndisValidateMiniportDriverCharacteristicsHeader(
          (_DWORD)a4,
          v10,
          (unsigned int)&v31,
          (unsigned int)&v34,
          (__int64)&Size);
  if ( !v11 )
  {
    v12 = v34;
    v13 = v31;
    v11 = ndisValidateMiniportDriverCharacteristicsEntryPoints(a4, DriverObject, v31, v34);
    if ( !v11 )
    {
      v14 = v32->Length + 1194;
      if ( v9 )
      {
        v26 = v32->Length + 1194;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x2020444Eu);
        DriverObjectExtension = PoolWithTag;
        if ( !PoolWithTag )
          v11 = -1073741670;
        memset(PoolWithTag, 0, v26);
        v13 = v31;
      }
      else
      {
        v15 = 1313425732LL;
        if ( (a4->Flags & 1) == 0 )
          v15 = 1313687876LL;
        v11 = IoAllocateDriverObjectExtension(DriverObject, (PVOID)v15, v14, &DriverObjectExtension);
      }
      if ( v11 < 0 )
      {
        v11 = -1073741670;
        goto LABEL_32;
      }
      v6 = (_NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      v16 = DriverObjectExtension;
      *((_QWORD *)DriverObjectExtension + 44) = 0LL;
      memset(v16, 0, 0x4A8uLL);
      v17 = v32;
      v6->MiniportDriverContext = v33;
      v6->Header = (_NDIS_OBJECT_HEADER)78119170;
      v6->MajorNdisVersion = v13;
      v6->MinorNdisVersion = v12;
      v6->ServiceRegPath.Buffer = (wchar_t *)&v6[1].Header.Type;
      v6->ServiceRegPath.Length = v17->Length;
      v6->ServiceRegPath.MaximumLength = v17->Length + 2;
      memmove(&v6[1], v17->Buffer, v17->Length);
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
      v6->MiniportDriverCharacteristics.MajorNdisVersion = v31;
      v6->MiniportDriverCharacteristics.MinorNdisVersion = v12;
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
        if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 0x400) != 0 )
        {
          v28 = 0LL;
          if ( !ndisDriverTrackAlloc )
            v28 = v6;
          ndisDriverTrackAlloc = v28;
        }
      }
      v6->MiniportQueue = 0LL;
      if ( (a4->Flags & 0x30) == 0 )
      {
        memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
        DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
        DriverObject->DriverUnload = ndisMUnloadEx;
        DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
        DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
        DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
        DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
        DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
        DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
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
      v11 = ndisMInvokeSetOptions((char)v6);
      if ( v11 )
      {
        ndisDereferenceDriver((__int64)v6, 0, 0xFFu);
        *v22 = 0LL;
      }
      else
      {
        if ( !a4->OidRequestHandler && !v6->CoOidRequestHandler )
        {
          ndisDereferenceDriver((__int64)v6, 0, 0xFFu);
          *v22 = 0LL;
          v11 = -1073676283;
LABEL_49:
          _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(v6, (unsigned int)a2);
          if ( v9 )
            ExFreePoolWithTag(v6, 0);
          goto LABEL_32;
        }
        ndisReferencePackage((__int64)&ndisPkgs);
        v23 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v24 = ndisDriverObject;
        v6->NextDriver = ndisMiniDriverList;
        ndisMiniDriverList = v6;
        ObfReferenceObject(v24);
        KeReleaseSpinLock(&ndisMiniDriverListLock, v23);
        MmUnlockPagableImageSection(ImageSectionHandle);
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        ndisQueryDriverImageName(&v6->ServiceName, &v6->ImageName);
        ndisWriteDriverNDISVersionToServiceKey(
          v31,
          v34,
          1,
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      105,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)v6);
  }
  return (unsigned int)v11;
}
