/*
 * XREFs of PnpAllocatePWSTR @ 0x1405BC774
 * Callers:
 *     PiDqActionDataCreate @ 0x1405B7104 (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1405BC098 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x1406F9CC8 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwInstanceInfoInit @ 0x14071EE84 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x14071F2B0 (PiSwPdoPnPDispatch.c)
 *     PiSwBusRelationAdd @ 0x140720128 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x140720280 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14072083C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwIrpPropertySet @ 0x140742164 (PiSwIrpPropertySet.c)
 *     PnpCopyDevProperty @ 0x140774F10 (PnpCopyDevProperty.c)
 *     PiSwDeviceInterfaceSetState @ 0x14077715C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x140777230 (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140870788 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140099C00 (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x140099EFC (RtlStringCchLengthW.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpAllocatePWSTR(NTSTRSAFE_PCWSTR pszSrc, size_t a2, ULONG a3, PVOID *a4)
{
  NTSTATUS v4; // ebx
  size_t v9; // rbx
  wchar_t *PoolWithTag; // rax
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( !pszSrc )
    return (unsigned int)v4;
  v4 = RtlStringCchLengthW(pszSrc, a2, &pcchLength);
  if ( v4 >= 0 )
  {
    if ( !pcchLength )
      goto LABEL_8;
    v9 = 2 * (pcchLength + 1);
    if ( is_mul_ok(pcchLength + 1, 2uLL) )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * (pcchLength + 1), a3);
      *a4 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = RtlStringCbCopyW(PoolWithTag, v9, pszSrc);
LABEL_8:
        if ( v4 >= 0 )
          return (unsigned int)v4;
        goto LABEL_12;
      }
      v4 = -1073741670;
    }
    else
    {
      v4 = -1073741675;
    }
  }
LABEL_12:
  if ( *a4 )
  {
    ExFreePoolWithTag(*a4, a3);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
