/*
 * XREFs of IoGetDeviceProperty @ 0x1405BF670
 * Callers:
 *     PoStoreRequester @ 0x1400EC4BC (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x1402A1734 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1402B73E0 (KseDsCallbackHookAddDevice.c)
 *     PiControlGetPropertyData @ 0x1406A02E0 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140731AA8 (IopProcessSetInterfaceState.c)
 *     ArbShareDriverExclusive @ 0x14075BA98 (ArbShareDriverExclusive.c)
 *     PopFxGenerateFriendlyName @ 0x14076F1EC (PopFxGenerateFriendlyName.c)
 *     IoGetDmaAdapter @ 0x14077B4F0 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x140863080 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408A3EAC (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1408A7D0C (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408AD124 (PopDiagQueryDevicePropertyString.c)
 *     IoWMISuggestInstanceName @ 0x1408EF910 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x140943BD0 (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x14096A298 (VfIsPCIBus.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpvUtilFailDriver @ 0x1402A14B0 (PpvUtilFailDriver.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiGetDeviceRegProperty @ 0x1405BFBC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     ObQueryNameStringMode @ 0x14062A720 (ObQueryNameStringMode.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1406A3298 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpBusTypeGuidGet @ 0x1406EE350 (PnpBusTypeGuidGet.c)
 *     PpIrpQueryCapabilities @ 0x1407003EC (PpIrpQueryCapabilities.c)
 *     PnpDetermineResourceListSize @ 0x14072281C (PnpDetermineResourceListSize.c)
 *     PiGetDeviceRegistryProperty @ 0x14085EB68 (PiGetDeviceRegistryProperty.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  __int16 v6; // bx
  int v9; // r8d
  int v10; // r9d
  unsigned int v11; // ebx
  unsigned __int16 *DeviceNode; // rsi
  unsigned int v13; // ebx
  int v14; // edi
  int v15; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v17; // zf
  const void **PoolWithTag; // rax
  const void **v20; // rdi
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ebx
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  int v27; // eax
  unsigned int v28; // ebx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  __int64 v32; // rbx
  size_t v33; // rdi
  unsigned int v34; // eax
  size_t v35; // r15
  unsigned int v36; // ebx
  int v37; // eax
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  int v40; // eax
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  ULONG v44; // eax
  ULONG *v45; // rdx
  ULONG v46; // eax
  ULONG v47; // [rsp+40h] [rbp-61h] BYREF
  int v48; // [rsp+44h] [rbp-5Dh] BYREF
  int v49; // [rsp+48h] [rbp-59h] BYREF
  PDEVICE_OBJECT v50; // [rsp+50h] [rbp-51h]
  __int128 v51; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v52[16]; // [rsp+70h] [rbp-31h] BYREF

  v50 = DeviceObject;
  v6 = DeviceProperty;
  v51 = 0uLL;
  memset(v52, 0, sizeof(v52));
  v11 = v6 & 0xFFF;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v11 != 18 && (v11 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v11 > 0xB )
  {
    v15 = 17;
    if ( v11 <= 0x11 )
    {
      if ( v11 == 17 )
      {
        v14 = 4;
        goto LABEL_11;
      }
      v24 = v11 - 12;
      if ( !v24 )
      {
        DeviceRegProp = PnpBusTypeGuidGet(DeviceNode[232], &v51);
        if ( DeviceRegProp < 0 )
          return DeviceRegProp;
        *ResultLength = 16;
        if ( BufferLength >= 0x10 )
        {
          *(_OWORD *)PropertyBuffer = v51;
          return DeviceRegProp;
        }
        return -1073741789;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v27 = *((_DWORD *)DeviceNode + 114);
LABEL_39:
        *(_DWORD *)PropertyBuffer = v27;
        return 0;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        if ( *((int *)DeviceNode + 115) < 0 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v27 = *((_DWORD *)DeviceNode + 115);
        goto LABEL_39;
      }
      v36 = v26 - 1;
      if ( !v36 )
      {
        v15 = 23;
        goto LABEL_44;
      }
      if ( v36 != 1 )
        return -1073741584;
      if ( (int)PpIrpQueryCapabilities(DeviceObject, v52) < 0 )
        return -1073741772;
      v37 = v52[2];
      if ( v52[2] == -1 )
        return -1073741772;
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      *(_DWORD *)PropertyBuffer = v37;
      return 0;
    }
    v22 = v11 - 18;
    if ( !v22 )
    {
      if ( DeviceNode == IopRootDeviceNode )
      {
        v40 = 0;
        DeviceRegProp = 0;
      }
      else
      {
        if ( !*((_QWORD *)DeviceNode + 6) )
          return -1073741808;
        while ( 1 )
        {
          v47 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0,
                            11,
                            (__int64)&v48,
                            (__int64)&v49,
                            (__int64)&v47,
                            0);
          if ( DeviceRegProp < 0 || v48 != 4 || v47 != 4 )
            break;
          if ( (v49 & 0x20) != 0 )
          {
            v40 = 1;
          }
          else if ( (v49 & 0x40) != 0 )
          {
            v40 = 2;
          }
          else
          {
            v40 = (v49 & 0x400) != 0 ? 3 : 0;
          }
          DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
          if ( v40 || DeviceNode == IopRootDeviceNode )
            goto LABEL_81;
        }
        v40 = 2;
LABEL_81:
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp == -1073741275 )
            return -1073741772;
          v17 = DeviceRegProp == -1073741810;
          goto LABEL_13;
        }
      }
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        *(_DWORD *)PropertyBuffer = v40;
        return DeviceRegProp;
      }
      return -1073741789;
    }
    v23 = v22 - 1;
    if ( !v23 )
    {
      *ResultLength = 4;
      if ( BufferLength < 4 )
        return -1073741789;
      PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 1LL, PropertyBuffer);
      return 0;
    }
    v30 = v23 - 1;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        if ( v31 != 1 )
          return -1073741584;
        v15 = 37;
        goto LABEL_44;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      if ( !*((_QWORD *)DeviceNode + 52) || (v32 = *((_QWORD *)DeviceNode + 53)) == 0 )
      {
        *ResultLength = 0;
        DeviceRegProp = 0;
        goto LABEL_54;
      }
      v33 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
      v34 = PnpDetermineResourceListSize(v32);
      v35 = v34;
      *ResultLength = v33 + v34;
      if ( (unsigned int)v33 + v34 > BufferLength )
        goto LABEL_53;
      memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v33);
      memmove((char *)PropertyBuffer + v33, *((const void **)DeviceNode + 53), v35);
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v45 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v45 )
      {
        v46 = *v45;
        *ResultLength = *v45;
        if ( v46 > BufferLength )
        {
LABEL_53:
          DeviceRegProp = -1073741789;
LABEL_54:
          KeReleaseGuardedMutex(&PiResourceListLock);
          return DeviceRegProp;
        }
        memmove(PropertyBuffer, v45, *v45);
      }
      else
      {
        *ResultLength = 0;
      }
    }
    DeviceRegProp = 0;
    goto LABEL_54;
  }
  if ( v11 != 11 )
  {
    if ( v11 > 5 )
    {
      v28 = v11 - 6;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          v38 = v29 - 1;
          if ( v38 )
          {
            v39 = v38 - 1;
            if ( v39 )
            {
              if ( v39 != 1 )
                return -1073741584;
              v15 = 14;
            }
            else
            {
              v15 = 13;
            }
          }
          else
          {
            v15 = 12;
          }
        }
        else
        {
          v15 = 10;
        }
      }
      else
      {
        v15 = 9;
      }
    }
    else
    {
      if ( v11 != 5 )
      {
        if ( v11 )
        {
          v13 = v11 - 1;
          if ( !v13 )
          {
            v14 = 7;
            v15 = 2;
            goto LABEL_11;
          }
          v41 = v13 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( !v42 )
            {
              *ResultLength = BufferLength;
              return PiGetDeviceRegistryProperty(
                       (_DWORD)DeviceObject,
                       0,
                       v9,
                       v10,
                       (__int64)PropertyBuffer,
                       (__int64)ResultLength);
            }
            if ( v42 == 1 )
            {
              v43 = *((_QWORD *)DeviceNode + 69);
              if ( v43 )
              {
                v44 = PnpDetermineResourceListSize(v43);
                *ResultLength = v44;
                if ( v44 <= BufferLength )
                {
                  memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v44);
                  return 0;
                }
                return -1073741789;
              }
              return 0;
            }
            return -1073741584;
          }
          v14 = 7;
          v15 = 3;
        }
        else
        {
          v14 = 1;
          v15 = 1;
        }
LABEL_11:
        if ( *((_QWORD *)DeviceNode + 6) )
        {
          *ResultLength = BufferLength;
          DeviceRegProp = PiGetDeviceRegProperty(*((_QWORD *)DeviceNode + 6), 0, v14, v15, PropertyBuffer, ResultLength);
          v17 = DeviceRegProp == -1073741275;
LABEL_13:
          if ( !v17 )
            return DeviceRegProp;
          return -1073741772;
        }
        return -1073741808;
      }
      v15 = 8;
    }
LABEL_44:
    v14 = 1;
    goto LABEL_11;
  }
  v47 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode((_DWORD)v50, (_DWORD)PoolWithTag, v47, (_DWORD)ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else if ( *(_WORD *)v20 )
  {
    v21 = *(unsigned __int16 *)v20 + 2;
    *ResultLength = v21;
    if ( v21 > BufferLength )
    {
      DeviceRegProp = -1073741789;
    }
    else
    {
      memmove(PropertyBuffer, v20[1], *(unsigned __int16 *)v20);
      *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v20) = 0;
    }
  }
  else
  {
    *ResultLength = 0;
  }
  ExFreePoolWithTag(v20, 0);
  return DeviceRegProp;
}
