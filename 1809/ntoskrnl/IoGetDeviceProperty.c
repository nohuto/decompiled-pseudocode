/*
 * XREFs of IoGetDeviceProperty @ 0x1405886E0
 * Callers:
 *     PoStoreRequester @ 0x140002BAC (PoStoreRequester.c)
 *     PiRebalanceOptOut @ 0x14028B8A0 (PiRebalanceOptOut.c)
 *     KseDsCallbackHookAddDevice @ 0x1402A01A0 (KseDsCallbackHookAddDevice.c)
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     ArbShareDriverExclusive @ 0x140740494 (ArbShareDriverExclusive.c)
 *     IoGetDmaAdapter @ 0x140756AF0 (IoGetDmaAdapter.c)
 *     IopIsPciRootBus @ 0x140829CA0 (IopIsPciRootBus.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086CC6C (PopWakeSourceGetDeviceProperty.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 *     IoWMISuggestInstanceName @ 0x1408B3690 (IoWMISuggestInstanceName.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     VfIsPCIBus @ 0x14092CA28 (VfIsPCIBus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PpvUtilFailDriver @ 0x14028B42C (PpvUtilFailDriver.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x140588EF8 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpBusTypeGuidGet @ 0x140588F70 (PnpBusTypeGuidGet.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     PpIrpQueryCapabilities @ 0x1406EC944 (PpIrpQueryCapabilities.c)
 *     PnpDetermineResourceListSize @ 0x1406FCD2C (PnpDetermineResourceListSize.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 */

