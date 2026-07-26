/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C003E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisDereferenceFilterDriver @ 0x1C0029C14 (ndisDereferenceFilterDriver.c)
 *     memset @ 0x1C0041440 (memset.c)
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
  __int64 v11; // rdx
  PIO_WORKITEM v12; // rax
  NDIS_HANDLE v13; // rcx
  unsigned __int8 v14; // r8
  PIO_WORKITEM v15; // rax
  __int64 v16; // rdx
  PIO_WORKITEM WorkItem; // rax
  int v18; // [rsp+48h] [rbp+10h] BYREF

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
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, &v18) )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v3);
    v5[2] = WorkItem;
    if ( !WorkItem )
    {
      v14 = 3;
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
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, &v18) )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v15 = IoAllocateWorkItem(v3);
    v5[2] = v15;
    if ( !v15 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle, v16, 1u);
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
      if ( *(_BYTE *)v9 == 4 && ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 72), 2u, &v18) )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v10 = IoAllocateWorkItem(v2);
        v5[2] = v10;
        if ( v10 )
          goto LABEL_8;
        ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3), v11, 2u);
        goto LABEL_29;
      }
      goto LABEL_23;
    }
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 392), 4u, &v18) )
      goto LABEL_23;
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
    v12 = IoAllocateWorkItem(v2);
    v5[2] = v12;
    if ( v12 )
      goto LABEL_8;
    v13 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
    v14 = 4;
LABEL_28:
    ndisDereferenceDriver((__int64)v13, 0, v14);
LABEL_29:
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
LABEL_8:
    if ( v2 )
      return v5;
    goto LABEL_22;
  }
  if ( v6 == 17 && (unsigned __int8)ndisReferenceMiniport((__int64)NdisObjectHandle) == 1 )
  {
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 478);
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
