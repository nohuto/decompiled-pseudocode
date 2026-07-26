/*
 * XREFs of NdisRegisterDeviceEx @ 0x1C002D430
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C010C3A4 (WdmlibIoCreateDeviceSecure.c)
 */

NDIS_STATUS __stdcall NdisRegisterDeviceEx(
        NDIS_HANDLE NdisHandle,
        PNDIS_DEVICE_OBJECT_ATTRIBUTES DeviceObjectAttributes,
        PDEVICE_OBJECT *pDeviceObject,
        PNDIS_HANDLE NdisDeviceHandle)
{
  char *DriverObjectExtension; // rbp
  KSPIN_LOCK *v6; // r13
  PNDIS_DEVICE_OBJECT_ATTRIBUTES v8; // r15
  char v10; // al
  struct _DRIVER_OBJECT *v11; // rdi
  const UNICODE_STRING *DefaultSDDLString; // r9
  unsigned int v13; // esi
  _UNICODE_STRING *DeviceName; // r8
  ULONG v15; // edx
  NTSTATUS DeviceSecure; // eax
  NTSTATUS SymbolicLink; // r14d
  _DWORD *DeviceExtension; // r12
  _QWORD *v19; // rsi
  int (__fastcall **MajorFunctions)(_DEVICE_OBJECT *, _IRP *); // rax
  __int128 v21; // xmm0
  char *v22; // rcx
  void *v23; // rcx
  KSPIN_LOCK *v24; // rdi
  KIRQL v25; // al
  char *v26; // rbp
  __int64 v27; // rdx
  char *v29; // r13
  __int64 v30; // rcx
  ULONG DeviceCharacteristics; // [rsp+20h] [rbp-78h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-70h]
  const GUID *v33; // [rsp+38h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp+8h]

  DriverObjectExtension = 0LL;
  v6 = 0LL;
  v8 = DeviceObjectAttributes;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(DeviceObjectAttributes) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DeviceObjectAttributes,
      1,
      110,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisHandle);
  }
  *pDeviceObject = 0LL;
  *NdisDeviceHandle = 0LL;
  v10 = *(_BYTE *)NdisHandle;
  if ( *(_BYTE *)NdisHandle == 2 )
  {
    v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 5);
    DriverObjectExtension = (char *)NdisHandle;
  }
  else
  {
    switch ( v10 )
    {
      case 4:
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)NdisHandle + 2);
        v6 = (KSPIN_LOCK *)NdisHandle;
        break;
      case 17:
        DriverObjectExtension = (char *)*((_QWORD *)NdisHandle + 470);
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      case -86:
        DriverObjectExtension = (char *)IoGetDriverObjectExtension(
                                          **((PDRIVER_OBJECT **)NdisHandle + 1),
                                          (PVOID)0x4E4D4944);
        v11 = (struct _DRIVER_OBJECT *)*((_QWORD *)DriverObjectExtension + 5);
        break;
      default:
        goto LABEL_32;
    }
  }
  if ( !v11 )
  {
LABEL_32:
    SymbolicLink = -1073741637;
    goto LABEL_17;
  }
  DefaultSDDLString = v8->DefaultSDDLString;
  v35 = (v8->ExtensionSize + 1) & 0xFFFFFFFE;
  v13 = v8->DeviceName->Length + 324 + v35 + v8->SymbolicName->Length;
  DeviceName = v8->DeviceName;
  v15 = DeviceName->Length + 324 + v35 + v8->SymbolicName->Length;
  if ( DefaultSDDLString )
    DeviceSecure = WdmlibIoCreateDeviceSecure(
                     v11,
                     v15,
                     DeviceName,
                     (ULONG)DefaultSDDLString,
                     DeviceCharacteristics,
                     Exclusive,
                     DefaultSDDLString,
                     v33,
                     DeviceObject);
  else
    DeviceSecure = IoCreateDevice(v11, v15, DeviceName, 0x12u, 0x100u, 0, DeviceObject);
  SymbolicLink = DeviceSecure;
  if ( DeviceSecure < 0 )
    goto LABEL_17;
  DeviceObject[0]->Flags &= ~0x80u;
  SymbolicLink = IoCreateSymbolicLink(v8->SymbolicName, v8->DeviceName);
  if ( SymbolicLink >= 0 )
  {
    DeviceExtension = DeviceObject[0]->DeviceExtension;
    memset(DeviceExtension, 0, v13);
    *DeviceExtension = 19923209;
    *((_QWORD *)DeviceExtension + 5) = DeviceExtension + 80;
    v19 = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 2) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 1) = DeviceExtension + 2;
    *((_QWORD *)DeviceExtension + 3) = NdisHandle;
    *((PDEVICE_OBJECT *)DeviceExtension + 4) = DeviceObject[0];
    MajorFunctions = v8->MajorFunctions;
    *((_OWORD *)DeviceExtension + 3) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 4) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 5) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 6) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 7) = *((_OWORD *)MajorFunctions + 4);
    *((_OWORD *)DeviceExtension + 8) = *((_OWORD *)MajorFunctions + 5);
    *((_OWORD *)DeviceExtension + 9) = *((_OWORD *)MajorFunctions + 6);
    v21 = *((_OWORD *)MajorFunctions + 7);
    MajorFunctions += 16;
    *((_OWORD *)DeviceExtension + 10) = v21;
    *((_OWORD *)DeviceExtension + 11) = *(_OWORD *)MajorFunctions;
    *((_OWORD *)DeviceExtension + 12) = *((_OWORD *)MajorFunctions + 1);
    *((_OWORD *)DeviceExtension + 13) = *((_OWORD *)MajorFunctions + 2);
    *((_OWORD *)DeviceExtension + 14) = *((_OWORD *)MajorFunctions + 3);
    *((_OWORD *)DeviceExtension + 15) = *((_OWORD *)MajorFunctions + 4);
    *((_QWORD *)DeviceExtension + 32) = MajorFunctions[10];
    if ( v6 )
      memset64(v11->MajorFunction, (unsigned __int64)ndisDummyIrpHandler, 0x1CuLL);
    v22 = (char *)DeviceExtension + v35 + 320;
    *((_QWORD *)DeviceExtension + 35) = v22;
    *((_WORD *)DeviceExtension + 136) = v8->DeviceName->Length;
    *((_WORD *)DeviceExtension + 137) = v8->DeviceName->Length + 2;
    memmove(v22, v8->DeviceName->Buffer, v8->DeviceName->Length);
    v23 = (void *)(*((_QWORD *)DeviceExtension + 35) + *((unsigned __int16 *)DeviceExtension + 137));
    *((_QWORD *)DeviceExtension + 37) = v23;
    *((_WORD *)DeviceExtension + 144) = v8->SymbolicName->Length;
    *((_WORD *)DeviceExtension + 145) = v8->SymbolicName->Length + 2;
    memmove(v23, v8->SymbolicName->Buffer, v8->SymbolicName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( DriverObjectExtension )
    {
      v24 = (KSPIN_LOCK *)(DriverObjectExtension + 392);
      *((_QWORD *)DeviceExtension + 3) = NdisHandle;
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)DriverObjectExtension + 49);
      v26 = DriverObjectExtension + 80;
      v27 = *(_QWORD *)v26;
      if ( *(char **)(*(_QWORD *)v26 + 8LL) == v26 )
      {
        *v19 = v27;
        *((_QWORD *)DeviceExtension + 2) = v26;
        *(_QWORD *)(v27 + 8) = v19;
        *(_QWORD *)v26 = v19;
LABEL_15:
        KeReleaseSpinLock(v24, v25);
LABEL_16:
        MmUnlockPagableImageSection(ImageSectionHandle);
        _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
        *pDeviceObject = DeviceObject[0];
        *NdisDeviceHandle = DeviceExtension;
        goto LABEL_17;
      }
    }
    else
    {
      if ( !v6 )
        goto LABEL_16;
      v24 = v6 + 5;
      *((_QWORD *)DeviceExtension + 3) = v6;
      v25 = KeAcquireSpinLockRaiseToDpc(v6 + 5);
      v29 = (char *)(v6 + 7);
      v30 = *(_QWORD *)v29;
      if ( *(char **)(*(_QWORD *)v29 + 8LL) == v29 )
      {
        *v19 = v30;
        *((_QWORD *)DeviceExtension + 2) = v29;
        *(_QWORD *)(v30 + 8) = v19;
        *(_QWORD *)v29 = v19;
        goto LABEL_15;
      }
    }
    __fastfail(3u);
  }
  IoDeleteDevice(DeviceObject[0]);
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(DeviceObjectAttributes) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)DeviceObjectAttributes,
      1,
      111,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      (char)NdisHandle,
      SymbolicLink);
  }
  return SymbolicLink;
}
