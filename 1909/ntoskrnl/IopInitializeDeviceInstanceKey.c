/*
 * XREFs of IopInitializeDeviceInstanceKey @ 0x140723480
 * Callers:
 *     IopGetRootDevices @ 0x14072321C (IopGetRootDevices.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     PipSetDevNodeState @ 0x140145D2C (PipSetDevNodeState.c)
 *     PpDevNodeInsertIntoTree @ 0x14015E16C (PpDevNodeInsertIntoTree.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140670048 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PpDevCfgProcessDevice @ 0x1406FB1B0 (PpDevCfgProcessDevice.c)
 *     PnpQueryAndSaveDeviceNodeCapabilities @ 0x140702254 (PnpQueryAndSaveDeviceNodeCapabilities.c)
 *     PipSetDevNodeFlags @ 0x140707F6C (PipSetDevNodeFlags.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x1407237A0 (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407243B4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14072495C (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDeviceRegistration @ 0x1407249B8 (PpDeviceRegistration.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140724EEC (PnpIsDeviceInstanceEnabled.c)
 *     PipAllocateDeviceNode @ 0x1407250E4 (PipAllocateDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x1407339B4 (PipSetDevNodeProblem.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14073B468 (PpDevCfgProcessDeviceOperations.c)
 *     PnpAllocateDeviceInstancePath @ 0x140755514 (PnpAllocateDeviceInstancePath.c)
 *     PnpCopyDeviceInstancePath @ 0x140755558 (PnpCopyDeviceInstancePath.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x140782B24 (IopCreateRootEnumeratedDeviceObject.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x14086702C (PiDevCfgGetFailedInstallProblemStatus.c)
 */

