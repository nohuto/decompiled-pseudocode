/*
 * XREFs of IopRegisterDeviceInterface @ 0x1407352C4
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140715760 (PiDevCfgConfigureDeviceInterfaces.c)
 *     IoRegisterDeviceInterface @ 0x140735170 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x140776E44 (PiSwIrpInterfaceRegister.c)
 *     PiCMRegisterDeviceInterface @ 0x140873630 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405B6094 (PnpIsNullGuid.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     _PnpGetObjectProperty @ 0x1405BC368 (_PnpGetObjectProperty.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140623DC8 (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F9B64 (PiDmAddCacheReferenceForObject.c)
 *     _PnpStringFromGuid @ 0x1406FE2E0 (_PnpStringFromGuid.c)
 *     _PnpSetObjectProperty @ 0x1407065F4 (_PnpSetObjectProperty.c)
 *     _CmGetDeviceInterfaceName @ 0x140713480 (_CmGetDeviceInterfaceName.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140714F18 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x140723984 (PiDmListAddObject.c)
 *     _CmCreateDeviceInterface @ 0x14072AE7C (_CmCreateDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x140735748 (PipCheckForDenyExecute.c)
 *     _CmDeleteDeviceInterface @ 0x1409344B0 (_CmDeleteDeviceInterface.c)
 */

__int64 __fastcall IopRegisterDeviceInterface(wchar_t *a1, int *a2, const wchar_t *a3, char a4, PVOID *a5, _DWORD *a6)
{
  PVOID v7; // rdi
  PVOID v8; // rsi
  PVOID v9; // r14
  int DeviceInterfaceName; // ebx
  unsigned int *v11; // r8
  wchar_t *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rsi
  char v15; // di
  int ObjectProperty; // eax
  ULONG_PTR v17; // rdi
  char v18; // r14
  __int64 v19; // rcx
  struct _KTHREAD *v21; // rax
  ULONG_PTR v22; // rbx
  int v23; // edi
  unsigned int v24; // ebx
  wchar_t *v25; // rax
  size_t v26; // [rsp+30h] [rbp-D0h]
  size_t v27; // [rsp+30h] [rbp-D0h]
  char v28; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+61h] [rbp-9Fh]
  unsigned int v30; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v32; // [rsp+70h] [rbp-90h] BYREF
  PVOID v33; // [rsp+78h] [rbp-88h] BYREF
  PVOID v34; // [rsp+80h] [rbp-80h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v37; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v40[4]; // [rsp+ACh] [rbp-54h] BYREF
  __int64 Source2; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h]
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v44[40]; // [rsp+110h] [rbp+10h] BYREF

  Source2 = 0LL;
  v42 = 0LL;
  *a5 = 0LL;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  LOBYTE(v35) = 0;
  P = 0LL;
  v28 = 0;
  BugCheckParameter2 = 0LL;
  v34 = 0LL;
  v29 = a4;
  v37 = a3;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v30 = 512;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  LODWORD(v26) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v30, Str2, a1, v37, 0, PoolWithTag, v26, &v30);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v24 = v30;
  v25 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v30, 0x20207050u);
  *a5 = v25;
  if ( !v25 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v27) = v24;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v30, Str2, a1, v37, 0, v25, v27, &v30);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2) >= 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v23 = *(_DWORD *)(v22 + 32);
    ExReleasePushLockEx(v22, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = v23 & 1;
  }
  else
  {
    v15 = v35;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4u, Str2, (volatile signed __int32 **)&v34);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1u, a1, (volatile signed __int32 **)&v33);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)a1,
                     1LL,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v40,
                     (__int64)&Source2,
                     16,
                     (__int64)v39,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2 = 0LL;
    v42 = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_27;
  }
  if ( PnpIsNullGuid(&Source2)
    || (DeviceInterfaceName = PnpStringFromGuid((int *)&Source2, v44), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5u, v44, (volatile signed __int32 **)&v32),
        DeviceInterfaceName >= 0) )
  {
    if ( v15
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&P), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(*(__int64 *)&PiPnpRtlCtx, (__int64)*a5, 2, &Handle, &v28, 0),
          DeviceInterfaceName >= 0) )
    {
      v17 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_22:
        PiDmListAddObject(0, (ULONG_PTR)v34, v17, 0LL);
        v18 = v28;
        do
          ++v14;
        while ( a1[v14] );
        DeviceInterfaceName = PnpSetObjectProperty(
                                *(__int64 *)&PiPnpRtlCtx,
                                (__int64)*a5,
                                3u,
                                (__int64)Handle,
                                0LL,
                                (__int64)&DEVPKEY_Device_InstanceId,
                                18,
                                (__int64)a1,
                                2 * (int)v14 + 2,
                                v28 != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v18 )
            CmDeleteDeviceInterface(PiPnpRtlCtx, (unsigned int)*a5);
        }
        else
        {
          PiDmListAddObject(1u, (ULONG_PTR)v33, v17, 0LL);
          if ( v32 )
            PiDmListAddObject(2u, (ULONG_PTR)v32, v17, 0LL);
        }
        goto LABEL_27;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2);
      if ( DeviceInterfaceName >= 0 )
      {
        v17 = BugCheckParameter2;
        goto LABEL_22;
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v29 )
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v19, *a5, 1);
    v7 = v32;
    v8 = v33;
    v9 = v34;
    goto LABEL_31;
  }
  v7 = v32;
  v8 = v33;
  v9 = v34;
LABEL_46:
  if ( *a5 )
  {
    ExFreePoolWithTag(*a5, 0);
    *a5 = 0LL;
  }
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  if ( v9 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v9 + 7), *((_QWORD *)v9 + 2), v11);
    PiDmObjectRelease((unsigned int *)v9);
  }
  if ( v8 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v8 + 7), *((_QWORD *)v8 + 2), v11);
    PiDmObjectRelease((unsigned int *)v8);
  }
  if ( v7 )
  {
    PiDmRemoveCacheReferenceForObject(*((_DWORD *)v7 + 7), *((_QWORD *)v7 + 2), v11);
    PiDmObjectRelease((unsigned int *)v7);
  }
  return (unsigned int)DeviceInterfaceName;
}
