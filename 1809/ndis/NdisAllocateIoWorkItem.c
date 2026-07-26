/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C0025450
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v2; // rsi
  _DEVICE_OBJECT *v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char v6; // al
  PIO_WORKITEM v7; // rax
  __int64 v9; // rcx
  PIO_WORKITEM v10; // rax
  PIO_WORKITEM v11; // rax
  __int64 v12; // r8
  NDIS_HANDLE v13; // rcx
  PIO_WORKITEM v14; // rax
  PIO_WORKITEM WorkItem; // rax
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6977444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  memset(PoolWithTag, 0, 0x30uLL);
  *(_DWORD *)v5 = 3146000;
  v5[1] = NdisObjectHandle;
  v6 = *(_BYTE *)NdisObjectHandle;
  if ( *(_BYTE *)NdisObjectHandle == 2 )
  {
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, &v16) )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v3);
    v5[2] = WorkItem;
    if ( !WorkItem )
    {
      LOBYTE(v12) = 3;
      v13 = NdisObjectHandle;
      goto LABEL_28;
    }
LABEL_22:
    if ( v3 )
      return v5;
    goto LABEL_23;
  }
  if ( v6 == 4 )
  {
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, &v16) )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v14 = IoAllocateWorkItem(v3);
    v5[2] = v14;
    if ( !v14 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    goto LABEL_22;
  }
  if ( v6 == 9 )
  {
    v9 = *((_QWORD *)NdisObjectHandle + 3);
    if ( *(_BYTE *)v9 != 2 )
    {
      if ( *(_BYTE *)v9 == 4 && ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 72), 2u, &v16) )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v10 = IoAllocateWorkItem(v2);
        v5[2] = v10;
        if ( v10 )
          goto LABEL_8;
        ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3));
        goto LABEL_29;
      }
      goto LABEL_23;
    }
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 392), 4u, &v16) )
      goto LABEL_23;
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
    v11 = IoAllocateWorkItem(v2);
    v5[2] = v11;
    if ( v11 )
      goto LABEL_8;
    v13 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
    LOBYTE(v12) = 4;
LABEL_28:
    ndisDereferenceDriver(v13, 0LL, v12);
LABEL_29:
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
LABEL_8:
    if ( v2 )
      return v5;
    goto LABEL_22;
  }
  if ( v6 == 17 && ndisReferenceMiniport((__int64)NdisObjectHandle) == 1 )
  {
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 482);
    v7 = IoAllocateWorkItem(v2);
    v5[2] = v7;
    if ( v7 )
      goto LABEL_8;
    ndisDereferenceMiniport((__int64)NdisObjectHandle, 0x63u);
    goto LABEL_29;
  }
LABEL_23:
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return v5;
}
