/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x1406DB8EC
 * Callers:
 *     IopGetRootDevices @ 0x1406DB694 (IopGetRootDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x140159ED8 (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x1401603A4 (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14059BC4C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PipSetDevNodeFlags @ 0x1406E637C (PipSetDevNodeFlags.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x1406EC8F0 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PpDeviceRegistration @ 0x1406EF568 (PpDeviceRegistration.c)
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1406F7F78 (PipClearDevNodeProblem.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FCB40 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1406FF794 (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14070275C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14070E158 (PpDevCfgProcessDeviceOperations.c)
 *     PnpAllocateDeviceInstancePath @ 0x14073B224 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x14073B268 (PnpCopyDeviceInstancePath.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14082E2F4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgProcessDevice @ 0x140832910 (PpDevCfgProcessDevice.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, unsigned __int16 *a2, __int64 a3)
{
  int v6; // ebx
  struct _DEVICE_OBJECT *v7; // rax
  struct _DEVICE_OBJECT *v8; // rdx
  _DWORD *DeviceNode; // rax
  __int64 result; // rax
  NTSTATUS DeviceInstancePath; // ebx
  struct _DEVICE_OBJECT *v12; // r15
  PDEVICE_OBJECT v13; // rcx
  _QWORD *v14; // rdi
  int DeviceRegProp; // eax
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID v19; // rbx
  int v20; // ebx
  unsigned int v21; // ebx
  PVOID PoolWithTag; // rax
  PVOID v23; // rdi
  __int64 FailedInstallProblemStatus; // r8
  __int64 v25; // rdx
  PVOID v26; // rbx
  int v27; // [rsp+40h] [rbp-20h] BYREF
  char Handle[4]; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-10h] BYREF
  PVOID v31; // [rsp+58h] [rbp-8h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  int v33; // [rsp+B8h] [rbp+58h] BYREF

  v33 = 0;
  v31 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v20 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v20 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v21 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v21, 0x64647050u);
    v23 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_70;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v21 >> 3;
    *(_QWORD *)(a3 + 16) = v23;
  }
  v7 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x746C6644u);
  DeviceObject = v7;
  v8 = v7;
  if ( v7 )
  {
    DeviceNode = v7->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode && (DeviceNode[99] & 0x10000) != 0 )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_7:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IoCreateDevice(PnpDriverObject, 0, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( DeviceInstancePath >= 0 )
  {
    v12 = DeviceObject;
    v13 = DeviceObject;
    DeviceObject->Flags |= 0x1000u;
    v13->DeviceObjectExtension->ExtensionFlags |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode(v13, &v31) == -1073740946 || (v14 = v31) == 0LL )
    {
      IoDeleteDevice(v12);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v31, (unsigned int)*a2 + 2);
      if ( DeviceInstancePath >= 0 )
      {
        PnpCopyDeviceInstancePath(v14, a2);
        PipSetDevNodeFlags(v14, 17LL);
        PipSetDevNodeState((__int64)v14, 770);
        PpDevNodeInsertIntoTree(IopRootDeviceNode, (__int64)v14);
        ObfReferenceObject(v12);
        v27 = 4;
        v32 = 0;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v14[6],
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v33,
                          (__int64)&v32,
                          (__int64)&v27,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = 3221226021LL;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_20;
          v25 = 1LL;
        }
        else
        {
          if ( v33 == 4 && v27 == 4 )
          {
            v16 = v32;
          }
          else
          {
            v16 = 0;
            v32 = 0;
          }
          if ( (v16 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v25 = 18LL;
          }
          else if ( (v16 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v25 = 16LL;
          }
          else
          {
            if ( (v16 & 0x40) == 0 )
            {
LABEL_20:
              if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
              {
                v19 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags(v14, 256LL);
                }
                ExFreePoolWithTag(v19, 0);
              }
              PnpQueryAndSaveDeviceNodeCapabilities(v14);
              if ( (v14[70] & 0x4000) != 0 && ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 1) )
              {
                PipClearDevNodeProblem(v14);
                PipSetDevNodeProblem(v14, 29LL, 0LL);
              }
              v17 = *((_DWORD *)v14 + 99) & 0x6000;
              if ( PnpBootMode )
              {
                *((_DWORD *)v14 + 176) |= 0x1000u;
                v18 = 2LL;
              }
              else
              {
                v18 = 0LL;
              }
              if ( (v32 & 1) == 0 && (v14[70] & 0x4000) == 0 )
              {
                if ( (_DWORD)v17 )
                  PpDevCfgProcessDevice(v14, KeyHandle, v18);
                else
                  PpDevCfgProcessDeviceOperations((int)v14);
              }
              if ( ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 22)
                && ((*((_DWORD *)v14 + 99) & 0x2000) == 0 || *((_DWORD *)v14 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v14 + 5, 1LL) )
              {
                PipClearDevNodeProblem(v14);
                PipSetDevNodeProblem(v14, 22LL, 0LL);
              }
              LOBYTE(v17) = 1;
              PpDeviceRegistration(v14 + 5, v17, v14 + 7, 0LL);
              PnpMapDeviceObjectToDeviceInstance(v14[4], v14 + 5);
              v31 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((int)v12, 0, 4, (int)&v31, Handle) >= 0 )
              {
                v26 = v31;
                if ( v31 )
                {
                  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                              4LL,
                              v14[4],
                              v31) >= 0 )
                    PipSetDevNodeFlags(v14, 64LL);
                  ExFreePoolWithTag(v26, 0);
                }
              }
              ObfReferenceObject(v12);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v12;
              goto LABEL_7;
            }
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(v14[6], KeyHandle);
            v25 = 28LL;
          }
        }
        PipSetDevNodeProblem(v14, v25, FailedInstallProblemStatus);
        goto LABEL_20;
      }
      IoDeleteDevice(v12);
    }
  }
LABEL_70:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
