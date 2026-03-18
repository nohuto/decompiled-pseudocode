/*
 * XREFs of PnpAllocatePWSTR @ 0x1405BCB54
 * Callers:
 *     PiDqActionDataCreate @ 0x1405B74E4 (PiDqActionDataCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x1405BC478 (PiDqPnPGetObjectProperty.c)
 *     PiDmObjectCreate @ 0x1406FBAA8 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     PiSwInstanceInfoInit @ 0x140720D24 (PiSwInstanceInfoInit.c)
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 *     PiSwBusRelationAdd @ 0x140721FC8 (PiSwBusRelationAdd.c)
 *     PiSwPnPInfoInit @ 0x140722120 (PiSwPnPInfoInit.c)
 *     PiSwCompleteCreate @ 0x1407222B8 (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1407226DC (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwIrpPropertySet @ 0x140744064 (PiSwIrpPropertySet.c)
 *     PnpCopyDevProperty @ 0x1407784F0 (PnpCopyDevProperty.c)
 *     PiSwDeviceInterfaceSetState @ 0x14077A73C (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x14077A810 (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14086FE88 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400EDC5C (RtlStringCbCopyW.c)
 *     RtlStringCchLengthW @ 0x1400EDF4C (RtlStringCchLengthW.c)
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
