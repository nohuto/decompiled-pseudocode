/*
 * XREFs of PnpAllocatePWSTR @ 0x14059A42C
 * Callers:
 *     PiDqActionDataCreate @ 0x140591404 (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1405972F0 (PiDqPnPGetObjectProperty.c)
 *     PiSwInstanceInfoInit @ 0x1406D6DF0 (PiSwInstanceInfoInit.c)
 *     PiSwBusRelationAdd @ 0x1406D7D90 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x1406D7EF4 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x1406D808C (PiSwCompleteCreate.c)
 *     PiSwPdoPnPDispatch @ 0x1406D8350 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D8960 (PiSwDeviceInterfacesUpdateState.c)
 *     PiDmObjectCreate @ 0x1406F1C50 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiSwIrpPropertySet @ 0x14071D234 (PiSwIrpPropertySet.c)
 *     PnpCopyDevProperty @ 0x14075034C (PnpCopyDevProperty.c)
 *     PiSwDeviceInterfaceSetState @ 0x140754344 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14075440C (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140835DCC (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