__int64 __fastcall IopInitializeDeviceInstanceKey(HANDLE KeyHandle, unsigned __int16 *a2, __int64 a3)
{
  int v6; // ebx
  _QWORD *v7; // rax
  void *v8; // rdx
  __int64 result; // rax
  int DeviceInstancePath; // ebx
  struct _DEVICE_OBJECT *v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rdi
  int DeviceRegProp; // eax
  __int16 v15; // ax
  __int64 v16; // rdx
  PVOID v17; // rbx
  int v18; // ebx
  unsigned int v19; // ebx
  PVOID PoolWithTag; // rax
  PVOID v21; // rdi
  __int64 FailedInstallProblemStatus; // r8
  __int64 v23; // rdx
  PVOID v24; // rbx
  int v25; // [rsp+40h] [rbp-20h] BYREF
  _BYTE Handle[4]; // [rsp+44h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID Object; // [rsp+50h] [rbp-10h] BYREF
  PVOID v29; // [rsp+58h] [rbp-8h] BYREF
  int v30; // [rsp+B0h] [rbp+50h] BYREF
  int v31; // [rsp+B8h] [rbp+58h] BYREF

  v31 = 0;
  v29 = 0LL;
  if ( IopGetRegistryValue(KeyHandle, L"Phantom", 0, &P) >= 0 )
  {
    v18 = *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u ? *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) : 0;
    ExFreePoolWithTag(P, 0);
    if ( v18 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a3 + 4);
  if ( *(_DWORD *)(a3 + 8) == v6 )
  {
    v19 = 8 * v6 + 1024;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x64647050u);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceInstancePath = -1073741670;
      goto LABEL_69;
    }
    memmove(PoolWithTag, *(const void **)(a3 + 16), 8LL * *(unsigned int *)(a3 + 8));
    ExFreePoolWithTag(*(PVOID *)(a3 + 16), 0);
    *(_DWORD *)(a3 + 4) = v19 >> 3;
    *(_QWORD *)(a3 + 16) = v21;
  }
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)a2, 0x746C6644u);
  Object = v7;
  if ( v7 )
  {
    if ( !(unsigned __int8)IopIsRootEnumeratedDeviceObjectActive(v7, v7) )
    {
      ObfDereferenceObject(v8);
      return 1LL;
    }
    *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v8;
LABEL_6:
    ++*(_DWORD *)(a3 + 8);
    return 1LL;
  }
  DeviceInstancePath = IopCreateRootEnumeratedDeviceObject(&Object);
  if ( DeviceInstancePath >= 0 )
  {
    v11 = (struct _DEVICE_OBJECT *)Object;
    v12 = Object;
    *((_DWORD *)Object + 12) |= 0x1000u;
    *(_DWORD *)(v12[39] + 32LL) |= 0x10u;
    if ( (unsigned int)PipAllocateDeviceNode(v12, &v29) == -1073740946 || (v13 = v29) == 0LL )
    {
      IoDeleteDevice(v11);
      DeviceInstancePath = -1073741670;
    }
    else
    {
      DeviceInstancePath = PnpAllocateDeviceInstancePath(v29, (unsigned int)*a2 + 2);
      if ( DeviceInstancePath >= 0 )
      {
        PnpCopyDeviceInstancePath(v13, a2);
        PipSetDevNodeFlags((__int64)v13, 17);
        PipSetDevNodeState((__int64)v13, 770);
        PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, (__int64)v13);
        ObfReferenceObject(v11);
        v25 = 4;
        v30 = 0;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          v13[6],
                          (__int64)KeyHandle,
                          11,
                          (__int64)&v31,
                          (__int64)&v30,
                          (__int64)&v25,
                          0);
        if ( DeviceRegProp < 0 )
        {
          FailedInstallProblemStatus = 3221226021LL;
          if ( DeviceRegProp != -1073741275 )
            goto LABEL_19;
          v23 = 1LL;
        }
        else
        {
          if ( v31 == 4 && v25 == 4 )
          {
            v15 = v30;
          }
          else
          {
            v15 = 0;
            v30 = 0;
          }
          if ( (v15 & 0x20) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v23 = 18LL;
          }
          else if ( (v15 & 0x2000) != 0 )
          {
            FailedInstallProblemStatus = 0LL;
            v23 = 16LL;
          }
          else
          {
            if ( (v15 & 0x40) == 0 )
            {
LABEL_19:
              if ( IopGetRegistryValue(KeyHandle, L"NoResourceAtInitTime", 0, &P) >= 0 )
              {
                v17 = P;
                if ( *((_DWORD *)P + 1) == 4
                  && *((_DWORD *)P + 3) >= 4u
                  && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
                {
                  PipSetDevNodeFlags((__int64)v13, 256);
                }
                ExFreePoolWithTag(v17, 0);
              }
              PnpQueryAndSaveDeviceNodeCapabilities((__int64)v13);
              if ( (v13[70] & 0x4000) != 0 && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 1) )
              {
                PipClearDevNodeProblem((__int64)v13);
                PipSetDevNodeProblem(v13, 29LL, 0LL);
              }
              v16 = *((_DWORD *)v13 + 99) & 0x6000;
              if ( PnpBootMode )
                *((_DWORD *)v13 + 176) |= 0x1000u;
              if ( (v13[70] & 0x4000) == 0 && (v30 & 1) == 0 )
              {
                if ( (_DWORD)v16 )
                  PpDevCfgProcessDevice();
                else
                  PpDevCfgProcessDeviceOperations((int)v13);
              }
              if ( ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 22)
                && ((*((_DWORD *)v13 + 99) & 0x2000) == 0 || *((_DWORD *)v13 + 101) != 29)
                && !(unsigned int)PnpIsDeviceInstanceEnabled(KeyHandle, v13 + 5, 1LL) )
              {
                PipClearDevNodeProblem((__int64)v13);
                PipSetDevNodeProblem(v13, 22LL, 0LL);
              }
              LOBYTE(v16) = 1;
              PpDeviceRegistration(v13 + 5, v16, v13 + 7, 0LL);
              PnpMapDeviceObjectToDeviceInstance(v13[4], v13 + 5);
              v29 = 0LL;
              if ( (int)PnpGetDeviceResourcesFromRegistry((int)v11, 0, 4, (int)&v29, Handle) >= 0 )
              {
                v24 = v29;
                if ( v29 )
                {
                  if ( (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID))IopAllocateBootResourcesRoutine)(
                              4LL,
                              v13[4],
                              v29) >= 0 )
                    PipSetDevNodeFlags((__int64)v13, 64);
                  ExFreePoolWithTag(v24, 0);
                }
              }
              ObfReferenceObject(v11);
              *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL * *(unsigned int *)(a3 + 8)) = v11;
              goto LABEL_6;
            }
            FailedInstallProblemStatus = (unsigned int)PiDevCfgGetFailedInstallProblemStatus(v13[6], KeyHandle);
            v23 = 28LL;
          }
        }
        PipSetDevNodeProblem(v13, v23, FailedInstallProblemStatus);
        goto LABEL_19;
      }
      IoDeleteDevice(v11);
    }
  }
LABEL_69:
  result = 0LL;
  *(_DWORD *)a3 = DeviceInstancePath;
  return result;
}
