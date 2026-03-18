/*
 * XREFs of IopRegisterDeviceInterface @ 0x140709AF4
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     IoRegisterDeviceInterface @ 0x1407099A0 (IoRegisterDeviceInterface.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A50 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PnpIsNullGuid @ 0x1405901B0 (PnpIsNullGuid.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     PiDmGetObject @ 0x1405989C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140598D30 (PiDmObjectRelease.c)
 *     _PnpGetObjectProperty @ 0x14059A008 (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14059ACE4 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14059EAFC (_CmSetDeviceInterfacePathFormat.c)
 *     _PnpSetObjectProperty @ 0x1406E5644 (_PnpSetObjectProperty.c)
 *     PiDmAddCacheReferenceForObject @ 0x1406F1B00 (PiDmAddCacheReferenceForObject.c)
 *     _CmGetDeviceInterfaceName @ 0x1406F849C (_CmGetDeviceInterfaceName.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406F9750 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObject @ 0x1407028AC (PiDmListAddObject.c)
 *     _CmCreateDeviceInterface @ 0x140704650 (_CmCreateDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x140709F70 (PipCheckForDenyExecute.c)
 *     _CmDeleteDeviceInterface @ 0x1408F67F4 (_CmDeleteDeviceInterface.c)
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
  __int64 v15; // r9
  char v16; // di
  int ObjectProperty; // eax
  __int64 v18; // r9
  ULONG_PTR v19; // rdi
  char v20; // r14
  __int64 v21; // rcx
  struct _KTHREAD *v23; // rax
  ULONG_PTR v24; // rbx
  int v25; // edi
  unsigned int v26; // ebx
  wchar_t *v27; // rax
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+61h] [rbp-9Fh]
  unsigned int v32; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  PVOID v34; // [rsp+70h] [rbp-90h] BYREF
  PVOID v35; // [rsp+78h] [rbp-88h] BYREF
  PVOID v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  const wchar_t *v39; // [rsp+98h] [rbp-68h]
  PVOID P; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[4]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v42[4]; // [rsp+ACh] [rbp-54h] BYREF
  _QWORD Source2[2]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str2[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t v45[40]; // [rsp+110h] [rbp+10h] BYREF

  v34 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  *a5 = 0LL;
  v8 = 0LL;
  v35 = 0LL;
  LOBYTE(v37) = 0;
  v9 = 0LL;
  P = 0LL;
  v30 = 0;
  BugCheckParameter2 = 0LL;
  v36 = 0LL;
  v31 = a4;
  v39 = a3;
  DeviceInterfaceName = PnpStringFromGuid(a2, Str2);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  v32 = 512;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
  *a5 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_45;
  LODWORD(v28) = 512;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v32, Str2, a1, v39, 0, PoolWithTag, v28, &v32);
  if ( DeviceInterfaceName != -1073741789 )
    goto LABEL_4;
  ExFreePoolWithTag(*a5, 0);
  v26 = v32;
  v27 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v32, 0x20207050u);
  *a5 = v27;
  if ( !v27 )
  {
LABEL_45:
    DeviceInterfaceName = -1073741670;
    goto LABEL_46;
  }
  LODWORD(v29) = v26;
  DeviceInterfaceName = CmGetDeviceInterfaceName((size_t)&v32, Str2, a1, v39, 0, v27, v29, &v32);
LABEL_4:
  if ( DeviceInterfaceName < 0 )
    goto LABEL_46;
  if ( a6 )
    *a6 = (unsigned __int8)PipCheckForDenyExecute(Str2) != 0 ? 0x800000 : 0;
  CurrentThread = KeGetCurrentThread();
  v14 = -1LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  if ( (int)PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2, v15) >= 0 )
  {
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = BugCheckParameter2;
    ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
    v25 = *(_DWORD *)(v24 + 32);
    ExReleasePushLockEx(v24, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v16 = v25 & 1;
  }
  else
  {
    v16 = v37;
  }
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(4u, Str2, (volatile signed __int32 **)&v36);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  DeviceInterfaceName = PiDmAddCacheReferenceForObject(1u, a1, (volatile signed __int32 **)&v35);
  if ( DeviceInterfaceName < 0 )
    goto LABEL_27;
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)a1,
                     1u,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_ContainerId,
                     (__int64)v42,
                     (__int64)Source2,
                     16,
                     (__int64)v41,
                     0);
  DeviceInterfaceName = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
  {
    Source2[0] = 0LL;
    Source2[1] = 0LL;
  }
  else if ( ObjectProperty < 0 )
  {
    goto LABEL_27;
  }
  if ( PnpIsNullGuid(Source2)
    || (DeviceInterfaceName = PnpStringFromGuid((int *)Source2, v45), DeviceInterfaceName >= 0)
    && (DeviceInterfaceName = PiDmAddCacheReferenceForObject(5u, v45, (volatile signed __int32 **)&v34),
        DeviceInterfaceName >= 0) )
  {
    if ( v16
      || (DeviceInterfaceName = PiPnpRtlBeginOperation(&P), DeviceInterfaceName >= 0)
      && (DeviceInterfaceName = CmCreateDeviceInterface(*(__int64 *)&PiPnpRtlCtx, (__int64)*a5, 2, &Handle, &v30, 0),
          DeviceInterfaceName >= 0) )
    {
      v19 = BugCheckParameter2;
      if ( BugCheckParameter2 )
      {
LABEL_22:
        PiDmListAddObject(0, (ULONG_PTR)v36, v19, 0LL);
        v20 = v30;
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
                                v30 != 0 ? 0x20000 : 0);
        if ( DeviceInterfaceName < 0 )
        {
          if ( v20 )
            CmDeleteDeviceInterface(*(_QWORD *)&PiPnpRtlCtx, *a5, 0LL);
        }
        else
        {
          PiDmListAddObject(1u, (ULONG_PTR)v35, v19, 0LL);
          if ( v34 )
            PiDmListAddObject(2u, (ULONG_PTR)v34, v19, 0LL);
        }
        goto LABEL_27;
      }
      DeviceInterfaceName = PiDmGetObject(3LL, (__int64)*a5, (__int64 *)&BugCheckParameter2, v18);
      if ( DeviceInterfaceName >= 0 )
      {
        v19 = BugCheckParameter2;
        goto LABEL_22;
      }
    }
  }
LABEL_27:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DeviceInterfaceName >= 0 )
  {
    if ( !v31 )
    {
      LOBYTE(v11) = 1;
      DeviceInterfaceName = CmSetDeviceInterfacePathFormat(v21, *a5, (__int64)v11);
    }
    v7 = v34;
    v8 = v35;
    v9 = v36;
    goto LABEL_31;
  }
  v7 = v34;
  v8 = v35;
  v9 = v36;
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
