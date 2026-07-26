/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C0060690
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceDriver @ 0x1C0052A18 (ndisDereferenceDriver.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  _NDIS_FILTER_DRIVER_BLOCK *v2; // rcx
  UCHAR Type; // al
  unsigned __int8 v4; // r8

  v2 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v2->Header.Type;
  if ( v2->Header.Type == 2 )
  {
    v4 = 3;
    goto LABEL_10;
  }
  v4 = 4;
  switch ( Type )
  {
    case 4u:
      goto LABEL_8;
    case 9u:
      v2 = (_NDIS_FILTER_DRIVER_BLOCK *)v2->FilterQueue;
      if ( v2->Header.Type != 2 )
      {
        if ( v2->Header.Type != 4 )
          break;
LABEL_8:
        ndisDereferenceFilterDriver(v2);
        break;
      }
LABEL_10:
      ndisDereferenceDriver((__int64)v2, 0, v4);
      break;
    case 0x11u:
      ndisDereferenceMiniport((__int64)v2, 0x63u);
      break;
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
