/*
 * XREFs of ndisRegisterMiniportDriver @ 0x1C01192C0
 * Callers:
 *     NdisIMRegisterLayeredMiniport @ 0x1C00F1530 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C00F2030 (NdisMRegisterMiniport.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00CDF48 (ndisQueryDriverImageName.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00CE60C (ndisGetServiceNameFromRegPath.c)
 */

__int64 __fastcall ndisRegisterMiniportDriver(struct _DRIVER_OBJECT **a1, _QWORD *a2, unsigned int a3, PVOID *a4)
{
  unsigned int v4; // edi
  char v9; // dl
  __int64 v10; // r15
  char v11; // al
  size_t v12; // rsi
  unsigned int v13; // ecx
  struct _NDIS_M_DRIVER_BLOCK *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  KIRQL v18; // bl
  PVOID v19; // rcx
  PVOID DriverObjectExtension; // [rsp+20h] [rbp-10h] BYREF
  ULONG VerifierFlags; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0;
  DriverObjectExtension = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xEu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)a1);
  if ( !a1 )
  {
    v4 = -1073741823;
    goto LABEL_39;
  }
  v9 = *((_BYTE *)a2 + 1);
  v10 = 112LL;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v11 = *(_BYTE *)a2;
      if ( *(_BYTE *)a2 == 5 )
      {
        v12 = 240LL;
        goto LABEL_15;
      }
    }
    goto LABEL_38;
  }
  v11 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 3 )
  {
    if ( v11 == 4 )
    {
      v12 = 136LL;
LABEL_15:
      v13 = v12;
      goto LABEL_16;
    }
    if ( v11 == 5 )
    {
      v12 = 184LL;
      goto LABEL_15;
    }
LABEL_38:
    v4 = -1073676284;
    goto LABEL_39;
  }
  v12 = 112LL;
  v13 = 112;
LABEL_16:
  if ( a3 < v13 || v11 == 5 && (a2[21] && !a2[22] || v9 && !a2[25]) )
  {
    v4 = -1073676283;
  }
  else if ( IoAllocateDriverObjectExtension(*a1, (PVOID)0x4E4D4944, 0x4A8u, &DriverObjectExtension) >= 0 )
  {
    memset(DriverObjectExtension, 0, 0x4A8uLL);
    *((_BYTE *)DriverObjectExtension + 24) = *(_BYTE *)a2;
    *((_BYTE *)DriverObjectExtension + 25) = *((_BYTE *)a2 + 1);
    memmove((char *)DriverObjectExtension + 112, a2, v12);
    if ( *(_BYTE *)a2 == 5 )
    {
      *((_QWORD *)DriverObjectExtension + 63) = a2[17];
      *((_QWORD *)DriverObjectExtension + 64) = a2[18];
      *((_QWORD *)DriverObjectExtension + 65) = a2[19];
      *((_QWORD *)DriverObjectExtension + 66) = a2[20];
      *((_QWORD *)DriverObjectExtension + 68) = a2[22];
    }
    if ( MmIsDriverVerifying(*a1)
      && ((VerifierFlags = 0, MmIsVerifierEnabled(&VerifierFlags) < 0) || (VerifierFlags & 0x400000) == 0)
      && (*((_WORD *)DriverObjectExtension + 13) |= 2u, (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0) )
    {
      v14 = 0LL;
      v15 = DriverObjectExtension;
      if ( !ndisDriverTrackAlloc )
        v14 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      ndisDriverTrackAlloc = v14;
    }
    else
    {
      v15 = DriverObjectExtension;
    }
    v15[2] = 0LL;
    v16 = 28LL;
    do
    {
      *(_QWORD *)((char *)&(*a1)->Type + v10) = ndisDummyIrpHandler;
      v10 += 8LL;
      --v16;
    }
    while ( v16 );
    (*a1)->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
    (*a1)->DriverUnload = ndisMUnload;
    (*a1)->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
    (*a1)->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
    (*a1)->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
    (*a1)->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
    (*a1)->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
    (*a1)->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPowerDispatch;
    (*a1)->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
    KeInitializeEvent((PRKEVENT)((char *)DriverObjectExtension + 368), NotificationEvent, 0);
    *((_QWORD *)DriverObjectExtension + 4) = a1;
    *((_QWORD *)DriverObjectExtension + 5) = *a1;
    v17 = (char *)DriverObjectExtension + 80;
    *((_QWORD *)DriverObjectExtension + 11) = (char *)DriverObjectExtension + 80;
    *v17 = v17;
    ndisInitializeRef((__int64)DriverObjectExtension + 392, 12);
    *(_BYTE *)DriverObjectExtension = 2;
    *((_WORD *)DriverObjectExtension + 1) = 1192;
    *((_BYTE *)DriverObjectExtension + 1) = 1;
    ndisGetServiceNameFromRegPath((__int64)(a1 + 1), (__int64)DriverObjectExtension + 488);
    ndisQueryDriverImageName((__int64)DriverObjectExtension + 488, (_UNICODE_STRING *)DriverObjectExtension + 55);
    ndisReferencePackage((__int64)&ndisPkgs);
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v19 = ndisDriverObject;
    *((_QWORD *)DriverObjectExtension + 1) = ndisMiniDriverList;
    ndisMiniDriverList = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
    ObfReferenceObject(v19);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v18);
    ndisDereferencePackage((__int64)&ndisPkgs);
    *a4 = DriverObjectExtension;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_39:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xFu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)DriverObjectExtension);
  return v4;
}