NTSTATUS __stdcall IoGetDeviceProperty(
        PDEVICE_OBJECT DeviceObject,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  unsigned int v5; // edx
  int v8; // ebx
  unsigned __int16 *DeviceNode; // rsi
  int v10; // edi
  int v11; // r15d
  NTSTATUS DeviceRegProp; // ebx
  bool v13; // zf
  unsigned int v15; // edx
  unsigned int v16; // edx
  const void **PoolWithTag; // rax
  const void **v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rbx
  size_t v26; // rdi
  unsigned int v27; // eax
  size_t v28; // r15
  int v29; // eax
  int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rcx
  ULONG v33; // eax
  ULONG *v34; // rdx
  ULONG v35; // eax
  ULONG v36; // [rsp+40h] [rbp-51h] BYREF
  int v37; // [rsp+44h] [rbp-4Dh] BYREF
  int v38; // [rsp+48h] [rbp-49h] BYREF
  __int128 v39; // [rsp+50h] [rbp-41h] BYREF
  char v40[8]; // [rsp+60h] [rbp-31h] BYREF
  int v41; // [rsp+68h] [rbp-29h]

  v5 = DeviceProperty & 0xFFF;
  v8 = (int)DeviceObject;
  *ResultLength = 0;
  if ( !DeviceObject )
    return -1073741808;
  DeviceNode = (unsigned __int16 *)DeviceObject->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    if ( v5 != 18 && (v5 != 15 || !DeviceNode) )
      PpvUtilFailDriver(2);
    return -1073741808;
  }
  if ( v5 > 0xB )
  {
    v11 = 17;
    if ( v5 <= 0x11 )
    {
      if ( v5 == 17 )
      {
        v10 = 4;
        goto LABEL_11;
      }
      v20 = v5 - 12;
      if ( !v20 )
      {
        DeviceRegProp = PnpBusTypeGuidGet(DeviceNode[232], &v39);
        if ( DeviceRegProp < 0 )
          return DeviceRegProp;
        *ResultLength = 16;
        if ( BufferLength >= 0x10 )
        {
          *(_OWORD *)PropertyBuffer = v39;
          return DeviceRegProp;
        }
        return -1073741789;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v5 = v22 - 1;
          if ( !v5 )
          {
            v11 = 23;
            goto LABEL_47;
          }
          if ( v5 != 1 )
            return -1073741584;
          if ( (int)PpIrpQueryCapabilities(DeviceObject, v40) < 0 )
            return -1073741772;
          v29 = v41;
          if ( v41 == -1 )
            return -1073741772;
          *ResultLength = 4;
          if ( BufferLength < 4 )
            return -1073741789;
          *(_DWORD *)PropertyBuffer = v29;
          return 0;
        }
        if ( *((int *)DeviceNode + 115) < 0 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v23 = *((_DWORD *)DeviceNode + 115);
      }
      else
      {
        if ( *((_DWORD *)DeviceNode + 114) == -1 )
          return -1073741772;
        *ResultLength = 4;
        if ( BufferLength < 4 )
          return -1073741789;
        v23 = *((_DWORD *)DeviceNode + 114);
      }
      *(_DWORD *)PropertyBuffer = v23;
      return 0;
    }
    v15 = v5 - 18;
    if ( !v15 )
    {
      if ( DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
      {
        v30 = 0;
        DeviceRegProp = 0;
      }
      else
      {
        if ( !*((_QWORD *)DeviceNode + 6) )
          return -1073741808;
        while ( 1 )
        {
          v36 = 4;
          DeviceRegProp = CmGetDeviceRegProp(
                            PiPnpRtlCtx,
                            *((_QWORD *)DeviceNode + 6),
                            0,
                            11,
                            (__int64)&v37,
                            (__int64)&v38,
                            (__int64)&v36,
                            0);
          if ( DeviceRegProp < 0 || v37 != 4 || v36 != 4 )
            break;
          if ( (v38 & 0x20) != 0 )
          {
            v30 = 1;
          }
          else if ( (v38 & 0x40) != 0 )
          {
            v30 = 2;
          }
          else
          {
            v30 = (v38 & 0x400) != 0 ? 3 : 0;
          }
          DeviceNode = (unsigned __int16 *)*((_QWORD *)DeviceNode + 2);
          if ( v30 || DeviceNode == (unsigned __int16 *)IopRootDeviceNode )
            goto LABEL_81;
        }
        v30 = 2;
LABEL_81:
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp == -1073741275 )
            return -1073741772;
          v13 = DeviceRegProp == -1073741810;
          goto LABEL_13;
        }
      }
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        *(_DWORD *)PropertyBuffer = v30;
        return DeviceRegProp;
      }
      return -1073741789;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      *ResultLength = 4;
      if ( BufferLength >= 4 )
      {
        PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 1LL, PropertyBuffer);
        return 0;
      }
      return -1073741789;
    }
    v24 = v16 - 1;
    if ( v24 )
    {
      v5 = v24 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
          return -1073741584;
        v11 = 37;
        goto LABEL_47;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      if ( *((_QWORD *)DeviceNode + 52) )
      {
        v25 = *((_QWORD *)DeviceNode + 53);
        if ( v25 )
        {
          v26 = (unsigned int)((__int64 (*)(void))PnpDetermineResourceListSize)();
          v27 = PnpDetermineResourceListSize(v25);
          v28 = v27;
          *ResultLength = v26 + v27;
          if ( (unsigned int)v26 + v27 <= BufferLength )
          {
            memmove(PropertyBuffer, *((const void **)DeviceNode + 52), v26);
            memmove((char *)PropertyBuffer + v26, *((const void **)DeviceNode + 53), v28);
            DeviceRegProp = 0;
            goto LABEL_55;
          }
LABEL_54:
          DeviceRegProp = -1073741789;
LABEL_55:
          KeReleaseGuardedMutex(&PiResourceListLock);
          return DeviceRegProp;
        }
      }
    }
    else
    {
      ExAcquireFastMutex(&PiResourceListLock);
      v34 = (ULONG *)*((_QWORD *)DeviceNode + 55);
      if ( v34 )
      {
        v35 = *v34;
        *ResultLength = *v34;
        if ( v35 > BufferLength )
          goto LABEL_54;
        memmove(PropertyBuffer, v34, *v34);
LABEL_107:
        DeviceRegProp = 0;
        goto LABEL_55;
      }
    }
    *ResultLength = 0;
    goto LABEL_107;
  }
  if ( v5 != 11 )
  {
    if ( v5 > 5 )
    {
      v5 -= 6;
      if ( v5 )
      {
        if ( --v5 )
        {
          if ( --v5 )
          {
            if ( --v5 )
            {
              if ( v5 != 1 )
                return -1073741584;
              v11 = 14;
            }
            else
            {
              v11 = 13;
            }
          }
          else
          {
            v11 = 12;
          }
        }
        else
        {
          v11 = 10;
        }
      }
      else
      {
        v11 = 9;
      }
    }
    else
    {
      if ( v5 != 5 )
      {
        if ( v5 )
        {
          if ( !--v5 )
          {
            v10 = 7;
            v11 = 2;
            goto LABEL_11;
          }
          if ( --v5 )
          {
            v31 = v5 - 1;
            if ( !v31 )
            {
              *ResultLength = BufferLength;
              return PiGetDeviceRegistryProperty(
                       (_DWORD)DeviceObject,
                       0,
                       BufferLength,
                       (_DWORD)PropertyBuffer,
                       (__int64)PropertyBuffer,
                       (__int64)ResultLength);
            }
            if ( v31 == 1 )
            {
              v32 = *((_QWORD *)DeviceNode + 69);
              if ( !v32 )
              {
                *ResultLength = 0;
                return 0;
              }
              v33 = PnpDetermineResourceListSize(v32);
              *ResultLength = v33;
              if ( v33 <= BufferLength )
              {
                memmove(PropertyBuffer, *((const void **)DeviceNode + 69), v33);
                return 0;
              }
              return -1073741789;
            }
            return -1073741584;
          }
          v10 = 7;
          v11 = 3;
        }
        else
        {
          v10 = 1;
          v11 = 1;
        }
LABEL_11:
        if ( *((_QWORD *)DeviceNode + 6) )
        {
          *ResultLength = BufferLength;
          DeviceRegProp = PiGetDeviceRegProperty(
                            *((_QWORD *)DeviceNode + 6),
                            v5,
                            v10,
                            v11,
                            PropertyBuffer,
                            ResultLength);
          v13 = DeviceRegProp == -1073741275;
LABEL_13:
          if ( !v13 )
            return DeviceRegProp;
          return -1073741772;
        }
        return -1073741808;
      }
      v11 = 8;
    }
LABEL_47:
    v10 = 1;
    goto LABEL_11;
  }
  v36 = BufferLength + 16;
  PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, BufferLength + 16, 0x6F697050u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  DeviceRegProp = ObQueryNameStringMode(v8, (_DWORD)PoolWithTag, v36, (_DWORD)ResultLength, 0);
  if ( DeviceRegProp == -1073741820 )
    DeviceRegProp = -1073741789;
  if ( DeviceRegProp < 0 )
  {
    *ResultLength -= 16;
  }
  else if ( *(_WORD *)v18 )
  {
    v19 = *(unsigned __int16 *)v18 + 2;
    *ResultLength = v19;
    if ( v19 > BufferLength )
    {
      DeviceRegProp = -1073741789;
    }
    else
    {
      memmove(PropertyBuffer, v18[1], *(unsigned __int16 *)v18);
      *(_WORD *)((char *)PropertyBuffer + *(unsigned __int16 *)v18) = 0;
    }
  }
  else
  {
    *ResultLength = 0;
  }
  ExFreePoolWithTag(v18, 0);
  return DeviceRegProp;
}
